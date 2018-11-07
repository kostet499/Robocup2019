get_filename_component(_cgos_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  CGOS_LIBRARIES
  ${_cgos_root}/usr/lib/libcgos.so
  CACHE INTERNAL "" FORCE
)

set(
  CGOS_INCLUDE_DIRS
  ${_cgos_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(CGOS_DEPENDS )

export_lib(CGOS)
