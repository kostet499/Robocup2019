get_filename_component(_qt5_xml_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  QT5_XML_LIBRARIES
  ${_qt5_xml_root}/usr/lib/libQt5Xml.so.5
  CACHE INTERNAL "" FORCE
)

set(
  QT5_XML_INCLUDE_DIRS
  ${_qt5_xml_root}/usr/include
  ${_qt5_xml_root}/usr/include/qt5
  ${_qt5_xml_root}/usr/include/qt5/QtXml
  ${_qt5_xml_root}/usr/lib/qt5/mkspecs/linux-g++
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(QT5_XML_DEPENDS QT5_CORE)

export_lib(QT5_XML)
