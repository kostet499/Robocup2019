get_filename_component(_v4l_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  V4L_LIBRARIES
  ${_v4l_root}/usr/lib/libv4lconvert.so
  ${_v4l_root}/usr/lib/libv4l2.so
  ${_v4l_root}/usr/lib/libv4l1.so
  CACHE INTERNAL "" FORCE
)

set(
  V4L_INCLUDE_DIRS
  ${_v4l_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(V4L_DEPENDS PTHREAD RT JPEG)

export_lib(V4L)
