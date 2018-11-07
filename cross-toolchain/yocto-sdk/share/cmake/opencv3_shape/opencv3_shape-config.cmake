get_filename_component(_opencv3_shape_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_SHAPE_LIBRARIES
  ${_opencv3_shape_root}/usr/lib/libopencv_shape.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_SHAPE_INCLUDE_DIRS
  ${_opencv3_shape_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_SHAPE_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC OPENCV3_VIDEO)

export_lib(OPENCV3_SHAPE)
