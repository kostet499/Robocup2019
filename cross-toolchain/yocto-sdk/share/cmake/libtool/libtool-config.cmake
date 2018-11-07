get_filename_component(_libtool_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBTOOL_LIBRARIES
  ${_libtool_root}/usr/lib/libltdl.so
  CACHE INTERNAL "" FORCE
)

set(
  LIBTOOL_INCLUDE_DIRS
  ${_libtool_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBTOOL_DEPENDS DL)

export_lib(LIBTOOL)
