// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__TRAITS_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irt_nav_msgs/msg/detail/gnss_obs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'satelite_pos'
// Member 'satelite_vec'
// Member 'base_pos'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace irt_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GNSSObs & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_receive
  {
    out << "time_receive: ";
    rosidl_generator_traits::value_to_yaml(msg.time_receive, out);
    out << ", ";
  }

  // member: integrity_flag
  {
    out << "integrity_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_flag, out);
    out << ", ";
  }

  // member: dd_idx_sync_ref
  {
    out << "dd_idx_sync_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.dd_idx_sync_ref, out);
    out << ", ";
  }

  // member: dd_idx_sync_user
  {
    out << "dd_idx_sync_user: ";
    rosidl_generator_traits::value_to_yaml(msg.dd_idx_sync_user, out);
    out << ", ";
  }

  // member: satelite_pos
  {
    if (msg.satelite_pos.size() == 0) {
      out << "satelite_pos: []";
    } else {
      out << "satelite_pos: [";
      size_t pending_items = msg.satelite_pos.size();
      for (auto item : msg.satelite_pos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: satelite_vec
  {
    if (msg.satelite_vec.size() == 0) {
      out << "satelite_vec: []";
    } else {
      out << "satelite_vec: [";
      size_t pending_items = msg.satelite_vec.size();
      for (auto item : msg.satelite_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: base_pos
  {
    out << "base_pos: ";
    to_flow_style_yaml(msg.base_pos, out);
    out << ", ";
  }

  // member: prn
  {
    if (msg.prn.size() == 0) {
      out << "prn: []";
    } else {
      out << "prn: [";
      size_t pending_items = msg.prn.size();
      for (auto item : msg.prn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: svid_carrier_used
  {
    if (msg.svid_carrier_used.size() == 0) {
      out << "svid_carrier_used: []";
    } else {
      out << "svid_carrier_used: [";
      size_t pending_items = msg.svid_carrier_used.size();
      for (auto item : msg.svid_carrier_used) {
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

  // member: pseudorange_raw
  {
    if (msg.pseudorange_raw.size() == 0) {
      out << "pseudorange_raw: []";
    } else {
      out << "pseudorange_raw: [";
      size_t pending_items = msg.pseudorange_raw.size();
      for (auto item : msg.pseudorange_raw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pseudorange_satclk_corrected
  {
    if (msg.pseudorange_satclk_corrected.size() == 0) {
      out << "pseudorange_satclk_corrected: []";
    } else {
      out << "pseudorange_satclk_corrected: [";
      size_t pending_items = msg.pseudorange_satclk_corrected.size();
      for (auto item : msg.pseudorange_satclk_corrected) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deltarange
  {
    if (msg.deltarange.size() == 0) {
      out << "deltarange: []";
    } else {
      out << "deltarange: [";
      size_t pending_items = msg.deltarange.size();
      for (auto item : msg.deltarange) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deltarange_raw
  {
    if (msg.deltarange_raw.size() == 0) {
      out << "deltarange_raw: []";
    } else {
      out << "deltarange_raw: [";
      size_t pending_items = msg.deltarange_raw.size();
      for (auto item : msg.deltarange_raw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deltarange_satclk_corrected
  {
    if (msg.deltarange_satclk_corrected.size() == 0) {
      out << "deltarange_satclk_corrected: []";
    } else {
      out << "deltarange_satclk_corrected: [";
      size_t pending_items = msg.deltarange_satclk_corrected.size();
      for (auto item : msg.deltarange_satclk_corrected) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pseudorange_var
  {
    if (msg.pseudorange_var.size() == 0) {
      out << "pseudorange_var: []";
    } else {
      out << "pseudorange_var: [";
      size_t pending_items = msg.pseudorange_var.size();
      for (auto item : msg.pseudorange_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pseudorange_var_measured
  {
    if (msg.pseudorange_var_measured.size() == 0) {
      out << "pseudorange_var_measured: []";
    } else {
      out << "pseudorange_var_measured: [";
      size_t pending_items = msg.pseudorange_var_measured.size();
      for (auto item : msg.pseudorange_var_measured) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deltarange_var
  {
    if (msg.deltarange_var.size() == 0) {
      out << "deltarange_var: []";
    } else {
      out << "deltarange_var: [";
      size_t pending_items = msg.deltarange_var.size();
      for (auto item : msg.deltarange_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: carrierphase
  {
    if (msg.carrierphase.size() == 0) {
      out << "carrierphase: []";
    } else {
      out << "carrierphase: [";
      size_t pending_items = msg.carrierphase.size();
      for (auto item : msg.carrierphase) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: carrierphase_raw
  {
    if (msg.carrierphase_raw.size() == 0) {
      out << "carrierphase_raw: []";
    } else {
      out << "carrierphase_raw: [";
      size_t pending_items = msg.carrierphase_raw.size();
      for (auto item : msg.carrierphase_raw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: carrierphase_satclk_corrected
  {
    if (msg.carrierphase_satclk_corrected.size() == 0) {
      out << "carrierphase_satclk_corrected: []";
    } else {
      out << "carrierphase_satclk_corrected: [";
      size_t pending_items = msg.carrierphase_satclk_corrected.size();
      for (auto item : msg.carrierphase_satclk_corrected) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: carrierphase_var_measured
  {
    if (msg.carrierphase_var_measured.size() == 0) {
      out << "carrierphase_var_measured: []";
    } else {
      out << "carrierphase_var_measured: [";
      size_t pending_items = msg.carrierphase_var_measured.size();
      for (auto item : msg.carrierphase_var_measured) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elevation_angle
  {
    if (msg.elevation_angle.size() == 0) {
      out << "elevation_angle: []";
    } else {
      out << "elevation_angle: [";
      size_t pending_items = msg.elevation_angle.size();
      for (auto item : msg.elevation_angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: azimuth_angle
  {
    if (msg.azimuth_angle.size() == 0) {
      out << "azimuth_angle: []";
    } else {
      out << "azimuth_angle: [";
      size_t pending_items = msg.azimuth_angle.size();
      for (auto item : msg.azimuth_angle) {
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

  // member: ref_sat_svid_gps
  {
    out << "ref_sat_svid_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_sat_svid_gps, out);
    out << ", ";
  }

  // member: ref_sat_svid_gal
  {
    out << "ref_sat_svid_gal: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_sat_svid_gal, out);
    out << ", ";
  }

  // member: gps_corrected
  {
    out << "gps_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_corrected, out);
    out << ", ";
  }

  // member: gal_corrected
  {
    out << "gal_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_corrected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GNSSObs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_receive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_receive: ";
    rosidl_generator_traits::value_to_yaml(msg.time_receive, out);
    out << "\n";
  }

  // member: integrity_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrity_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_flag, out);
    out << "\n";
  }

  // member: dd_idx_sync_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dd_idx_sync_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.dd_idx_sync_ref, out);
    out << "\n";
  }

  // member: dd_idx_sync_user
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dd_idx_sync_user: ";
    rosidl_generator_traits::value_to_yaml(msg.dd_idx_sync_user, out);
    out << "\n";
  }

  // member: satelite_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satelite_pos.size() == 0) {
      out << "satelite_pos: []\n";
    } else {
      out << "satelite_pos:\n";
      for (auto item : msg.satelite_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: satelite_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satelite_vec.size() == 0) {
      out << "satelite_vec: []\n";
    } else {
      out << "satelite_vec:\n";
      for (auto item : msg.satelite_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: base_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_pos:\n";
    to_block_style_yaml(msg.base_pos, out, indentation + 2);
  }

  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prn.size() == 0) {
      out << "prn: []\n";
    } else {
      out << "prn:\n";
      for (auto item : msg.prn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: svid_carrier_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.svid_carrier_used.size() == 0) {
      out << "svid_carrier_used: []\n";
    } else {
      out << "svid_carrier_used:\n";
      for (auto item : msg.svid_carrier_used) {
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

  // member: pseudorange_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pseudorange_raw.size() == 0) {
      out << "pseudorange_raw: []\n";
    } else {
      out << "pseudorange_raw:\n";
      for (auto item : msg.pseudorange_raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pseudorange_satclk_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pseudorange_satclk_corrected.size() == 0) {
      out << "pseudorange_satclk_corrected: []\n";
    } else {
      out << "pseudorange_satclk_corrected:\n";
      for (auto item : msg.pseudorange_satclk_corrected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deltarange
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deltarange.size() == 0) {
      out << "deltarange: []\n";
    } else {
      out << "deltarange:\n";
      for (auto item : msg.deltarange) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deltarange_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deltarange_raw.size() == 0) {
      out << "deltarange_raw: []\n";
    } else {
      out << "deltarange_raw:\n";
      for (auto item : msg.deltarange_raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deltarange_satclk_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deltarange_satclk_corrected.size() == 0) {
      out << "deltarange_satclk_corrected: []\n";
    } else {
      out << "deltarange_satclk_corrected:\n";
      for (auto item : msg.deltarange_satclk_corrected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pseudorange_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pseudorange_var.size() == 0) {
      out << "pseudorange_var: []\n";
    } else {
      out << "pseudorange_var:\n";
      for (auto item : msg.pseudorange_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pseudorange_var_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pseudorange_var_measured.size() == 0) {
      out << "pseudorange_var_measured: []\n";
    } else {
      out << "pseudorange_var_measured:\n";
      for (auto item : msg.pseudorange_var_measured) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deltarange_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deltarange_var.size() == 0) {
      out << "deltarange_var: []\n";
    } else {
      out << "deltarange_var:\n";
      for (auto item : msg.deltarange_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: carrierphase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.carrierphase.size() == 0) {
      out << "carrierphase: []\n";
    } else {
      out << "carrierphase:\n";
      for (auto item : msg.carrierphase) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: carrierphase_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.carrierphase_raw.size() == 0) {
      out << "carrierphase_raw: []\n";
    } else {
      out << "carrierphase_raw:\n";
      for (auto item : msg.carrierphase_raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: carrierphase_satclk_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.carrierphase_satclk_corrected.size() == 0) {
      out << "carrierphase_satclk_corrected: []\n";
    } else {
      out << "carrierphase_satclk_corrected:\n";
      for (auto item : msg.carrierphase_satclk_corrected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: carrierphase_var_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.carrierphase_var_measured.size() == 0) {
      out << "carrierphase_var_measured: []\n";
    } else {
      out << "carrierphase_var_measured:\n";
      for (auto item : msg.carrierphase_var_measured) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elevation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elevation_angle.size() == 0) {
      out << "elevation_angle: []\n";
    } else {
      out << "elevation_angle:\n";
      for (auto item : msg.elevation_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: azimuth_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.azimuth_angle.size() == 0) {
      out << "azimuth_angle: []\n";
    } else {
      out << "azimuth_angle:\n";
      for (auto item : msg.azimuth_angle) {
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

  // member: ref_sat_svid_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_sat_svid_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_sat_svid_gps, out);
    out << "\n";
  }

  // member: ref_sat_svid_gal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_sat_svid_gal: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_sat_svid_gal, out);
    out << "\n";
  }

  // member: gps_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_corrected, out);
    out << "\n";
  }

  // member: gal_corrected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_corrected: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_corrected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GNSSObs & msg, bool use_flow_style = false)
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
  const irt_nav_msgs::msg::GNSSObs & msg,
  std::ostream & out, size_t indentation = 0)
{
  irt_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irt_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irt_nav_msgs::msg::GNSSObs & msg)
{
  return irt_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irt_nav_msgs::msg::GNSSObs>()
{
  return "irt_nav_msgs::msg::GNSSObs";
}

template<>
inline const char * name<irt_nav_msgs::msg::GNSSObs>()
{
  return "irt_nav_msgs/msg/GNSSObs";
}

template<>
struct has_fixed_size<irt_nav_msgs::msg::GNSSObs>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irt_nav_msgs::msg::GNSSObs>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irt_nav_msgs::msg::GNSSObs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS__TRAITS_HPP_
