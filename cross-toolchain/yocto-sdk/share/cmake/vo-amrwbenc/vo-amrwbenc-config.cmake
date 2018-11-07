get_filename_component(_vo-amrwbenc_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  VO-AMRWBENC_LIBRARIES
  ${_vo-amrwbenc_root}/usr/lib/libvo-amrwbenc.so.0
  CACHE INTERNAL "" FORCE
)

set(
  VO-AMRWBENC_INCLUDE_DIRS
  ${_vo-amrwbenc_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(VO-AMRWBENC_DEPENDS )

export_lib(VO-AMRWBENC)
