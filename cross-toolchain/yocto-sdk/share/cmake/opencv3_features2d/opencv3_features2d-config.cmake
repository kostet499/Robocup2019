get_filename_component(_opencv3_features2d_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_FEATURES2D_LIBRARIES
  ${_opencv3_features2d_root}/usr/lib/libopencv_features2d.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_FEATURES2D_INCLUDE_DIRS
  ${_opencv3_features2d_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_FEATURES2D_DEPENDS OPENCV3_CORE OPENCV3_FLANN OPENCV3_IMGPROC PTHREAD TBB)

export_lib(OPENCV3_FEATURES2D)
