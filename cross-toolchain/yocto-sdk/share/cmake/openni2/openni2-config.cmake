get_filename_component(_openni2_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  OPENNI2_LIBRARIES
  ${_openni2_root}/usr/lib/libOpenNI2.so
  CACHE INTERNAL "" FORCE
)

set(
  OPENNI2_INCLUDE_DIRS
  ${_openni2_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(OPENNI2_DEPENDS DL JPEG PTHREAD RT UDEV USB_1)

export_lib(OPENNI2)
