get_filename_component(_boost_iostreams_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_IOSTREAMS_LIBRARIES
  ${_boost_iostreams_root}/usr/lib/libboost_iostreams.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_IOSTREAMS_INCLUDE_DIRS
  ${_boost_iostreams_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_IOSTREAMS_DEPENDS ZLIB BZIP2 RT PTHREAD)

export_lib(BOOST_IOSTREAMS)
