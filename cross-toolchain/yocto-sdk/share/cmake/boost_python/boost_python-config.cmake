get_filename_component(_boost_python_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_PYTHON_LIBRARIES
  ${_boost_python_root}/usr/lib/libboost_python.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_PYTHON_INCLUDE_DIRS
  ${_boost_python_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_PYTHON_DEPENDS PYTHON PTHREAD DL RT)

export_lib(BOOST_PYTHON)
