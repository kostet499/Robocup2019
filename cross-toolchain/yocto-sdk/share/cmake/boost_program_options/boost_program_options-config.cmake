get_filename_component(_boost_program_options_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_PROGRAM_OPTIONS_LIBRARIES
  ${_boost_program_options_root}/usr/lib/libboost_program_options.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_PROGRAM_OPTIONS_INCLUDE_DIRS
  ${_boost_program_options_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_PROGRAM_OPTIONS_DEPENDS RT PTHREAD)

export_lib(BOOST_PROGRAM_OPTIONS)
