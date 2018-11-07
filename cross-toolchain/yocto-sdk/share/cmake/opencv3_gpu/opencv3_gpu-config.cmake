get_filename_component(_opencv3_gpu_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_GPU_LIBRARIES
  ${_opencv3_gpu_root}/usr/lib/libopencv_gpu.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_GPU_INCLUDE_DIRS
  ${_opencv3_gpu_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_GPU_DEPENDS OPENCV3_CORE PTHREAD)

export_lib(OPENCV3_GPU)
