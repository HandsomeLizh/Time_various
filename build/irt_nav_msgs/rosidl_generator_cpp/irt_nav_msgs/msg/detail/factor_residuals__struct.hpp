// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/FactorResiduals.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__STRUCT_HPP_

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
// Member 'residuals'
#include "irt_nav_msgs/msg/detail/factor_residual__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__FactorResiduals __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__FactorResiduals __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FactorResiduals_
{
  using Type = FactorResiduals_<ContainerAllocator>;

  explicit FactorResiduals_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit FactorResiduals_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _residuals_type =
    std::vector<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>>;
  _residuals_type residuals;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__residuals(
    const std::vector<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>> & _arg)
  {
    this->residuals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__FactorResiduals
    std::shared_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__FactorResiduals
    std::shared_ptr<irt_nav_msgs::msg::FactorResiduals_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FactorResiduals_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->residuals != other.residuals) {
      return false;
    }
    return true;
  }
  bool operator!=(const FactorResiduals_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FactorResiduals_

// alias to use template instance with default allocator
using FactorResiduals =
  irt_nav_msgs::msg::FactorResiduals_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUALS__STRUCT_HPP_
