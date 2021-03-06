/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/hector/indigo/stacks/hector/monstertruck/monstertruck_msgs/srv/LookAt.srv */
#ifndef MONSTERTRUCK_MSGS_SERVICE_LOOKAT_H
#define MONSTERTRUCK_MSGS_SERVICE_LOOKAT_H
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

#include "ros/service_traits.h"

#include "geometry_msgs/PointStamped.h"



namespace monstertruck_msgs
{
template <class ContainerAllocator>
struct LookAtRequest_ {
  typedef LookAtRequest_<ContainerAllocator> Type;

  LookAtRequest_()
  : point()
  , duration()
  {
  }

  LookAtRequest_(const ContainerAllocator& _alloc)
  : point(_alloc)
  , duration()
  {
  }

  typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _point_type;
   ::geometry_msgs::PointStamped_<ContainerAllocator>  point;

  typedef ros::Duration _duration_type;
  ros::Duration duration;


  typedef boost::shared_ptr< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct LookAtRequest
typedef  ::monstertruck_msgs::LookAtRequest_<std::allocator<void> > LookAtRequest;

typedef boost::shared_ptr< ::monstertruck_msgs::LookAtRequest> LookAtRequestPtr;
typedef boost::shared_ptr< ::monstertruck_msgs::LookAtRequest const> LookAtRequestConstPtr;



template <class ContainerAllocator>
struct LookAtResponse_ {
  typedef LookAtResponse_<ContainerAllocator> Type;

  LookAtResponse_()
  {
  }

  LookAtResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct LookAtResponse
typedef  ::monstertruck_msgs::LookAtResponse_<std::allocator<void> > LookAtResponse;

typedef boost::shared_ptr< ::monstertruck_msgs::LookAtResponse> LookAtResponsePtr;
typedef boost::shared_ptr< ::monstertruck_msgs::LookAtResponse const> LookAtResponseConstPtr;


struct LookAt
{

typedef LookAtRequest Request;
typedef LookAtResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct LookAt
} // namespace monstertruck_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "574e46e9b1544de88826572f80572960";
  }

  static const char* value(const  ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x574e46e9b1544de8ULL;
  static const uint64_t static_value2 = 0x8826572f80572960ULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/LookAtRequest";
  }

  static const char* value(const  ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
geometry_msgs/PointStamped point\n\
\n\
\n\
\n\
duration duration\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PointStamped\n\
# This represents a Point with reference coordinate frame and timestamp\n\
Header header\n\
Point point\n\
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
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/LookAtResponse";
  }

  static const char* value(const  ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::LookAtRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.point);
    stream.next(m.duration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LookAtRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::LookAtResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LookAtResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<monstertruck_msgs::LookAt> {
  static const char* value() 
  {
    return "574e46e9b1544de88826572f80572960";
  }

  static const char* value(const monstertruck_msgs::LookAt&) { return value(); } 
};

template<>
struct DataType<monstertruck_msgs::LookAt> {
  static const char* value() 
  {
    return "monstertruck_msgs/LookAt";
  }

  static const char* value(const monstertruck_msgs::LookAt&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<monstertruck_msgs::LookAtRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "574e46e9b1544de88826572f80572960";
  }

  static const char* value(const monstertruck_msgs::LookAtRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<monstertruck_msgs::LookAtRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/LookAt";
  }

  static const char* value(const monstertruck_msgs::LookAtRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<monstertruck_msgs::LookAtResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "574e46e9b1544de88826572f80572960";
  }

  static const char* value(const monstertruck_msgs::LookAtResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<monstertruck_msgs::LookAtResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/LookAt";
  }

  static const char* value(const monstertruck_msgs::LookAtResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MONSTERTRUCK_MSGS_SERVICE_LOOKAT_H

