get_filename_component(_lz4_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LZ4_LIBRARIES
  ${_lz4_root}/usr/lib/liblz4.so
  CACHE INTERNAL "" FORCE
)

set(
  LZ4_INCLUDE_DIRS
  ${_lz4_root}/usr/include
  CACHE INTERNAL "" FORCE
)

export_lib(LZ4)

