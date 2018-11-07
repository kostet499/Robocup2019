/*
** qiLang generated file. DO NOT EDIT
*/
#pragma once
#ifndef _QILANG_GEN_INTERFACE_QI_GEOMETRY_GEOMETRY_HPP
#define _QILANG_GEN_INTERFACE_QI_GEOMETRY_GEOMETRY_HPP

#include <qi/types.hpp>
#include <qi/geometry/geometry.hpp>
#include <qi/clock.hpp>
#include <qi/anyobject.hpp>
#include <qi/geometry/api.hpp>

namespace qi {
namespace geometry {
struct Vector3 {
  double x;
  double y;
  double z;
};

}
}

QI_TYPE_STRUCT(::qi::geometry::Vector3, x, y, z)

namespace qi {
  namespace geometry {

struct Quaternion {
  double x;
  double y;
  double z;
  double w;
};

}
}

QI_TYPE_STRUCT(::qi::geometry::Quaternion, x, y, z, w)

namespace qi {
  namespace geometry {

struct Transform {
  ::qi::geometry::Quaternion rotation;
  ::qi::geometry::Vector3 translation;
};

}
}

QI_TYPE_STRUCT(::qi::geometry::Transform, rotation, translation)

namespace qi {
  namespace geometry {

struct TransformTime {
  ::qi::geometry::Transform transform;
  qi::ClockTimePoint time;
};

}
}

QI_TYPE_STRUCT(::qi::geometry::TransformTime, transform, time)

namespace qi {
  namespace geometry {

}
}

#endif
