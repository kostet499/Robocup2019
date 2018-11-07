get_filename_component(_zbar_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ZBAR_LIBRARIES
  ${_zbar_root}/usr/lib/libzbar.so
  CACHE INTERNAL "" FORCE
)

set(
  ZBAR_INCLUDE_DIRS
  ${_zbar_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ZBAR_DEPENDS PTHREAD)

export_lib(ZBAR)
