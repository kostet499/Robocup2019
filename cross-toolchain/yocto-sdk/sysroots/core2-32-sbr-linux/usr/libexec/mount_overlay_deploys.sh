#!/bin/bash

usage() {
  echo >&2 "Usage: $0 [mount|umount]"
}

grep /opt/aldebaran /proc/mounts
deploy_is_mounted=$?

case "$1" in
  mount)
    if [ $# -ne 1 ]; then
      usage
      exit 1
    fi
    if [ $deploy_is_mounted -eq 0 ]; then
      usage
      echo >&2 "There is already an overlay mount here."
      exit 1
    fi
    if [ ! -f /tmp/deploy.env ]; then
      usage
      echo >&2 "Please specify a path to mount in '/tmp/deploy.env'"
      exit 1
    fi

    absolute_path=$(cat /tmp/deploy.env)
    absolute_path=$(realpath "$absolute_path")
    case "$absolute_path" in
      *,*)
        usage
        echo >&2 "Path cannot have ',' in name."
        exit 1
        ;;
      /data/home/nao/deploys/*)
        ;;
      *)
        usage
        echo >&2 "Directory of deploys should start with /home/nao/deploys/"
        exit 1
        ;;
    esac

    if [ ! -d "$absolute_path" ]; then
      usage
      echo >&2 "The path you specified ($2) is not a directory or does not exist."
      exit 1
    fi

    /bin/mount -t overlay -o upperdir="$absolute_path",lowerdir=/opt/aldebaran,workdir=/data/.work-opt-aldebaran overlay /opt/aldebaran
    ;;
  umount)
    if [ $# -ne 1 ]; then
      usage
      echo >&2 "You sould not specify a directory with umount option."
      exit 1
    fi
    if [ $deploy_is_mounted -ne 0 ]; then
      usage
      echo >&2 "There is nothing to umount."
      exit 1
    fi
    /bin/umount /opt/aldebaran
    ;;
  *)
    usage
    echo >&2 "First argument should be mount or umount"
    exit 1
    ;;
esac
