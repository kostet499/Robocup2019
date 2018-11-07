get_filename_component(_soundtouch_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  SOUNDTOUCH_LIBRARIES
  ${_soundtouch_root}/usr/lib/libSoundTouch.so.0
  CACHE INTERNAL "" FORCE
)

set(
  SOUNDTOUCH_INCLUDE_DIRS
  ${_soundtouch_root}/sur/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(SOUNDTOUCH_DEPENDS )

export_lib(SOUNDTOUCH)
