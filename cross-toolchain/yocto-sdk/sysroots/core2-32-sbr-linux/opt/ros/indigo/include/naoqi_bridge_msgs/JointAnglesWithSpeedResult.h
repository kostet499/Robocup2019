// Generated by gencpp from file naoqi_bridge_msgs/JointAnglesWithSpeedResult.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDRESULT_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/JointState.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct JointAnglesWithSpeedResult_
{
  typedef JointAnglesWithSpeedResult_<ContainerAllocator> Type;

  JointAnglesWithSpeedResult_()
    : goal_position()  {
    }
  JointAnglesWithSpeedResult_(const ContainerAllocator& _alloc)
    : goal_position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _goal_position_type;
  _goal_position_type goal_position;




  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> const> ConstPtr;

}; // struct JointAnglesWithSpeedResult_

typedef ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<std::allocator<void> > JointAnglesWithSpeedResult;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult > JointAnglesWithSpeedResultPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult const> JointAnglesWithSpeedResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/naoqi-bridge-msgs/0.0.5-0-r0/naoqi_bridge_msgs-release-release-indigo-naoqi_bridge_msgs-0.0.5-0/msg', '/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/naoqi-bridge-msgs/0.0.5-0-r0/build/devel/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c77b3d9dc137611510fd16c3b792046";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c77b3d9dc137611ULL;
  static const uint64_t static_value2 = 0x510fd16c3b792046ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/JointAnglesWithSpeedResult";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result is the actually reached position\n\
sensor_msgs/JointState goal_position\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointAnglesWithSpeedResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::JointAnglesWithSpeedResult_<ContainerAllocator>& v)
  {
    s << indent << "goal_position: ";
    s << std::endl;
    Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDRESULT_H