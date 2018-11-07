get_filename_component(_bison_root "${YOCTO_SDK_HOST_SYSROOT}" ABSOLUTE)

set(
  BISON_EXECUTABLE
  "${_bison_root}/usr/bin/bison"
  CACHE INTERNAL "" FORCE
)

export_bin(BISON)

