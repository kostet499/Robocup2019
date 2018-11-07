get_filename_component(_libtheora_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBTHEORA_LIBRARIES
  ${_libtheora_root}/usr/lib/libtheoraenc.so
  ${_libtheora_root}/usr/lib/libtheoradec.so
  ${_libtheora_root}/usr/lib/libtheora.so
  CACHE INTERNAL "" FORCE
)

set(
  LIBTHEORA_INCLUDE_DIRS
  ${_libtheora_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBTHEORA_DEPENDS OGG)

export_lib(LIBTHEORA)
