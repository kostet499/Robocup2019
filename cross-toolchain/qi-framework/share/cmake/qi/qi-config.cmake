# This is an autogenerated file. Do not edit

get_filename_component(_cur_dir ${CMAKE_CURRENT_LIST_FILE} PATH)
set(_root_dir "${_cur_dir}/../../../")
get_filename_component(ROOT_DIR ${_root_dir} ABSOLUTE)

 
set(QI_INCLUDE_DIRS "${ROOT_DIR}/include;" CACHE STRING "" FORCE)
mark_as_advanced(QI_INCLUDE_DIRS)
   
set(QI_LIBRARIES
  ${ROOT_DIR}/lib/libqi.so
  CACHE STRING "" FORCE)

mark_as_advanced(QI_LIBRARIES)
 
set(QI_PACKAGE_FOUND TRUE CACHE INTERNAL "" FORCE)
 
set(QI_DEPENDS "BOOST;BOOST_ATOMIC;BOOST_DATE_TIME;BOOST_FILESYSTEM;BOOST_REGEX;BOOST_PROGRAM_OPTIONS;OPENSSL;ZLIB;BOOST_LOCALE;BOOST_THREAD;BOOST_CHRONO;BOOST_SYSTEM;ICU;SYSTEMD;XZ_UTILS;PTHREAD;DL;RT" CACHE INTERNAL "" FORCE)
 