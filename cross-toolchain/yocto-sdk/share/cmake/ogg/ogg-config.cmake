get_filename_component(_ogg_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OGG_LIBRARIES
  ${_ogg_root}/usr/lib/libogg.so
  CACHE INTERNAL "" FORCE
)

set(
  OGG_INCLUDE_DIRS
  ${_ogg_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OGG_DEPENDS )

export_lib(OGG)
