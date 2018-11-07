log_and_print_command() {
    printf '%s\n' "$*"
    "$@"
}

mount_deploy() {
    echo "$1" > /tmp/deploy.env
    log_and_print_command systemctl --user start mount_deploys.service
}

umount_deploy() {
    log_and_print_command systemctl --user start umount_deploys.service
}

# This function tries to umount / mount as little as possible.
# Because HAL and NAOqi need to be stopped for every mount / umount, this function tries
# to reduce there operations to the bare minimum. The function still ensures that the hal
# and the naoqi binaries are both running from the system, or both from the same deploy.
handle_deploy_overlay() {
    local old_directory=""
    local new_directory=""

    # If we have already something mount on /opt/aldebaran, search to know what
    grep --quiet /opt/aldebaran /proc/mounts
    if [ $? -eq 0 ]; then
        mount_options=$(grep /opt/aldebaran /proc/mounts | cut -d" " -f4)
        old_directory=$(echo ${mount_options} | tr "," "\n" | grep '^upperdir=' |
                        cut -d"=" -f2)
        old_directory=$(realpath "$old_directory")
    fi

    if [ -n "${1:-}" ]; then
        new_directory=$(realpath "$1")
    fi

    if [ "$new_directory" = "$old_directory" ]; then
        return
    fi
    if [ "$old_directory" ]; then
        umount_deploy
    fi
    if [ "$new_directory" ]; then
        mount_deploy "$new_directory"
    fi
}

systemd_service_wrapper() {
    local service="$1"
    local action="$2"
    local path="${3:-}"

    if [ "$USER" != "nao" ] ; then
        echo >&2 "You should run '$service' as 'nao' user only."
        exit 1
    fi

    handle_deploy_overlay "$path"
    log_and_print_command systemctl --user "$action" "$service"

}

# Alias nao start | stop | restart [deploy_directory]
nao () {
    systemd_service_wrapper naoqi "$@"
}

hal () {
    systemd_service_wrapper hal "$@"
}
