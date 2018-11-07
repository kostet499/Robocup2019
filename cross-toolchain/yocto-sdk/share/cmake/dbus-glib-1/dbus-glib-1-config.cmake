get_filename_component(_dbus-glib-1_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  DBUS-GLIB-1_LIBRARIES
  ${_dbus-glib-1_root}/usr/lib/libdbus-glib-1.so
  CACHE INTERNAL "" FORCE
)

set(
  DBUS-GLIB-1_INCLUDE_DIRS
  ${_dbus-glib-1_root}/usr/include
  ${_dbus-glib-1_root}/usr/include/dbus-1.0
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(DBUS-GLIB-1_DEPENDS DBUS-1 GIO GOBJECT GLIB2)

export_lib(DBUS-GLIB-1)
