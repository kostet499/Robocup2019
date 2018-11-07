get_filename_component(_boost_math_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_MATH_LIBRARIES
  ${_boost_math_root}/usr/lib/libboost_math_tr1l.so
  ${_boost_math_root}/usr/lib/libboost_math_tr1f.so
  ${_boost_math_root}/usr/lib/libboost_math_tr1.so
  ${_boost_math_root}/usr/lib/libboost_math_c99l.so
  ${_boost_math_root}/usr/lib/libboost_math_c99f.so
  ${_boost_math_root}/usr/lib/libboost_math_c99.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_MATH_INCLUDE_DIRS
  ${_boost_math_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_MATH_DEPENDS RT PTHREAD)

export_lib(BOOST_MATH)
