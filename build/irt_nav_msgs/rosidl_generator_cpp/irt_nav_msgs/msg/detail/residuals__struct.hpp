// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/Residuals.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUALS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUALS__STRUCT_HPP_

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
// Member 'residuals_ant_main'
// Member 'residuals_ant_aux'
#include "irt_nav_msgs/msg/detail/residual__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__Residuals __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__Residuals __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Residuals_
{
  using Type = Residuals_<ContainerAllocator>;

  explicit Residuals_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Residuals_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _residuals_ant_main_type =
    std::vector<irt_nav_msgs::msg::Residual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::Residual_<ContainerAllocator>>>;
  _residuals_ant_main_type residuals_ant_main;
  using _residuals_ant_aux_type =
    std::vector<irt_nav_msgs::msg::Residual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::Residual_<ContainerAllocator>>>;
  _residuals_ant_aux_type residuals_ant_aux;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__residuals_ant_main(
    const std::vector<irt_nav_msgs::msg::Residual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::Residual_<ContainerAllocator>>> & _arg)
  {
    this->residuals_ant_main = _arg;
    return *this;
  }
  Type & set__residuals_ant_aux(
    const std::vector<irt_nav_msgs::msg::Residual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::Residual_<ContainerAllocator>>> & _arg)
  {
    this->residuals_ant_aux = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::Residuals_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::Residuals_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Residuals_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Residuals_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__Residuals
    std::shared_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__Residuals
    std::shared_ptr<irt_nav_msgs::msg::Residuals_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Residuals_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->residuals_ant_main != other.residuals_ant_main) {
      return false;
    }
    if (this->residuals_ant_aux != other.residuals_ant_aux) {
      return false;
    }
    return true;
  }
  bool operator!=(const Residuals_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Residuals_

// alias to use template instance with default allocator
using Residuals =
  irt_nav_msgs::msg::Residuals_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUALS__STRUCT_HPP_
