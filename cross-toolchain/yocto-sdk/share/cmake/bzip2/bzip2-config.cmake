get_filename_component(_bzip2_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BZIP2_LIBRARIES
  ${_bzip2_root}/usr/lib/libbz2.so.1
  CACHE INTERNAL "" FORCE
)

set(
  BZIP2_INCLUDE_DIRS
  ${_bzip2_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BZIP2_DEPENDS )

export_lib(BZIP2)
