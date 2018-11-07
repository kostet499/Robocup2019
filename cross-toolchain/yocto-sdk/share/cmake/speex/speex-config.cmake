get_filename_component(_speex_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  SPEEX_LIBRARIES
  ${_speex_root}/usr/lib/libspeexdsp.so
  ${_speex_root}/usr/lib/libspeex.so
  CACHE INTERNAL "" FORCE
)

set(
  SPEEX_INCLUDE_DIRS
  ${_speex_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(SPEEX_DEPENDS )

export_lib(SPEEX)
