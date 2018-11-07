get_filename_component(_archive_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  ARCHIVE_LIBRARIES
  ${_archive_root}/usr/lib/libarchive.so
  CACHE INTERNAL "" FORCE
)

set(
  ARCHIVE_INCLUDE_DIRS
  ${_archive_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(ARCHIVE_DEPENDS OPENSSL ATTR XZ_UTILS BZIP2 XML2 ZLIB)

export_lib(ARCHIVE)
