// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/error2_gt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Error2GT_ref_error
{
public:
  explicit Init_Error2GT_ref_error(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::Error2GT ref_error(::irt_nav_msgs::msg::Error2GT::_ref_error_type arg)
  {
    msg_.ref_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_mode
{
public:
  explicit Init_Error2GT_ref_mode(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_error ref_mode(::irt_nav_msgs::msg::Error2GT::_ref_mode_type arg)
  {
    msg_.ref_mode = std::move(arg);
    return Init_Error2GT_ref_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_vel_std
{
public:
  explicit Init_Error2GT_ref_vel_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_mode ref_vel_std(::irt_nav_msgs::msg::Error2GT::_ref_vel_std_type arg)
  {
    msg_.ref_vel_std = std::move(arg);
    return Init_Error2GT_ref_mode(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_vel
{
public:
  explicit Init_Error2GT_ref_vel(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_vel_std ref_vel(::irt_nav_msgs::msg::Error2GT::_ref_vel_type arg)
  {
    msg_.ref_vel = std::move(arg);
    return Init_Error2GT_ref_vel_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_omega_body_std
{
public:
  explicit Init_Error2GT_omega_body_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_vel omega_body_std(::irt_nav_msgs::msg::Error2GT::_omega_body_std_type arg)
  {
    msg_.omega_body_std = std::move(arg);
    return Init_Error2GT_ref_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_omega_body
{
public:
  explicit Init_Error2GT_omega_body(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_omega_body_std omega_body(::irt_nav_msgs::msg::Error2GT::_omega_body_type arg)
  {
    msg_.omega_body = std::move(arg);
    return Init_Error2GT_omega_body_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_vel_ned
{
public:
  explicit Init_Error2GT_vel_ned(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_omega_body vel_ned(::irt_nav_msgs::msg::Error2GT::_vel_ned_type arg)
  {
    msg_.vel_ned = std::move(arg);
    return Init_Error2GT_omega_body(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_gyro_bias_std
{
public:
  explicit Init_Error2GT_gyro_bias_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_vel_ned gyro_bias_std(::irt_nav_msgs::msg::Error2GT::_gyro_bias_std_type arg)
  {
    msg_.gyro_bias_std = std::move(arg);
    return Init_Error2GT_vel_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_acc_bias_std
{
public:
  explicit Init_Error2GT_acc_bias_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_gyro_bias_std acc_bias_std(::irt_nav_msgs::msg::Error2GT::_acc_bias_std_type arg)
  {
    msg_.acc_bias_std = std::move(arg);
    return Init_Error2GT_gyro_bias_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_gyro_bias
{
public:
  explicit Init_Error2GT_gyro_bias(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_acc_bias_std gyro_bias(::irt_nav_msgs::msg::Error2GT::_gyro_bias_type arg)
  {
    msg_.gyro_bias = std::move(arg);
    return Init_Error2GT_acc_bias_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_acc_bias
{
public:
  explicit Init_Error2GT_acc_bias(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_gyro_bias acc_bias(::irt_nav_msgs::msg::Error2GT::_acc_bias_type arg)
  {
    msg_.acc_bias = std::move(arg);
    return Init_Error2GT_gyro_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_cbd
{
public:
  explicit Init_Error2GT_ref_cbd(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_acc_bias ref_cbd(::irt_nav_msgs::msg::Error2GT::_ref_cbd_type arg)
  {
    msg_.ref_cbd = std::move(arg);
    return Init_Error2GT_acc_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_cbd_std
{
public:
  explicit Init_Error2GT_cbd_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_cbd cbd_std(::irt_nav_msgs::msg::Error2GT::_cbd_std_type arg)
  {
    msg_.cbd_std = std::move(arg);
    return Init_Error2GT_ref_cbd(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_cbd
{
public:
  explicit Init_Error2GT_cbd(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_cbd_std cbd(::irt_nav_msgs::msg::Error2GT::_cbd_type arg)
  {
    msg_.cbd = std::move(arg);
    return Init_Error2GT_cbd_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_pitch_roll_std
{
public:
  explicit Init_Error2GT_ref_pitch_roll_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_cbd ref_pitch_roll_std(::irt_nav_msgs::msg::Error2GT::_ref_pitch_roll_std_type arg)
  {
    msg_.ref_pitch_roll_std = std::move(arg);
    return Init_Error2GT_cbd(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_pitch_roll
{
public:
  explicit Init_Error2GT_ref_pitch_roll(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_pitch_roll_std ref_pitch_roll(::irt_nav_msgs::msg::Error2GT::_ref_pitch_roll_type arg)
  {
    msg_.ref_pitch_roll = std::move(arg);
    return Init_Error2GT_ref_pitch_roll_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_yaw_std
{
public:
  explicit Init_Error2GT_ref_yaw_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_pitch_roll ref_yaw_std(::irt_nav_msgs::msg::Error2GT::_ref_yaw_std_type arg)
  {
    msg_.ref_yaw_std = std::move(arg);
    return Init_Error2GT_ref_pitch_roll(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_yaw
{
public:
  explicit Init_Error2GT_ref_yaw(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_yaw_std ref_yaw(::irt_nav_msgs::msg::Error2GT::_ref_yaw_type arg)
  {
    msg_.ref_yaw = std::move(arg);
    return Init_Error2GT_ref_yaw_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_roll
{
public:
  explicit Init_Error2GT_roll(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_yaw roll(::irt_nav_msgs::msg::Error2GT::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Error2GT_ref_yaw(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pitch
{
public:
  explicit Init_Error2GT_pitch(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_roll pitch(::irt_nav_msgs::msg::Error2GT::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Error2GT_roll(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_yaw
{
public:
  explicit Init_Error2GT_yaw(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pitch yaw(::irt_nav_msgs::msg::Error2GT::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Error2GT_pitch(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_yaw_error
{
public:
  explicit Init_Error2GT_yaw_error(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_yaw yaw_error(::irt_nav_msgs::msg::Error2GT::_yaw_error_type arg)
  {
    msg_.yaw_error = std::move(arg);
    return Init_Error2GT_yaw(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_llh_std
{
public:
  explicit Init_Error2GT_ref_llh_std(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_yaw_error ref_llh_std(::irt_nav_msgs::msg::Error2GT::_ref_llh_std_type arg)
  {
    msg_.ref_llh_std = std::move(arg);
    return Init_Error2GT_yaw_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_llh
{
public:
  explicit Init_Error2GT_ref_llh(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_llh_std ref_llh(::irt_nav_msgs::msg::Error2GT::_ref_llh_type arg)
  {
    msg_.ref_llh = std::move(arg);
    return Init_Error2GT_ref_llh_std(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_vel_std_ned
{
public:
  explicit Init_Error2GT_vel_std_ned(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_llh vel_std_ned(::irt_nav_msgs::msg::Error2GT::_vel_std_ned_type arg)
  {
    msg_.vel_std_ned = std::move(arg);
    return Init_Error2GT_ref_llh(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_vel_std_ecef
{
public:
  explicit Init_Error2GT_vel_std_ecef(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_vel_std_ned vel_std_ecef(::irt_nav_msgs::msg::Error2GT::_vel_std_ecef_type arg)
  {
    msg_.vel_std_ecef = std::move(arg);
    return Init_Error2GT_vel_std_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pose_std_ned
{
public:
  explicit Init_Error2GT_pose_std_ned(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_vel_std_ecef pose_std_ned(::irt_nav_msgs::msg::Error2GT::_pose_std_ned_type arg)
  {
    msg_.pose_std_ned = std::move(arg);
    return Init_Error2GT_vel_std_ecef(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pose_std_ecef
{
public:
  explicit Init_Error2GT_pose_std_ecef(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pose_std_ned pose_std_ecef(::irt_nav_msgs::msg::Error2GT::_pose_std_ecef_type arg)
  {
    msg_.pose_std_ecef = std::move(arg);
    return Init_Error2GT_pose_std_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_vel_3d_error
{
public:
  explicit Init_Error2GT_vel_3d_error(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pose_std_ecef vel_3d_error(::irt_nav_msgs::msg::Error2GT::_vel_3d_error_type arg)
  {
    msg_.vel_3d_error = std::move(arg);
    return Init_Error2GT_pose_std_ecef(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_vel_2d_error
{
public:
  explicit Init_Error2GT_vel_2d_error(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_vel_3d_error vel_2d_error(::irt_nav_msgs::msg::Error2GT::_vel_2d_error_type arg)
  {
    msg_.vel_2d_error = std::move(arg);
    return Init_Error2GT_vel_3d_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_3d_error_ecef
{
public:
  explicit Init_Error2GT_pos_3d_error_ecef(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_vel_2d_error pos_3d_error_ecef(::irt_nav_msgs::msg::Error2GT::_pos_3d_error_ecef_type arg)
  {
    msg_.pos_3d_error_ecef = std::move(arg);
    return Init_Error2GT_vel_2d_error(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_2d_error_ecef
{
public:
  explicit Init_Error2GT_pos_2d_error_ecef(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_3d_error_ecef pos_2d_error_ecef(::irt_nav_msgs::msg::Error2GT::_pos_2d_error_ecef_type arg)
  {
    msg_.pos_2d_error_ecef = std::move(arg);
    return Init_Error2GT_pos_3d_error_ecef(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_3d_error_geographic
{
public:
  explicit Init_Error2GT_pos_3d_error_geographic(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_2d_error_ecef pos_3d_error_geographic(::irt_nav_msgs::msg::Error2GT::_pos_3d_error_geographic_type arg)
  {
    msg_.pos_3d_error_geographic = std::move(arg);
    return Init_Error2GT_pos_2d_error_ecef(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_2d_error_geographic
{
public:
  explicit Init_Error2GT_pos_2d_error_geographic(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_3d_error_geographic pos_2d_error_geographic(::irt_nav_msgs::msg::Error2GT::_pos_2d_error_geographic_type arg)
  {
    msg_.pos_2d_error_geographic = std::move(arg);
    return Init_Error2GT_pos_3d_error_geographic(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_3d_error_body
{
public:
  explicit Init_Error2GT_pos_3d_error_body(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_2d_error_geographic pos_3d_error_body(::irt_nav_msgs::msg::Error2GT::_pos_3d_error_body_type arg)
  {
    msg_.pos_3d_error_body = std::move(arg);
    return Init_Error2GT_pos_2d_error_geographic(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_2d_error_body
{
public:
  explicit Init_Error2GT_pos_2d_error_body(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_3d_error_body pos_2d_error_body(::irt_nav_msgs::msg::Error2GT::_pos_2d_error_body_type arg)
  {
    msg_.pos_2d_error_body = std::move(arg);
    return Init_Error2GT_pos_3d_error_body(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_1d_error_body
{
public:
  explicit Init_Error2GT_pos_1d_error_body(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_2d_error_body pos_1d_error_body(::irt_nav_msgs::msg::Error2GT::_pos_1d_error_body_type arg)
  {
    msg_.pos_1d_error_body = std::move(arg);
    return Init_Error2GT_pos_2d_error_body(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_3d_error_ned
{
public:
  explicit Init_Error2GT_pos_3d_error_ned(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_1d_error_body pos_3d_error_ned(::irt_nav_msgs::msg::Error2GT::_pos_3d_error_ned_type arg)
  {
    msg_.pos_3d_error_ned = std::move(arg);
    return Init_Error2GT_pos_1d_error_body(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_2d_error_ned
{
public:
  explicit Init_Error2GT_pos_2d_error_ned(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_3d_error_ned pos_2d_error_ned(::irt_nav_msgs::msg::Error2GT::_pos_2d_error_ned_type arg)
  {
    msg_.pos_2d_error_ned = std::move(arg);
    return Init_Error2GT_pos_3d_error_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_pos_1d_error_ned
{
public:
  explicit Init_Error2GT_pos_1d_error_ned(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_2d_error_ned pos_1d_error_ned(::irt_nav_msgs::msg::Error2GT::_pos_1d_error_ned_type arg)
  {
    msg_.pos_1d_error_ned = std::move(arg);
    return Init_Error2GT_pos_2d_error_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_tow
{
public:
  explicit Init_Error2GT_tow(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_pos_1d_error_ned tow(::irt_nav_msgs::msg::Error2GT::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_Error2GT_pos_1d_error_ned(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_tow_after
{
public:
  explicit Init_Error2GT_ref_tow_after(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_tow ref_tow_after(::irt_nav_msgs::msg::Error2GT::_ref_tow_after_type arg)
  {
    msg_.ref_tow_after = std::move(arg);
    return Init_Error2GT_tow(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_ref_tow_before
{
public:
  explicit Init_Error2GT_ref_tow_before(::irt_nav_msgs::msg::Error2GT & msg)
  : msg_(msg)
  {}
  Init_Error2GT_ref_tow_after ref_tow_before(::irt_nav_msgs::msg::Error2GT::_ref_tow_before_type arg)
  {
    msg_.ref_tow_before = std::move(arg);
    return Init_Error2GT_ref_tow_after(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

class Init_Error2GT_header
{
public:
  Init_Error2GT_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error2GT_ref_tow_before header(::irt_nav_msgs::msg::Error2GT::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Error2GT_ref_tow_before(msg_);
  }

private:
  ::irt_nav_msgs::msg::Error2GT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::Error2GT>()
{
  return irt_nav_msgs::msg::builder::Init_Error2GT_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ERROR2_GT__BUILDER_HPP_
