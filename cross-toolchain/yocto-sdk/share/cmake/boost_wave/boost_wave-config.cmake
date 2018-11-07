get_filename_component(_boost_wave_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_WAVE_LIBRARIES
  ${_boost_wave_root}/usr/lib/libboost_wave.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_WAVE_INCLUDE_DIRS
  ${_boost_wave_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_WAVE_DEPENDS BOOST_THREAD BOOST_FILESYSTEM BOOST_DATE_TIME BOOST_CHRONO BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_WAVE)
