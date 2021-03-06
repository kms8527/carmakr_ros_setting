// Generated by gencpp from file hellocm_msgs/Init.msg
// DO NOT EDIT!


#ifndef HELLOCM_MSGS_MESSAGE_INIT_H
#define HELLOCM_MSGS_MESSAGE_INIT_H

#include <ros/service_traits.h>


#include <hellocm_msgs/InitRequest.h>
#include <hellocm_msgs/InitResponse.h>


namespace hellocm_msgs
{

struct Init
{

typedef InitRequest Request;
typedef InitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Init
} // namespace hellocm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hellocm_msgs::Init > {
  static const char* value()
  {
    return "c39177108282824e55cd272f345a59bb";
  }

  static const char* value(const ::hellocm_msgs::Init&) { return value(); }
};

template<>
struct DataType< ::hellocm_msgs::Init > {
  static const char* value()
  {
    return "hellocm_msgs/Init";
  }

  static const char* value(const ::hellocm_msgs::Init&) { return value(); }
};


// service_traits::MD5Sum< ::hellocm_msgs::InitRequest> should match 
// service_traits::MD5Sum< ::hellocm_msgs::Init > 
template<>
struct MD5Sum< ::hellocm_msgs::InitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hellocm_msgs::Init >::value();
  }
  static const char* value(const ::hellocm_msgs::InitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hellocm_msgs::InitRequest> should match 
// service_traits::DataType< ::hellocm_msgs::Init > 
template<>
struct DataType< ::hellocm_msgs::InitRequest>
{
  static const char* value()
  {
    return DataType< ::hellocm_msgs::Init >::value();
  }
  static const char* value(const ::hellocm_msgs::InitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hellocm_msgs::InitResponse> should match 
// service_traits::MD5Sum< ::hellocm_msgs::Init > 
template<>
struct MD5Sum< ::hellocm_msgs::InitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hellocm_msgs::Init >::value();
  }
  static const char* value(const ::hellocm_msgs::InitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hellocm_msgs::InitResponse> should match 
// service_traits::DataType< ::hellocm_msgs::Init > 
template<>
struct DataType< ::hellocm_msgs::InitResponse>
{
  static const char* value()
  {
    return DataType< ::hellocm_msgs::Init >::value();
  }
  static const char* value(const ::hellocm_msgs::InitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HELLOCM_MSGS_MESSAGE_INIT_H
