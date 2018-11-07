get_filename_component(_idn_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  IDN_LIBRARIES
  ${_idn_root}/usr/lib/libidn.so.11
  CACHE INTERNAL "" FORCE
)

set(
  IDN_INCLUDE_DIRS
  ${_idn_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(IDN_DEPENDS )

export_lib(IDN)
