get_filename_component(_qt5_network_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  QT5_NETWORK_LIBRARIES
  ${_qt5_network_root}/usr/lib/libQt5Network.so.5
  CACHE INTERNAL "" FORCE
)

set(
  QT5_NETWORK_INCLUDE_DIRS
  ${_qt5_network_root}/usr/include
  ${_qt5_network_root}/usr/include/qt5
  ${_qt5_network_root}/usr/include/qt5/QtNetwork
  ${_qt5_network_root}/usr/lib/qt5/mkspecs/linux-g++
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(QT5_NETWORK_DEPENDS QT5_CORE PTHREAD ZLIB OPENSSL)

export_lib(QT5_NETWORK)
