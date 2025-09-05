// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irt_nav_msgs:msg/SensorProcessingReport.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__BUILDER_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irt_nav_msgs/msg/detail/sensor_processing_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irt_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorProcessingReport_message
{
public:
  explicit Init_SensorProcessingReport_message(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  ::irt_nav_msgs::msg::SensorProcessingReport message(::irt_nav_msgs::msg::SensorProcessingReport::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_residual_information
{
public:
  explicit Init_SensorProcessingReport_residual_information(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_message residual_information(::irt_nav_msgs::msg::SensorProcessingReport::_residual_information_type arg)
  {
    msg_.residual_information = std::move(arg);
    return Init_SensorProcessingReport_message(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_observation_available
{
public:
  explicit Init_SensorProcessingReport_observation_available(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_residual_information observation_available(::irt_nav_msgs::msg::SensorProcessingReport::_observation_available_type arg)
  {
    msg_.observation_available = std::move(arg);
    return Init_SensorProcessingReport_residual_information(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_duration_processing
{
public:
  explicit Init_SensorProcessingReport_duration_processing(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_observation_available duration_processing(::irt_nav_msgs::msg::SensorProcessingReport::_duration_processing_type arg)
  {
    msg_.duration_processing = std::move(arg);
    return Init_SensorProcessingReport_observation_available(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_ts_start_processing
{
public:
  explicit Init_SensorProcessingReport_ts_start_processing(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_duration_processing ts_start_processing(::irt_nav_msgs::msg::SensorProcessingReport::_ts_start_processing_type arg)
  {
    msg_.ts_start_processing = std::move(arg);
    return Init_SensorProcessingReport_duration_processing(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_measurement_delay
{
public:
  explicit Init_SensorProcessingReport_measurement_delay(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_ts_start_processing measurement_delay(::irt_nav_msgs::msg::SensorProcessingReport::_measurement_delay_type arg)
  {
    msg_.measurement_delay = std::move(arg);
    return Init_SensorProcessingReport_ts_start_processing(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_num_measurements
{
public:
  explicit Init_SensorProcessingReport_num_measurements(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_measurement_delay num_measurements(::irt_nav_msgs::msg::SensorProcessingReport::_num_measurements_type arg)
  {
    msg_.num_measurements = std::move(arg);
    return Init_SensorProcessingReport_measurement_delay(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_ts_measurement
{
public:
  explicit Init_SensorProcessingReport_ts_measurement(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_num_measurements ts_measurement(::irt_nav_msgs::msg::SensorProcessingReport::_ts_measurement_type arg)
  {
    msg_.ts_measurement = std::move(arg);
    return Init_SensorProcessingReport_num_measurements(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_sensor_name
{
public:
  explicit Init_SensorProcessingReport_sensor_name(::irt_nav_msgs::msg::SensorProcessingReport & msg)
  : msg_(msg)
  {}
  Init_SensorProcessingReport_ts_measurement sensor_name(::irt_nav_msgs::msg::SensorProcessingReport::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_SensorProcessingReport_ts_measurement(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

class Init_SensorProcessingReport_header
{
public:
  Init_SensorProcessingReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorProcessingReport_sensor_name header(::irt_nav_msgs::msg::SensorProcessingReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorProcessingReport_sensor_name(msg_);
  }

private:
  ::irt_nav_msgs::msg::SensorProcessingReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irt_nav_msgs::msg::SensorProcessingReport>()
{
  return irt_nav_msgs::msg::builder::Init_SensorProcessingReport_header();
}

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__BUILDER_HPP_
