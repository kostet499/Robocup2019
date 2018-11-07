get_filename_component(_jpeg_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  JPEG_LIBRARIES
  ${_jpeg_root}/usr/lib/libjpeg.so
  CACHE INTERNAL "" FORCE
)

set(
  JPEG_INCLUDE_DIRS
  ${_jpeg_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(JPEG_DEPENDS )

export_lib(JPEG)
