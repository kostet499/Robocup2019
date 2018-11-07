get_filename_component(_samplerate_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  SAMPLERATE_LIBRARIES
  ${_samplerate_root}/usr/lib/libsamplerate.so.0
  CACHE INTERNAL "" FORCE
)

set(
  SAMPLERATE_INCLUDE_DIRS
  ${_samplerate_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(SAMPLERATE_DEPENDS )

export_lib(SAMPLERATE)
