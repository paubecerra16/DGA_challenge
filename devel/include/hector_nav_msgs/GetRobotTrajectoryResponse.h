// Generated by gencpp from file hector_nav_msgs/GetRobotTrajectoryResponse.msg
// DO NOT EDIT!


#ifndef HECTOR_NAV_MSGS_MESSAGE_GETROBOTTRAJECTORYRESPONSE_H
#define HECTOR_NAV_MSGS_MESSAGE_GETROBOTTRAJECTORYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>

namespace hector_nav_msgs
{
template <class ContainerAllocator>
struct GetRobotTrajectoryResponse_
{
  typedef GetRobotTrajectoryResponse_<ContainerAllocator> Type;

  GetRobotTrajectoryResponse_()
    : trajectory()  {
    }
  GetRobotTrajectoryResponse_(const ContainerAllocator& _alloc)
    : trajectory(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _trajectory_type;
  _trajectory_type trajectory;





  typedef boost::shared_ptr< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetRobotTrajectoryResponse_

typedef ::hector_nav_msgs::GetRobotTrajectoryResponse_<std::allocator<void> > GetRobotTrajectoryResponse;

typedef boost::shared_ptr< ::hector_nav_msgs::GetRobotTrajectoryResponse > GetRobotTrajectoryResponsePtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetRobotTrajectoryResponse const> GetRobotTrajectoryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator1> & lhs, const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator2> & rhs)
{
  return lhs.trajectory == rhs.trajectory;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator1> & lhs, const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hector_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7bd40129c5786fc26351edbd33b8d33";
  }

  static const char* value(const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7bd40129c5786fcULL;
  static const uint64_t static_value2 = 0x26351edbd33b8d33ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hector_nav_msgs/GetRobotTrajectoryResponse";
  }

  static const char* value(const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/Path trajectory\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRobotTrajectoryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hector_nav_msgs::GetRobotTrajectoryResponse_<ContainerAllocator>& v)
  {
    s << indent << "trajectory: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HECTOR_NAV_MSGS_MESSAGE_GETROBOTTRAJECTORYRESPONSE_H
