get_filename_component(_liburcu_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  LIBURCU_LIBRARIES
  ${_liburcu_root}/usr/lib/liburcu-signal.so.4
  ${_liburcu_root}/usr/lib/liburcu-qsbr.so.4
  ${_liburcu_root}/usr/lib/liburcu-mb.so.4
  ${_liburcu_root}/usr/lib/liburcu-common.so.4
  ${_liburcu_root}/usr/lib/liburcu-cds.so.4
  ${_liburcu_root}/usr/lib/liburcu-bp.so.4
  ${_liburcu_root}/usr/lib/liburcu.so.4
  CACHE INTERNAL "" FORCE
)

set(
  LIBURCU_INCLUDE_DIRS
  ${_liburcu_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(LIBURCU_DEPENDS PTHREAD)

export_lib(LIBURCU)
