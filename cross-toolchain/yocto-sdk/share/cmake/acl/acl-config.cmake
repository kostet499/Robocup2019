get_filename_component(_acl_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ACL_LIBRARIES
  ${_acl_root}/lib/libacl.so.1
  CACHE INTERNAL "" FORCE
)

set(
  ACL_INCLUDE_DIRS
  ${_acl_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ACL_DEPENDS ATTR)

export_lib(ACL)
