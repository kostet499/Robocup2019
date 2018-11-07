get_filename_component(_pcre_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

# do not add libpcre.so, which is not a valid ELF shared object
set(
  PCRE_LIBRARIES
  ${_pcre_root}/usr/lib/libpcre.so.1
  ${_pcre_root}/usr/lib/libpcre16.so.0
  CACHE INTERNAL "" FORCE
)

set(
  PCRE_INCLUDE_DIRS
  ${_pcre_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(PCRE_DEPENDS )

export_lib(PCRE)
