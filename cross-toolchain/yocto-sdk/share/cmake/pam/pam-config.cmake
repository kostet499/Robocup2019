get_filename_component(_pam_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  PAM_LIBRARIES
  ${_pam_root}/lib/libpam_misc.so.0
  ${_pam_root}/lib/libpamc.so.0
  ${_pam_root}/lib/libpam.so.0
  CACHE INTERNAL "" FORCE
)

set(
  PAM_INCLUDE_DIRS
  ${_pam_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(PAM_DEPENDS DL)

export_lib(PAM)
