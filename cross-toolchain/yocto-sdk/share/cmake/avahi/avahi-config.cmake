get_filename_component(_avahi_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  AVAHI_LIBRARIES
  ${_avahi_root}/usr/lib/libavahi-gobject.so
  ${_avahi_root}/usr/lib/libavahi-glib.so
  ${_avahi_root}/usr/lib/libavahi-common.so
  ${_avahi_root}/usr/lib/libavahi-client.so
  CACHE INTERNAL "" FORCE
)

set(
  AVAHI_INCLUDE_DIRS
  ${_avahi_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(AVAHI_DEPENDS DBUS-1 DL PTHREAD GLIB2 GOBJECT)

export_lib(AVAHI)
