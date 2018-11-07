get_filename_component(_openssl_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENSSL_LIBRARIES
  ${_openssl_root}/usr/lib/libssl.so.1.0.0
  ${_openssl_root}/usr/lib/libcrypto.so.1.0.0
  CACHE INTERNAL "" FORCE
)

set(
  OPENSSL_INCLUDE_DIRS
  ${_openssl_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENSSL_DEPENDS DL ZLIB)

export_lib(OPENSSL)
