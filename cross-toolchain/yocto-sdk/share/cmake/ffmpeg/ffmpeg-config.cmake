get_filename_component(_ffmpeg_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  FFMPEG_LIBRARIES
  ${_ffmpeg_root}/usr/lib/libswscale.so
  ${_ffmpeg_root}/usr/lib/libswresample.so
  ${_ffmpeg_root}/usr/lib/libavutil.so
  ${_ffmpeg_root}/usr/lib/libavresample.so
  ${_ffmpeg_root}/usr/lib/libavformat.so
  ${_ffmpeg_root}/usr/lib/libavfilter.so
  ${_ffmpeg_root}/usr/lib/libavcodec.so
  CACHE INTERNAL "" FORCE
)

set(
  FFMPEG_INCLUDE_DIRS
  ${_ffmpeg_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(FFMPEG_DEPENDS VORBIS VO-AACENC LIBTHEORA SPEEX OPUS ZLIB PTHREAD ALSA PULSEAUDIO OPENSSL BZIP2 OPENCORE-AMR VO-AMRWBENC)

if(WITH_FFMPEG_EXTRA_LIBS)
  list(APPEND FFMPEG_LIBRARIES
    ${_ffmpeg_root}/usr/lib/libavdevice.so
  )

  list(APPEND FFMPEG_DEPENDS PULSEAUDIO)
endif()

export_lib(FFMPEG)
