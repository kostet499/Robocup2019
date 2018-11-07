get_filename_component(_opencv3_objdetect_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_OBJDETECT_LIBRARIES
  ${_opencv3_objdetect_root}/usr/lib/libopencv_objdetect.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_OBJDETECT_INCLUDE_DIRS
  ${_opencv3_objdetect_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_OBJDETECT_DEPENDS OPENCV3_CORE OPENCV3_IMGPROC OPENCV3_HIGHGUI PTHREAD TBB)

export_lib(OPENCV3_OBJDETECT)
