// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/rtcm1004__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCM1004_msg_counter
{
public:
  explicit Init_RTCM1004_msg_counter(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::RTCM1004 msg_counter(::irt_nav_msgs::msg::RTCM1004::_msg_counter_type arg)
  {
    msg_.msg_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l2_cnr_db_hz
{
public:
  explicit Init_RTCM1004_l2_cnr_db_hz(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_msg_counter l2_cnr_db_hz(::irt_nav_msgs::msg::RTCM1004::_l2_cnr_db_hz_type arg)
  {
    msg_.l2_cnr_db_hz = std::move(arg);
    return Init_RTCM1004_msg_counter(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l2_locktime_indicator
{
public:
  explicit Init_RTCM1004_l2_locktime_indicator(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l2_cnr_db_hz l2_locktime_indicator(::irt_nav_msgs::msg::RTCM1004::_l2_locktime_indicator_type arg)
  {
    msg_.l2_locktime_indicator = std::move(arg);
    return Init_RTCM1004_l2_cnr_db_hz(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l2_phaserange_l1_pseudorange_m
{
public:
  explicit Init_RTCM1004_l2_phaserange_l1_pseudorange_m(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l2_locktime_indicator l2_phaserange_l1_pseudorange_m(::irt_nav_msgs::msg::RTCM1004::_l2_phaserange_l1_pseudorange_m_type arg)
  {
    msg_.l2_phaserange_l1_pseudorange_m = std::move(arg);
    return Init_RTCM1004_l2_locktime_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l2_l1_pseudorange_difference_m
{
public:
  explicit Init_RTCM1004_l2_l1_pseudorange_difference_m(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l2_phaserange_l1_pseudorange_m l2_l1_pseudorange_difference_m(::irt_nav_msgs::msg::RTCM1004::_l2_l1_pseudorange_difference_m_type arg)
  {
    msg_.l2_l1_pseudorange_difference_m = std::move(arg);
    return Init_RTCM1004_l2_phaserange_l1_pseudorange_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l2_code_indicator
{
public:
  explicit Init_RTCM1004_l2_code_indicator(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l2_l1_pseudorange_difference_m l2_code_indicator(::irt_nav_msgs::msg::RTCM1004::_l2_code_indicator_type arg)
  {
    msg_.l2_code_indicator = std::move(arg);
    return Init_RTCM1004_l2_l1_pseudorange_difference_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l1_cnr_db_hz
{
public:
  explicit Init_RTCM1004_l1_cnr_db_hz(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l2_code_indicator l1_cnr_db_hz(::irt_nav_msgs::msg::RTCM1004::_l1_cnr_db_hz_type arg)
  {
    msg_.l1_cnr_db_hz = std::move(arg);
    return Init_RTCM1004_l2_code_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l1_integer_pseudorange_modulus_ambiguity_m
{
public:
  explicit Init_RTCM1004_l1_integer_pseudorange_modulus_ambiguity_m(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l1_cnr_db_hz l1_integer_pseudorange_modulus_ambiguity_m(::irt_nav_msgs::msg::RTCM1004::_l1_integer_pseudorange_modulus_ambiguity_m_type arg)
  {
    msg_.l1_integer_pseudorange_modulus_ambiguity_m = std::move(arg);
    return Init_RTCM1004_l1_cnr_db_hz(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l1_locktime_indicator
{
public:
  explicit Init_RTCM1004_l1_locktime_indicator(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l1_integer_pseudorange_modulus_ambiguity_m l1_locktime_indicator(::irt_nav_msgs::msg::RTCM1004::_l1_locktime_indicator_type arg)
  {
    msg_.l1_locktime_indicator = std::move(arg);
    return Init_RTCM1004_l1_integer_pseudorange_modulus_ambiguity_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l1_phasenrange_l1_pseudorange_m
{
public:
  explicit Init_RTCM1004_l1_phasenrange_l1_pseudorange_m(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l1_locktime_indicator l1_phasenrange_l1_pseudorange_m(::irt_nav_msgs::msg::RTCM1004::_l1_phasenrange_l1_pseudorange_m_type arg)
  {
    msg_.l1_phasenrange_l1_pseudorange_m = std::move(arg);
    return Init_RTCM1004_l1_locktime_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l1_pseudorange_mod1lightms_m
{
public:
  explicit Init_RTCM1004_l1_pseudorange_mod1lightms_m(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l1_phasenrange_l1_pseudorange_m l1_pseudorange_mod1lightms_m(::irt_nav_msgs::msg::RTCM1004::_l1_pseudorange_mod1lightms_m_type arg)
  {
    msg_.l1_pseudorange_mod1lightms_m = std::move(arg);
    return Init_RTCM1004_l1_phasenrange_l1_pseudorange_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_l1_code_indicator
{
public:
  explicit Init_RTCM1004_l1_code_indicator(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l1_pseudorange_mod1lightms_m l1_code_indicator(::irt_nav_msgs::msg::RTCM1004::_l1_code_indicator_type arg)
  {
    msg_.l1_code_indicator = std::move(arg);
    return Init_RTCM1004_l1_pseudorange_mod1lightms_m(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_sat_id
{
public:
  explicit Init_RTCM1004_sat_id(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_l1_code_indicator sat_id(::irt_nav_msgs::msg::RTCM1004::_sat_id_type arg)
  {
    msg_.sat_id = std::move(arg);
    return Init_RTCM1004_l1_code_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_smoothing_interval
{
public:
  explicit Init_RTCM1004_smoothing_interval(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_sat_id smoothing_interval(::irt_nav_msgs::msg::RTCM1004::_smoothing_interval_type arg)
  {
    msg_.smoothing_interval = std::move(arg);
    return Init_RTCM1004_sat_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_divergency_free_smoothing_indicator
{
public:
  explicit Init_RTCM1004_divergency_free_smoothing_indicator(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_smoothing_interval divergency_free_smoothing_indicator(::irt_nav_msgs::msg::RTCM1004::_divergency_free_smoothing_indicator_type arg)
  {
    msg_.divergency_free_smoothing_indicator = std::move(arg);
    return Init_RTCM1004_smoothing_interval(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_no_gps_sat_signal_processed
{
public:
  explicit Init_RTCM1004_no_gps_sat_signal_processed(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_divergency_free_smoothing_indicator no_gps_sat_signal_processed(::irt_nav_msgs::msg::RTCM1004::_no_gps_sat_signal_processed_type arg)
  {
    msg_.no_gps_sat_signal_processed = std::move(arg);
    return Init_RTCM1004_divergency_free_smoothing_indicator(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_flag_gnss_synchronous
{
public:
  explicit Init_RTCM1004_flag_gnss_synchronous(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_no_gps_sat_signal_processed flag_gnss_synchronous(::irt_nav_msgs::msg::RTCM1004::_flag_gnss_synchronous_type arg)
  {
    msg_.flag_gnss_synchronous = std::move(arg);
    return Init_RTCM1004_no_gps_sat_signal_processed(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_gps_epoch_time_ms
{
public:
  explicit Init_RTCM1004_gps_epoch_time_ms(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_flag_gnss_synchronous gps_epoch_time_ms(::irt_nav_msgs::msg::RTCM1004::_gps_epoch_time_ms_type arg)
  {
    msg_.gps_epoch_time_ms = std::move(arg);
    return Init_RTCM1004_flag_gnss_synchronous(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_ref_station_id
{
public:
  explicit Init_RTCM1004_ref_station_id(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_gps_epoch_time_ms ref_station_id(::irt_nav_msgs::msg::RTCM1004::_ref_station_id_type arg)
  {
    msg_.ref_station_id = std::move(arg);
    return Init_RTCM1004_gps_epoch_time_ms(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_msg_number
{
public:
  explicit Init_RTCM1004_msg_number(::irt_nav_msgs::msg::RTCM1004 & msg)
  : msg_(msg)
  {}
  Init_RTCM1004_ref_station_id msg_number(::irt_nav_msgs::msg::RTCM1004::_msg_number_type arg)
  {
    msg_.msg_number = std::move(arg);
    return Init_RTCM1004_ref_station_id(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

class Init_RTCM1004_header
{
public:
  Init_RTCM1004_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCM1004_msg_number header(::irt_nav_msgs::msg::RTCM1004::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RTCM1004_msg_number(msg_);
  }

private:
  ::irt_nav_msgs::msg::RTCM1004 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::RTCM1004>()
{
  return irt_nav_msgs::msg::builder::Init_RTCM1004_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCM1004__BUILDER_HPP_
