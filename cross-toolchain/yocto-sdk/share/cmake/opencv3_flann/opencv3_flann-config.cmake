get_filename_component(_opencv3_flann_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_FLANN_LIBRARIES
  ${_opencv3_flann_root}/usr/lib/libopencv_flann.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_FLANN_INCLUDE_DIRS
  ${_opencv3_flann_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_FLANN_DEPENDS OPENCV3_CORE)

export_lib(OPENCV3_FLANN)
