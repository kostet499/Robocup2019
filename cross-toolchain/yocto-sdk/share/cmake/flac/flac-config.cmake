get_filename_component(_flac_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  FLAC_LIBRARIES
  ${_flac_root}/usr/lib/libFLAC++.so.6
  ${_flac_root}/usr/lib/libFLAC.so.8
  CACHE INTERNAL "" FORCE
)

set(
  FLAC_INCLUDE_DIRS
  ${_flac_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(FLAC_DEPENDS OGG)

export_lib(FLAC)
