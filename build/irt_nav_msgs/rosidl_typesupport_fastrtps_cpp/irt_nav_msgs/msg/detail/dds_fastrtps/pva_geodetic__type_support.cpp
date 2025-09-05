// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/pva_geodetic__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace irt_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_serialize(
  const irt_nav_msgs::msg::PVAGeodetic & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: tow
  cdr << ros_message.tow;
  // Member: wnc
  cdr << ros_message.wnc;
  // Member: mode
  cdr << ros_message.mode;
  // Member: error
  cdr << ros_message.error;
  // Member: phi_geo
  cdr << ros_message.phi_geo;
  // Member: phi_geo_var
  cdr << ros_message.phi_geo_var;
  // Member: lambda_geo
  cdr << ros_message.lambda_geo;
  // Member: lambda_geo_var
  cdr << ros_message.lambda_geo_var;
  // Member: h_geo
  cdr << ros_message.h_geo;
  // Member: h_geo_var
  cdr << ros_message.h_geo_var;
  // Member: undulation
  cdr << ros_message.undulation;
  // Member: vn
  cdr << ros_message.vn;
  // Member: ve
  cdr << ros_message.ve;
  // Member: vu
  cdr << ros_message.vu;
  // Member: trk_gnd
  cdr << ros_message.trk_gnd;
  // Member: cog
  cdr << ros_message.cog;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: yaw_var
  cdr << ros_message.yaw_var;
  // Member: pitch_roll
  cdr << ros_message.pitch_roll;
  // Member: pitch_roll_var
  cdr << ros_message.pitch_roll_var;
  // Member: rx_clk_bias
  cdr << ros_message.rx_clk_bias;
  // Member: rx_clk_bias_var
  cdr << ros_message.rx_clk_bias_var;
  // Member: rx_clk_drift
  cdr << ros_message.rx_clk_drift;
  // Member: rx_clk_drift_var
  cdr << ros_message.rx_clk_drift_var;
  // Member: time_system
  cdr << ros_message.time_system;
  // Member: datum
  cdr << ros_message.datum;
  // Member: nrsv
  cdr << ros_message.nrsv;
  // Member: nrsv_used
  cdr << ros_message.nrsv_used;
  // Member: nrsv_used_with_l1
  cdr << ros_message.nrsv_used_with_l1;
  // Member: nrsv_used_multi
  cdr << ros_message.nrsv_used_multi;
  // Member: wa_corr_info
  cdr << ros_message.wa_corr_info;
  // Member: reference_id
  cdr << ros_message.reference_id;
  // Member: mean_corr_age
  cdr << ros_message.mean_corr_age;
  // Member: signal_info
  cdr << ros_message.signal_info;
  // Member: alert_flag
  cdr << ros_message.alert_flag;
  // Member: nr_bases
  cdr << ros_message.nr_bases;
  // Member: ppp_info
  cdr << ros_message.ppp_info;
  // Member: sol_age
  cdr << ros_message.sol_age;
  // Member: diff_age
  cdr << ros_message.diff_age;
  // Member: do_not_use_this
  cdr << (ros_message.do_not_use_this ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::PVAGeodetic & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: tow
  cdr >> ros_message.tow;

  // Member: wnc
  cdr >> ros_message.wnc;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: error
  cdr >> ros_message.error;

  // Member: phi_geo
  cdr >> ros_message.phi_geo;

  // Member: phi_geo_var
  cdr >> ros_message.phi_geo_var;

  // Member: lambda_geo
  cdr >> ros_message.lambda_geo;

  // Member: lambda_geo_var
  cdr >> ros_message.lambda_geo_var;

  // Member: h_geo
  cdr >> ros_message.h_geo;

  // Member: h_geo_var
  cdr >> ros_message.h_geo_var;

  // Member: undulation
  cdr >> ros_message.undulation;

  // Member: vn
  cdr >> ros_message.vn;

  // Member: ve
  cdr >> ros_message.ve;

  // Member: vu
  cdr >> ros_message.vu;

  // Member: trk_gnd
  cdr >> ros_message.trk_gnd;

  // Member: cog
  cdr >> ros_message.cog;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: yaw_var
  cdr >> ros_message.yaw_var;

  // Member: pitch_roll
  cdr >> ros_message.pitch_roll;

  // Member: pitch_roll_var
  cdr >> ros_message.pitch_roll_var;

  // Member: rx_clk_bias
  cdr >> ros_message.rx_clk_bias;

  // Member: rx_clk_bias_var
  cdr >> ros_message.rx_clk_bias_var;

  // Member: rx_clk_drift
  cdr >> ros_message.rx_clk_drift;

  // Member: rx_clk_drift_var
  cdr >> ros_message.rx_clk_drift_var;

  // Member: time_system
  cdr >> ros_message.time_system;

  // Member: datum
  cdr >> ros_message.datum;

  // Member: nrsv
  cdr >> ros_message.nrsv;

  // Member: nrsv_used
  cdr >> ros_message.nrsv_used;

  // Member: nrsv_used_with_l1
  cdr >> ros_message.nrsv_used_with_l1;

  // Member: nrsv_used_multi
  cdr >> ros_message.nrsv_used_multi;

  // Member: wa_corr_info
  cdr >> ros_message.wa_corr_info;

  // Member: reference_id
  cdr >> ros_message.reference_id;

  // Member: mean_corr_age
  cdr >> ros_message.mean_corr_age;

  // Member: signal_info
  cdr >> ros_message.signal_info;

  // Member: alert_flag
  cdr >> ros_message.alert_flag;

  // Member: nr_bases
  cdr >> ros_message.nr_bases;

  // Member: ppp_info
  cdr >> ros_message.ppp_info;

  // Member: sol_age
  cdr >> ros_message.sol_age;

  // Member: diff_age
  cdr >> ros_message.diff_age;

  // Member: do_not_use_this
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_not_use_this = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::PVAGeodetic & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: tow
  {
    size_t item_size = sizeof(ros_message.tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wnc
  {
    size_t item_size = sizeof(ros_message.wnc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error
  {
    size_t item_size = sizeof(ros_message.error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: phi_geo
  {
    size_t item_size = sizeof(ros_message.phi_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: phi_geo_var
  {
    size_t item_size = sizeof(ros_message.phi_geo_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_geo
  {
    size_t item_size = sizeof(ros_message.lambda_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_geo_var
  {
    size_t item_size = sizeof(ros_message.lambda_geo_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: h_geo
  {
    size_t item_size = sizeof(ros_message.h_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: h_geo_var
  {
    size_t item_size = sizeof(ros_message.h_geo_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: undulation
  {
    size_t item_size = sizeof(ros_message.undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vn
  {
    size_t item_size = sizeof(ros_message.vn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ve
  {
    size_t item_size = sizeof(ros_message.ve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vu
  {
    size_t item_size = sizeof(ros_message.vu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trk_gnd
  {
    size_t item_size = sizeof(ros_message.trk_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cog
  {
    size_t item_size = sizeof(ros_message.cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_var
  {
    size_t item_size = sizeof(ros_message.yaw_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_roll
  {
    size_t item_size = sizeof(ros_message.pitch_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_roll_var
  {
    size_t item_size = sizeof(ros_message.pitch_roll_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_clk_bias
  {
    size_t item_size = sizeof(ros_message.rx_clk_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_clk_bias_var
  {
    size_t item_size = sizeof(ros_message.rx_clk_bias_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_clk_drift
  {
    size_t item_size = sizeof(ros_message.rx_clk_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_clk_drift_var
  {
    size_t item_size = sizeof(ros_message.rx_clk_drift_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_system
  {
    size_t item_size = sizeof(ros_message.time_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: datum
  {
    size_t item_size = sizeof(ros_message.datum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nrsv
  {
    size_t item_size = sizeof(ros_message.nrsv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nrsv_used
  {
    size_t item_size = sizeof(ros_message.nrsv_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nrsv_used_with_l1
  {
    size_t item_size = sizeof(ros_message.nrsv_used_with_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nrsv_used_multi
  {
    size_t item_size = sizeof(ros_message.nrsv_used_multi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wa_corr_info
  {
    size_t item_size = sizeof(ros_message.wa_corr_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_id
  {
    size_t item_size = sizeof(ros_message.reference_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean_corr_age
  {
    size_t item_size = sizeof(ros_message.mean_corr_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_info
  {
    size_t item_size = sizeof(ros_message.signal_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alert_flag
  {
    size_t item_size = sizeof(ros_message.alert_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nr_bases
  {
    size_t item_size = sizeof(ros_message.nr_bases);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ppp_info
  {
    size_t item_size = sizeof(ros_message.ppp_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sol_age
  {
    size_t item_size = sizeof(ros_message.sol_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diff_age
  {
    size_t item_size = sizeof(ros_message.diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: do_not_use_this
  {
    size_t item_size = sizeof(ros_message.do_not_use_this);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_PVAGeodetic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wnc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: phi_geo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: phi_geo_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lambda_geo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lambda_geo_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: h_geo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: h_geo_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: undulation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: trk_gnd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_roll_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_clk_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rx_clk_bias_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rx_clk_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rx_clk_drift_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: time_system
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: datum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nrsv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nrsv_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nrsv_used_with_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nrsv_used_multi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wa_corr_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reference_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mean_corr_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: signal_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alert_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nr_bases
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ppp_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sol_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: do_not_use_this
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs::msg::PVAGeodetic;
    is_plain =
      (
      offsetof(DataType, do_not_use_this) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PVAGeodetic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::PVAGeodetic *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PVAGeodetic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::PVAGeodetic *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PVAGeodetic__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::PVAGeodetic *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PVAGeodetic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PVAGeodetic(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PVAGeodetic__callbacks = {
  "irt_nav_msgs::msg",
  "PVAGeodetic",
  _PVAGeodetic__cdr_serialize,
  _PVAGeodetic__cdr_deserialize,
  _PVAGeodetic__get_serialized_size,
  _PVAGeodetic__max_serialized_size
};

static rosidl_message_type_support_t _PVAGeodetic__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PVAGeodetic__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace irt_nav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_irt_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<irt_nav_msgs::msg::PVAGeodetic>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_PVAGeodetic__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, PVAGeodetic)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_PVAGeodetic__handle;
}

#ifdef __cplusplus
}
#endif
