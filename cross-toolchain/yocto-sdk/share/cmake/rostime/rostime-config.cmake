get_filename_component(_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(ROSTIME_LIBRARIES
  ${_root}/opt/ros/indigo/lib/librostime.so
  CACHE INTERNAL "" FORCE
)

set(ROSTIME_INCLUDE_DIRS
  ${_root}/opt/ros/indigo/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ROSTIME_DEPENDS BOOST_DATE_TIME BOOST_SYSTEM BOOST_THREAD)
export_lib(ROSTIME)
