get_filename_component(_qt5_dbus_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  QT5_DBUS_LIBRARIES
  ${_qt5_dbus_root}/usr/lib/libQt5DBus.so.5
  CACHE INTERNAL "" FORCE
)

set(
  QT5_DBUS_INCLUDE_DIRS
  ${_qt5_dbus_root}/usr/include
  ${_qt5_dbus_root}/usr/include/qt5
  ${_qt5_dbus_root}/usr/include/qt5/QtDBus
  ${_qt5_dbus_root}/usr/lib/qt5/mkspecs/linux-g++
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(QT5_DBUS_DEPENDS QT5_CORE PTHREAD DBUS-1)

export_lib(QT5_DBUS)
