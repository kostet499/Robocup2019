get_filename_component(_python_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  PYTHON_LIBRARIES
  ${_python_root}/usr/lib/libpython2.7.so
  CACHE INTERNAL "" FORCE
)

set(
  PYTHON_INCLUDE_DIRS
  ${_python_root}/usr/include
  ${_python_root}/usr/include/python2.7
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(PYTHON_DEPENDS PTHREAD DL)

export_lib(PYTHON)
