get_filename_component(_json-c_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  JSON-C_LIBRARIES
  ${_json-c_root}/usr/lib/libjson-c.so.2
  CACHE INTERNAL "" FORCE
)

set(
  JSON-C_INCLUDE_DIRS
  ${_json-c_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(JSON-C_DEPENDS )

export_lib(JSON-C)
