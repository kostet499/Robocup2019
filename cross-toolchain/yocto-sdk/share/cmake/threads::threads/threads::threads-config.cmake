get_filename_component(_threads_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)
set(
  THREADS::THREADS_LIBRARIES
  ${_threads_root}/lib/libpthread.so
  CACHE INTERNAL "" FORCE
)

set(
  THREADS::THREADS_INCLUDE_DIRS
  ${_threads_root}/usr/include
  CACHE INTERNAL "" FORCE
)

export_lib(THREADS::THREADS)

