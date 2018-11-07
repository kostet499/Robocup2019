#!/bin/bash

# This script manages the user partitions recovery and verification process.
# It can be called with two options:
#      --repair  : repair and mount the user partition.
#      --recover : create ramdisk for the user partition.
#
# With no option given: print help message.

# The user partition is detected according to this uuid.
HOME_PART_UUID=66666666-1120-1120-1120-666666666666
HOME_PART_LABEL=OpenNao-data
HOME_PART_START_OFFSET="$((1024*1024*2*4))" # 4 GB in blocks of 512 bytes.

HOME_MOUNT_DIRECTORY=/data
HOME_MOUNT_OPTIONS=rw,noatime,nosuid,nodev,data=ordered
HOME_MOUNT_TYPE=ext3

# make_newfs runs mkfs on a device and set its UUID to $HOME_PART_UUID.
make_newfs() {
  local device=$1
  if [ ! -b "$device" ] ; then
    echo "invalid argument to make_newfs, missing device $device."
    return 1
  fi
  echo "creating filesystem to $device."
  mkfs -U "$HOME_PART_UUID" -L "$HOME_PART_LABEL" -t "$HOME_MOUNT_TYPE" -q "${device}"
  local status=$?

  # FIXME:
  # As of systemd 229, udev fails to see the new partition UUID and does not
  # create the link in /dev/disk/by-uuid directory. Call 'udevadm trigger' to
  # force udev to replay events and correctly detect the new partition.
  #
  # Remove this line when the bug is fixed.
  udevadm trigger

  if [ $status -ne 0 ] ; then
    echo "mkfs failed with status: $status"
  elif [ ! -b /dev/disk/by-uuid/$HOME_PART_UUID ] ; then
    # sleep to make sure /dev/disk/by-uuid/$HOME_PART_UUID is available.
    sleep 1
  fi
  return $status
}

# forced_ckeck_fs does a full check of the bad blocks.
# This is sometime required when e2fsck succeedded but mount failed.
# If the device can not be recovered, it will be formated.
forced_ckeck_fs() {
  local device=$1
  # scan for all bad blocks and mark them unusable
  e2fsck -c -y "$device" &>/dev/null
  local status=$?
  if [ "$status" -ge 8 ] ; then
    echo "warning: bad block check failed. let's still repair the file system."
  fi
  # now the bad blocks are eliminated, repair again the file system.
  e2fsck -c -p "$device" &>/dev/null
  local status=$?
  if [ "$status" -ge 4 ] ; then
    echo "e2fsck: file system repair failed: format the partition."
    # if we can not recover, format the file system
    make_newfs "$device"
    status=$?
    if [ "$status" -ne 0 ] ; then
      echo "failed to format partition."
    fi
  fi
  return $status
}

# check_fs verifies and repairs the file system of a device.
# If the device can not be repaired, then it is formated.
check_fs() {
  local device=$1
  e2fsck -p "$device" &>/dev/null
  local status=$?
  case "$status" in
    0) echo "e2fsck: file system clean.";;
    1) echo "e2fsck: file system repaired."
       status=0
       ;;
    2) echo "e2fsck: root file system repaired but reboot required.";;
       # This error happens only when recovering the root filesystem (/).
       # This is not what this function is supposed to do. Let's stop the
       # disaster and fail nicely here.
    *) echo "e2fsck failed: $status"
       forced_ckeck_fs "$device"
       status=$?
       ;;
  esac
  return $status
}

# try to mount $1 into the user partition
try_mount() {
  local device=$1

  local directory=$HOME_MOUNT_DIRECTORY
  local options=$HOME_MOUNT_OPTIONS
  local type=$HOME_MOUNT_TYPE

  mount -t "$type" -o "$options" "$device" "$directory"
  return $?
}

# delete_partition removes a partition from a device.
# ex: delete_partition /dev/sda 4
delete_partition() {
  local device=$1
  local part_number=$2
  if [ ! -b "$device" ] || [ -z "$part_number" ] ; then
    echo "invalid arguments to delete_partition: $*"
    return 1
  fi

  echo "deleting partition $part_number of $device."
  local fdisk_command
  fdisk_command=(d "$part_number" w)
  printf '%s\n' "${fdisk_command[@]}" | fdisk "$device"
  if [ $? -ne 0 ] ; then
    echo "failed to delete partition $part_number of $part."
    return 1
  fi
  return 0
}

# get_part_number returns partition number from a partition node.
# ex: /dev/sda3 => 3
# ex: /dev/mmcblk2p1 => 1
get_part_number() {
  echo "$1" | grep -o '[0-9]\+$'
}

# get_device returns the parent device from a partition node.
# ex: /dev/sda3 => /dev/sda
# ex: /dev/mmcblk2p1 => /dev/mmcblk2
get_device() {
  echo "$1" | grep -o "/dev/sd[a-z]\|/dev/mmcblk[0-9]\+"
}

# erase_home_part deletes and re-create the user partition.
erase_home_part() {
  local device part_number partition_table sfdisk_command
  local part=$1 # ex: /dev/mmcblk0p4

  if [ -z "$part" ] ; then
    echo "missing partition argument to create home"
    return 1
  fi

  device=$(get_device "$part")
  if [ ! -b "$device" ] ; then
    echo "wrong argument: missing disk ${device}."
    return 1
  fi

  part_number=$(get_part_number "$part")
  if [ "$part_number" -gt 4 ] || [ "$part_number" -lt 1 ] ; then
    echo "wrong partition number ${part_number}."
    return 1
  fi

  partition_table=$(sfdisk --dump "$device")
  if [ $? -ne 0 ] ; then
    echo "failed to dump partition table"
    return 1
  fi

  local part_start="" # start where it is possible
  if [ "$part_number" -eq 4 ] ; then
    # when user partition is the last partition, starts at
    # an offset of 4 GB for future evolution of the system
    # partition (currently 1.6 GB).
    part_start="$HOME_PART_START_OFFSET"
  fi

  # remove target partition from the partition table entries.
  partition_table=$(echo "$partition_table" | grep -v "$part")

  local data_part_entry=$(printf "%s : start=%s, type=83" \
    "$part" "$part_start")

  # data partition entry for GPT partition
  #with GPT partition you have to use  partition type UUID.
  #for a linux filesystem data the UUID is 0FC63DAF-8483-4772-8E79-3D69D8477DE4
  local gpt_linux_fs="0FC63DAF-8483-4772-8E79-3D69D8477DE4"
  if printf "%s" "$partition_table" | grep "label: gpt" ; then
    data_part_entry=$(printf "%s : start=%s, type=%s, uuid=%s" \
      "$part" "$part_start" "$gpt_linux_fs" \
      "$HOME_PART_UUID")
  fi

  # add a new entry for the desired partition and sort entries.
  # sort --version-sort makes sure the partitions are in the
  # correct order: this is require because of a bug in sfdisk.
  sfdisk_command=$(printf "%s\n%s" \
    "$partition_table" "$data_part_entry" \
    | sort --version-sort)

  printf "updating partition table with:\n%s\n" "$sfdisk_command"
  printf '%s\n' "$sfdisk_command" | sfdisk --force --no-reread "$device"

  # tell the kernel about the new device node.
  partx -a "$part_number" "$device"
  if [ ! -b "$part" ] ; then
    echo "failed to create $part."
    return 1
  fi

  make_newfs "$part"
  return $?
}

# get_static_root_part print the device node of the root filesystem. It selects
# the device from its uuid and not from running system.
get_static_root_part() {
  local root_part_uuid=42424242-1120-1120-1120-424242424242
  local root_part=/dev/disk/by-uuid/$root_part_uuid
  realpath "$root_part"
}

# guess_home_part returns the supposed location of home partition partition.
# This partition can be located at different places depending on the robots:
#   (1) /dev/mmcblk0p1 : on Atom Z530
#   (2) /dev/mmcblk1p1 : on Atom E3845 with a micro sd
#   (3) /dev/mmcblk0p4 : on Atom E3845 with a 32GB eMMC
#
# The selection algorithm is the following:
#   if root is /dev/sda3, use /dev/mmcblk0p1 (1).
#   else if root is /dev/mmcblk0p3 then
#     if /dev/mmcblk1 exist, use /dev/mmcblk1p1 (2).
#     if root disk is 32 GB use /dev/mmcblk0p4 (3)
#     else returns an error
#   else returns an error
guess_home_part() {
  local root_part
  root_part=$(get_static_root_part)
  if [ ! -b "$root_part" ] ; then
    echo "missing root device."
    return 1
  fi
  case "$root_part" in
    /dev/sda3) echo "/dev/mmcblk0p1"; return 0;;
    /dev/mmcblk0p3)
      # if there is a micro sd.
      if [ -b /dev/mmcblk1 ] ; then
        echo "/dev/mmcblk1p1"; return 0
      fi
      # if the eMMC is at leat 20 GB.
      local min_size=$((1024*1024*1024*20))
      local disk_size
      disk_size=$(lsblk /dev/mmcblk0 --nodeps --noheadings --bytes --output SIZE)
      if [ $? -eq 0 ] ; then
        if [ "$disk_size" -gt "$min_size" ] ; then
          echo "/dev/mmcblk0p4"; return 0
        fi
      fi
      echo "missing sd card."; return 1;;
    *) echo "unknown root device"; return 1;;
  esac
}

# create_home_part create a new home partition with a UUID of $HOME_PART_UUID.
create_home_part() {
  local home_part
  home_part=$(guess_home_part)
  if [ $? -ne 0 ] ; then
    echo "no suitable home partition."
    return 1
  fi
  if ! erase_home_part "$home_part"; then
    echo "failed to create home partition $home_part"
    return 1
  fi
  return 0
}

# Use range reserved for applications.
# http://refspecs.linuxbase.org/LSB_3.1.0/LSB-Core-generic/LSB-Core-generic/iniscrptact.html
ERROR_MISSING_DEVICE=151
ERROR_FS_REPAIR_FAILED=152
ERROR_FS_RECOVERY_FAILED=153
ERROR_UNRECOVERABLE=154
ERROR_MISSING_TMP_DIR=155
ERROR_PARTITION_WRITE=156

# Verify if we can mount the home partition. create a partition if the
# partition is missing.
#
# procedure is:
#      1. test if home partition exists
#      1.1 if missing: create home partition with a filesystem
#      1.2 test home partition creation
#      2. check if the filesystem is correct
#      3. try to mount home partition: exit on success
#      3.1 if failed: repair filesystem
#      3.2 try to mount home partition
#
# return codes are:
# success: 0 : home partition is already mounted
#          0 : home partition file system is correct.
#          0 : home partition has been successfully created.
# failure: ERROR_MISSING_DEVICE : missing device
#          ERROR_FS_REPAIR_FAILED : failed to repair file system
#          ERROR_FS_RECOVERY_FAILED : failed to recover from unmountable file system
#          ERROR_UNRECOVERABLE : unrecoverable error
repair () {
  local home_part=$1

  # if the home partition does not exist, wait a second in order to avoid race
  # condition between udev creating the symlink and systemd creating the device
  # unit associated with this symlink.
  if [ ! -b "$home_part" ] ; then
    echo "missing home partition, sleeping one second..."
    sleep 1
  fi

  # 1. tests if the home partition exists
  if [ ! -b "$home_part" ] ; then

    # 1.1 if home partition is missing, create it.
    echo "missing home partition, will create it."
    if ! create_home_part ; then

      # if the partition creation failed, there is no physical disk for user
      # data. In this case we generate a loop device on RAM. Any data written
      # to this loop device will be lost after reboot.
      echo "no home partition available, using ram disk."
      return $ERROR_UNRECOVERABLE
    fi

    # 1.2. confirm if the home partition file exists
    if [ ! -b "$home_part" ] ; then
      echo "missing user device."
      return $ERROR_MISSING_DEVICE
    fi
  fi

  # 2. verify and correct the file system on the device
  if ! check_fs "$home_part" ; then
    echo "failed to repair file system"
    return $ERROR_FS_REPAIR_FAILED
  fi

  # 3. try to mount file system on the device
  if try_mount "$home_part" ; then
    echo "$device mounted with success."
    # if the mount test succedded, return a success
    return 0
  fi

  # 3.1 force full file system check on the device in case
  # a file system was error was not noticed by e2fsck -p
  if ! forced_ckeck_fs "$home_part" ; then
    echo "failed to recover from unmountable file system"
    return $ERROR_FS_RECOVERY_FAILED
  fi

  # 3.2 try to mount file system on the device
  if try_mount "$home_part" ; then
    echo "$device mounted with success."
    # if the mount test succedded, return a success
    return 0
  fi

  echo "failed to repair $home_part."
  # in this case, the error can not be recovered
  return $ERROR_UNRECOVERABLE
}

# Recovers from a situation where we failed to repair the user partition.
#
# procedure is:
#      1. Test if a user partition exist, if so: exit
#      2. Create a file in RAM
#      3. Attach a loopback device
#      4. Format the partition
#      5. Mount the partition
#
# return codes are:
# success: 0 : home partition already exits
#          0 : ramdisk is created with success
# failure: ERROR_FS_RECOVERY_FAILED : failed to create filesystem
#          ERROR_UNRECOVERABLE : failed to create loopback device
#          ERROR_MISSING_TMP_DIR : failed to create tmp file
recover () {
  local home_part=$1
  local ramdisk loopback

  # 1. tests if the home partition exists
  if [ -b "$home_part" ] ; then
    echo "user partition found: everything is OK."
    return 0
  fi

  # 2. create file in /tmp (tmpfs)
  ramdisk=$(mktemp)
  if [ "$?" -ne 0 ] ; then
    echo "failed to temporay file"
    return $ERROR_MISSING_TMP_DIR
  fi

  # set the ramdisk size to 128 MB  (smaller than an OPN)
  local size=$(( 1024 * 1024 * 128 ))
  truncate -s "$size" "$ramdisk"

  # 3. create loopback device
  loopback=$(losetup --find --show "$ramdisk")
  if [ "$?" -ne 0 ] ; then
    echo "failed to create loopback device from $ramdisk"
    return $ERROR_UNRECOVERABLE
  fi

  # 4. create the filesystem
  make_newfs "$loopback"
  if [ "$?" -ne 0 ] ; then
    echo "failed to create filesystem $ramdisk"
    return $ERROR_FS_RECOVERY_FAILED
  fi

  # 5. try to mount file system on the device
  if try_mount "$loopback" ; then
    echo "$loopback mounted with success."
    # if the mount test succedded, return a success
    return 0
  fi

  return 0
}

# Erase the user data partition and create a new partition.
#
# procedure is:
#      1. Set commands to be printed for console monitoring
#      2. Test if user partition exists, if not: exit with success
#      3. Format user partition
#
# return codes are:
# success: 0 : home partition does not exits
#          0 : user data are erased with success
# failure: ERROR_FS_REPAIR_FAILED: failed to create new partition
erase () {
	local home_part=$1

	# 1. logs commands for debuging puropose.
	set -x

	# 2. tests if the home partition exists
	if [ ! -b "$home_part" ] ; then
		echo "missing partition $home_part: cannot erase data."
		return 0
	fi

	# 3. create the filesystem
	make_newfs "$home_part"
	if [ "$?" -ne 0 ] ; then
		echo "failed to create filesystem into $home_part"
		return $ERROR_FS_RECOVERY_FAILED
	fi

	return 0
}

# main checks if the user partition is not used (otherwise it returns 0).
# Depending on the arguments, either it repairs the user partition (--repair)
# or it creates a new one in RAM (--recover).
main () {
  local home_part=/dev/disk/by-uuid/$HOME_PART_UUID

  # if home partition is already mounted: exit 0.
  local mount_point
  mount_point=$(lsblk --noheadings --output MOUNTPOINT "$home_part")
  if [ $? -eq 0 ] && [ "$mount_point" != "" ] ; then
    echo "$home_part already mounted ($mount_point)"
    return 0
  fi

  # if destination mount point already mounted: exit 0.
  grep "$HOME_MOUNT_DIRECTORY" /proc/mounts
  if [ $? -eq 0 ] ; then
    echo "$HOME_MOUNT_DIRECTORY already mounted"
    return 0
  fi

  case "$1" in
    "--recover") recover "$home_part";;
    "--repair") repair "$home_part";;
    "--erase") erase "$home_part";;
    *) echo "options: --repair or --recover or --erase" ;;
  esac

  return $?
}

main "$@"
