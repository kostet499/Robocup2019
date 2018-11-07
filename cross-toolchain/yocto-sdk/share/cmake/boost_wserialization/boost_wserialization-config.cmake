get_filename_component(_boost_wserialization_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_WSERIALIZATION_LIBRARIES
  ${_boost_wserialization_root}/usr/lib/libboost_wserialization.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_WSERIALIZATION_INCLUDE_DIRS
  ${_boost_wserialization_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_WSERIALIZATION_DEPENDS BOOST_SERIALIZATION RT PTHREAD)

export_lib(BOOST_WSERIALIZATION)
