// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/elapsed_time_fgo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ElapsedTimeFGO & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ts_start_construction
  {
    out << "ts_start_construction: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_start_construction, out);
    out << ", ";
  }

  // member: ts_start_optimization
  {
    out << "ts_start_optimization: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_start_optimization, out);
    out << ", ";
  }

  // member: duration_construction
  {
    out << "duration_construction: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_construction, out);
    out << ", ";
  }

  // member: duration_optimization
  {
    out << "duration_optimization: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_optimization, out);
    out << ", ";
  }

  // member: num_new_factors
  {
    out << "num_new_factors: ";
    rosidl_generator_traits::value_to_yaml(msg.num_new_factors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ElapsedTimeFGO & msg,
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

  // member: ts_start_construction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts_start_construction: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_start_construction, out);
    out << "\n";
  }

  // member: ts_start_optimization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts_start_optimization: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_start_optimization, out);
    out << "\n";
  }

  // member: duration_construction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_construction: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_construction, out);
    out << "\n";
  }

  // member: duration_optimization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_optimization: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_optimization, out);
    out << "\n";
  }

  // member: num_new_factors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_new_factors: ";
    rosidl_generator_traits::value_to_yaml(msg.num_new_factors, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ElapsedTimeFGO & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::ElapsedTimeFGO & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::ElapsedTimeFGO & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::ElapsedTimeFGO>()
{
  return "irt_nav_msgs::msg::ElapsedTimeFGO";
}

template<>
inline const char * name<irt_nav_msgs::msg::ElapsedTimeFGO>()
{
  return "irt_nav_msgs/msg/ElapsedTimeFGO";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::ElapsedTimeFGO>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::ElapsedTimeFGO>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::ElapsedTimeFGO>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__TRAITS_HPP_
