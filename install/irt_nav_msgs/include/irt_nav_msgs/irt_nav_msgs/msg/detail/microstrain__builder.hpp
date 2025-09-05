// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/microstrain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Microstrain_freq_d_vel
{
public:
  explicit Init_Microstrain_freq_d_vel(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::Microstrain freq_d_vel(::irt_nav_msgs::msg::Microstrain::_freq_d_vel_type arg)
  {
    msg_.freq_d_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_freq_d_theta
{
public:
  explicit Init_Microstrain_freq_d_theta(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_freq_d_vel freq_d_theta(::irt_nav_msgs::msg::Microstrain::_freq_d_theta_type arg)
  {
    msg_.freq_d_theta = std::move(arg);
    return Init_Microstrain_freq_d_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_freq_amb
{
public:
  explicit Init_Microstrain_freq_amb(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_freq_d_theta freq_amb(::irt_nav_msgs::msg::Microstrain::_freq_amb_type arg)
  {
    msg_.freq_amb = std::move(arg);
    return Init_Microstrain_freq_d_theta(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_freq_mag
{
public:
  explicit Init_Microstrain_freq_mag(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_freq_amb freq_mag(::irt_nav_msgs::msg::Microstrain::_freq_mag_type arg)
  {
    msg_.freq_mag = std::move(arg);
    return Init_Microstrain_freq_amb(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_freq_gyro
{
public:
  explicit Init_Microstrain_freq_gyro(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_freq_mag freq_gyro(::irt_nav_msgs::msg::Microstrain::_freq_gyro_type arg)
  {
    msg_.freq_gyro = std::move(arg);
    return Init_Microstrain_freq_mag(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_freq_acc
{
public:
  explicit Init_Microstrain_freq_acc(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_freq_gyro freq_acc(::irt_nav_msgs::msg::Microstrain::_freq_acc_type arg)
  {
    msg_.freq_acc = std::move(arg);
    return Init_Microstrain_freq_gyro(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_deltavel_z
{
public:
  explicit Init_Microstrain_deltavel_z(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_freq_acc deltavel_z(::irt_nav_msgs::msg::Microstrain::_deltavel_z_type arg)
  {
    msg_.deltavel_z = std::move(arg);
    return Init_Microstrain_freq_acc(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_deltavel_y
{
public:
  explicit Init_Microstrain_deltavel_y(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_deltavel_z deltavel_y(::irt_nav_msgs::msg::Microstrain::_deltavel_y_type arg)
  {
    msg_.deltavel_y = std::move(arg);
    return Init_Microstrain_deltavel_z(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_deltavel_x
{
public:
  explicit Init_Microstrain_deltavel_x(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_deltavel_y deltavel_x(::irt_nav_msgs::msg::Microstrain::_deltavel_x_type arg)
  {
    msg_.deltavel_x = std::move(arg);
    return Init_Microstrain_deltavel_y(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_deltatheta_z
{
public:
  explicit Init_Microstrain_deltatheta_z(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_deltavel_x deltatheta_z(::irt_nav_msgs::msg::Microstrain::_deltatheta_z_type arg)
  {
    msg_.deltatheta_z = std::move(arg);
    return Init_Microstrain_deltavel_x(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_deltatheta_y
{
public:
  explicit Init_Microstrain_deltatheta_y(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_deltatheta_z deltatheta_y(::irt_nav_msgs::msg::Microstrain::_deltatheta_y_type arg)
  {
    msg_.deltatheta_y = std::move(arg);
    return Init_Microstrain_deltatheta_z(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_deltatheta_x
{
public:
  explicit Init_Microstrain_deltatheta_x(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_deltatheta_y deltatheta_x(::irt_nav_msgs::msg::Microstrain::_deltatheta_x_type arg)
  {
    msg_.deltatheta_x = std::move(arg);
    return Init_Microstrain_deltatheta_y(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_amb
{
public:
  explicit Init_Microstrain_amb(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_deltatheta_x amb(::irt_nav_msgs::msg::Microstrain::_amb_type arg)
  {
    msg_.amb = std::move(arg);
    return Init_Microstrain_deltatheta_x(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_mag_z
{
public:
  explicit Init_Microstrain_mag_z(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_amb mag_z(::irt_nav_msgs::msg::Microstrain::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return Init_Microstrain_amb(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_mag_y
{
public:
  explicit Init_Microstrain_mag_y(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_mag_z mag_y(::irt_nav_msgs::msg::Microstrain::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_Microstrain_mag_z(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_mag_x
{
public:
  explicit Init_Microstrain_mag_x(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_mag_y mag_x(::irt_nav_msgs::msg::Microstrain::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_Microstrain_mag_y(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_gyro_z
{
public:
  explicit Init_Microstrain_gyro_z(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_mag_x gyro_z(::irt_nav_msgs::msg::Microstrain::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_Microstrain_mag_x(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_gyro_y
{
public:
  explicit Init_Microstrain_gyro_y(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_gyro_z gyro_y(::irt_nav_msgs::msg::Microstrain::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_Microstrain_gyro_z(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_gyro_x
{
public:
  explicit Init_Microstrain_gyro_x(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_gyro_y gyro_x(::irt_nav_msgs::msg::Microstrain::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_Microstrain_gyro_y(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_acc_z
{
public:
  explicit Init_Microstrain_acc_z(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_gyro_x acc_z(::irt_nav_msgs::msg::Microstrain::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_Microstrain_gyro_x(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_acc_y
{
public:
  explicit Init_Microstrain_acc_y(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_acc_z acc_y(::irt_nav_msgs::msg::Microstrain::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_Microstrain_acc_z(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_acc_x
{
public:
  explicit Init_Microstrain_acc_x(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_acc_y acc_x(::irt_nav_msgs::msg::Microstrain::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_Microstrain_acc_y(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_data_ok
{
public:
  explicit Init_Microstrain_data_ok(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_acc_x data_ok(::irt_nav_msgs::msg::Microstrain::_data_ok_type arg)
  {
    msg_.data_ok = std::move(arg);
    return Init_Microstrain_acc_x(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_sensor_timestamp
{
public:
  explicit Init_Microstrain_sensor_timestamp(::irt_nav_msgs::msg::Microstrain & msg)
  : msg_(msg)
  {}
  Init_Microstrain_data_ok sensor_timestamp(::irt_nav_msgs::msg::Microstrain::_sensor_timestamp_type arg)
  {
    msg_.sensor_timestamp = std::move(arg);
    return Init_Microstrain_data_ok(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

class Init_Microstrain_header
{
public:
  Init_Microstrain_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Microstrain_sensor_timestamp header(::irt_nav_msgs::msg::Microstrain::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Microstrain_sensor_timestamp(msg_);
  }

private:
  ::irt_nav_msgs::msg::Microstrain msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::Microstrain>()
{
  return irt_nav_msgs::msg::builder::Init_Microstrain_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__MICROSTRAIN__BUILDER_HPP_
