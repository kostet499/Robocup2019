get_filename_component(_tiff_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  TIFF_LIBRARIES
  ${_tiff_root}/usr/lib/libtiffxx.so.5
  ${_tiff_root}/usr/lib/libtiff.so.5
  CACHE INTERNAL "" FORCE
)

set(
  TIFF_INCLUDE_DIRS
  ${_tiff_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(TIFF_DEPENDS XZ_UTILS ZLIB)

export_lib(TIFF)
