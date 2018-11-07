get_filename_component(_boost_context_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_CONTEXT_LIBRARIES
  ${_boost_context_root}/usr/lib/libboost_context.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_CONTEXT_INCLUDE_DIRS
  ${_boost_context_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_CONTEXT_DEPENDS RT)

export_lib(BOOST_CONTEXT)
