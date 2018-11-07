get_filename_component(_m4_root "${YOCTO_SDK_HOST_SYSROOT}" ABSOLUTE)

set(
  M4_EXECUTABLE
  "${_m4_root}/usr/bin/m4"
  CACHE INTERNAL "" FORCE
)

export_bin(M4)

