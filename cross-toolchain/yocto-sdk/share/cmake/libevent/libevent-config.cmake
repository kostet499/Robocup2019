get_filename_component(_libevent_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBEVENT_LIBRARIES
  ${_libevent_root}/usr/lib/libevent_pthreads-2.0.so.5
  ${_libevent_root}/usr/lib/libevent_openssl-2.0.so.5
  ${_libevent_root}/usr/lib/libevent_extra-2.0.so.5
  ${_libevent_root}/usr/lib/libevent_core-2.0.so.5
  ${_libevent_root}/usr/lib/libevent-2.0.so.5
  CACHE INTERNAL "" FORCE
)

set(
  LIBEVENT_INCLUDE_DIRS
  ${_libevent_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBEVENT_DEPENDS PTHREAD OPENSSL)

export_lib(LIBEVENT)
