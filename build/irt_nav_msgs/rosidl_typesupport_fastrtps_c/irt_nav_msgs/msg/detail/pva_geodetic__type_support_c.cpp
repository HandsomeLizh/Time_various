// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/pva_geodetic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/pva_geodetic__struct.h"
#include "irt_nav_msgs/msg/detail/pva_geodetic__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_irt_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PVAGeodetic__ros_msg_type = irt_nav_msgs__msg__PVAGeodetic;

static bool _PVAGeodetic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PVAGeodetic__ros_msg_type * ros_message = static_cast<const _PVAGeodetic__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: tow
  {
    cdr << ros_message->tow;
  }

  // Field name: wnc
  {
    cdr << ros_message->wnc;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: phi_geo
  {
    cdr << ros_message->phi_geo;
  }

  // Field name: phi_geo_var
  {
    cdr << ros_message->phi_geo_var;
  }

  // Field name: lambda_geo
  {
    cdr << ros_message->lambda_geo;
  }

  // Field name: lambda_geo_var
  {
    cdr << ros_message->lambda_geo_var;
  }

  // Field name: h_geo
  {
    cdr << ros_message->h_geo;
  }

  // Field name: h_geo_var
  {
    cdr << ros_message->h_geo_var;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: vn
  {
    cdr << ros_message->vn;
  }

  // Field name: ve
  {
    cdr << ros_message->ve;
  }

  // Field name: vu
  {
    cdr << ros_message->vu;
  }

  // Field name: trk_gnd
  {
    cdr << ros_message->trk_gnd;
  }

  // Field name: cog
  {
    cdr << ros_message->cog;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: yaw_var
  {
    cdr << ros_message->yaw_var;
  }

  // Field name: pitch_roll
  {
    cdr << ros_message->pitch_roll;
  }

  // Field name: pitch_roll_var
  {
    cdr << ros_message->pitch_roll_var;
  }

  // Field name: rx_clk_bias
  {
    cdr << ros_message->rx_clk_bias;
  }

  // Field name: rx_clk_bias_var
  {
    cdr << ros_message->rx_clk_bias_var;
  }

  // Field name: rx_clk_drift
  {
    cdr << ros_message->rx_clk_drift;
  }

  // Field name: rx_clk_drift_var
  {
    cdr << ros_message->rx_clk_drift_var;
  }

  // Field name: time_system
  {
    cdr << ros_message->time_system;
  }

  // Field name: datum
  {
    cdr << ros_message->datum;
  }

  // Field name: nrsv
  {
    cdr << ros_message->nrsv;
  }

  // Field name: nrsv_used
  {
    cdr << ros_message->nrsv_used;
  }

  // Field name: nrsv_used_with_l1
  {
    cdr << ros_message->nrsv_used_with_l1;
  }

  // Field name: nrsv_used_multi
  {
    cdr << ros_message->nrsv_used_multi;
  }

  // Field name: wa_corr_info
  {
    cdr << ros_message->wa_corr_info;
  }

  // Field name: reference_id
  {
    cdr << ros_message->reference_id;
  }

  // Field name: mean_corr_age
  {
    cdr << ros_message->mean_corr_age;
  }

  // Field name: signal_info
  {
    cdr << ros_message->signal_info;
  }

  // Field name: alert_flag
  {
    cdr << ros_message->alert_flag;
  }

  // Field name: nr_bases
  {
    cdr << ros_message->nr_bases;
  }

  // Field name: ppp_info
  {
    cdr << ros_message->ppp_info;
  }

  // Field name: sol_age
  {
    cdr << ros_message->sol_age;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: do_not_use_this
  {
    cdr << (ros_message->do_not_use_this ? true : false);
  }

  return true;
}

static bool _PVAGeodetic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PVAGeodetic__ros_msg_type * ros_message = static_cast<_PVAGeodetic__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: tow
  {
    cdr >> ros_message->tow;
  }

  // Field name: wnc
  {
    cdr >> ros_message->wnc;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: phi_geo
  {
    cdr >> ros_message->phi_geo;
  }

  // Field name: phi_geo_var
  {
    cdr >> ros_message->phi_geo_var;
  }

  // Field name: lambda_geo
  {
    cdr >> ros_message->lambda_geo;
  }

  // Field name: lambda_geo_var
  {
    cdr >> ros_message->lambda_geo_var;
  }

  // Field name: h_geo
  {
    cdr >> ros_message->h_geo;
  }

  // Field name: h_geo_var
  {
    cdr >> ros_message->h_geo_var;
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: vn
  {
    cdr >> ros_message->vn;
  }

  // Field name: ve
  {
    cdr >> ros_message->ve;
  }

  // Field name: vu
  {
    cdr >> ros_message->vu;
  }

  // Field name: trk_gnd
  {
    cdr >> ros_message->trk_gnd;
  }

  // Field name: cog
  {
    cdr >> ros_message->cog;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: yaw_var
  {
    cdr >> ros_message->yaw_var;
  }

  // Field name: pitch_roll
  {
    cdr >> ros_message->pitch_roll;
  }

  // Field name: pitch_roll_var
  {
    cdr >> ros_message->pitch_roll_var;
  }

  // Field name: rx_clk_bias
  {
    cdr >> ros_message->rx_clk_bias;
  }

  // Field name: rx_clk_bias_var
  {
    cdr >> ros_message->rx_clk_bias_var;
  }

  // Field name: rx_clk_drift
  {
    cdr >> ros_message->rx_clk_drift;
  }

  // Field name: rx_clk_drift_var
  {
    cdr >> ros_message->rx_clk_drift_var;
  }

  // Field name: time_system
  {
    cdr >> ros_message->time_system;
  }

  // Field name: datum
  {
    cdr >> ros_message->datum;
  }

  // Field name: nrsv
  {
    cdr >> ros_message->nrsv;
  }

  // Field name: nrsv_used
  {
    cdr >> ros_message->nrsv_used;
  }

  // Field name: nrsv_used_with_l1
  {
    cdr >> ros_message->nrsv_used_with_l1;
  }

  // Field name: nrsv_used_multi
  {
    cdr >> ros_message->nrsv_used_multi;
  }

  // Field name: wa_corr_info
  {
    cdr >> ros_message->wa_corr_info;
  }

  // Field name: reference_id
  {
    cdr >> ros_message->reference_id;
  }

  // Field name: mean_corr_age
  {
    cdr >> ros_message->mean_corr_age;
  }

  // Field name: signal_info
  {
    cdr >> ros_message->signal_info;
  }

  // Field name: alert_flag
  {
    cdr >> ros_message->alert_flag;
  }

  // Field name: nr_bases
  {
    cdr >> ros_message->nr_bases;
  }

  // Field name: ppp_info
  {
    cdr >> ros_message->ppp_info;
  }

  // Field name: sol_age
  {
    cdr >> ros_message->sol_age;
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: do_not_use_this
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_not_use_this = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PVAGeodetic__ros_msg_type * ros_message = static_cast<const _PVAGeodetic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name tow
  {
    size_t item_size = sizeof(ros_message->tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wnc
  {
    size_t item_size = sizeof(ros_message->wnc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name phi_geo
  {
    size_t item_size = sizeof(ros_message->phi_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name phi_geo_var
  {
    size_t item_size = sizeof(ros_message->phi_geo_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_geo
  {
    size_t item_size = sizeof(ros_message->lambda_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_geo_var
  {
    size_t item_size = sizeof(ros_message->lambda_geo_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h_geo
  {
    size_t item_size = sizeof(ros_message->h_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h_geo_var
  {
    size_t item_size = sizeof(ros_message->h_geo_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vn
  {
    size_t item_size = sizeof(ros_message->vn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ve
  {
    size_t item_size = sizeof(ros_message->ve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vu
  {
    size_t item_size = sizeof(ros_message->vu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trk_gnd
  {
    size_t item_size = sizeof(ros_message->trk_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cog
  {
    size_t item_size = sizeof(ros_message->cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_var
  {
    size_t item_size = sizeof(ros_message->yaw_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_roll
  {
    size_t item_size = sizeof(ros_message->pitch_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_roll_var
  {
    size_t item_size = sizeof(ros_message->pitch_roll_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_clk_bias
  {
    size_t item_size = sizeof(ros_message->rx_clk_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_clk_bias_var
  {
    size_t item_size = sizeof(ros_message->rx_clk_bias_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_clk_drift
  {
    size_t item_size = sizeof(ros_message->rx_clk_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_clk_drift_var
  {
    size_t item_size = sizeof(ros_message->rx_clk_drift_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_system
  {
    size_t item_size = sizeof(ros_message->time_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name datum
  {
    size_t item_size = sizeof(ros_message->datum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nrsv
  {
    size_t item_size = sizeof(ros_message->nrsv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nrsv_used
  {
    size_t item_size = sizeof(ros_message->nrsv_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nrsv_used_with_l1
  {
    size_t item_size = sizeof(ros_message->nrsv_used_with_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nrsv_used_multi
  {
    size_t item_size = sizeof(ros_message->nrsv_used_multi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wa_corr_info
  {
    size_t item_size = sizeof(ros_message->wa_corr_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_id
  {
    size_t item_size = sizeof(ros_message->reference_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean_corr_age
  {
    size_t item_size = sizeof(ros_message->mean_corr_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_info
  {
    size_t item_size = sizeof(ros_message->signal_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alert_flag
  {
    size_t item_size = sizeof(ros_message->alert_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nr_bases
  {
    size_t item_size = sizeof(ros_message->nr_bases);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ppp_info
  {
    size_t item_size = sizeof(ros_message->ppp_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sol_age
  {
    size_t item_size = sizeof(ros_message->sol_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name do_not_use_this
  {
    size_t item_size = sizeof(ros_message->do_not_use_this);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PVAGeodetic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wnc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: phi_geo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: phi_geo_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lambda_geo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lambda_geo_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: h_geo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: h_geo_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: undulation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trk_gnd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_roll_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_clk_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rx_clk_bias_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rx_clk_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rx_clk_drift_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: time_system
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: datum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nrsv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nrsv_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nrsv_used_with_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nrsv_used_multi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wa_corr_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mean_corr_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: signal_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alert_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nr_bases
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ppp_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sol_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: do_not_use_this
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
    using DataType = irt_nav_msgs__msg__PVAGeodetic;
    is_plain =
      (
      offsetof(DataType, do_not_use_this) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PVAGeodetic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__PVAGeodetic(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PVAGeodetic = {
  "irt_nav_msgs::msg",
  "PVAGeodetic",
  _PVAGeodetic__cdr_serialize,
  _PVAGeodetic__cdr_deserialize,
  _PVAGeodetic__get_serialized_size,
  _PVAGeodetic__max_serialized_size
};

static rosidl_message_type_support_t _PVAGeodetic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PVAGeodetic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, PVAGeodetic)() {
  return &_PVAGeodetic__type_support;
}

#if defined(__cplusplus)
}
#endif
