// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/rtcm1005__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCM1005_msg_counter
{
public:
  explicit Init_RTCM1005_msg_counter(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::RTCM1005 msg_counter(::irt_nav_msgs::msg::RTCM1005::_msg_counter_type arg)
  {
    msg_.msg_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_reserved2
{
public:
  explicit Init_RTCM1005_reserved2(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_msg_counter reserved2(::irt_nav_msgs::msg::RTCM1005::_reserved2_type arg)
  {
    msg_.reserved2 = std::move(arg);
    return Init_RTCM1005_msg_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_reserved1
{
public:
  explicit Init_RTCM1005_reserved1(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_reserved2 reserved1(::irt_nav_msgs::msg::RTCM1005::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_RTCM1005_reserved2(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_signle_receiver_oscillator_indicator
{
public:
  explicit Init_RTCM1005_signle_receiver_oscillator_indicator(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_reserved1 signle_receiver_oscillator_indicator(::irt_nav_msgs::msg::RTCM1005::_signle_receiver_oscillator_indicator_type arg)
  {
    msg_.signle_receiver_oscillator_indicator = std::move(arg);
    return Init_RTCM1005_reserved1(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_antenna_reference_point_ecef_z_m
{
public:
  explicit Init_RTCM1005_antenna_reference_point_ecef_z_m(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_signle_receiver_oscillator_indicator antenna_reference_point_ecef_z_m(::irt_nav_msgs::msg::RTCM1005::_antenna_reference_point_ecef_z_m_type arg)
  {
    msg_.antenna_reference_point_ecef_z_m = std::move(arg);
    return Init_RTCM1005_signle_receiver_oscillator_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_antenna_reference_point_ecef_y_m
{
public:
  explicit Init_RTCM1005_antenna_reference_point_ecef_y_m(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_antenna_reference_point_ecef_z_m antenna_reference_point_ecef_y_m(::irt_nav_msgs::msg::RTCM1005::_antenna_reference_point_ecef_y_m_type arg)
  {
    msg_.antenna_reference_point_ecef_y_m = std::move(arg);
    return Init_RTCM1005_antenna_reference_point_ecef_z_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_antenna_reference_point_ecef_x_m
{
public:
  explicit Init_RTCM1005_antenna_reference_point_ecef_x_m(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_antenna_reference_point_ecef_y_m antenna_reference_point_ecef_x_m(::irt_nav_msgs::msg::RTCM1005::_antenna_reference_point_ecef_x_m_type arg)
  {
    msg_.antenna_reference_point_ecef_x_m = std::move(arg);
    return Init_RTCM1005_antenna_reference_point_ecef_y_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_reference_station_indicator
{
public:
  explicit Init_RTCM1005_reference_station_indicator(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_antenna_reference_point_ecef_x_m reference_station_indicator(::irt_nav_msgs::msg::RTCM1005::_reference_station_indicator_type arg)
  {
    msg_.reference_station_indicator = std::move(arg);
    return Init_RTCM1005_antenna_reference_point_ecef_x_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_galileo_indicator
{
public:
  explicit Init_RTCM1005_galileo_indicator(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_reference_station_indicator galileo_indicator(::irt_nav_msgs::msg::RTCM1005::_galileo_indicator_type arg)
  {
    msg_.galileo_indicator = std::move(arg);
    return Init_RTCM1005_reference_station_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_glo_indicator
{
public:
  explicit Init_RTCM1005_glo_indicator(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_galileo_indicator glo_indicator(::irt_nav_msgs::msg::RTCM1005::_glo_indicator_type arg)
  {
    msg_.glo_indicator = std::move(arg);
    return Init_RTCM1005_galileo_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_gps_indicator
{
public:
  explicit Init_RTCM1005_gps_indicator(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_glo_indicator gps_indicator(::irt_nav_msgs::msg::RTCM1005::_gps_indicator_type arg)
  {
    msg_.gps_indicator = std::move(arg);
    return Init_RTCM1005_glo_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_reserved_itrf_realization_year
{
public:
  explicit Init_RTCM1005_reserved_itrf_realization_year(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_gps_indicator reserved_itrf_realization_year(::irt_nav_msgs::msg::RTCM1005::_reserved_itrf_realization_year_type arg)
  {
    msg_.reserved_itrf_realization_year = std::move(arg);
    return Init_RTCM1005_gps_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_ref_station_id
{
public:
  explicit Init_RTCM1005_ref_station_id(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_reserved_itrf_realization_year ref_station_id(::irt_nav_msgs::msg::RTCM1005::_ref_station_id_type arg)
  {
    msg_.ref_station_id = std::move(arg);
    return Init_RTCM1005_reserved_itrf_realization_year(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_msg_number
{
public:
  explicit Init_RTCM1005_msg_number(::irt_nav_msgs::msg::RTCM1005 & msg)
  : msg_(msg)
  {}
  Init_RTCM1005_ref_station_id msg_number(::irt_nav_msgs::msg::RTCM1005::_msg_number_type arg)
  {
    msg_.msg_number = std::move(arg);
    return Init_RTCM1005_ref_station_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

class Init_RTCM1005_header
{
public:
  Init_RTCM1005_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCM1005_msg_number header(::irt_nav_msgs::msg::RTCM1005::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RTCM1005_msg_number(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1005 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::RTCM1005>()
{
  return irt_nav_msgs::msg::builder::Init_RTCM1005_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1005__BUILDER_HPP_
