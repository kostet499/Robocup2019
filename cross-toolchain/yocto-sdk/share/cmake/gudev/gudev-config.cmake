get_filename_component(_gudev_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GUDEV_LIBRARIES
  ${_gudev_root}/usr/lib/libgudev-1.0.so
  CACHE INTERNAL "" FORCE
)

set(
  GUDEV_INCLUDE_DIRS
  ${_gudev_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GUDEV_DEPENDS UDEV GOBJECT GLIB2 PTHREAD)

export_lib(GUDEV)
