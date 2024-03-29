// Generated by gencpp from file open_manipulator_msgs/KillManipulatorServiceRequest.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_KILLMANIPULATORSERVICEREQUEST_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_KILLMANIPULATORSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace open_manipulator_msgs
{
template <class ContainerAllocator>
struct KillManipulatorServiceRequest_
{
  typedef KillManipulatorServiceRequest_<ContainerAllocator> Type;

  KillManipulatorServiceRequest_()
    : KillManipul(false)  {
    }
  KillManipulatorServiceRequest_(const ContainerAllocator& _alloc)
    : KillManipul(false)  {
  (void)_alloc;
    }



   typedef uint8_t _KillManipul_type;
  _KillManipul_type KillManipul;





  typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct KillManipulatorServiceRequest_

typedef ::open_manipulator_msgs::KillManipulatorServiceRequest_<std::allocator<void> > KillManipulatorServiceRequest;

typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceRequest > KillManipulatorServiceRequestPtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceRequest const> KillManipulatorServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator1> & lhs, const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.KillManipul == rhs.KillManipul;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator1> & lhs, const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9a01135ee4671c8756692e8e401a879e";
  }

  static const char* value(const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9a01135ee4671c87ULL;
  static const uint64_t static_value2 = 0x56692e8e401a879eULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/KillManipulatorServiceRequest";
  }

  static const char* value(const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool KillManipul\n"
;
  }

  static const char* value(const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.KillManipul);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KillManipulatorServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::KillManipulatorServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "KillManipul: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.KillManipul);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_KILLMANIPULATORSERVICEREQUEST_H
