get_filename_component(_vo-aacenc_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  VO-AACENC_LIBRARIES
  ${_vo-aacenc_root}/usr/lib/libvo-aacenc.so
  CACHE INTERNAL "" FORCE
)

set(
  VO-AACENC_INCLUDE_DIRS
  ${_vo-aacenc_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(VO-AACENC_DEPENDS )

export_lib(VO-AACENC)
