get_filename_component(_g2o_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(G2O_LIBRARIES
  ${_g2o_root}/usr/lib/libg2o_core.so
  ${_g2o_root}/usr/lib/libg2o_stuff.so
  ${_g2o_root}/usr/lib/libg2o_types_slam3d.so
  ${_g2o_root}/usr/lib/libg2o_solver_csparse.so
  ${_g2o_root}/usr/lib/libg2o_csparse_extension.so
  ${_g2o_root}/usr/lib/libg2o_solver_pcg.so
  ${_g2o_root}/usr/lib/libg2o_ext_csparse.so
  CACHE INTERNAL "" FORCE
)

set(G2O_INCLUDE_DIRS
  ${_g2o_root}/usr/include
  ${_g2o_root}/usr/include/EXTERNAL/csparse
  CACHE INTERNAL "" FORCE
)

export_lib(G2O)


