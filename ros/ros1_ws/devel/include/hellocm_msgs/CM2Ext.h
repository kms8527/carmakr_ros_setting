// Generated by gencpp from file hellocm_msgs/CM2Ext.msg
// DO NOT EDIT!


#ifndef HELLOCM_MSGS_MESSAGE_CM2EXT_H
#define HELLOCM_MSGS_MESSAGE_CM2EXT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace hellocm_msgs
{
template <class ContainerAllocator>
struct CM2Ext_
{
  typedef CM2Ext_<ContainerAllocator> Type;

  CM2Ext_()
    : header()
    , time()
    , cycleno(0)
    , synthdelay(0.0)
    , steer(0.0)
    , accel(0.0)
    , vel()  {
    }
  CM2Ext_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time()
    , cycleno(0)
    , synthdelay(0.0)
    , steer(0.0)
    , accel(0.0)
    , vel(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _time_type;
  _time_type time;

   typedef int64_t _cycleno_type;
  _cycleno_type cycleno;

   typedef double _synthdelay_type;
  _synthdelay_type synthdelay;

   typedef double _steer_type;
  _steer_type steer;

   typedef double _accel_type;
  _accel_type accel;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _vel_type;
  _vel_type vel;





  typedef boost::shared_ptr< ::hellocm_msgs::CM2Ext_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hellocm_msgs::CM2Ext_<ContainerAllocator> const> ConstPtr;

}; // struct CM2Ext_

typedef ::hellocm_msgs::CM2Ext_<std::allocator<void> > CM2Ext;

typedef boost::shared_ptr< ::hellocm_msgs::CM2Ext > CM2ExtPtr;
typedef boost::shared_ptr< ::hellocm_msgs::CM2Ext const> CM2ExtConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hellocm_msgs::CM2Ext_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hellocm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'hellocm_msgs': ['/home/zz/carmaker_ros/ros/ros1_ws/src/hellocm_msgs/msg'], 'std_msgs': ['/opt/ros/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hellocm_msgs::CM2Ext_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hellocm_msgs::CM2Ext_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hellocm_msgs::CM2Ext_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90227dfd2fba850610789b3d8ed2734d";
  }

  static const char* value(const ::hellocm_msgs::CM2Ext_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90227dfd2fba8506ULL;
  static const uint64_t static_value2 = 0x10789b3d8ed2734dULL;
};

template<class ContainerAllocator>
struct DataType< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hellocm_msgs/CM2Ext";
  }

  static const char* value(const ::hellocm_msgs::CM2Ext_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
# Message from CarMaker ROS Node to external ROS Node\n\
#\n\
\n\
# General\n\
Header  header                                 # General ROS Header (optional)\n\
time    time                                   # ROS time when message was sent (optional)\n\
int64   cycleno                                # Cycle number since simulation start (optional)\n\
float64 synthdelay                             # Synthetic delay to check synchronization (optional)\n\
float64 steer\n\
float64 accel\n\
float64[] vel\n\
\n\
\n\
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

  static const char* value(const ::hellocm_msgs::CM2Ext_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time);
      stream.next(m.cycleno);
      stream.next(m.synthdelay);
      stream.next(m.steer);
      stream.next(m.accel);
      stream.next(m.vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CM2Ext_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hellocm_msgs::CM2Ext_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hellocm_msgs::CM2Ext_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time);
    s << indent << "cycleno: ";
    Printer<int64_t>::stream(s, indent + "  ", v.cycleno);
    s << indent << "synthdelay: ";
    Printer<double>::stream(s, indent + "  ", v.synthdelay);
    s << indent << "steer: ";
    Printer<double>::stream(s, indent + "  ", v.steer);
    s << indent << "accel: ";
    Printer<double>::stream(s, indent + "  ", v.accel);
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.vel[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HELLOCM_MSGS_MESSAGE_CM2EXT_H
