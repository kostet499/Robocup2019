get_filename_component(_opencv3_superres_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_SUPERRES_LIBRARIES
  ${_opencv3_superres_root}/usr/lib/libopencv_superres.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_SUPERRES_INCLUDE_DIRS
  ${_opencv3_superres_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_SUPERRES_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC OPENCV3_HIGHGUI OPENCV3_VIDEO OPENCV3_GPU PTHREAD)

export_lib(OPENCV3_SUPERRES)
