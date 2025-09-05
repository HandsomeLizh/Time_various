// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcm1004__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/rtcm1004__struct.hpp"

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
  const irt_nav_msgs::msg::RTCM1004 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: msg_number
  cdr << ros_message.msg_number;
  // Member: ref_station_id
  cdr << ros_message.ref_station_id;
  // Member: gps_epoch_time_ms
  cdr << ros_message.gps_epoch_time_ms;
  // Member: flag_gnss_synchronous
  cdr << ros_message.flag_gnss_synchronous;
  // Member: no_gps_sat_signal_processed
  cdr << ros_message.no_gps_sat_signal_processed;
  // Member: divergency_free_smoothing_indicator
  cdr << ros_message.divergency_free_smoothing_indicator;
  // Member: smoothing_interval
  cdr << ros_message.smoothing_interval;
  // Member: sat_id
  {
    cdr << ros_message.sat_id;
  }
  // Member: l1_code_indicator
  {
    cdr << ros_message.l1_code_indicator;
  }
  // Member: l1_pseudorange_mod1lightms_m
  {
    cdr << ros_message.l1_pseudorange_mod1lightms_m;
  }
  // Member: l1_phasenrange_l1_pseudorange_m
  {
    cdr << ros_message.l1_phasenrange_l1_pseudorange_m;
  }
  // Member: l1_locktime_indicator
  {
    cdr << ros_message.l1_locktime_indicator;
  }
  // Member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    cdr << ros_message.l1_integer_pseudorange_modulus_ambiguity_m;
  }
  // Member: l1_cnr_db_hz
  {
    cdr << ros_message.l1_cnr_db_hz;
  }
  // Member: l2_code_indicator
  {
    cdr << ros_message.l2_code_indicator;
  }
  // Member: l2_l1_pseudorange_difference_m
  {
    cdr << ros_message.l2_l1_pseudorange_difference_m;
  }
  // Member: l2_phaserange_l1_pseudorange_m
  {
    cdr << ros_message.l2_phaserange_l1_pseudorange_m;
  }
  // Member: l2_locktime_indicator
  {
    cdr << ros_message.l2_locktime_indicator;
  }
  // Member: l2_cnr_db_hz
  {
    cdr << ros_message.l2_cnr_db_hz;
  }
  // Member: msg_counter
  cdr << ros_message.msg_counter;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::RTCM1004 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: msg_number
  cdr >> ros_message.msg_number;

  // Member: ref_station_id
  cdr >> ros_message.ref_station_id;

  // Member: gps_epoch_time_ms
  cdr >> ros_message.gps_epoch_time_ms;

  // Member: flag_gnss_synchronous
  cdr >> ros_message.flag_gnss_synchronous;

  // Member: no_gps_sat_signal_processed
  cdr >> ros_message.no_gps_sat_signal_processed;

  // Member: divergency_free_smoothing_indicator
  cdr >> ros_message.divergency_free_smoothing_indicator;

  // Member: smoothing_interval
  cdr >> ros_message.smoothing_interval;

  // Member: sat_id
  {
    cdr >> ros_message.sat_id;
  }

  // Member: l1_code_indicator
  {
    cdr >> ros_message.l1_code_indicator;
  }

  // Member: l1_pseudorange_mod1lightms_m
  {
    cdr >> ros_message.l1_pseudorange_mod1lightms_m;
  }

  // Member: l1_phasenrange_l1_pseudorange_m
  {
    cdr >> ros_message.l1_phasenrange_l1_pseudorange_m;
  }

  // Member: l1_locktime_indicator
  {
    cdr >> ros_message.l1_locktime_indicator;
  }

  // Member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    cdr >> ros_message.l1_integer_pseudorange_modulus_ambiguity_m;
  }

  // Member: l1_cnr_db_hz
  {
    cdr >> ros_message.l1_cnr_db_hz;
  }

  // Member: l2_code_indicator
  {
    cdr >> ros_message.l2_code_indicator;
  }

  // Member: l2_l1_pseudorange_difference_m
  {
    cdr >> ros_message.l2_l1_pseudorange_difference_m;
  }

  // Member: l2_phaserange_l1_pseudorange_m
  {
    cdr >> ros_message.l2_phaserange_l1_pseudorange_m;
  }

  // Member: l2_locktime_indicator
  {
    cdr >> ros_message.l2_locktime_indicator;
  }

  // Member: l2_cnr_db_hz
  {
    cdr >> ros_message.l2_cnr_db_hz;
  }

  // Member: msg_counter
  cdr >> ros_message.msg_counter;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::RTCM1004 & ros_message,
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
  // Member: msg_number
  {
    size_t item_size = sizeof(ros_message.msg_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref_station_id
  {
    size_t item_size = sizeof(ros_message.ref_station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_epoch_time_ms
  {
    size_t item_size = sizeof(ros_message.gps_epoch_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_gnss_synchronous
  {
    size_t item_size = sizeof(ros_message.flag_gnss_synchronous);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: no_gps_sat_signal_processed
  {
    size_t item_size = sizeof(ros_message.no_gps_sat_signal_processed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: divergency_free_smoothing_indicator
  {
    size_t item_size = sizeof(ros_message.divergency_free_smoothing_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: smoothing_interval
  {
    size_t item_size = sizeof(ros_message.smoothing_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sat_id
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.sat_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l1_code_indicator
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l1_code_indicator[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l1_pseudorange_mod1lightms_m
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l1_pseudorange_mod1lightms_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l1_phasenrange_l1_pseudorange_m
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l1_phasenrange_l1_pseudorange_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l1_locktime_indicator
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l1_locktime_indicator[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l1_integer_pseudorange_modulus_ambiguity_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l1_cnr_db_hz
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l1_cnr_db_hz[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l2_code_indicator
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l2_code_indicator[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l2_l1_pseudorange_difference_m
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l2_l1_pseudorange_difference_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l2_phaserange_l1_pseudorange_m
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l2_phaserange_l1_pseudorange_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l2_locktime_indicator
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l2_locktime_indicator[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l2_cnr_db_hz
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.l2_cnr_db_hz[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_counter
  {
    size_t item_size = sizeof(ros_message.msg_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_RTCM1004(
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

  // Member: msg_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ref_station_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gps_epoch_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: flag_gnss_synchronous
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: no_gps_sat_signal_processed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: divergency_free_smoothing_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: smoothing_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sat_id
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: l1_code_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: l1_pseudorange_mod1lightms_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l1_phasenrange_l1_pseudorange_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l1_locktime_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: l1_integer_pseudorange_modulus_ambiguity_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l1_cnr_db_hz
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l2_code_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: l2_l1_pseudorange_difference_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l2_phaserange_l1_pseudorange_m
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l2_locktime_indicator
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: l2_cnr_db_hz
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: msg_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs::msg::RTCM1004;
    is_plain =
      (
      offsetof(DataType, msg_counter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RTCM1004__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::RTCM1004 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RTCM1004__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::RTCM1004 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RTCM1004__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::RTCM1004 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RTCM1004__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RTCM1004(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RTCM1004__callbacks = {
  "irt_nav_msgs::msg",
  "RTCM1004",
  _RTCM1004__cdr_serialize,
  _RTCM1004__cdr_deserialize,
  _RTCM1004__get_serialized_size,
  _RTCM1004__max_serialized_size
};

static rosidl_message_type_support_t _RTCM1004__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RTCM1004__callbacks,
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
get_message_type_support_handle<irt_nav_msgs::msg::RTCM1004>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_RTCM1004__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, RTCM1004)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_RTCM1004__handle;
}

#ifdef __cplusplus
}
#endif
