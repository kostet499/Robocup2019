get_filename_component(_libasyncns_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBASYNCNS_LIBRARIES
  ${_libasyncns_root}/usr/lib/libasyncns.so.0
  CACHE INTERNAL "" FORCE
)

set(
  LIBASYNCNS_INCLUDE_DIRS
  ${_libasyncns_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBASYNCNS_DEPENDS PTHREAD)

export_lib(LIBASYNCNS)
