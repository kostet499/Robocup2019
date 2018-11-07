get_filename_component(_vorbis_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  VORBIS_LIBRARIES
  ${_vorbis_root}/usr/lib/libvorbisfile.so
  ${_vorbis_root}/usr/lib/libvorbisenc.so
  ${_vorbis_root}/usr/lib/libvorbis.so
  CACHE INTERNAL "" FORCE
)

set(
  VORBIS_INCLUDE_DIRS
  ${_vorbis_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(VORBIS_DEPENDS OGG)

export_lib(VORBIS)
