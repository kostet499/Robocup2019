get_filename_component(_opencv3_nonfree_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_NONFREE_LIBRARIES
  ${_opencv3_nonfree_root}/usr/lib/libopencv_nonfree.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_NONFREE_INCLUDE_DIRS
  ${_opencv3_nonfree_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_NONFREE_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC OPENCV3_FEATURES2D PTHREAD)

export_lib(OPENCV3_NONFREE)
