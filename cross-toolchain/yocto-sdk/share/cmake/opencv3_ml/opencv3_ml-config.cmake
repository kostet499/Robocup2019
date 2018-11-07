get_filename_component(_opencv3_ml_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCV3_ML_LIBRARIES
  ${_opencv3_ml_root}/usr/lib/libopencv_ml.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCV3_ML_INCLUDE_DIRS
  ${_opencv3_ml_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_ML_DEPENDS OPENCV3_CORE PTHREAD TBB)

export_lib(OPENCV3_ML)
