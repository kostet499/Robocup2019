get_filename_component(_boost_signals_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_SIGNALS_LIBRARIES
  ${_boost_signals_root}/usr/lib/libboost_signals.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_SIGNALS_INCLUDE_DIRS
  ${_boost_signals_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_SIGNALS_DEPENDS RT PTHREAD)

export_lib(BOOST_SIGNALS)
