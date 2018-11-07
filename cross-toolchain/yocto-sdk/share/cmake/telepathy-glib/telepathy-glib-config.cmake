get_filename_component(_telepathy-glib_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  TELEPATHY-GLIB_LIBRARIES
  ${_telepathy-glib_root}/usr/lib/libtelepathy-glib.so.0
  CACHE INTERNAL "" FORCE
)

set(
  TELEPATHY-GLIB_INCLUDE_DIRS
  ${_telepathy-glib_root}/usr/include
  ${_telepathy-glib_root}/usr/include/telepathy-1.0
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TELEPATHY-GLIB_DEPENDS DBUS-GLIB-1 DBUS-1 GIO GOBJECT GLIB2 PTHREAD)

export_lib(TELEPATHY-GLIB)
