get_filename_component(_boost_prg_exec_monitor_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_PRG_EXEC_MONITOR_LIBRARIES
  ${_boost_prg_exec_monitor_root}/usr/lib/libboost_prg_exec_monitor.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_PRG_EXEC_MONITOR_INCLUDE_DIRS
  ${_boost_prg_exec_monitor_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_PRG_EXEC_MONITOR_DEPENDS RT PTHREAD)

export_lib(BOOST_PRG_EXEC_MONITOR)
