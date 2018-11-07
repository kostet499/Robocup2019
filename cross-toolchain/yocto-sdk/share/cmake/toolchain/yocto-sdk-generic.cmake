## Copyright (C) 2016 Softbank robotics

# CMake toolchain file to cross compile with Yocto SDK
set(YOCTO_SDK_QIBUILD_CMAKE "${CMAKE_CURRENT_LIST_DIR}/../../../share/cmake")

##
# Utility macros
#espace space (this allow ctc path with space)
macro(set_escaped name)
  string(REPLACE " " "\\ " ${name} ${ARGN})
endmacro()
#double!
macro(set_escaped2 name)
  string(REPLACE " " "\\\\ " ${name} ${ARGN})
endmacro()

set(TARGET_TUPLE "${TARGET_ARCH}-sbr-linux")

##
# Define the target...
set(CMAKE_CROSSCOMPILING   ON)
set(CMAKE_SYSTEM_NAME      "Linux")
set(CMAKE_SYSTEM_PROCESSOR "${TARGET_ARCH}")
set(CMAKE_EXECUTABLE_FORMAT "ELF")

##
# Probe the build/host system...
set(_BUILD_EXT "")
# sanity checks/host detection
if(WIN32)
  if(MSVC)
    # Visual studio
    message(FATAL_ERROR "Host not suppported")
  else()
    # mingw32
    set(_BUILD_EXT ".exe")
  endif()
else()
  if(APPLE)
    # Mac OS X (assume 64bit architecture)
    set(_BUILD_EXT "")
  else()
    # Linux
    set(_BUILD_EXT "")
  endif()
endif()

set(I_AM_A_ROBOT ON CACHE BOOL "this is always defined when we target a robot (valid values: ATOM)" FORCE)
set(WITH_OCTOMAP ON CACHE BOOL "" FORCE)

# add the sysroot location to the CMAKE_PREFIX_PATH to correctly find
# libraries and headers coming with the cross-compiler
if(NOT DEFINED CMAKE_PREFIX_PATH)
  set(CMAKE_PREFIX_PATH)
endif()
list(APPEND CMAKE_PREFIX_PATH "${YOCTO_SDK_TARGET_SYSROOT}")

set(OCTOMAP_DIR "${YOCTO_SDK_QIBUILD_CMAKE}/octomap")
set(CONSOLE_BRIDGE_DIR "${YOCTO_SDK_QIBUILD_CMAKE}/console_bridge")
# root of the cross compiled filesystem
# should be set but we do find_path in each module outside this folder !!!!
if(NOT CMAKE_FIND_ROOT_PATH)
  set(CMAKE_FIND_ROOT_PATH)
endif()
list(INSERT CMAKE_FIND_ROOT_PATH 0  "${YOCTO_SDK_TARGET_SYSROOT}")

# search for programs in the build host directories
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(CMAKE_FIND_ROOT_PATH ${CMAKE_FIND_ROOT_PATH} CACHE INTERNAL "" FORCE)

set(CMAKE_C_COMPILER "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-gcc${_BUILD_EXT}")
set(CMAKE_CXX_COMPILER "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-g++${_BUILD_EXT}")

set(CMAKE_LINKER  "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-ld${_BUILD_EXT}"      CACHE FILEPATH "" FORCE)
set(CMAKE_AR      "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-ar${_BUILD_EXT}"      CACHE FILEPATH "" FORCE)
set(CMAKE_RANLIB  "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-ranlib${_BUILD_EXT}"  CACHE FILEPATH "" FORCE)
set(CMAKE_NM      "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-nm${_BUILD_EXT}"      CACHE FILEPATH "" FORCE)
set(CMAKE_OBJCOPY "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-objcopy${_BUILD_EXT}" CACHE FILEPATH "" FORCE)
set(CMAKE_OBJDUMP "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-objdump${_BUILD_EXT}" CACHE FILEPATH "" FORCE)
set(CMAKE_STRIP   "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-strip${_BUILD_EXT}"   CACHE FILEPATH "" FORCE)

# If ccache is found, just use it:)
find_program(CCACHE "ccache")
if (CCACHE)
  message( STATUS "Using ccache")
endif(CCACHE)

if (CCACHE AND NOT FORCE_NO_CCACHE)
  set(CMAKE_C_COMPILER                 "${CCACHE}" CACHE FILEPATH "" FORCE)
  set(CMAKE_CXX_COMPILER               "${CCACHE}" CACHE FILEPATH "" FORCE)
  set_escaped2(CMAKE_C_COMPILER_ARG1   "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-gcc${_BUILD_EXT}")
  set_escaped2(CMAKE_CXX_COMPILER_ARG1 "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-g++${_BUILD_EXT}")
else(CCACHE AND NOT FORCE_NO_CCACHE)
  set_escaped(CMAKE_C_COMPILER         "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-gcc${_BUILD_EXT}")
  set_escaped(CMAKE_CXX_COMPILER       "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/${TARGET_TUPLE}/${TARGET_TUPLE}-g++${_BUILD_EXT}")
endif(CCACHE AND NOT FORCE_NO_CCACHE)

##
# Small hacks for qt: do not use the qmake from the system,
# force path to moc and rcc
set(QT_USE_QMAKE FALSE CACHE INTERNAL "" FORCE)

set(OE_QMAKE_PATH_EXTERNAL_HOST_BINS "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/qt5/")

if(NOT TARGET Qt5::moc)
  add_executable(Qt5::moc IMPORTED)
  set_target_properties(Qt5::moc PROPERTIES
    IMPORTED_LOCATION "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/qt5/moc${_BUILD_EXT}")
endif()
if(NOT TARGET Qt5::rcc)
  add_executable(Qt5::rcc IMPORTED)
  set_target_properties(Qt5::rcc PROPERTIES
    IMPORTED_LOCATION "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/qt5/rcc${_BUILD_EXT}")
endif()

##
# Set pkg-config for cross-compilation
set(PKG_CONFIG_EXECUTABLE  "${YOCTO_SDK_HOST_SYSROOT}/usr/bin/pkg-config" CACHE INTERNAL "" FORCE)

##
# Set target flags
set_escaped(YOCTO_SDK_HOST_SYSROOT   ${YOCTO_SDK_HOST_SYSROOT})
set_escaped(YOCTO_SDK_TARGET_SYSROOT   ${YOCTO_SDK_TARGET_SYSROOT})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DI_AM_A_ROBOT")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --sysroot ${YOCTO_SDK_TARGET_SYSROOT}/")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -fomit-frame-pointer")

if(WITH_BREAKPAD)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -ggdb -gdwarf-2")
endif()

if("${TARGET_ARCH}" STREQUAL "i686")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -finline-functions-called-once -finline-small-functions")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -falign-functions -falign-labels -falign-loops -falign-jumps")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -freorder-blocks -freorder-blocks-and-partition -freorder-functions")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -faggressive-loop-optimizations -ftree-vectorize -fpredictive-commoning")
elseif("${TARGET_ARCH}" STREQUAL "arm")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=armv7-a -marm -mfpu=neon  -mfloat-abi=hard -mcpu=cortex-a9")
endif()

set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}" CACHE INTERNAL "")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -std=gnu++11 -fPIC" CACHE INTERNAL "")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--as-needed,--sysroot,${YOCTO_SDK_TARGET_SYSROOT}/" CACHE INTERNAL "")
set(CMAKE_MODULE_LINKER_FLAGS "-Wl,--as-needed,--sysroot,${YOCTO_SDK_TARGET_SYSROOT}/" CACHE INTERNAL "")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--as-needed,--sysroot,${YOCTO_SDK_TARGET_SYSROOT}/" CACHE INTERNAL "")

##
# Make sure we don't have to relink binaries when we cross-compile
set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)

set(QI_TOOLCHAIN_VERSION "Yocto SDK 3.3.7")
