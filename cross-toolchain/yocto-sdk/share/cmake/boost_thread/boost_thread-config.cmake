get_filename_component(_boost_thread_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_THREAD_LIBRARIES
  ${_boost_thread_root}/usr/lib/libboost_thread.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_THREAD_INCLUDE_DIRS
  ${_boost_thread_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_THREAD_DEPENDS BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_THREAD)
