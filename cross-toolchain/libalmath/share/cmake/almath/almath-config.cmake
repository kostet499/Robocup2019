# This is an autogenerated file. Do not edit

get_filename_component(_cur_dir ${CMAKE_CURRENT_LIST_FILE} PATH)
set(_root_dir "${_cur_dir}/../../../")
get_filename_component(ROOT_DIR ${_root_dir} ABSOLUTE)

 
set(ALMATH_INCLUDE_DIRS "${ROOT_DIR}/include;" CACHE STRING "" FORCE)
mark_as_advanced(ALMATH_INCLUDE_DIRS)
   
set(ALMATH_LIBRARIES
  ${ROOT_DIR}/lib/libalmath.so
  CACHE STRING "" FORCE)

mark_as_advanced(ALMATH_LIBRARIES)
 
set(ALMATH_PACKAGE_FOUND TRUE CACHE INTERNAL "" FORCE)
 
set(ALMATH_DEPENDS "BOOST;EIGEN3" CACHE INTERNAL "" FORCE)
  
set(SWIG_MODULE_almathswig_DEPS "almath.i;almath/dsp/digitalfilter.h;almath/dsp/pidcontroller.h;almath/types/alaxismask.h;almath/types/alpose2d.h;almath/types/alposition2d.h;almath/types/alposition3d.h;almath/types/alposition6d.h;almath/types/alpositionandvelocity.h;almath/types/alquaternion.h;almath/types/aldisplacement.h;almath/types/alrotation.h;almath/types/alrotation3d.h;almath/types/altransform.h;almath/types/alvelocity3d.h;almath/types/alvelocity6d.h;almath/types/altransformandvelocity6d.h;almath/tools/aldubinscurve.h;almath/tools/almath.h;almath/tools/altransformhelpers.h;almath/tools/altrigonometry.h;almath/tools/avoidfootcollision.h;almath/types/occupancymapparams.h" CACHE INTERNAL "" FORCE)