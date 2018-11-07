get_filename_component(_trousers_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  TROUSERS_LIBRARIES
  ${_trousers_root}/usr/lib/libtspi.so
  CACHE INTERNAL "" FORCE
)

set(
  TROUSERS_INCLUDE_DIRS
  ${_trousers_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TROUSERS_DEPENDS OPENSSL)

export_lib(TROUSERS)

