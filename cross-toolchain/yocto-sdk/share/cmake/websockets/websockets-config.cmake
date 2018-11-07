get_filename_component(_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(WEBSOCKETS_LIBRARIES
  ${_root}/usr/lib/libwebsockets.so
  CACHE INTERNAL "" FORCE
)

set(WEBSOCKETS_INCLUDE_DIRS
  ${_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(WEBSOCKETS_DEPENDS ZLIB)
export_lib(WEBSOCKETS)
