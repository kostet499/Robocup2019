get_filename_component(_c_ares_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  C_ARES_LIBRARIES
  ${_c_ares_root}/usr/lib/libcares.so.2
  CACHE INTERNAL "" FORCE
)

set(
  C_ARES_INCLUDE_DIRS
  ${_c_ares_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(C_ARES_DEPENDS )

export_lib(C_ARES)
