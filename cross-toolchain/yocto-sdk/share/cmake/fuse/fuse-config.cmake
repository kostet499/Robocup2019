get_filename_component(_fuse_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  FUSE_LIBRARIES
  ${_fuse_root}/usr/lib/libulockmgr.so.1
  ${_fuse_root}/usr/lib/libfuse.so.2
  CACHE INTERNAL "" FORCE
)

set(
  FUSE_INCLUDE_DIRS
  ${_fuse_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(FUSE_DEPENDS DL PTHREAD)

export_lib(FUSE)
