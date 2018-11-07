get_filename_component(_ffi_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  FFI_LIBRARIES
  ${_ffi_root}/usr/lib/libffi.so
  CACHE INTERNAL "" FORCE
)

set(
  FFI_INCLUDE_DIRS
  ${_ffi_root}/usr/lib/libffi-3.2.1/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(FFI_DEPENDS )

export_lib(FFI)
