// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/CorrevitStatus.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/correvit_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_CorrevitStatus_temperature_ok
{
public:
  explicit Init_CorrevitStatus_temperature_ok(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::CorrevitStatus temperature_ok(::irt_nav_msgs::msg::CorrevitStatus::_temperature_ok_type arg)
  {
    msg_.temperature_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_temperature
{
public:
  explicit Init_CorrevitStatus_temperature(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_temperature_ok temperature(::irt_nav_msgs::msg::CorrevitStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_CorrevitStatus_temperature_ok(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_sensor_id
{
public:
  explicit Init_CorrevitStatus_sensor_id(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_temperature sensor_id(::irt_nav_msgs::msg::CorrevitStatus::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_CorrevitStatus_temperature(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_lamp_current_control
{
public:
  explicit Init_CorrevitStatus_lamp_current_control(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_sensor_id lamp_current_control(::irt_nav_msgs::msg::CorrevitStatus::_lamp_current_control_type arg)
  {
    msg_.lamp_current_control = std::move(arg);
    return Init_CorrevitStatus_sensor_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_lamp_current
{
public:
  explicit Init_CorrevitStatus_lamp_current(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_lamp_current_control lamp_current(::irt_nav_msgs::msg::CorrevitStatus::_lamp_current_type arg)
  {
    msg_.lamp_current = std::move(arg);
    return Init_CorrevitStatus_lamp_current_control(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_head_status
{
public:
  explicit Init_CorrevitStatus_head_status(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_lamp_current head_status(::irt_nav_msgs::msg::CorrevitStatus::_head_status_type arg)
  {
    msg_.head_status = std::move(arg);
    return Init_CorrevitStatus_lamp_current(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_filter_setting
{
public:
  explicit Init_CorrevitStatus_filter_setting(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_head_status filter_setting(::irt_nav_msgs::msg::CorrevitStatus::_filter_setting_type arg)
  {
    msg_.filter_setting = std::move(arg);
    return Init_CorrevitStatus_head_status(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_filter_off_on
{
public:
  explicit Init_CorrevitStatus_filter_off_on(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_filter_setting filter_off_on(::irt_nav_msgs::msg::CorrevitStatus::_filter_off_on_type arg)
  {
    msg_.filter_off_on = std::move(arg);
    return Init_CorrevitStatus_filter_setting(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_direction_mounting
{
public:
  explicit Init_CorrevitStatus_direction_mounting(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_filter_off_on direction_mounting(::irt_nav_msgs::msg::CorrevitStatus::_direction_mounting_type arg)
  {
    msg_.direction_mounting = std::move(arg);
    return Init_CorrevitStatus_filter_off_on(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_direction_motion
{
public:
  explicit Init_CorrevitStatus_direction_motion(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_direction_mounting direction_motion(::irt_nav_msgs::msg::CorrevitStatus::_direction_motion_type arg)
  {
    msg_.direction_motion = std::move(arg);
    return Init_CorrevitStatus_direction_mounting(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_direction_head_valid
{
public:
  explicit Init_CorrevitStatus_direction_head_valid(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_direction_motion direction_head_valid(::irt_nav_msgs::msg::CorrevitStatus::_direction_head_valid_type arg)
  {
    msg_.direction_head_valid = std::move(arg);
    return Init_CorrevitStatus_direction_motion(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_direction_head
{
public:
  explicit Init_CorrevitStatus_direction_head(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_direction_head_valid direction_head(::irt_nav_msgs::msg::CorrevitStatus::_direction_head_type arg)
  {
    msg_.direction_head = std::move(arg);
    return Init_CorrevitStatus_direction_head_valid(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_direction
{
public:
  explicit Init_CorrevitStatus_direction(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_direction_head direction(::irt_nav_msgs::msg::CorrevitStatus::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_CorrevitStatus_direction_head(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_angle_switch_off
{
public:
  explicit Init_CorrevitStatus_angle_switch_off(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_direction angle_switch_off(::irt_nav_msgs::msg::CorrevitStatus::_angle_switch_off_type arg)
  {
    msg_.angle_switch_off = std::move(arg);
    return Init_CorrevitStatus_direction(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_angle_vel_correction
{
public:
  explicit Init_CorrevitStatus_angle_vel_correction(::irt_nav_msgs::msg::CorrevitStatus & msg)
  : msg_(msg)
  {}
  Init_CorrevitStatus_angle_switch_off angle_vel_correction(::irt_nav_msgs::msg::CorrevitStatus::_angle_vel_correction_type arg)
  {
    msg_.angle_vel_correction = std::move(arg);
    return Init_CorrevitStatus_angle_switch_off(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

class Init_CorrevitStatus_header
{
public:
  Init_CorrevitStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CorrevitStatus_angle_vel_correction header(::irt_nav_msgs::msg::CorrevitStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CorrevitStatus_angle_vel_correction(msg_);
  }

private:
  ::irt_nav_msgs::msg::CorrevitStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::CorrevitStatus>()
{
  return irt_nav_msgs::msg::builder::Init_CorrevitStatus_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__BUILDER_HPP_
