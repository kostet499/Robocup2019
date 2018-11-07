get_filename_component(_curl_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  CURL_LIBRARIES
  ${_curl_root}/usr/lib/libcurl.so.4
  CACHE INTERNAL "" FORCE
)

set(
  CURL_INCLUDE_DIRS
  ${_curl_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(CURL_DEPENDS C_ARES IDN OPENSSL ZLIB)

export_lib(CURL)
