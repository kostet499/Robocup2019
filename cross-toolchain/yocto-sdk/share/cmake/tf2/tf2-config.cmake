get_filename_component(_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(TF2_LIBRARIES
  ${_root}/opt/ros/indigo/lib/libtf2.so
  CACHE INTERNAL "" FORCE
)

set(TF2_INCLUDE_DIRS
  ${_root}/opt/ros/indigo/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TF2_DEPENDS CONSOLE_BRIDGE ROSTIME)
export_lib(TF2)
