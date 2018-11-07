get_filename_component(_sqlite_root ${YOCTO_SDK_TARGET_SYSROOT} ABSOLUTE)

set(SQLITE3_LIBRARIES
  ${_sqlite_root}/usr/lib/libsqlite3.so
  CACHE INTERNAL "" FORCE
)

set(SQLITE3_INCLUDE_DIRS
  ${_sqlite_root}/usr/include
  CACHE INTERNAL "" FORCE
)

export_lib(SQLITE3)
