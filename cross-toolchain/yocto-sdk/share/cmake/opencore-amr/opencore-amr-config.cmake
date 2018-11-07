get_filename_component(_opencore-amr_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENCORE-AMR_LIBRARIES
  ${_opencore-amr_root}/usr/lib/libopencore-amrnb.so
  ${_opencore-amr_root}/usr/lib/libopencore-amrwb.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENCORE-AMR_INCLUDE_DIRS
  ${_opencore-amr_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENCORE-AMR_DEPENDS )

export_lib(OPENCORE-AMR)
