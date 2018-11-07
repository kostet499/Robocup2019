# This is an autogenerated file. Do not edit

get_filename_component(_cur_dir ${CMAKE_CURRENT_LIST_FILE} PATH)
set(_root_dir "${_cur_dir}/../../../")
get_filename_component(ROOT_DIR ${_root_dir} ABSOLUTE)

 
set(ALVALUE_INCLUDE_DIRS "${ROOT_DIR}/include;" CACHE STRING "" FORCE)
mark_as_advanced(ALVALUE_INCLUDE_DIRS)
   
set(ALVALUE_LIBRARIES
  ${ROOT_DIR}/lib/libalvalue.so
  CACHE STRING "" FORCE)

mark_as_advanced(ALVALUE_LIBRARIES)
 
set(ALVALUE_PACKAGE_FOUND TRUE CACHE INTERNAL "" FORCE)
 
set(ALVALUE_DEPENDS "ALERROR;QI;BOOST;BOOST_ATOMIC;BOOST_DATE_TIME;BOOST_FILESYSTEM;BOOST_REGEX;BOOST_PROGRAM_OPTIONS;OPENSSL;ZLIB;BOOST_LOCALE;BOOST_THREAD;BOOST_CHRONO;BOOST_SYSTEM;ICU;SYSTEMD;XZ_UTILS;PTHREAD;DL;RT" CACHE INTERNAL "" FORCE)
 