get_filename_component(_opencv3_videoio_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_VIDEOIO_LIBRARIES
  ${_opencv3_videoio_root}/usr/lib/libopencv_videoio.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_VIDEOIO_INCLUDE_DIRS
  ${_opencv3_videoio_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_VIDEOIO_DEPENDS OPENCV3_CORE OPENCV3_IMGCODECS PTHREAD V4L FFMPEG)

export_lib(OPENCV3_VIDEOIO)
