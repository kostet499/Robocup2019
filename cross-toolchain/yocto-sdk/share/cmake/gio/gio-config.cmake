get_filename_component(_gio_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GIO_LIBRARIES
  ${_gio_root}/usr/lib/libgio-2.0.so
  CACHE INTERNAL "" FORCE
)

set(
  GIO_INCLUDE_DIRS
  ${_gio_root}/usr/include
  ${_gio_root}/usr/include/gio-unix-2.0
  ${_gio_root}/usr/include/glib-2.0
  ${_gio_root}/usr/lib/glib-2.0/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GIO_DEPENDS GOBJECT GMODULE GLIB2 PTHREAD ZLIB)

export_lib(GIO)
