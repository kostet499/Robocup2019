get_filename_component(_boost_date_time_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_DATE_TIME_LIBRARIES
  ${_boost_date_time_root}/usr/lib/libboost_date_time.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_DATE_TIME_INCLUDE_DIRS
  ${_boost_date_time_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_DATE_TIME_DEPENDS RT PTHREAD)

export_lib(BOOST_DATE_TIME)
