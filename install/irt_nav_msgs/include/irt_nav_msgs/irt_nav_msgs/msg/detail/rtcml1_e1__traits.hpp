// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/RTCML1E1.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/rtcml1_e1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTCML1E1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: base
  {
    if (msg.base.size() == 0) {
      out << "base: []";
    } else {
      out << "base: [";
      size_t pending_items = msg.base.size();
      for (auto item : msg.base) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: svid
  {
    if (msg.svid.size() == 0) {
      out << "svid: []";
    } else {
      out << "svid: [";
      size_t pending_items = msg.svid.size();
      for (auto item : msg.svid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pseudorange
  {
    if (msg.pseudorange.size() == 0) {
      out << "pseudorange: []";
    } else {
      out << "pseudorange: [";
      size_t pending_items = msg.pseudorange.size();
      for (auto item : msg.pseudorange) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: type
  {
    if (msg.type.size() == 0) {
      out << "type: []";
    } else {
      out << "type: [";
      size_t pending_items = msg.type.size();
      for (auto item : msg.type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: carrier
  {
    if (msg.carrier.size() == 0) {
      out << "carrier: []";
    } else {
      out << "carrier: [";
      size_t pending_items = msg.carrier.size();
      for (auto item : msg.carrier) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cn0
  {
    if (msg.cn0.size() == 0) {
      out << "cn0: []";
    } else {
      out << "cn0: [";
      size_t pending_items = msg.cn0.size();
      for (auto item : msg.cn0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: locktime
  {
    if (msg.locktime.size() == 0) {
      out << "locktime: []";
    } else {
      out << "locktime: [";
      size_t pending_items = msg.locktime.size();
      for (auto item : msg.locktime) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lli
  {
    if (msg.lli.size() == 0) {
      out << "lli: []";
    } else {
      out << "lli: [";
      size_t pending_items = msg.lli.size();
      for (auto item : msg.lli) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference_station_id
  {
    out << "reference_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_station_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RTCML1E1 & msg,
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

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base.size() == 0) {
      out << "base: []\n";
    } else {
      out << "base:\n";
      for (auto item : msg.base) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: svid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.svid.size() == 0) {
      out << "svid: []\n";
    } else {
      out << "svid:\n";
      for (auto item : msg.svid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pseudorange
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pseudorange.size() == 0) {
      out << "pseudorange: []\n";
    } else {
      out << "pseudorange:\n";
      for (auto item : msg.pseudorange) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.type.size() == 0) {
      out << "type: []\n";
    } else {
      out << "type:\n";
      for (auto item : msg.type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: carrier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.carrier.size() == 0) {
      out << "carrier: []\n";
    } else {
      out << "carrier:\n";
      for (auto item : msg.carrier) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cn0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cn0.size() == 0) {
      out << "cn0: []\n";
    } else {
      out << "cn0:\n";
      for (auto item : msg.cn0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: locktime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.locktime.size() == 0) {
      out << "locktime: []\n";
    } else {
      out << "locktime:\n";
      for (auto item : msg.locktime) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lli
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lli.size() == 0) {
      out << "lli: []\n";
    } else {
      out << "lli:\n";
      for (auto item : msg.lli) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reference_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_station_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RTCML1E1 & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::RTCML1E1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::RTCML1E1 & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::RTCML1E1>()
{
  return "irt_nav_msgs::msg::RTCML1E1";
}

template<>
inline const char * name<irt_nav_msgs::msg::RTCML1E1>()
{
  return "irt_nav_msgs/msg/RTCML1E1";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::RTCML1E1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::RTCML1E1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irt_nav_msgs::msg::RTCML1E1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RTCML1_E1__TRAITS_HPP_
