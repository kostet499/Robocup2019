get_filename_component(_libftdi1_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBFTDI1_LIBRARIES
  ${_libftdi1_root}/usr/lib/libftdipp1.so.2
  ${_libftdi1_root}/usr/lib/libftdi1.so.2
  CACHE INTERNAL "" FORCE
)

set(
  LIBFTDI1_INCLUDE_DIRS
  ${_libftdi1_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBFTDI1_DEPENDS USB_1)

export_lib(LIBFTDI1)
