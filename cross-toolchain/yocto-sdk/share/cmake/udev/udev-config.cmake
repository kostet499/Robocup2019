get_filename_component(_udev_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  UDEV_LIBRARIES
  ${_udev_root}/usr/lib/libudev.so
  CACHE INTERNAL "" FORCE
)

set(
  UDEV_INCLUDE_DIRS
  ${_udev_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(UDEV_DEPENDS RT PTHREAD)

export_lib(UDEV)
