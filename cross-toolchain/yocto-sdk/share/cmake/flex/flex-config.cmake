get_filename_component(_flex_root "${YOCTO_SDK_HOST_SYSROOT}" ABSOLUTE)

set(
  FLEX_EXECUTABLE
  "${_flex_root}/usr/bin/flex"
  CACHE INTERNAL "" FORCE
)

export_bin(FLEX)

