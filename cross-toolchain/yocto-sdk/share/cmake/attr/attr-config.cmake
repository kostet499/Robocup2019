get_filename_component(_attr_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ATTR_LIBRARIES
  ${_attr_root}/usr/lib/libattr.so
  CACHE INTERNAL "" FORCE
)

set(
  ATTR_INCLUDE_DIRS
  ${_attr_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ATTR_DEPENDS )

export_lib(ATTR)
