// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/Correvit.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__Correvit __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__Correvit __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Correvit_
{
  using Type = Correvit_<ContainerAllocator>;

  explicit Correvit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_correvit = 0.0;
      this->vel_x_correvit = 0.0;
      this->vel_y_correvit = 0.0;
      this->vel_correvit = 0.0;
    }
  }

  explicit Correvit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_correvit = 0.0;
      this->vel_x_correvit = 0.0;
      this->vel_y_correvit = 0.0;
      this->vel_correvit = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_correvit_type =
    double;
  _angle_correvit_type angle_correvit;
  using _vel_x_correvit_type =
    double;
  _vel_x_correvit_type vel_x_correvit;
  using _vel_y_correvit_type =
    double;
  _vel_y_correvit_type vel_y_correvit;
  using _vel_correvit_type =
    double;
  _vel_correvit_type vel_correvit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle_correvit(
    const double & _arg)
  {
    this->angle_correvit = _arg;
    return *this;
  }
  Type & set__vel_x_correvit(
    const double & _arg)
  {
    this->vel_x_correvit = _arg;
    return *this;
  }
  Type & set__vel_y_correvit(
    const double & _arg)
  {
    this->vel_y_correvit = _arg;
    return *this;
  }
  Type & set__vel_correvit(
    const double & _arg)
  {
    this->vel_correvit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::Correvit_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::Correvit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Correvit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Correvit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__Correvit
    std::shared_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__Correvit
    std::shared_ptr<irt_nav_msgs::msg::Correvit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Correvit_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle_correvit != other.angle_correvit) {
      return false;
    }
    if (this->vel_x_correvit != other.vel_x_correvit) {
      return false;
    }
    if (this->vel_y_correvit != other.vel_y_correvit) {
      return false;
    }
    if (this->vel_correvit != other.vel_correvit) {
      return false;
    }
    return true;
  }
  bool operator!=(const Correvit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Correvit_

// alias to use template instance with default allocator
using Correvit =
  irt_nav_msgs::msg::Correvit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT__STRUCT_HPP_
