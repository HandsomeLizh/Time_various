// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/dumper_odom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_DumperOdom_throttle
{
public:
  explicit Init_DumperOdom_throttle(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::DumperOdom throttle(::irt_nav_msgs::msg::DumperOdom::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_steering_switch
{
public:
  explicit Init_DumperOdom_steering_switch(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_throttle steering_switch(::irt_nav_msgs::msg::DumperOdom::_steering_switch_type arg)
  {
    msg_.steering_switch = std::move(arg);
    return Init_DumperOdom_throttle(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_steering_rate
{
public:
  explicit Init_DumperOdom_steering_rate(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_steering_switch steering_rate(::irt_nav_msgs::msg::DumperOdom::_steering_rate_type arg)
  {
    msg_.steering_rate = std::move(arg);
    return Init_DumperOdom_steering_switch(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_steering_angle
{
public:
  explicit Init_DumperOdom_steering_angle(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_steering_rate steering_angle(::irt_nav_msgs::msg::DumperOdom::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_DumperOdom_steering_rate(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_horn
{
public:
  explicit Init_DumperOdom_horn(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_steering_angle horn(::irt_nav_msgs::msg::DumperOdom::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return Init_DumperOdom_steering_angle(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_handbreak
{
public:
  explicit Init_DumperOdom_handbreak(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_horn handbreak(::irt_nav_msgs::msg::DumperOdom::_handbreak_type arg)
  {
    msg_.handbreak = std::move(arg);
    return Init_DumperOdom_horn(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_fuel
{
public:
  explicit Init_DumperOdom_fuel(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_handbreak fuel(::irt_nav_msgs::msg::DumperOdom::_fuel_type arg)
  {
    msg_.fuel = std::move(arg);
    return Init_DumperOdom_handbreak(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_engine_speed
{
public:
  explicit Init_DumperOdom_engine_speed(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_fuel engine_speed(::irt_nav_msgs::msg::DumperOdom::_engine_speed_type arg)
  {
    msg_.engine_speed = std::move(arg);
    return Init_DumperOdom_fuel(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_direction_value
{
public:
  explicit Init_DumperOdom_direction_value(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_engine_speed direction_value(::irt_nav_msgs::msg::DumperOdom::_direction_value_type arg)
  {
    msg_.direction_value = std::move(arg);
    return Init_DumperOdom_engine_speed(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_brake
{
public:
  explicit Init_DumperOdom_brake(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_direction_value brake(::irt_nav_msgs::msg::DumperOdom::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_DumperOdom_direction_value(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_boost
{
public:
  explicit Init_DumperOdom_boost(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_brake boost(::irt_nav_msgs::msg::DumperOdom::_boost_type arg)
  {
    msg_.boost = std::move(arg);
    return Init_DumperOdom_brake(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_bin_tilt
{
public:
  explicit Init_DumperOdom_bin_tilt(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_boost bin_tilt(::irt_nav_msgs::msg::DumperOdom::_bin_tilt_type arg)
  {
    msg_.bin_tilt = std::move(arg);
    return Init_DumperOdom_boost(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_bin_position
{
public:
  explicit Init_DumperOdom_bin_position(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_bin_tilt bin_position(::irt_nav_msgs::msg::DumperOdom::_bin_position_type arg)
  {
    msg_.bin_position = std::move(arg);
    return Init_DumperOdom_bin_tilt(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_wheelspeed_count_rr
{
public:
  explicit Init_DumperOdom_wheelspeed_count_rr(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_bin_position wheelspeed_count_rr(::irt_nav_msgs::msg::DumperOdom::_wheelspeed_count_rr_type arg)
  {
    msg_.wheelspeed_count_rr = std::move(arg);
    return Init_DumperOdom_bin_position(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_wheelspeed_count_rl
{
public:
  explicit Init_DumperOdom_wheelspeed_count_rl(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_wheelspeed_count_rr wheelspeed_count_rl(::irt_nav_msgs::msg::DumperOdom::_wheelspeed_count_rl_type arg)
  {
    msg_.wheelspeed_count_rl = std::move(arg);
    return Init_DumperOdom_wheelspeed_count_rr(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_wheelspeed_count_fr
{
public:
  explicit Init_DumperOdom_wheelspeed_count_fr(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_wheelspeed_count_rl wheelspeed_count_fr(::irt_nav_msgs::msg::DumperOdom::_wheelspeed_count_fr_type arg)
  {
    msg_.wheelspeed_count_fr = std::move(arg);
    return Init_DumperOdom_wheelspeed_count_rl(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_wheelspeed_count_fl
{
public:
  explicit Init_DumperOdom_wheelspeed_count_fl(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_wheelspeed_count_fr wheelspeed_count_fl(::irt_nav_msgs::msg::DumperOdom::_wheelspeed_count_fl_type arg)
  {
    msg_.wheelspeed_count_fl = std::move(arg);
    return Init_DumperOdom_wheelspeed_count_fr(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_timestamp
{
public:
  explicit Init_DumperOdom_timestamp(::irt_nav_msgs::msg::DumperOdom & msg)
  : msg_(msg)
  {}
  Init_DumperOdom_wheelspeed_count_fl timestamp(::irt_nav_msgs::msg::DumperOdom::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DumperOdom_wheelspeed_count_fl(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

class Init_DumperOdom_header
{
public:
  Init_DumperOdom_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DumperOdom_timestamp header(::irt_nav_msgs::msg::DumperOdom::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DumperOdom_timestamp(msg_);
  }

private:
  ::irt_nav_msgs::msg::DumperOdom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::DumperOdom>()
{
  return irt_nav_msgs::msg::builder::Init_DumperOdom_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__BUILDER_HPP_
