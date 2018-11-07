get_filename_component(_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(MSGPACKC_LIBRARIES
  ${_root}/usr/lib/libmsgpackc.so
  CACHE INTERNAL "" FORCE
)

set(MSGPACKC_INCLUDE_DIRS
  ${_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(MSGPACKC_DEPENDS )
export_lib(MSGPACKC)
