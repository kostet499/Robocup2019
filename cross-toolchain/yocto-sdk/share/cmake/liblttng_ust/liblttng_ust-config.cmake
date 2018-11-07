get_filename_component(_liblttng_ust_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBLTTNG_UST_LIBRARIES
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-tracepoint.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-pthread-wrapper.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-libc-wrapper.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-fork.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-dl.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-cyg-profile-fast.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-cyg-profile.so.0
  ${_liblttng_ust_root}/usr/lib/liblttng-ust-ctl.so.2
  ${_liblttng_ust_root}/usr/lib/liblttng-ust.so.0
  CACHE INTERNAL "" FORCE
)

set(
  LIBLTTNG_UST_INCLUDE_DIRS
  ${_liblttng_ust_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBLTTNG_UST_DEPENDS RT LIBURCU PTHREAD DL)

export_lib(LIBLTTNG_UST)
