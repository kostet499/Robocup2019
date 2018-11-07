get_filename_component(_boost_serialization_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_SERIALIZATION_LIBRARIES
  ${_boost_serialization_root}/usr/lib/libboost_serialization.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_SERIALIZATION_INCLUDE_DIRS
  ${_boost_serialization_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_SERIALIZATION_DEPENDS RT PTHREAD)

export_lib(BOOST_SERIALIZATION)
