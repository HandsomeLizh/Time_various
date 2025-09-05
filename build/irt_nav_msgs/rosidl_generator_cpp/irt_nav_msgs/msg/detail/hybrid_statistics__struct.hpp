// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/HybridStatistics.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__HybridStatistics __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__HybridStatistics __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HybridStatistics_
{
  using Type = HybridStatistics_<ContainerAllocator>;

  explicit HybridStatistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iterations = 0ul;
      this->duration = 0.0;
      this->converged = false;
    }
  }

  explicit HybridStatistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iterations = 0ul;
      this->duration = 0.0;
      this->converged = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _iterations_type =
    uint32_t;
  _iterations_type iterations;
  using _duration_type =
    double;
  _duration_type duration;
  using _converged_type =
    bool;
  _converged_type converged;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__iterations(
    const uint32_t & _arg)
  {
    this->iterations = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__converged(
    const bool & _arg)
  {
    this->converged = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__HybridStatistics
    std::shared_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__HybridStatistics
    std::shared_ptr<irt_nav_msgs::msg::HybridStatistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HybridStatistics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->iterations != other.iterations) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->converged != other.converged) {
      return false;
    }
    return true;
  }
  bool operator!=(const HybridStatistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HybridStatistics_

// alias to use template instance with default allocator
using HybridStatistics =
  irt_nav_msgs::msg::HybridStatistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__STRUCT_HPP_
