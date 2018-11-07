get_filename_component(_tinyxml_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  TINYXML_LIBRARIES
  ${_tinyxml_root}/usr/lib/libtinyxml.so
  CACHE INTERNAL "" FORCE
)

set(
  TINYXML_INCLUDE_DIRS
  ${_tinyxml_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TINYXML_DEPENDS )

export_lib(TINYXML)
