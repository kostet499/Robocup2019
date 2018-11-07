get_filename_component(_boost_coroutine_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_COROUTINE_LIBRARIES
  ${_boost_coroutine_root}/usr/lib/libboost_coroutine.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_COROUTINE_INCLUDE_DIRS
  ${_boost_coroutine_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_COROUTINE_DEPENDS BOOST_CONTEXT BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_COROUTINE)
