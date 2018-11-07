get_filename_component(_opencv3_imgcodecs_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_IMGCODECS_LIBRARIES
  ${_opencv3_imgcodecs_root}/usr/lib/libopencv_imgcodecs.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_IMGCODECS_INCLUDE_DIRS
  ${_opencv3_imgcodecs_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_IMGCODECS_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC PTHREAD JPEG PNG TIFF)

export_lib(OPENCV3_IMGCODECS)
