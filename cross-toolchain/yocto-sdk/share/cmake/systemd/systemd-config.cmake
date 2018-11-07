get_filename_component(_systemd_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  SYSTEMD_LIBRARIES
  ${_systemd_root}/usr/lib/libnss_myhostname.so.2
  ${_systemd_root}/usr/lib/libsystemd.so
  CACHE INTERNAL "" FORCE
)

set(
  SYSTEMD_INCLUDE_DIRS
  ${_systemd_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(SYSTEMD_DEPENDS RT XZ_UTILS PTHREAD)

export_lib(SYSTEMD)
