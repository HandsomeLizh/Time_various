// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/SatelliteData.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/satellite_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_SatelliteData_velocity
{
public:
  explicit Init_SatelliteData_velocity(::irt_nav_msgs::msg::SatelliteData & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::SatelliteData velocity(::irt_nav_msgs::msg::SatelliteData::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

class Init_SatelliteData_position
{
public:
  explicit Init_SatelliteData_position(::irt_nav_msgs::msg::SatelliteData & msg)
  : msg_(msg)
  {}
  Init_SatelliteData_velocity position(::irt_nav_msgs::msg::SatelliteData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SatelliteData_velocity(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

class Init_SatelliteData_elevation
{
public:
  explicit Init_SatelliteData_elevation(::irt_nav_msgs::msg::SatelliteData & msg)
  : msg_(msg)
  {}
  Init_SatelliteData_position elevation(::irt_nav_msgs::msg::SatelliteData::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_SatelliteData_position(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

class Init_SatelliteData_variance
{
public:
  explicit Init_SatelliteData_variance(::irt_nav_msgs::msg::SatelliteData & msg)
  : msg_(msg)
  {}
  Init_SatelliteData_elevation variance(::irt_nav_msgs::msg::SatelliteData::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_SatelliteData_elevation(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

class Init_SatelliteData_factor
{
public:
  explicit Init_SatelliteData_factor(::irt_nav_msgs::msg::SatelliteData & msg)
  : msg_(msg)
  {}
  Init_SatelliteData_variance factor(::irt_nav_msgs::msg::SatelliteData::_factor_type arg)
  {
    msg_.factor = std::move(arg);
    return Init_SatelliteData_variance(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

class Init_SatelliteData_sat
{
public:
  explicit Init_SatelliteData_sat(::irt_nav_msgs::msg::SatelliteData & msg)
  : msg_(msg)
  {}
  Init_SatelliteData_factor sat(::irt_nav_msgs::msg::SatelliteData::_sat_type arg)
  {
    msg_.sat = std::move(arg);
    return Init_SatelliteData_factor(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

class Init_SatelliteData_header
{
public:
  Init_SatelliteData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SatelliteData_sat header(::irt_nav_msgs::msg::SatelliteData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SatelliteData_sat(msg_);
  }

private:
  ::irt_nav_msgs::msg::SatelliteData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::SatelliteData>()
{
  return irt_nav_msgs::msg::builder::Init_SatelliteData_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__BUILDER_HPP_
