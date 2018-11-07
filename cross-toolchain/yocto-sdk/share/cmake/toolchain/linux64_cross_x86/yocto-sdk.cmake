set(TARGET_ARCH "i686")
set(YOCTO_SDK_TARGET_SYSROOT "${CMAKE_CURRENT_LIST_DIR}/../../../../sysroots/core2-32-sbr-linux")
set(YOCTO_SDK_HOST_SYSROOT "${CMAKE_CURRENT_LIST_DIR}/../../../../sysroots/x86_64-naoqisdk-linux")
include("${CMAKE_CURRENT_LIST_DIR}/../yocto-sdk-generic.cmake")
