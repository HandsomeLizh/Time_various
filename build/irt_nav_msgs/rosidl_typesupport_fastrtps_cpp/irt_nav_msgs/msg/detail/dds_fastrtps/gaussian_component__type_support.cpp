// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gaussian_component__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irt_nav_msgs/msg/detail/gaussian_component__struct.hpp"

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

namespace irt_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_serialize(
  const irt_nav_msgs::msg::GaussianComponent & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: weight
  cdr << ros_message.weight;
  // Member: mean
  {
    cdr << ros_message.mean;
  }
  // Member: covariance
  {
    cdr << ros_message.covariance;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irt_nav_msgs::msg::GaussianComponent & ros_message)
{
  // Member: weight
  cdr >> ros_message.weight;

  // Member: mean
  {
    cdr >> ros_message.mean;
  }

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
get_serialized_size(
  const irt_nav_msgs::msg::GaussianComponent & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: weight
  {
    size_t item_size = sizeof(ros_message.weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean
  {
    size_t array_size = ros_message.mean.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.mean[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: covariance
  {
    size_t array_size = ros_message.covariance.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irt_nav_msgs
max_serialized_size_GaussianComponent(
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


  // Member: weight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mean
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

  // Member: covariance
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irt_nav_msgs::msg::GaussianComponent;
    is_plain =
      (
      offsetof(DataType, covariance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GaussianComponent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::GaussianComponent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GaussianComponent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irt_nav_msgs::msg::GaussianComponent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GaussianComponent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irt_nav_msgs::msg::GaussianComponent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GaussianComponent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GaussianComponent(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GaussianComponent__callbacks = {
  "irt_nav_msgs::msg",
  "GaussianComponent",
  _GaussianComponent__cdr_serialize,
  _GaussianComponent__cdr_deserialize,
  _GaussianComponent__get_serialized_size,
  _GaussianComponent__max_serialized_size
};

static rosidl_message_type_support_t _GaussianComponent__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GaussianComponent__callbacks,
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
get_message_type_support_handle<irt_nav_msgs::msg::GaussianComponent>()
{
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_GaussianComponent__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irt_nav_msgs, msg, GaussianComponent)() {
  return &irt_nav_msgs::msg::typesupport_fastrtps_cpp::_GaussianComponent__handle;
}

#ifdef __cplusplus
}
#endif
