get_filename_component(_rasqal_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
	RASQAL_LIBRARIES
	${_rasqal_root}/usr/lib/librasqal.so
	CACHE INTERNAL "" FORCE
)

set(
	RASQAL_INCLUDE_DIRS
	${_rasqal_root}/usr/include/rasqal
	CACHE INTERNAL "" FORCE
)

qi_persistent_set(RASQAL_DEPENDS RAPTOR2)
export_lib(RASQAL)
