get_filename_component(_opencv3_video_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_VIDEO_LIBRARIES
  ${_opencv3_video_root}/usr/lib/libopencv_video.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_VIDEO_INCLUDE_DIRS
  ${_opencv3_video_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_VIDEO_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC PTHREAD)

export_lib(OPENCV3_VIDEO)
