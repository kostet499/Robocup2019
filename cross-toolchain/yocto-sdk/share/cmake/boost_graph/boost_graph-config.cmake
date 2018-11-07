get_filename_component(_boost_graph_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  BOOST_GRAPH_LIBRARIES
  ${_boost_graph_root}/usr/lib/libboost_graph.so
  CACHE INTERNAL "" FORCE
)

set(
  BOOST_GRAPH_INCLUDE_DIRS
  ${_boost_graph_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(BOOST_GRAPH_DEPENDS BOOST_REGEX ICU RT PTHREAD)

export_lib(BOOST_GRAPH)
