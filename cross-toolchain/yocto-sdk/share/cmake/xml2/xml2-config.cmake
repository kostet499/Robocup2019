get_filename_component(_xml2_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  XML2_LIBRARIES
  ${_xml2_root}/usr/lib/libxml2.so
  CACHE INTERNAL "" FORCE
)

set(
  XML2_INCLUDE_DIRS
  ${_xml2_root}/usr/include
  ${_xml2_root}/usr/include/libxml2
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(XML2_DEPENDS DL ZLIB XZ_UTILS)

export_lib(XML2)
