get_filename_component(_opencv3_highgui_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_HIGHGUI_LIBRARIES
  ${_opencv3_highgui_root}/usr/lib/libopencv_highgui.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_HIGHGUI_INCLUDE_DIRS
  ${_opencv3_highgui_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_HIGHGUI_DEPENDS OPENCV3_CORE PTHREAD JPEG PNG TIFF V4L)

export_lib(OPENCV3_HIGHGUI)
