get_filename_component(_tbb_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  TBB_LIBRARIES
  ${_tbb_root}/usr/lib/libtbbmalloc_proxy.so.2
  ${_tbb_root}/usr/lib/libtbbmalloc.so.2
  ${_tbb_root}/usr/lib/libtbb.so.2
  CACHE INTERNAL "" FORCE
)

set(
  TBB_INCLUDE_DIRS
  ${_tbb_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TBB_DEPENDS DL PTHREAD RT)

export_lib(TBB)
