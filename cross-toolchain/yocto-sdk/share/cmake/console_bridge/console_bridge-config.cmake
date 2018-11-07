get_filename_component(_console_bridge_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  CONSOLE_BRIDGE_LIBRARIES
  ${_console_bridge_root}/usr/lib/libconsole_bridge.so
  CACHE INTERNAL "" FORCE
)

set(
  CONSOLE_BRIDGE_INCLUDE_DIRS
  ${_console_bridge_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(CONSOLE_BRIDGE_DEPENDS BOOST)
export_lib(CONSOLE_BRIDGE)

