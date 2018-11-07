set(TARGET_ARCH "arm")
set(YOCTO_SDK_TARGET_SYSROOT "${CMAKE_CURRENT_LIST_DIR}/../../../../sysroots/cortexa9hf-neon-sbr-linux-gnueabi")
set(YOCTO_SDK_HOST_SYSROOT "${CMAKE_CURRENT_LIST_DIR}/../../../../sysroots/x86_64-naoqisdk-linux")
include("${CMAKE_CURRENT_LIST_DIR}/../yocto-sdk-generic.cmake")
