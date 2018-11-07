get_filename_component(_gthread_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GTHREAD_LIBRARIES
  ${_gthread_root}/usr/lib/libgthread-2.0.so
  CACHE INTERNAL "" FORCE
)

set(
  GTHREAD_INCLUDE_DIRS
  ${_gthread_root}/usr/include
  ${_gthread_root}/usr/include/glib-2.0
  ${_gthread_root}/usr/lib/glib-2.0/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GTHREAD_DEPENDS GLIB2)

export_lib(GTHREAD)
