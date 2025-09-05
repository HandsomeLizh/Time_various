// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/ElapsedTimeFGO.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__ElapsedTimeFGO __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__ElapsedTimeFGO __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ElapsedTimeFGO_
{
  using Type = ElapsedTimeFGO_<ContainerAllocator>;

  explicit ElapsedTimeFGO_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ts_start_construction = 0.0;
      this->ts_start_optimization = 0.0;
      this->duration_construction = 0.0;
      this->duration_optimization = 0.0;
      this->num_new_factors = 0;
    }
  }

  explicit ElapsedTimeFGO_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ts_start_construction = 0.0;
      this->ts_start_optimization = 0.0;
      this->duration_construction = 0.0;
      this->duration_optimization = 0.0;
      this->num_new_factors = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ts_start_construction_type =
    double;
  _ts_start_construction_type ts_start_construction;
  using _ts_start_optimization_type =
    double;
  _ts_start_optimization_type ts_start_optimization;
  using _duration_construction_type =
    double;
  _duration_construction_type duration_construction;
  using _duration_optimization_type =
    double;
  _duration_optimization_type duration_optimization;
  using _num_new_factors_type =
    uint16_t;
  _num_new_factors_type num_new_factors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ts_start_construction(
    const double & _arg)
  {
    this->ts_start_construction = _arg;
    return *this;
  }
  Type & set__ts_start_optimization(
    const double & _arg)
  {
    this->ts_start_optimization = _arg;
    return *this;
  }
  Type & set__duration_construction(
    const double & _arg)
  {
    this->duration_construction = _arg;
    return *this;
  }
  Type & set__duration_optimization(
    const double & _arg)
  {
    this->duration_optimization = _arg;
    return *this;
  }
  Type & set__num_new_factors(
    const uint16_t & _arg)
  {
    this->num_new_factors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__ElapsedTimeFGO
    std::shared_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__ElapsedTimeFGO
    std::shared_ptr<irt_nav_msgs::msg::ElapsedTimeFGO_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ElapsedTimeFGO_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ts_start_construction != other.ts_start_construction) {
      return false;
    }
    if (this->ts_start_optimization != other.ts_start_optimization) {
      return false;
    }
    if (this->duration_construction != other.duration_construction) {
      return false;
    }
    if (this->duration_optimization != other.duration_optimization) {
      return false;
    }
    if (this->num_new_factors != other.num_new_factors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ElapsedTimeFGO_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ElapsedTimeFGO_

// alias to use template instance with default allocator
using ElapsedTimeFGO =
  irt_nav_msgs::msg::ElapsedTimeFGO_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__ELAPSED_TIME_FGO__STRUCT_HPP_
