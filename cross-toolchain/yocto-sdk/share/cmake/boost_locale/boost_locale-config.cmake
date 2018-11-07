get_filename_component(_boost_locale_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_LOCALE_LIBRARIES
  ${_boost_locale_root}/usr/lib/libboost_locale.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_LOCALE_INCLUDE_DIRS
  ${_boost_locale_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_LOCALE_DEPENDS BOOST_THREAD BOOST_CHRONO BOOST_SYSTEM ICU RT PTHREAD)

export_lib(BOOST_LOCALE)
