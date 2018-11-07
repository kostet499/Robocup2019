get_filename_component(_png_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  PNG_LIBRARIES
  ${_png_root}/usr/lib/libpng16.so.16
  CACHE INTERNAL "" FORCE
)

set(
  PNG_INCLUDE_DIRS
  ${_png_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(PNG_DEPENDS ZLIB)

export_lib(PNG)
