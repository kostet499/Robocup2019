get_filename_component(_opencv3_core_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_CORE_LIBRARIES
  ${_opencv3_core_root}/usr/lib/libopencv_core.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_CORE_INCLUDE_DIRS
  ${_opencv3_core_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_CORE_DEPENDS ZLIB PTHREAD RT TBB)

export_lib(OPENCV3_CORE)
