# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(message_runtime_CONFIG_INCLUDED)
  return()
endif()
set(message_runtime_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("FALSE" STREQUAL "TRUE")
  set(message_runtime_SOURCE_PREFIX /home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/message-runtime/0.4.12-r0/message_runtime-0.4.12)
  set(message_runtime_DEVEL_PREFIX /home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/message-runtime/0.4.12-r0/build/devel)
  set(message_runtime_INSTALL_PREFIX "")
  set(message_runtime_PREFIX ${message_runtime_DEVEL_PREFIX})
else()
  set(message_runtime_SOURCE_PREFIX "")
  set(message_runtime_DEVEL_PREFIX "")
  set(message_runtime_INSTALL_PREFIX /opt/ros/indigo)
  set(message_runtime_PREFIX ${message_runtime_INSTALL_PREFIX})
endif()

if(CMAKE_CROSSCOMPILING)
  if("FALSE" STREQUAL "TRUE")
    # can not disable host filesystem altogether; otherwise files in src/devel are no longer found
    set(FIND_XXX_LOCATION_OPTION CMAKE_FIND_ROOT_PATH_BOTH)
  else()
    set(FIND_XXX_LOCATION_OPTION)
  endif()
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'message_runtime' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(message_runtime_FOUND_CATKIN_PROJECT TRUE)

if(NOT " " STREQUAL " ")
  set(message_runtime_INCLUDE_DIRS "")
  set(_include_dirs "")
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND CMAKE_CROSSCOMPILING)
      get_filename_component(idir_path ${idir} DIRECTORY)
      get_filename_component(idir_name ${idir} NAME)
      set(include_dir_path "include_dir_path-NOTFOUND")
      # use find_path to locate absolute path nested under potential root path
      find_path(include_dir_path ${idir_name}
        PATHS ${idir_path}
        NO_DEFAULT_PATH ${FIND_XXX_LOCATION_OPTION})
      if(NOT include_dir_path)
        message(FATAL_ERROR "Project 'message_runtime' specifies '${idir}' as an include dir, which is not found.  It does not exist in any of the root filesystems.  Ask the maintainer 'Dirk Thomas <dthomas@osrfoundation.org>' to fix it.")
      endif()
      set(include "${include_dir_path}/${idir_name}")
    elseif(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${message_runtime_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'message_runtime' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  Ask the maintainer 'Dirk Thomas <dthomas@osrfoundation.org>' to fix it.")
      endif()
    else()
      message(FATAL_ERROR "Project 'message_runtime' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/opt/ros/indigo/${idir}'.  Ask the maintainer 'Dirk Thomas <dthomas@osrfoundation.org>' to fix it.")
    endif()
    _list_append_unique(message_runtime_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND message_runtime_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND message_runtime_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library} AND CMAKE_CROSSCOMPILING)
    get_filename_component(lib_path ${library} DIRECTORY)
    get_filename_component(lib_name ${library} NAME)
    set(lib "lib-NOTFOUND")
    # use find_library to locate library given by absolute path nested under potential root path
    find_library(lib ${lib_name}
      PATHS ${lib_path}
      NO_DEFAULT_PATH ${FIND_XXX_LOCATION_OPTION})
    if(NOT lib)
      message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'message_runtime'?  Did you find_package() it before the subdirectory containing its code is included?")
    endif()
    _list_append_unique(message_runtime_LIBRARY_DIRS ${lib_path})
    list(APPEND message_runtime_LIBRARIES ${lib})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND message_runtime_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "lib-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /opt/ros/indigo/lib;/usr/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(message_runtime_LIBRARY_DIRS ${lib_path})
      list(APPEND message_runtime_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'message_runtime'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND message_runtime_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(message_runtime_EXPORTED_TARGETS "")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${message_runtime_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "cpp_common;roscpp_serialization;roscpp_traits;rostime")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 message_runtime_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${message_runtime_dep}_FOUND)
      find_package(${message_runtime_dep} REQUIRED)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${message_runtime_dep} REQUIRED ${depend_list})
  endif()
  _list_append_unique(message_runtime_INCLUDE_DIRS ${${message_runtime_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(message_runtime_LIBRARIES ${message_runtime_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${message_runtime_dep}_LIBRARIES})
  _list_append_deduplicate(message_runtime_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(message_runtime_LIBRARIES ${message_runtime_LIBRARIES})

  _list_append_unique(message_runtime_LIBRARY_DIRS ${${message_runtime_dep}_LIBRARY_DIRS})
  list(APPEND message_runtime_EXPORTED_TARGETS ${${message_runtime_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${message_runtime_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
