get_filename_component(_boost_atomic_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_ATOMIC_LIBRARIES
  ${_boost_atomic_root}/usr/lib/libboost_atomic.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_ATOMIC_INCLUDE_DIRS
  ${_boost_atomic_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_ATOMIC_DEPENDS RT)

export_lib(BOOST_ATOMIC)
