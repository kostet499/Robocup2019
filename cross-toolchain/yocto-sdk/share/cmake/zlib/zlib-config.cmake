get_filename_component(_zlib_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ZLIB_LIBRARIES
  ${_zlib_root}/usr/lib/libz.so
  CACHE INTERNAL "" FORCE
)

set(
  ZLIB_INCLUDE_DIRS
  ${_zlib_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ZLIB_DEPENDS )

export_lib(ZLIB)
