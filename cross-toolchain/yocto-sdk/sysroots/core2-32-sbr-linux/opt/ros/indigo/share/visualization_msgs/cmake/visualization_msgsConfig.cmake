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


if(visualization_msgs_CONFIG_INCLUDED)
  return()
endif()
set(visualization_msgs_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("FALSE" STREQUAL "TRUE")
  set(visualization_msgs_SOURCE_PREFIX /home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/visualization-msgs/1.11.9-r0/common_msgs-1.11.9/visualization_msgs)
  set(visualization_msgs_DEVEL_PREFIX /home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/visualization-msgs/1.11.9-r0/build/devel)
  set(visualization_msgs_INSTALL_PREFIX "")
  set(visualization_msgs_PREFIX ${visualization_msgs_DEVEL_PREFIX})
else()
  set(visualization_msgs_SOURCE_PREFIX "")
  set(visualization_msgs_DEVEL_PREFIX "")
  set(visualization_msgs_INSTALL_PREFIX /opt/ros/indigo)
  set(visualization_msgs_PREFIX ${visualization_msgs_INSTALL_PREFIX})
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
  set(_msg "WARNING: package 'visualization_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(visualization_msgs_FOUND_CATKIN_PROJECT TRUE)

if(NOT "include " STREQUAL " ")
  set(visualization_msgs_INCLUDE_DIRS "")
  set(_include_dirs "include")
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
        message(FATAL_ERROR "Project 'visualization_msgs' specifies '${idir}' as an include dir, which is not found.  It does not exist in any of the root filesystems.  Ask the maintainer 'Tully Foote <tfoote@osrfoundation.org>' to fix it.")
      endif()
      set(include "${include_dir_path}/${idir_name}")
    elseif(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${visualization_msgs_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'visualization_msgs' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  Ask the maintainer 'Tully Foote <tfoote@osrfoundation.org>' to fix it.")
      endif()
    else()
      message(FATAL_ERROR "Project 'visualization_msgs' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/opt/ros/indigo/${idir}'.  Ask the maintainer 'Tully Foote <tfoote@osrfoundation.org>' to fix it.")
    endif()
    _list_append_unique(visualization_msgs_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND visualization_msgs_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND visualization_msgs_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library} AND CMAKE_CROSSCOMPILING)
    get_filename_component(lib_path ${library} DIRECTORY)
    get_filename_component(lib_name ${library} NAME)
    set(lib "lib-NOTFOUND")
    # use find_library to locate library given by absolute path nested under potential root path
    find_library(lib ${lib_name}
      PATHS ${lib_path}
      NO_DEFAULT_PATH ${FIND_XXX_LOCATION_OPTION})
    if(NOT lib)
      message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'visualization_msgs'?  Did you find_package() it before the subdirectory containing its code is included?")
    endif()
    _list_append_unique(visualization_msgs_LIBRARY_DIRS ${lib_path})
    list(APPEND visualization_msgs_LIBRARIES ${lib})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND visualization_msgs_LIBRARIES ${library})
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
      _list_append_unique(visualization_msgs_LIBRARY_DIRS ${lib_path})
      list(APPEND visualization_msgs_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'visualization_msgs'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND visualization_msgs_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(visualization_msgs_EXPORTED_TARGETS "visualization_msgs_generate_messages_cpp;visualization_msgs_generate_messages_lisp;visualization_msgs_generate_messages_py")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${visualization_msgs_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "geometry_msgs;message_runtime;std_msgs")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 visualization_msgs_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${visualization_msgs_dep}_FOUND)
      find_package(${visualization_msgs_dep} REQUIRED)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${visualization_msgs_dep} REQUIRED ${depend_list})
  endif()
  _list_append_unique(visualization_msgs_INCLUDE_DIRS ${${visualization_msgs_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(visualization_msgs_LIBRARIES ${visualization_msgs_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${visualization_msgs_dep}_LIBRARIES})
  _list_append_deduplicate(visualization_msgs_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(visualization_msgs_LIBRARIES ${visualization_msgs_LIBRARIES})

  _list_append_unique(visualization_msgs_LIBRARY_DIRS ${${visualization_msgs_dep}_LIBRARY_DIRS})
  list(APPEND visualization_msgs_EXPORTED_TARGETS ${${visualization_msgs_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "visualization_msgs-msg-extras.cmake")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${visualization_msgs_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
