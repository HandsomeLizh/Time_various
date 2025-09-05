// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/SensorProcessingReport.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/sensor_processing_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorProcessingReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: ts_measurement
  {
    out << "ts_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_measurement, out);
    out << ", ";
  }

  // member: num_measurements
  {
    out << "num_measurements: ";
    rosidl_generator_traits::value_to_yaml(msg.num_measurements, out);
    out << ", ";
  }

  // member: measurement_delay
  {
    out << "measurement_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_delay, out);
    out << ", ";
  }

  // member: ts_start_processing
  {
    out << "ts_start_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_start_processing, out);
    out << ", ";
  }

  // member: duration_processing
  {
    out << "duration_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_processing, out);
    out << ", ";
  }

  // member: observation_available
  {
    out << "observation_available: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_available, out);
    out << ", ";
  }

  // member: residual_information
  {
    if (msg.residual_information.size() == 0) {
      out << "residual_information: []";
    } else {
      out << "residual_information: [";
      size_t pending_items = msg.residual_information.size();
      for (auto item : msg.residual_information) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorProcessingReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: ts_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_measurement, out);
    out << "\n";
  }

  // member: num_measurements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_measurements: ";
    rosidl_generator_traits::value_to_yaml(msg.num_measurements, out);
    out << "\n";
  }

  // member: measurement_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_delay, out);
    out << "\n";
  }

  // member: ts_start_processing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts_start_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_start_processing, out);
    out << "\n";
  }

  // member: duration_processing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_processing, out);
    out << "\n";
  }

  // member: observation_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observation_available: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_available, out);
    out << "\n";
  }

  // member: residual_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residual_information.size() == 0) {
      out << "residual_information: []\n";
    } else {
      out << "residual_information:\n";
      for (auto item : msg.residual_information) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorProcessingReport & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace irt_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irt_nav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irt_nav_msgs::msg::SensorProcessingReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::SensorProcessingReport & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::SensorProcessingReport>()
{
  return "irt_nav_msgs::msg::SensorProcessingReport";
}

template<>
inline const char * name<irt_nav_msgs::msg::SensorProcessingReport>()
{
  return "irt_nav_msgs/msg/SensorProcessingReport";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::SensorProcessingReport>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::SensorProcessingReport>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::SensorProcessingReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__TRAITS_HPP_
