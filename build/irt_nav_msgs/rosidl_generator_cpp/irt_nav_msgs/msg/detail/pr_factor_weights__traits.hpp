// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/PRFactorWeights.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/pr_factor_weights__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PRFactorWeights & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mean
  {
    out << "mean: ";
    rosidl_generator_traits::value_to_yaml(msg.mean, out);
    out << ", ";
  }

  // member: median
  {
    out << "median: ";
    rosidl_generator_traits::value_to_yaml(msg.median, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << ", ";
  }

  // member: sat
  {
    if (msg.sat.size() == 0) {
      out << "sat: []";
    } else {
      out << "sat: [";
      size_t pending_items = msg.sat.size();
      for (auto item : msg.sat) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: weight
  {
    if (msg.weight.size() == 0) {
      out << "weight: []";
    } else {
      out << "weight: [";
      size_t pending_items = msg.weight.size();
      for (auto item : msg.weight) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cardinality
  {
    if (msg.cardinality.size() == 0) {
      out << "cardinality: []";
    } else {
      out << "cardinality: [";
      size_t pending_items = msg.cardinality.size();
      for (auto item : msg.cardinality) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PRFactorWeights & msg,
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

  // member: mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean: ";
    rosidl_generator_traits::value_to_yaml(msg.mean, out);
    out << "\n";
  }

  // member: median
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "median: ";
    rosidl_generator_traits::value_to_yaml(msg.median, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }

  // member: sat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sat.size() == 0) {
      out << "sat: []\n";
    } else {
      out << "sat:\n";
      for (auto item : msg.sat) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weight.size() == 0) {
      out << "weight: []\n";
    } else {
      out << "weight:\n";
      for (auto item : msg.weight) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cardinality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cardinality.size() == 0) {
      out << "cardinality: []\n";
    } else {
      out << "cardinality:\n";
      for (auto item : msg.cardinality) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PRFactorWeights & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::PRFactorWeights & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::PRFactorWeights & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::PRFactorWeights>()
{
  return "irt_nav_msgs::msg::PRFactorWeights";
}

template<>
inline const char * name<irt_nav_msgs::msg::PRFactorWeights>()
{
  return "irt_nav_msgs/msg/PRFactorWeights";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::PRFactorWeights>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::PRFactorWeights>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::PRFactorWeights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PR_FACTOR_WEIGHTS__TRAITS_HPP_
