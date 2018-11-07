get_filename_component(_icu_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ICU_LIBRARIES
  ${_icu_root}/usr/lib/libicuuc.so
  ${_icu_root}/usr/lib/libicutu.so
  ${_icu_root}/usr/lib/libicutest.so
  ${_icu_root}/usr/lib/libiculx.so
  ${_icu_root}/usr/lib/libicule.so
  ${_icu_root}/usr/lib/libicuio.so
  ${_icu_root}/usr/lib/libicui18n.so
  ${_icu_root}/usr/lib/libicudata.so
  CACHE INTERNAL "" FORCE
)

set(
  ICU_INCLUDE_DIRS
  ${_icu_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ICU_DEPENDS PTHREAD DL)

export_lib(ICU)
