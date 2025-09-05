// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/microstrain__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/microstrain__struct.h"
#include "irt_nav_msgs/msg/detail/microstrain__functions.h"
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


using _Microstrain__ros_msg_type = irt_nav_msgs__msg__Microstrain;

static bool _Microstrain__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Microstrain__ros_msg_type * ros_message = static_cast<const _Microstrain__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor_timestamp
  {
    cdr << ros_message->sensor_timestamp;
  }

  // Field name: data_ok
  {
    cdr << (ros_message->data_ok ? true : false);
  }

  // Field name: acc_x
  {
    cdr << ros_message->acc_x;
  }

  // Field name: acc_y
  {
    cdr << ros_message->acc_y;
  }

  // Field name: acc_z
  {
    cdr << ros_message->acc_z;
  }

  // Field name: gyro_x
  {
    cdr << ros_message->gyro_x;
  }

  // Field name: gyro_y
  {
    cdr << ros_message->gyro_y;
  }

  // Field name: gyro_z
  {
    cdr << ros_message->gyro_z;
  }

  // Field name: mag_x
  {
    cdr << ros_message->mag_x;
  }

  // Field name: mag_y
  {
    cdr << ros_message->mag_y;
  }

  // Field name: mag_z
  {
    cdr << ros_message->mag_z;
  }

  // Field name: amb
  {
    cdr << ros_message->amb;
  }

  // Field name: deltatheta_x
  {
    cdr << ros_message->deltatheta_x;
  }

  // Field name: deltatheta_y
  {
    cdr << ros_message->deltatheta_y;
  }

  // Field name: deltatheta_z
  {
    cdr << ros_message->deltatheta_z;
  }

  // Field name: deltavel_x
  {
    cdr << ros_message->deltavel_x;
  }

  // Field name: deltavel_y
  {
    cdr << ros_message->deltavel_y;
  }

  // Field name: deltavel_z
  {
    cdr << ros_message->deltavel_z;
  }

  // Field name: freq_acc
  {
    cdr << ros_message->freq_acc;
  }

  // Field name: freq_gyro
  {
    cdr << ros_message->freq_gyro;
  }

  // Field name: freq_mag
  {
    cdr << ros_message->freq_mag;
  }

  // Field name: freq_amb
  {
    cdr << ros_message->freq_amb;
  }

  // Field name: freq_d_theta
  {
    cdr << ros_message->freq_d_theta;
  }

  // Field name: freq_d_vel
  {
    cdr << ros_message->freq_d_vel;
  }

  return true;
}

static bool _Microstrain__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Microstrain__ros_msg_type * ros_message = static_cast<_Microstrain__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor_timestamp
  {
    cdr >> ros_message->sensor_timestamp;
  }

  // Field name: data_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data_ok = tmp ? true : false;
  }

  // Field name: acc_x
  {
    cdr >> ros_message->acc_x;
  }

  // Field name: acc_y
  {
    cdr >> ros_message->acc_y;
  }

  // Field name: acc_z
  {
    cdr >> ros_message->acc_z;
  }

  // Field name: gyro_x
  {
    cdr >> ros_message->gyro_x;
  }

  // Field name: gyro_y
  {
    cdr >> ros_message->gyro_y;
  }

  // Field name: gyro_z
  {
    cdr >> ros_message->gyro_z;
  }

  // Field name: mag_x
  {
    cdr >> ros_message->mag_x;
  }

  // Field name: mag_y
  {
    cdr >> ros_message->mag_y;
  }

  // Field name: mag_z
  {
    cdr >> ros_message->mag_z;
  }

  // Field name: amb
  {
    cdr >> ros_message->amb;
  }

  // Field name: deltatheta_x
  {
    cdr >> ros_message->deltatheta_x;
  }

  // Field name: deltatheta_y
  {
    cdr >> ros_message->deltatheta_y;
  }

  // Field name: deltatheta_z
  {
    cdr >> ros_message->deltatheta_z;
  }

  // Field name: deltavel_x
  {
    cdr >> ros_message->deltavel_x;
  }

  // Field name: deltavel_y
  {
    cdr >> ros_message->deltavel_y;
  }

  // Field name: deltavel_z
  {
    cdr >> ros_message->deltavel_z;
  }

  // Field name: freq_acc
  {
    cdr >> ros_message->freq_acc;
  }

  // Field name: freq_gyro
  {
    cdr >> ros_message->freq_gyro;
  }

  // Field name: freq_mag
  {
    cdr >> ros_message->freq_mag;
  }

  // Field name: freq_amb
  {
    cdr >> ros_message->freq_amb;
  }

  // Field name: freq_d_theta
  {
    cdr >> ros_message->freq_d_theta;
  }

  // Field name: freq_d_vel
  {
    cdr >> ros_message->freq_d_vel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__Microstrain(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Microstrain__ros_msg_type * ros_message = static_cast<const _Microstrain__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name sensor_timestamp
  {
    size_t item_size = sizeof(ros_message->sensor_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_ok
  {
    size_t item_size = sizeof(ros_message->data_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_x
  {
    size_t item_size = sizeof(ros_message->acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_y
  {
    size_t item_size = sizeof(ros_message->acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_z
  {
    size_t item_size = sizeof(ros_message->acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_x
  {
    size_t item_size = sizeof(ros_message->gyro_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_y
  {
    size_t item_size = sizeof(ros_message->gyro_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_z
  {
    size_t item_size = sizeof(ros_message->gyro_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_x
  {
    size_t item_size = sizeof(ros_message->mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_y
  {
    size_t item_size = sizeof(ros_message->mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_z
  {
    size_t item_size = sizeof(ros_message->mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name amb
  {
    size_t item_size = sizeof(ros_message->amb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltatheta_x
  {
    size_t item_size = sizeof(ros_message->deltatheta_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltatheta_y
  {
    size_t item_size = sizeof(ros_message->deltatheta_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltatheta_z
  {
    size_t item_size = sizeof(ros_message->deltatheta_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltavel_x
  {
    size_t item_size = sizeof(ros_message->deltavel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltavel_y
  {
    size_t item_size = sizeof(ros_message->deltavel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deltavel_z
  {
    size_t item_size = sizeof(ros_message->deltavel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_acc
  {
    size_t item_size = sizeof(ros_message->freq_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_gyro
  {
    size_t item_size = sizeof(ros_message->freq_gyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_mag
  {
    size_t item_size = sizeof(ros_message->freq_mag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_amb
  {
    size_t item_size = sizeof(ros_message->freq_amb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_d_theta
  {
    size_t item_size = sizeof(ros_message->freq_d_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name freq_d_vel
  {
    size_t item_size = sizeof(ros_message->freq_d_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Microstrain__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__Microstrain(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__Microstrain(
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
  // member: sensor_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: amb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deltatheta_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deltatheta_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deltatheta_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deltavel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deltavel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deltavel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: freq_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: freq_gyro
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: freq_mag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: freq_amb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: freq_d_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: freq_d_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs__msg__Microstrain;
    is_plain =
      (
      offsetof(DataType, freq_d_vel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Microstrain__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__Microstrain(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Microstrain = {
  "irt_nav_msgs::msg",
  "Microstrain",
  _Microstrain__cdr_serialize,
  _Microstrain__cdr_deserialize,
  _Microstrain__get_serialized_size,
  _Microstrain__max_serialized_size
};

static rosidl_message_type_support_t _Microstrain__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Microstrain,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, Microstrain)() {
  return &_Microstrain__type_support;
}

#if defined(__cplusplus)
}
#endif
