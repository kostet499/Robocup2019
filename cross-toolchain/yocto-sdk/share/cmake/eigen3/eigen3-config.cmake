get_filename_component(_eigen_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(EIGEN3_INCLUDE_DIRS
  ${_eigen_root}/usr/include/eigen3
  CACHE INTERNAL "" FORCE
)

export_header(EIGEN3)
