// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/SatelliteData.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__STRUCT_HPP_

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
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__SatelliteData __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__SatelliteData __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SatelliteData_
{
  using Type = SatelliteData_<ContainerAllocator>;

  explicit SatelliteData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sat = 0ul;
      this->factor = "";
      this->variance = 0.0;
      this->elevation = 0.0;
    }
  }

  explicit SatelliteData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    factor(_alloc),
    position(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sat = 0ul;
      this->factor = "";
      this->variance = 0.0;
      this->elevation = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sat_type =
    uint32_t;
  _sat_type sat;
  using _factor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _factor_type factor;
  using _variance_type =
    double;
  _variance_type variance;
  using _elevation_type =
    double;
  _elevation_type elevation;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }
  Type & set__elevation(
    const double & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::SatelliteData_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::SatelliteData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SatelliteData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SatelliteData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__SatelliteData
    std::shared_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__SatelliteData
    std::shared_ptr<irt_nav_msgs::msg::SatelliteData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SatelliteData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sat != other.sat) {
      return false;
    }
    if (this->factor != other.factor) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SatelliteData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SatelliteData_

// alias to use template instance with default allocator
using SatelliteData =
  irt_nav_msgs::msg::SatelliteData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SATELLITE_DATA__STRUCT_HPP_
