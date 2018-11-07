get_filename_component(_xz_utils_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  XZ_UTILS_LIBRARIES
  ${_xz_utils_root}/usr/lib/liblzma.so
  CACHE INTERNAL "" FORCE
)

set(
  XZ_UTILS_INCLUDE_DIRS
  ${_xz_utils_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(XZ_UTILS_DEPENDS PTHREAD)

export_lib(XZ_UTILS)
