get_filename_component(_boost_unit_test_framework_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_UNIT_TEST_FRAMEWORK_LIBRARIES
  ${_boost_unit_test_framework_root}/usr/lib/libboost_unit_test_framework.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_UNIT_TEST_FRAMEWORK_INCLUDE_DIRS
  ${_boost_unit_test_framework_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_UNIT_TEST_FRAMEWORK_DEPENDS RT PTHREAD)

export_lib(BOOST_UNIT_TEST_FRAMEWORK)
