get_filename_component(_gmodule_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GMODULE_LIBRARIES
  ${_gmodule_root}/usr/lib/libgmodule-2.0.so
  CACHE INTERNAL "" FORCE
)

set(
  GMODULE_INCLUDE_DIRS
  ${_gmodule_root}/usr/include
  ${_gmodule_root}/usr/include/glib-2.0
  ${_gmodule_root}/usr/lib/glib-2.0/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GMODULE_DEPENDS DL GLIB2 PTHREAD)

export_lib(GMODULE)
