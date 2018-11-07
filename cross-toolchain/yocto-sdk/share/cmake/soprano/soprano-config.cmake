get_filename_component(_soprano_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  SOPRANO_LIBRARIES
  ${_soprano_root}/usr/lib/libsoprano.so.5
  ${_soprano_root}/usr/lib/libsopranoserver.so.2
  CACHE INTERNAL "" FORCE
)

set(
  SOPRANO_INCLUDE_DIRS
  ${_soprano_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(SOPRANO_DEPENDS ATTR)

export_lib(SOPRANO)
