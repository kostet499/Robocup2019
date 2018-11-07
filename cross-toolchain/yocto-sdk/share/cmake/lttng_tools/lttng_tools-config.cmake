get_filename_component(_lttng_tools_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LTTNG_TOOLS_LIBRARIES
  ${_lttng_tools_root}/usr/lib/liblttng-ctl.so.0
  CACHE INTERNAL "" FORCE
)

set(
  LTTNG_TOOLS_INCLUDE_DIRS
  ${_lttng_tools_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LTTNG_TOOLS_DEPENDS RT LIBURCU PTHREAD)

export_lib(LTTNG_TOOLS)
