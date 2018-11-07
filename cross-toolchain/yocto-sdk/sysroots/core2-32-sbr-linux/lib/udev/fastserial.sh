#!/bin/sh
##
## fastserial.sh
##
## Manage fastserial node
##
## Copyright 2011 Aldebaran Robotics
##

DRV_NAME="fastserial"

DEV_DIR="/dev"
DEV_NAME="fastserial"
DEV_SYMLINKS="fastserial fasts"

OWNER="root"
GROUP="rt"

KMAJOR="$(grep ${DRV_NAME} /proc/devices | cut -d' ' -f1)"
KMINOR="$(ls ${DEV_DIR}/${DEV_NAME}* | grep "[0-9]\+$" | wc -l)"

if echo "$(basename ${0})" | grep -q add ; then
  mknod -m 664 "${DEV_DIR}/${DEV_NAME}${KMINOR}" c "${KMAJOR}" "${KMINOR}"
  chown "${OWNER}:${GROUP}" "${DEV_DIR}/${DEV_NAME}${KMINOR}"
  if [ ${KMINOR} -eq 0 ]; then
    for symlink in $(echo "${DEV_SYMLINKS}") ; do
      ln -sf "${DEV_NAME}${KMINOR}" "${DEV_DIR}/${symlink}"
    done
  fi
elif echo "$(basename ${0})" | grep -q remove ; then
  _minor=$(stat "${DEV_DIR}/${DEV_NAME}" -c "%T")
  rm -f "${DEV_DIR}/${DEV_NAME}"*
  for symlink in ${DEV_SYMLINKS} ; do
    [ -h "${DEV_DIR}/${symlink}" ] && rm -f "${DEV_DIR}/${symlink}"
    [ -h "${DEV_DIR}/${symlink}${_minor}" ] && rm -f "${DEV_DIR}/${symlink}${_minor}"
  done
  true
fi
