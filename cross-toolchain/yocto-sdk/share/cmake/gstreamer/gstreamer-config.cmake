get_filename_component(_gstreamer_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GSTREAMER_LIBRARIES
  ${_gstreamer_root}/usr/lib/libgstreamer-0.10.so
  ${_gstreamer_root}/usr/lib/libgstbase-0.10.so
  CACHE INTERNAL "" FORCE
)

set(
  GSTREAMER_INCLUDE_DIRS
  ${_gstreamer_root}/usr/include
  ${_gstreamer_root}/usr/include/gstreamer-0.10
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GSTREAMER_DEPENDS GOBJECT GMODULE GTHREAD GLIB2 XML2 PTHREAD DL)

export_lib(GSTREAMER)
