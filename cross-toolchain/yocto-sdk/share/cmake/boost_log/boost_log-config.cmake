get_filename_component(_boost_log_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_LOG_LIBRARIES
  ${_boost_log_root}/usr/lib/libboost_log_setup.so
  ${_boost_log_root}/usr/lib/libboost_log.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_LOG_INCLUDE_DIRS
  ${_boost_log_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_LOG_DEPENDS BOOST_THREAD BOOST_FILESYSTEM BOOST_DATE_TIME BOOST_CHRONO BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_LOG)
