get_filename_component(_boost_timer_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_TIMER_LIBRARIES
  ${_boost_timer_root}/usr/lib/libboost_timer.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_TIMER_INCLUDE_DIRS
  ${_boost_timer_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_TIMER_DEPENDS BOOST_CHRONO BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_TIMER)
