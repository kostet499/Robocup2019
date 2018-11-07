get_filename_component(_urg_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  URG_LIBRARIES
  ${_urg_root}/usr/lib/libc_urg_system.so.0
  ${_urg_root}/usr/lib/libc_urg_connection.so.0
  ${_urg_root}/usr/lib/libc_urg.so.0
  CACHE INTERNAL "" FORCE
)

set(
  URG_INCLUDE_DIRS
  ${_urg_root}/usr/include
  ${_urg_root}/usr/include/urg
  ${_urg_root}/usr/include/c_urg
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(URG_DEPENDS )

export_lib(URG)
