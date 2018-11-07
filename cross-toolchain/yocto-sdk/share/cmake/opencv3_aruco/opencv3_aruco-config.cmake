get_filename_component(_opencv3_aruco_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_ARUCO_LIBRARIES
  ${_opencv3_aruco_root}/usr/lib/libopencv_aruco.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_ARUCO_INCLUDE_DIRS
  ${_opencv3_aruco_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_ARUCO_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC OPENCV3_CALIB3D PTHREAD TBB)

export_lib(OPENCV3_ARUCO)
