// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.hpp"

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
bool cdr_serialize(
  const irt_nav_msgs::msg::GNSSObs &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  irt_nav_msgs::msg::GNSSObs &);
size_t get_serialized_size(
  const irt_nav_msgs::msg::GNSSObs &,
  size_t current_alignment);
size_t
max_serialized_size_GNSSObs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace irt_nav_msgs

// functions for irt_nav_msgs::msg::GNSSObs already declared above

// functions for irt_nav_msgs::msg::GNSSObs already declared above

// functions for irt_nav_msgs::msg::GNSSObs already declared above

// functions for irt_nav_msgs::msg::GNSSObs already declared above

namespace irt_nav_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const irt_nav_msgs::msg::GNSSCorrection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  irt_nav_msgs::msg::GNSSCorrection &);
size_t get_serialized_size(
  const irt_nav_msgs::msg::GNSSCorrection &,
  size_t current_alignment);
size_t
max_serialized_size_GNSSCorrection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace irt_nav_msgs


namespace irt_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_serialize(
  const irt_nav_msgs::msg::GNSSObsPreProcessed & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: counter
  cdr << ros_message.counter;
  // Member: time_offset_gal_gps
  cdr << ros_message.time_offset_gal_gps;
  // Member: is_ggto_valid
  cdr << (ros_message.is_ggto_valid ? true : false);
  // Member: gnss_obs_ant_main
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gnss_obs_ant_main,
    cdr);
  // Member: gnss_obs_ant_aux
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gnss_obs_ant_aux,
    cdr);
  // Member: dd_gnss_obs_dualantenna
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dd_gnss_obs_dualantenna,
    cdr);
  // Member: dd_gnss_obs_time
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dd_gnss_obs_time,
    cdr);
  // Member: dd_gnss_obs_rtcm
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dd_gnss_obs_rtcm,
    cdr);
  // Member: gnss_corrections
  {
    size_t size = ros_message.gnss_corrections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.gnss_corrections[i],
        cdr);
    }
  }
  // Member: faulty_prn_main
  {
    cdr << ros_message.faulty_prn_main;
  }
  // Member: faulty_prn_aux
  {
    cdr << ros_message.faulty_prn_aux;
  }
  // Member: has_time_dd
  cdr << (ros_message.has_time_dd ? true : false);
  // Member: has_dualantenna
  cdr << (ros_message.has_dualantenna ? true : false);
  // Member: has_dualantenna_dd
  cdr << (ros_message.has_dualantenna_dd ? true : false);
  // Member: has_rtcm_dd
  cdr << (ros_message.has_rtcm_dd ? true : false);
  // Member: has_rtk
  cdr << (ros_message.has_rtk ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::GNSSObsPreProcessed & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: counter
  cdr >> ros_message.counter;

  // Member: time_offset_gal_gps
  cdr >> ros_message.time_offset_gal_gps;

  // Member: is_ggto_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ggto_valid = tmp ? true : false;
  }

  // Member: gnss_obs_ant_main
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gnss_obs_ant_main);

  // Member: gnss_obs_ant_aux
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gnss_obs_ant_aux);

  // Member: dd_gnss_obs_dualantenna
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dd_gnss_obs_dualantenna);

  // Member: dd_gnss_obs_time
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dd_gnss_obs_time);

  // Member: dd_gnss_obs_rtcm
  irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dd_gnss_obs_rtcm);

  // Member: gnss_corrections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.gnss_corrections.resize(size);
    for (size_t i = 0; i < size; i++) {
      irt_nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.gnss_corrections[i]);
    }
  }

  // Member: faulty_prn_main
  {
    cdr >> ros_message.faulty_prn_main;
  }

  // Member: faulty_prn_aux
  {
    cdr >> ros_message.faulty_prn_aux;
  }

  // Member: has_time_dd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_time_dd = tmp ? true : false;
  }

  // Member: has_dualantenna
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_dualantenna = tmp ? true : false;
  }

  // Member: has_dualantenna_dd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_dualantenna_dd = tmp ? true : false;
  }

  // Member: has_rtcm_dd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_rtcm_dd = tmp ? true : false;
  }

  // Member: has_rtk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_rtk = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::GNSSObsPreProcessed & ros_message,
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
  // Member: counter
  {
    size_t item_size = sizeof(ros_message.counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_offset_gal_gps
  {
    size_t item_size = sizeof(ros_message.time_offset_gal_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_ggto_valid
  {
    size_t item_size = sizeof(ros_message.is_ggto_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_obs_ant_main

  current_alignment +=
    irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gnss_obs_ant_main, current_alignment);
  // Member: gnss_obs_ant_aux

  current_alignment +=
    irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gnss_obs_ant_aux, current_alignment);
  // Member: dd_gnss_obs_dualantenna

  current_alignment +=
    irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dd_gnss_obs_dualantenna, current_alignment);
  // Member: dd_gnss_obs_time

  current_alignment +=
    irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dd_gnss_obs_time, current_alignment);
  // Member: dd_gnss_obs_rtcm

  current_alignment +=
    irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dd_gnss_obs_rtcm, current_alignment);
  // Member: gnss_corrections
  {
    size_t array_size = ros_message.gnss_corrections.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.gnss_corrections[index], current_alignment);
    }
  }
  // Member: faulty_prn_main
  {
    size_t array_size = ros_message.faulty_prn_main.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.faulty_prn_main[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: faulty_prn_aux
  {
    size_t array_size = ros_message.faulty_prn_aux.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.faulty_prn_aux[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_time_dd
  {
    size_t item_size = sizeof(ros_message.has_time_dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_dualantenna
  {
    size_t item_size = sizeof(ros_message.has_dualantenna);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_dualantenna_dd
  {
    size_t item_size = sizeof(ros_message.has_dualantenna_dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_rtcm_dd
  {
    size_t item_size = sizeof(ros_message.has_rtcm_dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_rtk
  {
    size_t item_size = sizeof(ros_message.has_rtk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_GNSSObsPreProcessed(
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

  // Member: counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_offset_gal_gps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_ggto_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_obs_ant_main
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gnss_obs_ant_aux
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dd_gnss_obs_dualantenna
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dd_gnss_obs_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dd_gnss_obs_rtcm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GNSSObs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gnss_corrections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        irt_nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GNSSCorrection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: faulty_prn_main
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: faulty_prn_aux
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_time_dd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_dualantenna
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_dualantenna_dd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_rtcm_dd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_rtk
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
    using DataType = irt_nav_msgs::msg::GNSSObsPreProcessed;
    is_plain =
      (
      offsetof(DataType, has_rtk) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GNSSObsPreProcessed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::GNSSObsPreProcessed *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GNSSObsPreProcessed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::GNSSObsPreProcessed *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GNSSObsPreProcessed__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::GNSSObsPreProcessed *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GNSSObsPreProcessed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GNSSObsPreProcessed(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GNSSObsPreProcessed__callbacks = {
  "irt_nav_msgs::msg",
  "GNSSObsPreProcessed",
  _GNSSObsPreProcessed__cdr_serialize,
  _GNSSObsPreProcessed__cdr_deserialize,
  _GNSSObsPreProcessed__get_serialized_size,
  _GNSSObsPreProcessed__max_serialized_size
};

static rosidl_message_type_support_t _GNSSObsPreProcessed__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GNSSObsPreProcessed__callbacks,
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
get_message_type_support_handle<irt_nav_msgs::msg::GNSSObsPreProcessed>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_GNSSObsPreProcessed__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, GNSSObsPreProcessed)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_GNSSObsPreProcessed__handle;
}

#ifdef __cplusplus
}
#endif
