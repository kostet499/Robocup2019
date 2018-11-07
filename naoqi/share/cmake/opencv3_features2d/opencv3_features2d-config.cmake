get_filename_component(_opencv3_features2d_root "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(_opencv3_features2d_root "${_opencv3_features2d_root}/../../..")
get_filename_component(_opencv3_features2d_root "${_opencv3_features2d_root}" ABSOLUTE)

set(OPENCV3_FEATURES2D_LIBRARIES
  ${_opencv3_features2d_root}/lib/libopencv_features2d.so
  CACHE INTERNAL "" FORCE
)

set(OPENCV3_FEATURES2D_INCLUDE_DIRS
  ${_opencv3_features2d_root}/include/
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCV3_FEATURES2D_DEPENDS OPENCV3_CORE OPENCV3_FLANN)
export_lib(OPENCV3_FEATURES2D)