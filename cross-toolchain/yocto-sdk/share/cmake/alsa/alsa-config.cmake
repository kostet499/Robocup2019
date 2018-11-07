get_filename_component(_alsa_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ALSA_LIBRARIES
  ${_alsa_root}/usr/lib/libasound.so.2
  CACHE INTERNAL "" FORCE
)

set(
  ALSA_INCLUDE_DIRS
  ${_alsa_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ALSA_DEPENDS DL PTHREAD RT)

export_lib(ALSA)
