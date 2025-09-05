// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/CorrevitPitchRoll.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__CorrevitPitchRoll __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__CorrevitPitchRoll __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CorrevitPitchRoll_
{
  using Type = CorrevitPitchRoll_<ContainerAllocator>;

  explicit CorrevitPitchRoll_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0;
      this->radius = 0.0;
      this->roll = 0.0;
      this->timestamp = 0.0;
    }
  }

  explicit CorrevitPitchRoll_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0;
      this->radius = 0.0;
      this->roll = 0.0;
      this->timestamp = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _radius_type =
    double;
  _radius_type radius;
  using _roll_type =
    double;
  _roll_type roll;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__CorrevitPitchRoll
    std::shared_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__CorrevitPitchRoll
    std::shared_ptr<irt_nav_msgs::msg::CorrevitPitchRoll_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CorrevitPitchRoll_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CorrevitPitchRoll_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CorrevitPitchRoll_

// alias to use template instance with default allocator
using CorrevitPitchRoll =
  irt_nav_msgs::msg::CorrevitPitchRoll_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__STRUCT_HPP_
