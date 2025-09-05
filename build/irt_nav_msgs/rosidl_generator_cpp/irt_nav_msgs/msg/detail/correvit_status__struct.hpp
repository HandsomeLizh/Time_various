// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/CorrevitStatus.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__CorrevitStatus __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__CorrevitStatus __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CorrevitStatus_
{
  using Type = CorrevitStatus_<ContainerAllocator>;

  explicit CorrevitStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_vel_correction = 0.0;
      this->angle_switch_off = 0.0;
      this->direction = 0.0;
      this->direction_head = 0.0;
      this->direction_head_valid = 0.0;
      this->direction_motion = 0.0;
      this->direction_mounting = 0.0;
      this->filter_off_on = 0.0;
      this->filter_setting = 0.0;
      this->head_status = 0.0;
      this->lamp_current = 0.0;
      this->lamp_current_control = 0.0;
      this->sensor_id = 0.0;
      this->temperature = 0.0;
      this->temperature_ok = 0.0;
    }
  }

  explicit CorrevitStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_vel_correction = 0.0;
      this->angle_switch_off = 0.0;
      this->direction = 0.0;
      this->direction_head = 0.0;
      this->direction_head_valid = 0.0;
      this->direction_motion = 0.0;
      this->direction_mounting = 0.0;
      this->filter_off_on = 0.0;
      this->filter_setting = 0.0;
      this->head_status = 0.0;
      this->lamp_current = 0.0;
      this->lamp_current_control = 0.0;
      this->sensor_id = 0.0;
      this->temperature = 0.0;
      this->temperature_ok = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_vel_correction_type =
    double;
  _angle_vel_correction_type angle_vel_correction;
  using _angle_switch_off_type =
    double;
  _angle_switch_off_type angle_switch_off;
  using _direction_type =
    double;
  _direction_type direction;
  using _direction_head_type =
    double;
  _direction_head_type direction_head;
  using _direction_head_valid_type =
    double;
  _direction_head_valid_type direction_head_valid;
  using _direction_motion_type =
    double;
  _direction_motion_type direction_motion;
  using _direction_mounting_type =
    double;
  _direction_mounting_type direction_mounting;
  using _filter_off_on_type =
    double;
  _filter_off_on_type filter_off_on;
  using _filter_setting_type =
    double;
  _filter_setting_type filter_setting;
  using _head_status_type =
    double;
  _head_status_type head_status;
  using _lamp_current_type =
    double;
  _lamp_current_type lamp_current;
  using _lamp_current_control_type =
    double;
  _lamp_current_control_type lamp_current_control;
  using _sensor_id_type =
    double;
  _sensor_id_type sensor_id;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _temperature_ok_type =
    double;
  _temperature_ok_type temperature_ok;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle_vel_correction(
    const double & _arg)
  {
    this->angle_vel_correction = _arg;
    return *this;
  }
  Type & set__angle_switch_off(
    const double & _arg)
  {
    this->angle_switch_off = _arg;
    return *this;
  }
  Type & set__direction(
    const double & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__direction_head(
    const double & _arg)
  {
    this->direction_head = _arg;
    return *this;
  }
  Type & set__direction_head_valid(
    const double & _arg)
  {
    this->direction_head_valid = _arg;
    return *this;
  }
  Type & set__direction_motion(
    const double & _arg)
  {
    this->direction_motion = _arg;
    return *this;
  }
  Type & set__direction_mounting(
    const double & _arg)
  {
    this->direction_mounting = _arg;
    return *this;
  }
  Type & set__filter_off_on(
    const double & _arg)
  {
    this->filter_off_on = _arg;
    return *this;
  }
  Type & set__filter_setting(
    const double & _arg)
  {
    this->filter_setting = _arg;
    return *this;
  }
  Type & set__head_status(
    const double & _arg)
  {
    this->head_status = _arg;
    return *this;
  }
  Type & set__lamp_current(
    const double & _arg)
  {
    this->lamp_current = _arg;
    return *this;
  }
  Type & set__lamp_current_control(
    const double & _arg)
  {
    this->lamp_current_control = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const double & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__temperature_ok(
    const double & _arg)
  {
    this->temperature_ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__CorrevitStatus
    std::shared_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__CorrevitStatus
    std::shared_ptr<irt_nav_msgs::msg::CorrevitStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CorrevitStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle_vel_correction != other.angle_vel_correction) {
      return false;
    }
    if (this->angle_switch_off != other.angle_switch_off) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->direction_head != other.direction_head) {
      return false;
    }
    if (this->direction_head_valid != other.direction_head_valid) {
      return false;
    }
    if (this->direction_motion != other.direction_motion) {
      return false;
    }
    if (this->direction_mounting != other.direction_mounting) {
      return false;
    }
    if (this->filter_off_on != other.filter_off_on) {
      return false;
    }
    if (this->filter_setting != other.filter_setting) {
      return false;
    }
    if (this->head_status != other.head_status) {
      return false;
    }
    if (this->lamp_current != other.lamp_current) {
      return false;
    }
    if (this->lamp_current_control != other.lamp_current_control) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->temperature_ok != other.temperature_ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const CorrevitStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CorrevitStatus_

// alias to use template instance with default allocator
using CorrevitStatus =
  irt_nav_msgs::msg::CorrevitStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_STATUS__STRUCT_HPP_
