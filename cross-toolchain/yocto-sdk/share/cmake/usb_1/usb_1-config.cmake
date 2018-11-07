get_filename_component(_usb_1_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  USB_1_LIBRARIES
  ${_usb_1_root}/lib/libusb-1.0.so.0
  CACHE INTERNAL "" FORCE
)

set(
  USB_1_INCLUDE_DIRS
  ${_usb_1_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(USB_1_DEPENDS UDEV PTHREAD)

export_lib(USB_1)
