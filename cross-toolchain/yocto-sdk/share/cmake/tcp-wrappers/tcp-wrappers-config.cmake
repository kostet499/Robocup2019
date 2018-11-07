get_filename_component(_tcp-wrappers_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  TCP-WRAPPERS_LIBRARIES
  ${_tcp-wrappers_root}/usr/lib/libwrap.so
  CACHE INTERNAL "" FORCE
)

set(
  TCP-WRAPPERS_INCLUDE_DIRS
  ${_tcp-wrappers_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TCP-WRAPPERS_DEPENDS )

export_lib(TCP-WRAPPERS)
