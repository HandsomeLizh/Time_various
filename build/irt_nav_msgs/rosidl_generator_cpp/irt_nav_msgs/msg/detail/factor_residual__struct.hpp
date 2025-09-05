// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/FactorResidual.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'samples'
#include "irt_nav_msgs/msg/detail/residual_sample__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__FactorResidual __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__FactorResidual __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FactorResidual_
{
  using Type = FactorResidual_<ContainerAllocator>;

  explicit FactorResidual_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->factor_name = "";
      this->current_state_key = 0ull;
    }
  }

  explicit FactorResidual_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : factor_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->factor_name = "";
      this->current_state_key = 0ull;
    }
  }

  // field types and members
  using _factor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _factor_name_type factor_name;
  using _current_state_key_type =
    uint64_t;
  _current_state_key_type current_state_key;
  using _related_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _related_keys_type related_keys;
  using _samples_type =
    std::vector<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>>;
  _samples_type samples;

  // setters for named parameter idiom
  Type & set__factor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->factor_name = _arg;
    return *this;
  }
  Type & set__current_state_key(
    const uint64_t & _arg)
  {
    this->current_state_key = _arg;
    return *this;
  }
  Type & set__related_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->related_keys = _arg;
    return *this;
  }
  Type & set__samples(
    const std::vector<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::ResidualSample_<ContainerAllocator>>> & _arg)
  {
    this->samples = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::FactorResidual_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::FactorResidual_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__FactorResidual
    std::shared_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__FactorResidual
    std::shared_ptr<irt_nav_msgs::msg::FactorResidual_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FactorResidual_ & other) const
  {
    if (this->factor_name != other.factor_name) {
      return false;
    }
    if (this->current_state_key != other.current_state_key) {
      return false;
    }
    if (this->related_keys != other.related_keys) {
      return false;
    }
    if (this->samples != other.samples) {
      return false;
    }
    return true;
  }
  bool operator!=(const FactorResidual_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FactorResidual_

// alias to use template instance with default allocator
using FactorResidual =
  irt_nav_msgs::msg::FactorResidual_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FACTOR_RESIDUAL__STRUCT_HPP_
