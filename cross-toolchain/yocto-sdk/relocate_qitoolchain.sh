#!/bin/bash
#
# This script relocates a Yocto SDK, freshly installed as a qitoolchain
# on a SDK machine. It should be installed at the SDK root directory.
#

DEFAULT_INSTALL_DIR="/opt/naoqi-os"
target_sdk_dir="$(cd "$(dirname "$0")" && pwd)"
ARCH="$(ls "$target_sdk_dir/sysroots" | grep naoqisdk | cut -d- -f1)"
native_sysroot="$target_sdk_dir/sysroots/$ARCH-naoqisdk-linux"
dl_path=$(find $native_sysroot/lib -name "ld-linux*")
if [ "x$dl_path" = "x" ] ; then
	echo "SDK could not be set up. Relocate script unable to find ld-linux.so. Abort!"
	exit 1
fi
executable_files=$(find $native_sysroot -type f \
	\( -perm -0100 -o -perm -0010 -o -perm -0001 \) -printf "%h/%f ")

echo "Relocating $target_sdk_dir toolchain..."
# Relocate host part of the sdk
python $target_sdk_dir/relocate_sdk.py $target_sdk_dir $dl_path $executable_files
if [ $? -ne 0 ]; then
	echo "Toolchain could not be set up. Relocate script failed. Abort!"
	exit 1
fi

echo "Update scripts and configuration files..."
for replace in "$target_sdk_dir -maxdepth 1" "$native_sysroot"; do
	find $replace -type f
done | xargs -n100 file | grep ":.*\(ASCII\|script\|source\).*text" | \
    awk -F':' '{printf "\"%s\"\n", $1}' | \
    grep -Ev "$target_sdk_dir/(relocate_sdk*|${0##*/})" | \
    xargs -n100 sed -i \
        -e "s:$DEFAULT_INSTALL_DIR:$target_sdk_dir:g" \
        -e "s:^#! */usr/bin/perl.*:#! /usr/bin/env perl:g" \
        -e "s: /usr/bin/perl: /usr/bin/env perl:g"

# change all symlinks pointing to @SDKPATH@
for l in $(find $native_sysroot -type l); do
	ln -sfn $(readlink $l|sed -e "s:$DEFAULT_INSTALL_DIR:$target_sdk_dir:") $l
done

echo done
