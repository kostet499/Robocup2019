get_filename_component(_boost_system_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_SYSTEM_LIBRARIES
  ${_boost_system_root}/usr/lib/libboost_system.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_SYSTEM_INCLUDE_DIRS
  ${_boost_system_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_SYSTEM_DEPENDS RT)

export_lib(BOOST_SYSTEM)
