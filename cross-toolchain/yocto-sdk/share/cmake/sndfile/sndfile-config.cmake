get_filename_component(_sndfile_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  SNDFILE_LIBRARIES
  ${_sndfile_root}/usr/lib/libsndfile.so.1
  CACHE INTERNAL "" FORCE
)

set(
  SNDFILE_INCLUDE_DIRS
  ${_sndfile_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(SNDFILE_DEPENDS FLAC VORBIS)

export_lib(SNDFILE)
