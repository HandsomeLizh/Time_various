// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/Residual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__Residual __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__Residual __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Residual_
{
  using Type = Residual_<ContainerAllocator>;

  explicit Residual_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->sat = 0ul;
      this->factor = "";
      this->outlier = false;
    }
  }

  explicit Residual_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    factor(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->sat = 0ul;
      this->factor = "";
      this->outlier = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tow_type =
    double;
  _tow_type tow;
  using _sat_type =
    uint32_t;
  _sat_type sat;
  using _factor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _factor_type factor;
  using _outlier_type =
    bool;
  _outlier_type outlier;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tow(
    const double & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__sat(
    const uint32_t & _arg)
  {
    this->sat = _arg;
    return *this;
  }
  Type & set__factor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->factor = _arg;
    return *this;
  }
  Type & set__outlier(
    const bool & _arg)
  {
    this->outlier = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::Residual_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::Residual_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Residual_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::Residual_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__Residual
    std::shared_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__Residual
    std::shared_ptr<irt_nav_msgs::msg::Residual_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Residual_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->sat != other.sat) {
      return false;
    }
    if (this->factor != other.factor) {
      return false;
    }
    if (this->outlier != other.outlier) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Residual_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Residual_

// alias to use template instance with default allocator
using Residual =
  irt_nav_msgs::msg::Residual_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__RESIDUAL__STRUCT_HPP_
