// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/gnss_labeling__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSLabeling_environment
{
public:
  explicit Init_GNSSLabeling_environment(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::GNSSLabeling environment(::irt_nav_msgs::msg::GNSSLabeling::_environment_type arg)
  {
    msg_.environment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_gt_clock_drift
{
public:
  explicit Init_GNSSLabeling_gt_clock_drift(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_environment gt_clock_drift(::irt_nav_msgs::msg::GNSSLabeling::_gt_clock_drift_type arg)
  {
    msg_.gt_clock_drift = std::move(arg);
    return Init_GNSSLabeling_environment(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_gt_clock_bias
{
public:
  explicit Init_GNSSLabeling_gt_clock_bias(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_gt_clock_drift gt_clock_bias(::irt_nav_msgs::msg::GNSSLabeling::_gt_clock_bias_type arg)
  {
    msg_.gt_clock_bias = std::move(arg);
    return Init_GNSSLabeling_gt_clock_drift(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_clock_drift
{
public:
  explicit Init_GNSSLabeling_clock_drift(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_gt_clock_bias clock_drift(::irt_nav_msgs::msg::GNSSLabeling::_clock_drift_type arg)
  {
    msg_.clock_drift = std::move(arg);
    return Init_GNSSLabeling_gt_clock_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_clock_bias
{
public:
  explicit Init_GNSSLabeling_clock_bias(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_clock_drift clock_bias(::irt_nav_msgs::msg::GNSSLabeling::_clock_bias_type arg)
  {
    msg_.clock_bias = std::move(arg);
    return Init_GNSSLabeling_clock_drift(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_gt_vel
{
public:
  explicit Init_GNSSLabeling_gt_vel(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_clock_bias gt_vel(::irt_nav_msgs::msg::GNSSLabeling::_gt_vel_type arg)
  {
    msg_.gt_vel = std::move(arg);
    return Init_GNSSLabeling_clock_bias(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_gt_pos
{
public:
  explicit Init_GNSSLabeling_gt_pos(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_gt_vel gt_pos(::irt_nav_msgs::msg::GNSSLabeling::_gt_pos_type arg)
  {
    msg_.gt_pos = std::move(arg);
    return Init_GNSSLabeling_gt_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_ant_vel
{
public:
  explicit Init_GNSSLabeling_ant_vel(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_gt_pos ant_vel(::irt_nav_msgs::msg::GNSSLabeling::_ant_vel_type arg)
  {
    msg_.ant_vel = std::move(arg);
    return Init_GNSSLabeling_gt_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_ant_pos
{
public:
  explicit Init_GNSSLabeling_ant_pos(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_ant_vel ant_pos(::irt_nav_msgs::msg::GNSSLabeling::_ant_pos_type arg)
  {
    msg_.ant_pos = std::move(arg);
    return Init_GNSSLabeling_ant_vel(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_gt_available
{
public:
  explicit Init_GNSSLabeling_gt_available(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_ant_pos gt_available(::irt_nav_msgs::msg::GNSSLabeling::_gt_available_type arg)
  {
    msg_.gt_available = std::move(arg);
    return Init_GNSSLabeling_ant_pos(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_faulty_prn_aux
{
public:
  explicit Init_GNSSLabeling_faulty_prn_aux(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_gt_available faulty_prn_aux(::irt_nav_msgs::msg::GNSSLabeling::_faulty_prn_aux_type arg)
  {
    msg_.faulty_prn_aux = std::move(arg);
    return Init_GNSSLabeling_gt_available(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_faulty_prn_main
{
public:
  explicit Init_GNSSLabeling_faulty_prn_main(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_faulty_prn_aux faulty_prn_main(::irt_nav_msgs::msg::GNSSLabeling::_faulty_prn_main_type arg)
  {
    msg_.faulty_prn_main = std::move(arg);
    return Init_GNSSLabeling_faulty_prn_aux(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_ant_aux_labels
{
public:
  explicit Init_GNSSLabeling_ant_aux_labels(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_faulty_prn_main ant_aux_labels(::irt_nav_msgs::msg::GNSSLabeling::_ant_aux_labels_type arg)
  {
    msg_.ant_aux_labels = std::move(arg);
    return Init_GNSSLabeling_faulty_prn_main(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_ant_main_labels
{
public:
  explicit Init_GNSSLabeling_ant_main_labels(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_ant_aux_labels ant_main_labels(::irt_nav_msgs::msg::GNSSLabeling::_ant_main_labels_type arg)
  {
    msg_.ant_main_labels = std::move(arg);
    return Init_GNSSLabeling_ant_aux_labels(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_solution_type
{
public:
  explicit Init_GNSSLabeling_solution_type(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_ant_main_labels solution_type(::irt_nav_msgs::msg::GNSSLabeling::_solution_type_type arg)
  {
    msg_.solution_type = std::move(arg);
    return Init_GNSSLabeling_ant_main_labels(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_time_receive
{
public:
  explicit Init_GNSSLabeling_time_receive(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_solution_type time_receive(::irt_nav_msgs::msg::GNSSLabeling::_time_receive_type arg)
  {
    msg_.time_receive = std::move(arg);
    return Init_GNSSLabeling_solution_type(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_counter
{
public:
  explicit Init_GNSSLabeling_counter(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_time_receive counter(::irt_nav_msgs::msg::GNSSLabeling::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_GNSSLabeling_time_receive(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_related_state_timestamp_nanosec
{
public:
  explicit Init_GNSSLabeling_related_state_timestamp_nanosec(::irt_nav_msgs::msg::GNSSLabeling & msg)
  : msg_(msg)
  {}
  Init_GNSSLabeling_counter related_state_timestamp_nanosec(::irt_nav_msgs::msg::GNSSLabeling::_related_state_timestamp_nanosec_type arg)
  {
    msg_.related_state_timestamp_nanosec = std::move(arg);
    return Init_GNSSLabeling_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

class Init_GNSSLabeling_header
{
public:
  Init_GNSSLabeling_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GNSSLabeling_related_state_timestamp_nanosec header(::irt_nav_msgs::msg::GNSSLabeling::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GNSSLabeling_related_state_timestamp_nanosec(msg_);
  }

private:
  ::irt_nav_msgs::msg::GNSSLabeling msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::GNSSLabeling>()
{
  return irt_nav_msgs::msg::builder::Init_GNSSLabeling_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__BUILDER_HPP_
