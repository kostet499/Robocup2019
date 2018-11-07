get_filename_component(_octomap_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OCTOMAP_LIBRARIES
  ${_octomap_root}/usr/lib/liboctomath.so
  ${_octomap_root}/usr/lib/liboctomap.so
  CACHE INTERNAL "" FORCE
)

set(
  OCTOMAP_INCLUDE_DIRS
  ${_octomap_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OCTOMAP_DEPENDS)

export_lib(OCTOMAP)
