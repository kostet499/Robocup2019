get_filename_component(_opencv3_ximgproc_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_XIMGPROC_LIBRARIES
  ${_opencv3_ximgproc_root}/usr/lib/libopencv_ximgproc.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_XIMGPROC_INCLUDE_DIRS
  ${_opencv3_ximgproc_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_XIMGPROC_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC OPENCV3_IMGCODECS OPENCV3_XIMGPROC PTHREAD TBB)

export_lib(OPENCV3_XIMGPROC)
