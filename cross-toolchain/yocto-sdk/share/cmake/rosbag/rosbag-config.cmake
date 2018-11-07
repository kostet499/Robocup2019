get_filename_component(_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(ROSBAG_LIBRARIES
  ${_root}/opt/ros/indigo/lib/libroscpp_serialization.so
  ${_root}/opt/ros/indigo/lib/libroslz4.so
  ${_root}/opt/ros/indigo/lib/librosbag_storage.so
  ${_root}/opt/ros/indigo/lib/libcpp_common.so
  CACHE INTERNAL "" FORCE
)

set(ROSBAG_INCLUDE_DIRS
  ${_root}/opt/ros/indigo/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ROSBAG_DEPENDS CONSOLE_BRIDGE ROSTIME BZIP2 BOOST BOOST_SYSTEM LZ4)
export_lib(ROSBAG)
