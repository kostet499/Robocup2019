get_filename_component(_opencv3_imgproc_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_IMGPROC_LIBRARIES
  ${_opencv3_imgproc_root}/usr/lib/libopencv_imgproc.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_IMGPROC_INCLUDE_DIRS
  ${_opencv3_imgproc_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_IMGPROC_DEPENDS OPENCV3_CORE PTHREAD TBB)

export_lib(OPENCV3_IMGPROC)