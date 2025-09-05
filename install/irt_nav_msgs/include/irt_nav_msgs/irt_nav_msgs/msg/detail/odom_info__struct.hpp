// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_HPP_

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
// Member 'odom_anchor_ecef_pos'
// Member 'odom_anchor_ecef_to_enu_rpy'
// Member 'odom_local_pos'
// Member 'odom_local_rpy'
// Member 'odom_ecef_pos'
// Member 'odom_ecef_rpy'
// Member 'sensor_local_pos_from'
// Member 'sensor_local_rpy_from'
// Member 'sensor_enu_pos_from'
// Member 'sensor_enu_rpy_from'
// Member 'sensor_ecef_pos_from'
// Member 'sensor_ecef_rpy_from'
// Member 'sensor_local_pos_to'
// Member 'sensor_local_rpy_to'
// Member 'sensor_enu_pos_to'
// Member 'sensor_enu_rpy_to'
// Member 'sensor_ecef_pos_to'
// Member 'sensor_ecef_rpy_to'
// Member 'sensor_local_pos_to_optimized'
// Member 'sensor_local_rpy_to_optimized'
// Member 'sensor_enu_pos_to_optimized'
// Member 'sensor_enu_rpy_to_optimized'
// Member 'sensor_ecef_pos_to_optimized'
// Member 'sensor_ecef_rpy_to_optimized'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__OdomInfo __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__OdomInfo __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OdomInfo_
{
  using Type = OdomInfo_<ContainerAllocator>;

  explicit OdomInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    odom_anchor_ecef_pos(_init),
    odom_anchor_ecef_to_enu_rpy(_init),
    odom_local_pos(_init),
    odom_local_rpy(_init),
    odom_ecef_pos(_init),
    odom_ecef_rpy(_init),
    sensor_local_pos_from(_init),
    sensor_local_rpy_from(_init),
    sensor_enu_pos_from(_init),
    sensor_enu_rpy_from(_init),
    sensor_ecef_pos_from(_init),
    sensor_ecef_rpy_from(_init),
    sensor_local_pos_to(_init),
    sensor_local_rpy_to(_init),
    sensor_enu_pos_to(_init),
    sensor_enu_rpy_to(_init),
    sensor_ecef_pos_to(_init),
    sensor_ecef_rpy_to(_init),
    sensor_local_pos_to_optimized(_init),
    sensor_local_rpy_to_optimized(_init),
    sensor_enu_pos_to_optimized(_init),
    sensor_enu_rpy_to_optimized(_init),
    sensor_ecef_pos_to_optimized(_init),
    sensor_ecef_rpy_to_optimized(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0ull;
      this->key_current = 0ull;
      this->key_previous = 0ull;
      this->odom_anchor_yaw_offset = 0.0;
      this->associated_state_timestamp_i = 0.0;
      this->associated_state_timestamp_j = 0.0;
      this->duration_to_i = 0.0;
      this->associated_with_i = false;
      this->associated_with_j = false;
    }
  }

  explicit OdomInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    odom_anchor_ecef_pos(_alloc, _init),
    odom_anchor_ecef_to_enu_rpy(_alloc, _init),
    odom_local_pos(_alloc, _init),
    odom_local_rpy(_alloc, _init),
    odom_ecef_pos(_alloc, _init),
    odom_ecef_rpy(_alloc, _init),
    sensor_local_pos_from(_alloc, _init),
    sensor_local_rpy_from(_alloc, _init),
    sensor_enu_pos_from(_alloc, _init),
    sensor_enu_rpy_from(_alloc, _init),
    sensor_ecef_pos_from(_alloc, _init),
    sensor_ecef_rpy_from(_alloc, _init),
    sensor_local_pos_to(_alloc, _init),
    sensor_local_rpy_to(_alloc, _init),
    sensor_enu_pos_to(_alloc, _init),
    sensor_enu_rpy_to(_alloc, _init),
    sensor_ecef_pos_to(_alloc, _init),
    sensor_ecef_rpy_to(_alloc, _init),
    sensor_local_pos_to_optimized(_alloc, _init),
    sensor_local_rpy_to_optimized(_alloc, _init),
    sensor_enu_pos_to_optimized(_alloc, _init),
    sensor_enu_rpy_to_optimized(_alloc, _init),
    sensor_ecef_pos_to_optimized(_alloc, _init),
    sensor_ecef_rpy_to_optimized(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0ull;
      this->key_current = 0ull;
      this->key_previous = 0ull;
      this->odom_anchor_yaw_offset = 0.0;
      this->associated_state_timestamp_i = 0.0;
      this->associated_state_timestamp_j = 0.0;
      this->duration_to_i = 0.0;
      this->associated_with_i = false;
      this->associated_with_j = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _counter_type =
    uint64_t;
  _counter_type counter;
  using _key_current_type =
    uint64_t;
  _key_current_type key_current;
  using _key_previous_type =
    uint64_t;
  _key_previous_type key_previous;
  using _odom_anchor_ecef_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _odom_anchor_ecef_pos_type odom_anchor_ecef_pos;
  using _odom_anchor_ecef_to_enu_rpy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _odom_anchor_ecef_to_enu_rpy_type odom_anchor_ecef_to_enu_rpy;
  using _odom_anchor_yaw_offset_type =
    double;
  _odom_anchor_yaw_offset_type odom_anchor_yaw_offset;
  using _associated_state_timestamp_i_type =
    double;
  _associated_state_timestamp_i_type associated_state_timestamp_i;
  using _associated_state_timestamp_j_type =
    double;
  _associated_state_timestamp_j_type associated_state_timestamp_j;
  using _duration_to_i_type =
    double;
  _duration_to_i_type duration_to_i;
  using _associated_with_i_type =
    bool;
  _associated_with_i_type associated_with_i;
  using _associated_with_j_type =
    bool;
  _associated_with_j_type associated_with_j;
  using _odom_local_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _odom_local_pos_type odom_local_pos;
  using _odom_local_rpy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _odom_local_rpy_type odom_local_rpy;
  using _odom_ecef_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _odom_ecef_pos_type odom_ecef_pos;
  using _odom_ecef_rpy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _odom_ecef_rpy_type odom_ecef_rpy;
  using _sensor_local_pos_from_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_local_pos_from_type sensor_local_pos_from;
  using _sensor_local_rpy_from_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_local_rpy_from_type sensor_local_rpy_from;
  using _sensor_enu_pos_from_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_enu_pos_from_type sensor_enu_pos_from;
  using _sensor_enu_rpy_from_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_enu_rpy_from_type sensor_enu_rpy_from;
  using _sensor_ecef_pos_from_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_ecef_pos_from_type sensor_ecef_pos_from;
  using _sensor_ecef_rpy_from_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_ecef_rpy_from_type sensor_ecef_rpy_from;
  using _sensor_local_pos_to_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_local_pos_to_type sensor_local_pos_to;
  using _sensor_local_rpy_to_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_local_rpy_to_type sensor_local_rpy_to;
  using _sensor_enu_pos_to_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_enu_pos_to_type sensor_enu_pos_to;
  using _sensor_enu_rpy_to_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_enu_rpy_to_type sensor_enu_rpy_to;
  using _sensor_ecef_pos_to_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_ecef_pos_to_type sensor_ecef_pos_to;
  using _sensor_ecef_rpy_to_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_ecef_rpy_to_type sensor_ecef_rpy_to;
  using _sensor_local_pos_to_optimized_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_local_pos_to_optimized_type sensor_local_pos_to_optimized;
  using _sensor_local_rpy_to_optimized_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_local_rpy_to_optimized_type sensor_local_rpy_to_optimized;
  using _sensor_enu_pos_to_optimized_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_enu_pos_to_optimized_type sensor_enu_pos_to_optimized;
  using _sensor_enu_rpy_to_optimized_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_enu_rpy_to_optimized_type sensor_enu_rpy_to_optimized;
  using _sensor_ecef_pos_to_optimized_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_ecef_pos_to_optimized_type sensor_ecef_pos_to_optimized;
  using _sensor_ecef_rpy_to_optimized_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _sensor_ecef_rpy_to_optimized_type sensor_ecef_rpy_to_optimized;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__counter(
    const uint64_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__key_current(
    const uint64_t & _arg)
  {
    this->key_current = _arg;
    return *this;
  }
  Type & set__key_previous(
    const uint64_t & _arg)
  {
    this->key_previous = _arg;
    return *this;
  }
  Type & set__odom_anchor_ecef_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->odom_anchor_ecef_pos = _arg;
    return *this;
  }
  Type & set__odom_anchor_ecef_to_enu_rpy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->odom_anchor_ecef_to_enu_rpy = _arg;
    return *this;
  }
  Type & set__odom_anchor_yaw_offset(
    const double & _arg)
  {
    this->odom_anchor_yaw_offset = _arg;
    return *this;
  }
  Type & set__associated_state_timestamp_i(
    const double & _arg)
  {
    this->associated_state_timestamp_i = _arg;
    return *this;
  }
  Type & set__associated_state_timestamp_j(
    const double & _arg)
  {
    this->associated_state_timestamp_j = _arg;
    return *this;
  }
  Type & set__duration_to_i(
    const double & _arg)
  {
    this->duration_to_i = _arg;
    return *this;
  }
  Type & set__associated_with_i(
    const bool & _arg)
  {
    this->associated_with_i = _arg;
    return *this;
  }
  Type & set__associated_with_j(
    const bool & _arg)
  {
    this->associated_with_j = _arg;
    return *this;
  }
  Type & set__odom_local_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->odom_local_pos = _arg;
    return *this;
  }
  Type & set__odom_local_rpy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->odom_local_rpy = _arg;
    return *this;
  }
  Type & set__odom_ecef_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->odom_ecef_pos = _arg;
    return *this;
  }
  Type & set__odom_ecef_rpy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->odom_ecef_rpy = _arg;
    return *this;
  }
  Type & set__sensor_local_pos_from(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_local_pos_from = _arg;
    return *this;
  }
  Type & set__sensor_local_rpy_from(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_local_rpy_from = _arg;
    return *this;
  }
  Type & set__sensor_enu_pos_from(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_enu_pos_from = _arg;
    return *this;
  }
  Type & set__sensor_enu_rpy_from(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_enu_rpy_from = _arg;
    return *this;
  }
  Type & set__sensor_ecef_pos_from(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_ecef_pos_from = _arg;
    return *this;
  }
  Type & set__sensor_ecef_rpy_from(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_ecef_rpy_from = _arg;
    return *this;
  }
  Type & set__sensor_local_pos_to(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_local_pos_to = _arg;
    return *this;
  }
  Type & set__sensor_local_rpy_to(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_local_rpy_to = _arg;
    return *this;
  }
  Type & set__sensor_enu_pos_to(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_enu_pos_to = _arg;
    return *this;
  }
  Type & set__sensor_enu_rpy_to(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_enu_rpy_to = _arg;
    return *this;
  }
  Type & set__sensor_ecef_pos_to(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_ecef_pos_to = _arg;
    return *this;
  }
  Type & set__sensor_ecef_rpy_to(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_ecef_rpy_to = _arg;
    return *this;
  }
  Type & set__sensor_local_pos_to_optimized(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_local_pos_to_optimized = _arg;
    return *this;
  }
  Type & set__sensor_local_rpy_to_optimized(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_local_rpy_to_optimized = _arg;
    return *this;
  }
  Type & set__sensor_enu_pos_to_optimized(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_enu_pos_to_optimized = _arg;
    return *this;
  }
  Type & set__sensor_enu_rpy_to_optimized(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_enu_rpy_to_optimized = _arg;
    return *this;
  }
  Type & set__sensor_ecef_pos_to_optimized(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_ecef_pos_to_optimized = _arg;
    return *this;
  }
  Type & set__sensor_ecef_rpy_to_optimized(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->sensor_ecef_rpy_to_optimized = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::OdomInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::OdomInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::OdomInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::OdomInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__OdomInfo
    std::shared_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__OdomInfo
    std::shared_ptr<irt_nav_msgs::msg::OdomInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdomInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->key_current != other.key_current) {
      return false;
    }
    if (this->key_previous != other.key_previous) {
      return false;
    }
    if (this->odom_anchor_ecef_pos != other.odom_anchor_ecef_pos) {
      return false;
    }
    if (this->odom_anchor_ecef_to_enu_rpy != other.odom_anchor_ecef_to_enu_rpy) {
      return false;
    }
    if (this->odom_anchor_yaw_offset != other.odom_anchor_yaw_offset) {
      return false;
    }
    if (this->associated_state_timestamp_i != other.associated_state_timestamp_i) {
      return false;
    }
    if (this->associated_state_timestamp_j != other.associated_state_timestamp_j) {
      return false;
    }
    if (this->duration_to_i != other.duration_to_i) {
      return false;
    }
    if (this->associated_with_i != other.associated_with_i) {
      return false;
    }
    if (this->associated_with_j != other.associated_with_j) {
      return false;
    }
    if (this->odom_local_pos != other.odom_local_pos) {
      return false;
    }
    if (this->odom_local_rpy != other.odom_local_rpy) {
      return false;
    }
    if (this->odom_ecef_pos != other.odom_ecef_pos) {
      return false;
    }
    if (this->odom_ecef_rpy != other.odom_ecef_rpy) {
      return false;
    }
    if (this->sensor_local_pos_from != other.sensor_local_pos_from) {
      return false;
    }
    if (this->sensor_local_rpy_from != other.sensor_local_rpy_from) {
      return false;
    }
    if (this->sensor_enu_pos_from != other.sensor_enu_pos_from) {
      return false;
    }
    if (this->sensor_enu_rpy_from != other.sensor_enu_rpy_from) {
      return false;
    }
    if (this->sensor_ecef_pos_from != other.sensor_ecef_pos_from) {
      return false;
    }
    if (this->sensor_ecef_rpy_from != other.sensor_ecef_rpy_from) {
      return false;
    }
    if (this->sensor_local_pos_to != other.sensor_local_pos_to) {
      return false;
    }
    if (this->sensor_local_rpy_to != other.sensor_local_rpy_to) {
      return false;
    }
    if (this->sensor_enu_pos_to != other.sensor_enu_pos_to) {
      return false;
    }
    if (this->sensor_enu_rpy_to != other.sensor_enu_rpy_to) {
      return false;
    }
    if (this->sensor_ecef_pos_to != other.sensor_ecef_pos_to) {
      return false;
    }
    if (this->sensor_ecef_rpy_to != other.sensor_ecef_rpy_to) {
      return false;
    }
    if (this->sensor_local_pos_to_optimized != other.sensor_local_pos_to_optimized) {
      return false;
    }
    if (this->sensor_local_rpy_to_optimized != other.sensor_local_rpy_to_optimized) {
      return false;
    }
    if (this->sensor_enu_pos_to_optimized != other.sensor_enu_pos_to_optimized) {
      return false;
    }
    if (this->sensor_enu_rpy_to_optimized != other.sensor_enu_rpy_to_optimized) {
      return false;
    }
    if (this->sensor_ecef_pos_to_optimized != other.sensor_ecef_pos_to_optimized) {
      return false;
    }
    if (this->sensor_ecef_rpy_to_optimized != other.sensor_ecef_rpy_to_optimized) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdomInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdomInfo_

// alias to use template instance with default allocator
using OdomInfo =
  irt_nav_msgs::msg::OdomInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ODOM_INFO__STRUCT_HPP_
