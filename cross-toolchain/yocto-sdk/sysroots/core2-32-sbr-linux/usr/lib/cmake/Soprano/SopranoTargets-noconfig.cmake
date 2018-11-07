#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Soprano::soprano" for configuration ""
set_property(TARGET Soprano::soprano APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Soprano::soprano PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "Qt5::Core"
  IMPORTED_LOCATION_NOCONFIG "/usr/lib/libsoprano.so.4.3.0"
  IMPORTED_SONAME_NOCONFIG "libsoprano.so.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS Soprano::soprano )
list(APPEND _IMPORT_CHECK_FILES_FOR_Soprano::soprano "/usr/lib/libsoprano.so.4.3.0" )

# Import target "Soprano::sopranoserver" for configuration ""
set_property(TARGET Soprano::sopranoserver APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Soprano::sopranoserver PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "Soprano::soprano;Qt5::Core;Qt5::Network;Qt5::DBus"
  IMPORTED_LOCATION_NOCONFIG "/usr/lib/libsopranoserver.so.1.2.0"
  IMPORTED_SONAME_NOCONFIG "libsopranoserver.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS Soprano::sopranoserver )
list(APPEND _IMPORT_CHECK_FILES_FOR_Soprano::sopranoserver "/usr/lib/libsopranoserver.so.1.2.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
