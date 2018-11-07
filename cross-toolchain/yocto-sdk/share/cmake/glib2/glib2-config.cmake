get_filename_component(_glib2_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GLIB2_LIBRARIES
  ${_glib2_root}/usr/lib/libglib-2.0.so
  CACHE INTERNAL "" FORCE
)

set(
  GLIB2_INCLUDE_DIRS
  ${_glib2_root}/usr/include
  ${_glib2_root}/usr/include/glib-2.0
  ${_glib2_root}/usr/lib/glib-2.0/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GLIB2_DEPENDS PTHREAD)

export_lib(GLIB2)
