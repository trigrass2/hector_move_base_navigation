/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/hector/indigo/stacks/hector/monstertruck/monstertruck_msgs/msg/RawImu.msg */
#ifndef MONSTERTRUCK_MSGS_MESSAGE_RAWIMU_H
#define MONSTERTRUCK_MSGS_MESSAGE_RAWIMU_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace monstertruck_msgs
{
template <class ContainerAllocator>
struct RawImu_ {
  typedef RawImu_<ContainerAllocator> Type;

  RawImu_()
  : header()
  , w_x(0.0)
  , w_y(0.0)
  , w_z(0.0)
  , a_x(0.0)
  , a_y(0.0)
  , a_z(0.0)
  {
  }

  RawImu_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , w_x(0.0)
  , w_y(0.0)
  , w_z(0.0)
  , a_x(0.0)
  , a_y(0.0)
  , a_z(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _w_x_type;
  float w_x;

  typedef float _w_y_type;
  float w_y;

  typedef float _w_z_type;
  float w_z;

  typedef float _a_x_type;
  float a_x;

  typedef float _a_y_type;
  float a_y;

  typedef float _a_z_type;
  float a_z;


  typedef boost::shared_ptr< ::monstertruck_msgs::RawImu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::RawImu_<ContainerAllocator>  const> ConstPtr;
}; // struct RawImu
typedef  ::monstertruck_msgs::RawImu_<std::allocator<void> > RawImu;

typedef boost::shared_ptr< ::monstertruck_msgs::RawImu> RawImuPtr;
typedef boost::shared_ptr< ::monstertruck_msgs::RawImu const> RawImuConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::monstertruck_msgs::RawImu_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::monstertruck_msgs::RawImu_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace monstertruck_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::RawImu_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::RawImu_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::RawImu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "46b8b9dc3bb20946232996e98df291dc";
  }

  static const char* value(const  ::monstertruck_msgs::RawImu_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x46b8b9dc3bb20946ULL;
  static const uint64_t static_value2 = 0x232996e98df291dcULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::RawImu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/RawImu";
  }

  static const char* value(const  ::monstertruck_msgs::RawImu_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::RawImu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32 w_x\n\
float32 w_y\n\
float32 w_z\n\
float32 a_x\n\
float32 a_y\n\
float32 a_z\n\
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
";
  }

  static const char* value(const  ::monstertruck_msgs::RawImu_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::monstertruck_msgs::RawImu_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::monstertruck_msgs::RawImu_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::RawImu_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.w_x);
    stream.next(m.w_y);
    stream.next(m.w_z);
    stream.next(m.a_x);
    stream.next(m.a_y);
    stream.next(m.a_z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RawImu_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::monstertruck_msgs::RawImu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::monstertruck_msgs::RawImu_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "w_x: ";
    Printer<float>::stream(s, indent + "  ", v.w_x);
    s << indent << "w_y: ";
    Printer<float>::stream(s, indent + "  ", v.w_y);
    s << indent << "w_z: ";
    Printer<float>::stream(s, indent + "  ", v.w_z);
    s << indent << "a_x: ";
    Printer<float>::stream(s, indent + "  ", v.a_x);
    s << indent << "a_y: ";
    Printer<float>::stream(s, indent + "  ", v.a_y);
    s << indent << "a_z: ";
    Printer<float>::stream(s, indent + "  ", v.a_z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MONSTERTRUCK_MSGS_MESSAGE_RAWIMU_H

