// Generated by gencpp from file open_manipulator_msgs/KillManipulatorServiceResponse.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_KILLMANIPULATORSERVICERESPONSE_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_KILLMANIPULATORSERVICERESPONSE_H


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
struct KillManipulatorServiceResponse_
{
  typedef KillManipulatorServiceResponse_<ContainerAllocator> Type;

  KillManipulatorServiceResponse_()
    {
    }
  KillManipulatorServiceResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct KillManipulatorServiceResponse_

typedef ::open_manipulator_msgs::KillManipulatorServiceResponse_<std::allocator<void> > KillManipulatorServiceResponse;

typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceResponse > KillManipulatorServiceResponsePtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::KillManipulatorServiceResponse const> KillManipulatorServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/KillManipulatorServiceResponse";
  }

  static const char* value(const ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KillManipulatorServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::open_manipulator_msgs::KillManipulatorServiceResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_KILLMANIPULATORSERVICERESPONSE_H
