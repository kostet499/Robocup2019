get_filename_component(_gobject_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GOBJECT_LIBRARIES
  ${_gobject_root}/usr/lib/libgobject-2.0.so
  CACHE INTERNAL "" FORCE
)

set(
  GOBJECT_INCLUDE_DIRS
  ${_gobject_root}/usr/include
  ${_gobject_root}/usr/include/glib-2.0
  ${_gobject_root}/usr/lib/glib-2.0/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GOBJECT_DEPENDS GLIB2 FFI)

export_lib(GOBJECT)
