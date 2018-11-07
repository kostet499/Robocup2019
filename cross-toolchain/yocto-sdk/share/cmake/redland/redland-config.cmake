get_filename_component(_redland_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
	REDLAND_LIBRARIES
	${_redland_root}/usr/lib/librdf.so
	CACHE INTERNAL "" FORCE
)

set(
	REDLAND_INCLUDE_DIRS
	${_redland_root}/usr/include
	CACHE INTERNAL "" FORCE
)


export_lib(REDLAND)
