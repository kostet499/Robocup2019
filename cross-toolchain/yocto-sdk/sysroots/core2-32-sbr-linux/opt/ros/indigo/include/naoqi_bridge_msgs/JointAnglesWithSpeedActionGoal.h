// Generated by gencpp from file naoqi_bridge_msgs/JointAnglesWithSpeedActionGoal.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDACTIONGOAL_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <naoqi_bridge_msgs/JointAnglesWithSpeedGoal.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct JointAnglesWithSpeedActionGoal_
{
  typedef JointAnglesWithSpeedActionGoal_<ContainerAllocator> Type;

  JointAnglesWithSpeedActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  JointAnglesWithSpeedActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct JointAnglesWithSpeedActionGoal_

typedef ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<std::allocator<void> > JointAnglesWithSpeedActionGoal;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal > JointAnglesWithSpeedActionGoalPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal const> JointAnglesWithSpeedActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/naoqi-bridge-msgs/0.0.5-0-r0/naoqi_bridge_msgs-release-release-indigo-naoqi_bridge_msgs-0.0.5-0/msg', '/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/naoqi-bridge-msgs/0.0.5-0-r0/build/devel/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b722e9749aa53fc0e8ca7aa12e95efb";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b722e9749aa53fcULL;
  static const uint64_t static_value2 = 0x0e8ca7aa12e95efbULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/JointAnglesWithSpeedActionGoal";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
JointAnglesWithSpeedGoal goal\n\
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
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: naoqi_bridge_msgs/JointAnglesWithSpeedGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal: a registered body pose name\n\
naoqi_bridge_msgs/JointAnglesWithSpeed joint_angles\n\
\n\
================================================================================\n\
MSG: naoqi_bridge_msgs/JointAnglesWithSpeed\n\
Header header\n\
\n\
# A list of joint names, corresponding to their names in the Nao docs.\n\
# This must be either the same lenght of joint_angles or 1 if it's a\n\
# keyword such as 'Body' (for all angles)\n\
string[] joint_names\n\
float32[] joint_angles\n\
\n\
#fraction of max joint velocity [0:1]\n\
float32 speed\n\
\n\
# Absolute angle(=0, default) or relative change\n\
uint8 relative\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointAnglesWithSpeedActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDACTIONGOAL_H