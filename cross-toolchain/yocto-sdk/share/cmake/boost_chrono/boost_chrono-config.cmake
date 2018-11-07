get_filename_component(_boost_chrono_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_CHRONO_LIBRARIES
  ${_boost_chrono_root}/usr/lib/libboost_chrono.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_CHRONO_INCLUDE_DIRS
  ${_boost_chrono_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_CHRONO_DEPENDS BOOST_SYSTEM RT PTHREAD)

export_lib(BOOST_CHRONO)
