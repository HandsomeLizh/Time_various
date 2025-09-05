// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/GaussianMixture.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__STRUCT_HPP_

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
// Member 'gaussian'
#include "irt_nav_msgs/msg/detail/gaussian_component__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__GaussianMixture __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__GaussianMixture __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GaussianMixture_
{
  using Type = GaussianMixture_<ContainerAllocator>;

  explicit GaussianMixture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->sat = 0ul;
      this->factor = "";
      this->environment = "";
      this->runtime = 0.0;
      this->dim = 0;
    }
  }

  explicit GaussianMixture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    factor(_alloc),
    environment(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->sat = 0ul;
      this->factor = "";
      this->environment = "";
      this->runtime = 0.0;
      this->dim = 0;
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
  using _environment_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _environment_type environment;
  using _runtime_type =
    double;
  _runtime_type runtime;
  using _dim_type =
    uint8_t;
  _dim_type dim;
  using _residuals_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _residuals_type residuals;
  using _gaussian_type =
    std::vector<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>>;
  _gaussian_type gaussian;

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
  Type & set__environment(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->environment = _arg;
    return *this;
  }
  Type & set__runtime(
    const double & _arg)
  {
    this->runtime = _arg;
    return *this;
  }
  Type & set__dim(
    const uint8_t & _arg)
  {
    this->dim = _arg;
    return *this;
  }
  Type & set__residuals(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->residuals = _arg;
    return *this;
  }
  Type & set__gaussian(
    const std::vector<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::GaussianComponent_<ContainerAllocator>>> & _arg)
  {
    this->gaussian = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__GaussianMixture
    std::shared_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__GaussianMixture
    std::shared_ptr<irt_nav_msgs::msg::GaussianMixture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaussianMixture_ & other) const
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
    if (this->environment != other.environment) {
      return false;
    }
    if (this->runtime != other.runtime) {
      return false;
    }
    if (this->dim != other.dim) {
      return false;
    }
    if (this->residuals != other.residuals) {
      return false;
    }
    if (this->gaussian != other.gaussian) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaussianMixture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaussianMixture_

// alias to use template instance with default allocator
using GaussianMixture =
  irt_nav_msgs::msg::GaussianMixture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GAUSSIAN_MIXTURE__STRUCT_HPP_
