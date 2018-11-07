get_filename_component(_chunkware_simple_dynamics_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  CHUNKWARE_SIMPLE_DYNAMICS_LIBRARIES
  ${_chunkware_simple_dynamics_root}/usr/lib/libchunkware_simple_dynamics.so
  CACHE INTERNAL "" FORCE
)

set(
  CHUNKWARE_SIMPLE_DYNAMICS_INCLUDE_DIRS
  ${_chunkware_simple_dynamics_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(CHUNKWARE_SIMPLE_DYNAMICS_DEPENDS )

export_lib(CHUNKWARE_SIMPLE_DYNAMICS)
