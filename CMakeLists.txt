cmake_minimum_required(VERSION 3.12)
project(modulecreating)

set(CMAKE_CXX_STANDARD 14)

find_package(qibuild)

INCLUDE(CMakeForceCompiler)
CMAKE_FORCE_C_COMPILER(gcc GNU)
CMAKE_FORCE_CXX_COMPILER(g++ GNU)

option(MODULECREATING_IS_REMOTE "module is compiled as a remote module (ON or OFF)" ON)

set(_srcs
    main.cpp
    mymodule.h
    mymodule.cpp
    )

if(MODULECREATING_IS_REMOTE)
    add_definitions(" -DMODULECREATING_IS_REMOTE")
    qi_create_bin(modulecreating ${_srcs})
else()
    qi_create_lib(modulecreating SHARED ${_srcs} SUBFOLDER naoqi)
endif()

qi_use_lib(modulecreating ALCOMMON ALPROXIES ALTHREAD)
