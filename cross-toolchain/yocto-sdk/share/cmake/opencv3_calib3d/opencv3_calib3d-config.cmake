get_filename_component(_opencv3_calib3d_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_CALIB3D_LIBRARIES
  ${_opencv3_calib3d_root}/usr/lib/libopencv_calib3d.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_CALIB3D_INCLUDE_DIRS
  ${_opencv3_calib3d_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_CALIB3D_DEPENDS OPENCV3_CORE OPENCV3_FLANN OPENCV3_IMGPROC OPENCV3_FEATURES2D PTHREAD TBB)

export_lib(OPENCV3_CALIB3D)
