get_filename_component(_bfl_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BFL_LIBRARIES
  ${_bfl_root}/usr/lib/liborocos-bfl.so
  CACHE INTERNAL "" FORCE
)

set(
  BFL_INCLUDE_DIRS
  ${_bfl_root}/usr/include
  ${_bfl_root}/usr/include/bfl
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BFL_DEPENDS BOOST)
export_lib(BFL)
