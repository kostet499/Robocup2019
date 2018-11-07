get_filename_component(_boost_filesystem_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_FILESYSTEM_LIBRARIES
  ${_boost_filesystem_root}/usr/lib/libboost_filesystem.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_FILESYSTEM_INCLUDE_DIRS
  ${_boost_filesystem_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_FILESYSTEM_DEPENDS BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_FILESYSTEM)
