get_filename_component(_dbus-1_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  DBUS-1_LIBRARIES
  ${_dbus-1_root}/usr/lib/libdbus-1.so
  CACHE INTERNAL "" FORCE
)

set(
  DBUS-1_INCLUDE_DIRS
  ${_dbus-1_root}/usr/include
  ${_dbus-1_root}/usr/include/dbus-1.0
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(DBUS-1_DEPENDS PTHREAD RT)

export_lib(DBUS-1)
