get_filename_component(_raptor2_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
	RAPTOR2_LIBRARIES
	${_raptor2_root}/usr/lib/libraptor2.so
	CACHE INTERNAL "" FORCE
)

set(
	RAPTOR2_INCLUDE_DIRS
	${_raptor2_root}/usr/include/raptor2
	CACHE INTERNAL "" FORCE
)


export_lib(RAPTOR2)
