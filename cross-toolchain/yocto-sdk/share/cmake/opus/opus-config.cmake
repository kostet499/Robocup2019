get_filename_component(_opus_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPUS_LIBRARIES
  ${_opus_root}/usr/lib/libopus.so
  CACHE INTERNAL "" FORCE
)

set(
  OPUS_INCLUDE_DIRS
  ${_opus_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPUS_DEPENDS )

export_lib(OPUS)
