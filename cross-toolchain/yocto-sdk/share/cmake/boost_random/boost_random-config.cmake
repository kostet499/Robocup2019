get_filename_component(_boost_random_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_RANDOM_LIBRARIES
  ${_boost_random_root}/usr/lib/libboost_random.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_RANDOM_INCLUDE_DIRS
  ${_boost_random_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_RANDOM_DEPENDS RT PTHREAD)

export_lib(BOOST_RANDOM)
