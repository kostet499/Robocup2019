get_filename_component(_qt5_core_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  QT5_CORE_LIBRARIES
  ${_qt5_core_root}/usr/lib/libQt5Core.so.5
  CACHE INTERNAL "" FORCE
)

set(
  QT5_CORE_INCLUDE_DIRS
  ${_qt5_core_root}/usr/include
  ${_qt5_core_root}/usr/include/qt5
  ${_qt5_core_root}/usr/include/qt5/QtCore
  ${_qt5_core_root}/usr/lib/qt5/mkspecs/linux-g++
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(QT5_CORE_DEPENDS GLIB2 PTHREAD ZLIB DL RT PCRE SYSTEMD XZ_UTILS)

export_lib(QT5_CORE)
