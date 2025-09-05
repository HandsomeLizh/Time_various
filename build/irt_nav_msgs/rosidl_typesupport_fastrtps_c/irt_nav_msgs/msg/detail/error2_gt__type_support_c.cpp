// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/error2_gt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irt_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irt_nav_msgs/msg/detail/error2_gt__struct.h"
#include "irt_nav_msgs/msg/detail/error2_gt__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // acc_bias, acc_bias_std, cbd, cbd_std, gyro_bias, gyro_bias_std, omega_body, omega_body_std, pose_std_ecef, pose_std_ned, ref_cbd, ref_llh, ref_llh_std, ref_vel, ref_vel_std, vel_ned, vel_std_ecef, vel_std_ned
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // acc_bias, acc_bias_std, cbd, cbd_std, gyro_bias, gyro_bias_std, omega_body, omega_body_std, pose_std_ecef, pose_std_ned, ref_cbd, ref_llh, ref_llh_std, ref_vel, ref_vel_std, vel_ned, vel_std_ecef, vel_std_ned
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


using _Error2GT__ros_msg_type = irt_nav_msgs__msg__Error2GT;

static bool _Error2GT__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Error2GT__ros_msg_type * ros_message = static_cast<const _Error2GT__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ref_tow_before
  {
    cdr << ros_message->ref_tow_before;
  }

  // Field name: ref_tow_after
  {
    cdr << ros_message->ref_tow_after;
  }

  // Field name: tow
  {
    cdr << ros_message->tow;
  }

  // Field name: pos_1d_error_ned
  {
    cdr << ros_message->pos_1d_error_ned;
  }

  // Field name: pos_2d_error_ned
  {
    cdr << ros_message->pos_2d_error_ned;
  }

  // Field name: pos_3d_error_ned
  {
    cdr << ros_message->pos_3d_error_ned;
  }

  // Field name: pos_1d_error_body
  {
    cdr << ros_message->pos_1d_error_body;
  }

  // Field name: pos_2d_error_body
  {
    cdr << ros_message->pos_2d_error_body;
  }

  // Field name: pos_3d_error_body
  {
    cdr << ros_message->pos_3d_error_body;
  }

  // Field name: pos_2d_error_geographic
  {
    cdr << ros_message->pos_2d_error_geographic;
  }

  // Field name: pos_3d_error_geographic
  {
    cdr << ros_message->pos_3d_error_geographic;
  }

  // Field name: pos_2d_error_ecef
  {
    cdr << ros_message->pos_2d_error_ecef;
  }

  // Field name: pos_3d_error_ecef
  {
    cdr << ros_message->pos_3d_error_ecef;
  }

  // Field name: vel_2d_error
  {
    cdr << ros_message->vel_2d_error;
  }

  // Field name: vel_3d_error
  {
    cdr << ros_message->vel_3d_error;
  }

  // Field name: pose_std_ecef
  {
    size_t size = ros_message->pose_std_ecef.size;
    auto array_ptr = ros_message->pose_std_ecef.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pose_std_ned
  {
    size_t size = ros_message->pose_std_ned.size;
    auto array_ptr = ros_message->pose_std_ned.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_std_ecef
  {
    size_t size = ros_message->vel_std_ecef.size;
    auto array_ptr = ros_message->vel_std_ecef.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_std_ned
  {
    size_t size = ros_message->vel_std_ned.size;
    auto array_ptr = ros_message->vel_std_ned.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_llh
  {
    size_t size = ros_message->ref_llh.size;
    auto array_ptr = ros_message->ref_llh.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_llh_std
  {
    size_t size = ros_message->ref_llh_std.size;
    auto array_ptr = ros_message->ref_llh_std.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yaw_error
  {
    cdr << ros_message->yaw_error;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: ref_yaw
  {
    cdr << ros_message->ref_yaw;
  }

  // Field name: ref_yaw_std
  {
    cdr << ros_message->ref_yaw_std;
  }

  // Field name: ref_pitch_roll
  {
    cdr << ros_message->ref_pitch_roll;
  }

  // Field name: ref_pitch_roll_std
  {
    cdr << ros_message->ref_pitch_roll_std;
  }

  // Field name: cbd
  {
    size_t size = ros_message->cbd.size;
    auto array_ptr = ros_message->cbd.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cbd_std
  {
    size_t size = ros_message->cbd_std.size;
    auto array_ptr = ros_message->cbd_std.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_cbd
  {
    size_t size = ros_message->ref_cbd.size;
    auto array_ptr = ros_message->ref_cbd.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_bias
  {
    size_t size = ros_message->acc_bias.size;
    auto array_ptr = ros_message->acc_bias.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_bias
  {
    size_t size = ros_message->gyro_bias.size;
    auto array_ptr = ros_message->gyro_bias.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_bias_std
  {
    size_t size = ros_message->acc_bias_std.size;
    auto array_ptr = ros_message->acc_bias_std.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_bias_std
  {
    size_t size = ros_message->gyro_bias_std.size;
    auto array_ptr = ros_message->gyro_bias_std.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_ned
  {
    size_t size = ros_message->vel_ned.size;
    auto array_ptr = ros_message->vel_ned.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: omega_body
  {
    size_t size = ros_message->omega_body.size;
    auto array_ptr = ros_message->omega_body.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: omega_body_std
  {
    size_t size = ros_message->omega_body_std.size;
    auto array_ptr = ros_message->omega_body_std.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_vel
  {
    size_t size = ros_message->ref_vel.size;
    auto array_ptr = ros_message->ref_vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_vel_std
  {
    size_t size = ros_message->ref_vel_std.size;
    auto array_ptr = ros_message->ref_vel_std.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_mode
  {
    cdr << ros_message->ref_mode;
  }

  // Field name: ref_error
  {
    cdr << ros_message->ref_error;
  }

  return true;
}

static bool _Error2GT__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Error2GT__ros_msg_type * ros_message = static_cast<_Error2GT__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ref_tow_before
  {
    cdr >> ros_message->ref_tow_before;
  }

  // Field name: ref_tow_after
  {
    cdr >> ros_message->ref_tow_after;
  }

  // Field name: tow
  {
    cdr >> ros_message->tow;
  }

  // Field name: pos_1d_error_ned
  {
    cdr >> ros_message->pos_1d_error_ned;
  }

  // Field name: pos_2d_error_ned
  {
    cdr >> ros_message->pos_2d_error_ned;
  }

  // Field name: pos_3d_error_ned
  {
    cdr >> ros_message->pos_3d_error_ned;
  }

  // Field name: pos_1d_error_body
  {
    cdr >> ros_message->pos_1d_error_body;
  }

  // Field name: pos_2d_error_body
  {
    cdr >> ros_message->pos_2d_error_body;
  }

  // Field name: pos_3d_error_body
  {
    cdr >> ros_message->pos_3d_error_body;
  }

  // Field name: pos_2d_error_geographic
  {
    cdr >> ros_message->pos_2d_error_geographic;
  }

  // Field name: pos_3d_error_geographic
  {
    cdr >> ros_message->pos_3d_error_geographic;
  }

  // Field name: pos_2d_error_ecef
  {
    cdr >> ros_message->pos_2d_error_ecef;
  }

  // Field name: pos_3d_error_ecef
  {
    cdr >> ros_message->pos_3d_error_ecef;
  }

  // Field name: vel_2d_error
  {
    cdr >> ros_message->vel_2d_error;
  }

  // Field name: vel_3d_error
  {
    cdr >> ros_message->vel_3d_error;
  }

  // Field name: pose_std_ecef
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_std_ecef.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pose_std_ecef);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pose_std_ecef, size)) {
      fprintf(stderr, "failed to create array for field 'pose_std_ecef'");
      return false;
    }
    auto array_ptr = ros_message->pose_std_ecef.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pose_std_ned
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_std_ned.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pose_std_ned);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pose_std_ned, size)) {
      fprintf(stderr, "failed to create array for field 'pose_std_ned'");
      return false;
    }
    auto array_ptr = ros_message->pose_std_ned.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_std_ecef
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel_std_ecef.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vel_std_ecef);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vel_std_ecef, size)) {
      fprintf(stderr, "failed to create array for field 'vel_std_ecef'");
      return false;
    }
    auto array_ptr = ros_message->vel_std_ecef.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_std_ned
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel_std_ned.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vel_std_ned);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vel_std_ned, size)) {
      fprintf(stderr, "failed to create array for field 'vel_std_ned'");
      return false;
    }
    auto array_ptr = ros_message->vel_std_ned.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_llh
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_llh.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ref_llh);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ref_llh, size)) {
      fprintf(stderr, "failed to create array for field 'ref_llh'");
      return false;
    }
    auto array_ptr = ros_message->ref_llh.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_llh_std
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_llh_std.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ref_llh_std);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ref_llh_std, size)) {
      fprintf(stderr, "failed to create array for field 'ref_llh_std'");
      return false;
    }
    auto array_ptr = ros_message->ref_llh_std.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yaw_error
  {
    cdr >> ros_message->yaw_error;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: ref_yaw
  {
    cdr >> ros_message->ref_yaw;
  }

  // Field name: ref_yaw_std
  {
    cdr >> ros_message->ref_yaw_std;
  }

  // Field name: ref_pitch_roll
  {
    cdr >> ros_message->ref_pitch_roll;
  }

  // Field name: ref_pitch_roll_std
  {
    cdr >> ros_message->ref_pitch_roll_std;
  }

  // Field name: cbd
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cbd.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cbd);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cbd, size)) {
      fprintf(stderr, "failed to create array for field 'cbd'");
      return false;
    }
    auto array_ptr = ros_message->cbd.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cbd_std
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cbd_std.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cbd_std);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cbd_std, size)) {
      fprintf(stderr, "failed to create array for field 'cbd_std'");
      return false;
    }
    auto array_ptr = ros_message->cbd_std.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_cbd
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_cbd.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ref_cbd);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ref_cbd, size)) {
      fprintf(stderr, "failed to create array for field 'ref_cbd'");
      return false;
    }
    auto array_ptr = ros_message->ref_cbd.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_bias
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->acc_bias.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->acc_bias);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->acc_bias, size)) {
      fprintf(stderr, "failed to create array for field 'acc_bias'");
      return false;
    }
    auto array_ptr = ros_message->acc_bias.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_bias
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gyro_bias.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->gyro_bias);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->gyro_bias, size)) {
      fprintf(stderr, "failed to create array for field 'gyro_bias'");
      return false;
    }
    auto array_ptr = ros_message->gyro_bias.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_bias_std
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->acc_bias_std.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->acc_bias_std);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->acc_bias_std, size)) {
      fprintf(stderr, "failed to create array for field 'acc_bias_std'");
      return false;
    }
    auto array_ptr = ros_message->acc_bias_std.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_bias_std
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gyro_bias_std.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->gyro_bias_std);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->gyro_bias_std, size)) {
      fprintf(stderr, "failed to create array for field 'gyro_bias_std'");
      return false;
    }
    auto array_ptr = ros_message->gyro_bias_std.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_ned
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel_ned.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vel_ned);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vel_ned, size)) {
      fprintf(stderr, "failed to create array for field 'vel_ned'");
      return false;
    }
    auto array_ptr = ros_message->vel_ned.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: omega_body
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->omega_body.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->omega_body);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->omega_body, size)) {
      fprintf(stderr, "failed to create array for field 'omega_body'");
      return false;
    }
    auto array_ptr = ros_message->omega_body.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: omega_body_std
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->omega_body_std.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->omega_body_std);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->omega_body_std, size)) {
      fprintf(stderr, "failed to create array for field 'omega_body_std'");
      return false;
    }
    auto array_ptr = ros_message->omega_body_std.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_vel.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ref_vel);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ref_vel, size)) {
      fprintf(stderr, "failed to create array for field 'ref_vel'");
      return false;
    }
    auto array_ptr = ros_message->ref_vel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_vel_std
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_vel_std.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ref_vel_std);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ref_vel_std, size)) {
      fprintf(stderr, "failed to create array for field 'ref_vel_std'");
      return false;
    }
    auto array_ptr = ros_message->ref_vel_std.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_mode
  {
    cdr >> ros_message->ref_mode;
  }

  // Field name: ref_error
  {
    cdr >> ros_message->ref_error;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t get_serialized_size_irt_nav_msgs__msg__Error2GT(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Error2GT__ros_msg_type * ros_message = static_cast<const _Error2GT__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ref_tow_before
  {
    size_t item_size = sizeof(ros_message->ref_tow_before);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_tow_after
  {
    size_t item_size = sizeof(ros_message->ref_tow_after);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow
  {
    size_t item_size = sizeof(ros_message->tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_1d_error_ned
  {
    size_t item_size = sizeof(ros_message->pos_1d_error_ned);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_2d_error_ned
  {
    size_t item_size = sizeof(ros_message->pos_2d_error_ned);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_3d_error_ned
  {
    size_t item_size = sizeof(ros_message->pos_3d_error_ned);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_1d_error_body
  {
    size_t item_size = sizeof(ros_message->pos_1d_error_body);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_2d_error_body
  {
    size_t item_size = sizeof(ros_message->pos_2d_error_body);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_3d_error_body
  {
    size_t item_size = sizeof(ros_message->pos_3d_error_body);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_2d_error_geographic
  {
    size_t item_size = sizeof(ros_message->pos_2d_error_geographic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_3d_error_geographic
  {
    size_t item_size = sizeof(ros_message->pos_3d_error_geographic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_2d_error_ecef
  {
    size_t item_size = sizeof(ros_message->pos_2d_error_ecef);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_3d_error_ecef
  {
    size_t item_size = sizeof(ros_message->pos_3d_error_ecef);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_2d_error
  {
    size_t item_size = sizeof(ros_message->vel_2d_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_3d_error
  {
    size_t item_size = sizeof(ros_message->vel_3d_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_std_ecef
  {
    size_t array_size = ros_message->pose_std_ecef.size;
    auto array_ptr = ros_message->pose_std_ecef.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_std_ned
  {
    size_t array_size = ros_message->pose_std_ned.size;
    auto array_ptr = ros_message->pose_std_ned.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_std_ecef
  {
    size_t array_size = ros_message->vel_std_ecef.size;
    auto array_ptr = ros_message->vel_std_ecef.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_std_ned
  {
    size_t array_size = ros_message->vel_std_ned.size;
    auto array_ptr = ros_message->vel_std_ned.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_llh
  {
    size_t array_size = ros_message->ref_llh.size;
    auto array_ptr = ros_message->ref_llh.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_llh_std
  {
    size_t array_size = ros_message->ref_llh_std.size;
    auto array_ptr = ros_message->ref_llh_std.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_error
  {
    size_t item_size = sizeof(ros_message->yaw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_yaw
  {
    size_t item_size = sizeof(ros_message->ref_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_yaw_std
  {
    size_t item_size = sizeof(ros_message->ref_yaw_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_pitch_roll
  {
    size_t item_size = sizeof(ros_message->ref_pitch_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_pitch_roll_std
  {
    size_t item_size = sizeof(ros_message->ref_pitch_roll_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cbd
  {
    size_t array_size = ros_message->cbd.size;
    auto array_ptr = ros_message->cbd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cbd_std
  {
    size_t array_size = ros_message->cbd_std.size;
    auto array_ptr = ros_message->cbd_std.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_cbd
  {
    size_t array_size = ros_message->ref_cbd.size;
    auto array_ptr = ros_message->ref_cbd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_bias
  {
    size_t array_size = ros_message->acc_bias.size;
    auto array_ptr = ros_message->acc_bias.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias
  {
    size_t array_size = ros_message->gyro_bias.size;
    auto array_ptr = ros_message->gyro_bias.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_bias_std
  {
    size_t array_size = ros_message->acc_bias_std.size;
    auto array_ptr = ros_message->acc_bias_std.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias_std
  {
    size_t array_size = ros_message->gyro_bias_std.size;
    auto array_ptr = ros_message->gyro_bias_std.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_ned
  {
    size_t array_size = ros_message->vel_ned.size;
    auto array_ptr = ros_message->vel_ned.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name omega_body
  {
    size_t array_size = ros_message->omega_body.size;
    auto array_ptr = ros_message->omega_body.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name omega_body_std
  {
    size_t array_size = ros_message->omega_body_std.size;
    auto array_ptr = ros_message->omega_body_std.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_vel
  {
    size_t array_size = ros_message->ref_vel.size;
    auto array_ptr = ros_message->ref_vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_vel_std
  {
    size_t array_size = ros_message->ref_vel_std.size;
    auto array_ptr = ros_message->ref_vel_std.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_mode
  {
    size_t item_size = sizeof(ros_message->ref_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_error
  {
    size_t item_size = sizeof(ros_message->ref_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Error2GT__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irt_nav_msgs__msg__Error2GT(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irt_nav_msgs
size_t max_serialized_size_irt_nav_msgs__msg__Error2GT(
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
  // member: ref_tow_before
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_tow_after
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_1d_error_ned
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_2d_error_ned
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_3d_error_ned
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_1d_error_body
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_2d_error_body
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_3d_error_body
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_2d_error_geographic
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_3d_error_geographic
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_2d_error_ecef
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_3d_error_ecef
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_2d_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_3d_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pose_std_ecef
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pose_std_ned
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_std_ecef
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_std_ned
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_llh
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_llh_std
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_yaw_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_pitch_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_pitch_roll_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cbd
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cbd_std
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_cbd
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_bias
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_bias
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_bias_std
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_bias_std
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_ned
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: omega_body
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: omega_body_std
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_vel_std
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_error
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
    using DataType = irt_nav_msgs__msg__Error2GT;
    is_plain =
      (
      offsetof(DataType, ref_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Error2GT__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irt_nav_msgs__msg__Error2GT(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Error2GT = {
  "irt_nav_msgs::msg",
  "Error2GT",
  _Error2GT__cdr_serialize,
  _Error2GT__cdr_deserialize,
  _Error2GT__get_serialized_size,
  _Error2GT__max_serialized_size
};

static rosidl_message_type_support_t _Error2GT__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Error2GT,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irt_nav_msgs, msg, Error2GT)() {
  return &_Error2GT__type_support;
}

#if defined(__cplusplus)
}
#endif
