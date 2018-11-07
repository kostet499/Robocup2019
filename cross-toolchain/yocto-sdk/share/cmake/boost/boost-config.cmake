get_filename_component(_boost_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(BOOST_INCLUDE_DIRS
  ${_boost_root}/usr/include
  CACHE INTERNAL "" FORCE
)

export_header(BOOST)
