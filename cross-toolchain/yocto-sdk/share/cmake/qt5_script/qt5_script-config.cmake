get_filename_component(_qt5_script_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  QT5_SCRIPT_LIBRARIES
  ${_qt5_script_root}/usr/lib/libQt5Script.so.5
  CACHE INTERNAL "" FORCE
)

set(
  QT5_SCRIPT_INCLUDE_DIRS
  ${_qt5_script_root}/usr/include
  ${_qt5_script_root}/usr/include/qt5
  ${_qt5_script_root}/usr/include/qt5/QtScript
  ${_qt5_script_root}/usr/lib/qt5/mkspecs/linux-g++
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(QT5_SCRIPT_DEPENDS QT5_CORE PTHREAD)

export_lib(QT5_SCRIPT)
