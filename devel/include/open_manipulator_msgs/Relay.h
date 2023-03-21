// Generated by gencpp from file open_manipulator_msgs/Relay.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_RELAY_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_RELAY_H

#include <ros/service_traits.h>


#include <open_manipulator_msgs/RelayRequest.h>
#include <open_manipulator_msgs/RelayResponse.h>


namespace open_manipulator_msgs
{

struct Relay
{

typedef RelayRequest Request;
typedef RelayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Relay
} // namespace open_manipulator_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::open_manipulator_msgs::Relay > {
  static const char* value()
  {
    return "51f5c35c7d58c3899d91662099bc3872";
  }

  static const char* value(const ::open_manipulator_msgs::Relay&) { return value(); }
};

template<>
struct DataType< ::open_manipulator_msgs::Relay > {
  static const char* value()
  {
    return "open_manipulator_msgs/Relay";
  }

  static const char* value(const ::open_manipulator_msgs::Relay&) { return value(); }
};


// service_traits::MD5Sum< ::open_manipulator_msgs::RelayRequest> should match
// service_traits::MD5Sum< ::open_manipulator_msgs::Relay >
template<>
struct MD5Sum< ::open_manipulator_msgs::RelayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::open_manipulator_msgs::Relay >::value();
  }
  static const char* value(const ::open_manipulator_msgs::RelayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::open_manipulator_msgs::RelayRequest> should match
// service_traits::DataType< ::open_manipulator_msgs::Relay >
template<>
struct DataType< ::open_manipulator_msgs::RelayRequest>
{
  static const char* value()
  {
    return DataType< ::open_manipulator_msgs::Relay >::value();
  }
  static const char* value(const ::open_manipulator_msgs::RelayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::open_manipulator_msgs::RelayResponse> should match
// service_traits::MD5Sum< ::open_manipulator_msgs::Relay >
template<>
struct MD5Sum< ::open_manipulator_msgs::RelayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::open_manipulator_msgs::Relay >::value();
  }
  static const char* value(const ::open_manipulator_msgs::RelayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::open_manipulator_msgs::RelayResponse> should match
// service_traits::DataType< ::open_manipulator_msgs::Relay >
template<>
struct DataType< ::open_manipulator_msgs::RelayResponse>
{
  static const char* value()
  {
    return DataType< ::open_manipulator_msgs::Relay >::value();
  }
  static const char* value(const ::open_manipulator_msgs::RelayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_RELAY_H
