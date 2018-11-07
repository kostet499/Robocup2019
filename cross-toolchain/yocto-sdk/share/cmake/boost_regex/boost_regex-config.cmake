get_filename_component(_boost_regex_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_REGEX_LIBRARIES
  ${_boost_regex_root}/usr/lib/libboost_regex.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_REGEX_INCLUDE_DIRS
  ${_boost_regex_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_REGEX_DEPENDS ICU RT PTHREAD)

export_lib(BOOST_REGEX)
