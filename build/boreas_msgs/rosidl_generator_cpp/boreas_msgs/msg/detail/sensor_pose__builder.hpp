// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boreas_msgs:msg/SensorPose.idl
// generated code does not contain a copyright notice

#ifndef BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__BUILDER_HPP_
#define BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boreas_msgs/msg/detail/sensor_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boreas_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorPose_ang_vel_z
{
public:
  explicit Init_SensorPose_ang_vel_z(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  ::boreas_msgs::msg::SensorPose ang_vel_z(::boreas_msgs::msg::SensorPose::_ang_vel_z_type arg)
  {
    msg_.ang_vel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_ang_vel_y
{
public:
  explicit Init_SensorPose_ang_vel_y(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_ang_vel_z ang_vel_y(::boreas_msgs::msg::SensorPose::_ang_vel_y_type arg)
  {
    msg_.ang_vel_y = std::move(arg);
    return Init_SensorPose_ang_vel_z(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_ang_vel_x
{
public:
  explicit Init_SensorPose_ang_vel_x(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_ang_vel_y ang_vel_x(::boreas_msgs::msg::SensorPose::_ang_vel_x_type arg)
  {
    msg_.ang_vel_x = std::move(arg);
    return Init_SensorPose_ang_vel_y(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_heading
{
public:
  explicit Init_SensorPose_heading(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_ang_vel_x heading(::boreas_msgs::msg::SensorPose::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SensorPose_ang_vel_x(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_pitch
{
public:
  explicit Init_SensorPose_pitch(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_heading pitch(::boreas_msgs::msg::SensorPose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SensorPose_heading(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_roll
{
public:
  explicit Init_SensorPose_roll(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_pitch roll(::boreas_msgs::msg::SensorPose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_SensorPose_pitch(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_vel_up
{
public:
  explicit Init_SensorPose_vel_up(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_roll vel_up(::boreas_msgs::msg::SensorPose::_vel_up_type arg)
  {
    msg_.vel_up = std::move(arg);
    return Init_SensorPose_roll(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_vel_east
{
public:
  explicit Init_SensorPose_vel_east(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_vel_up vel_east(::boreas_msgs::msg::SensorPose::_vel_east_type arg)
  {
    msg_.vel_east = std::move(arg);
    return Init_SensorPose_vel_up(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_vel_north
{
public:
  explicit Init_SensorPose_vel_north(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_vel_east vel_north(::boreas_msgs::msg::SensorPose::_vel_north_type arg)
  {
    msg_.vel_north = std::move(arg);
    return Init_SensorPose_vel_east(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_pos_altitude
{
public:
  explicit Init_SensorPose_pos_altitude(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_vel_north pos_altitude(::boreas_msgs::msg::SensorPose::_pos_altitude_type arg)
  {
    msg_.pos_altitude = std::move(arg);
    return Init_SensorPose_vel_north(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_pos_northing
{
public:
  explicit Init_SensorPose_pos_northing(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_pos_altitude pos_northing(::boreas_msgs::msg::SensorPose::_pos_northing_type arg)
  {
    msg_.pos_northing = std::move(arg);
    return Init_SensorPose_pos_altitude(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_pos_easting
{
public:
  explicit Init_SensorPose_pos_easting(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_pos_northing pos_easting(::boreas_msgs::msg::SensorPose::_pos_easting_type arg)
  {
    msg_.pos_easting = std::move(arg);
    return Init_SensorPose_pos_northing(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_gps_timestamp
{
public:
  explicit Init_SensorPose_gps_timestamp(::boreas_msgs::msg::SensorPose & msg)
  : msg_(msg)
  {}
  Init_SensorPose_pos_easting gps_timestamp(::boreas_msgs::msg::SensorPose::_gps_timestamp_type arg)
  {
    msg_.gps_timestamp = std::move(arg);
    return Init_SensorPose_pos_easting(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

class Init_SensorPose_header
{
public:
  Init_SensorPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorPose_gps_timestamp header(::boreas_msgs::msg::SensorPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorPose_gps_timestamp(msg_);
  }

private:
  ::boreas_msgs::msg::SensorPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boreas_msgs::msg::SensorPose>()
{
  return boreas_msgs::msg::builder::Init_SensorPose_header();
}

}  // namespace boreas_msgs

#endif  // BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__BUILDER_HPP_
