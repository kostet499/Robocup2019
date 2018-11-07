get_filename_component(_gdbm_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  GDBM_LIBRARIES
  ${_gdbm_root}/usr/lib/libgdbm_compat.so
  ${_gdbm_root}/usr/lib/libgdbm.so
  CACHE INTERNAL "" FORCE
)

set(
  GDBM_INCLUDE_DIRS
  ${_gdbm_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(GDBM_DEPENDS )

export_lib(GDBM)
