get_filename_component(_opencv3_photo_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_PHOTO_LIBRARIES
  ${_opencv3_photo_root}/usr/lib/libopencv_photo.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_PHOTO_INCLUDE_DIRS
  ${_opencv3_photo_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_PHOTO_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC PTHREAD)

export_lib(OPENCV3_PHOTO)
