get_filename_component(_iconv_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(ICONV_INCLUDE_DIRS
  ${_iconv_root}/usr/include
  CACHE INTERNAL "" FORCE
)
export_header(ICONV)
