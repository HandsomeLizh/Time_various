// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__DumperOdom __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__DumperOdom __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DumperOdom_
{
  using Type = DumperOdom_<ContainerAllocator>;

  explicit DumperOdom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->wheelspeed_count_fl = 0.0;
      this->wheelspeed_count_fr = 0.0;
      this->wheelspeed_count_rl = 0.0;
      this->wheelspeed_count_rr = 0.0;
      this->bin_position = 0.0;
      this->bin_tilt = 0.0;
      this->boost = 0.0;
      this->brake = 0.0;
      this->direction_value = 0.0;
      this->engine_speed = 0.0;
      this->fuel = 0.0;
      this->handbreak = 0.0;
      this->horn = 0.0;
      this->steering_angle = 0.0;
      this->steering_rate = 0.0;
      this->steering_switch = 0.0;
      this->throttle = 0.0;
    }
  }

  explicit DumperOdom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->wheelspeed_count_fl = 0.0;
      this->wheelspeed_count_fr = 0.0;
      this->wheelspeed_count_rl = 0.0;
      this->wheelspeed_count_rr = 0.0;
      this->bin_position = 0.0;
      this->bin_tilt = 0.0;
      this->boost = 0.0;
      this->brake = 0.0;
      this->direction_value = 0.0;
      this->engine_speed = 0.0;
      this->fuel = 0.0;
      this->handbreak = 0.0;
      this->horn = 0.0;
      this->steering_angle = 0.0;
      this->steering_rate = 0.0;
      this->steering_switch = 0.0;
      this->throttle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _wheelspeed_count_fl_type =
    double;
  _wheelspeed_count_fl_type wheelspeed_count_fl;
  using _wheelspeed_count_fr_type =
    double;
  _wheelspeed_count_fr_type wheelspeed_count_fr;
  using _wheelspeed_count_rl_type =
    double;
  _wheelspeed_count_rl_type wheelspeed_count_rl;
  using _wheelspeed_count_rr_type =
    double;
  _wheelspeed_count_rr_type wheelspeed_count_rr;
  using _bin_position_type =
    double;
  _bin_position_type bin_position;
  using _bin_tilt_type =
    double;
  _bin_tilt_type bin_tilt;
  using _boost_type =
    double;
  _boost_type boost;
  using _brake_type =
    double;
  _brake_type brake;
  using _direction_value_type =
    double;
  _direction_value_type direction_value;
  using _engine_speed_type =
    double;
  _engine_speed_type engine_speed;
  using _fuel_type =
    double;
  _fuel_type fuel;
  using _handbreak_type =
    double;
  _handbreak_type handbreak;
  using _horn_type =
    double;
  _horn_type horn;
  using _steering_angle_type =
    double;
  _steering_angle_type steering_angle;
  using _steering_rate_type =
    double;
  _steering_rate_type steering_rate;
  using _steering_switch_type =
    double;
  _steering_switch_type steering_switch;
  using _throttle_type =
    double;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__wheelspeed_count_fl(
    const double & _arg)
  {
    this->wheelspeed_count_fl = _arg;
    return *this;
  }
  Type & set__wheelspeed_count_fr(
    const double & _arg)
  {
    this->wheelspeed_count_fr = _arg;
    return *this;
  }
  Type & set__wheelspeed_count_rl(
    const double & _arg)
  {
    this->wheelspeed_count_rl = _arg;
    return *this;
  }
  Type & set__wheelspeed_count_rr(
    const double & _arg)
  {
    this->wheelspeed_count_rr = _arg;
    return *this;
  }
  Type & set__bin_position(
    const double & _arg)
  {
    this->bin_position = _arg;
    return *this;
  }
  Type & set__bin_tilt(
    const double & _arg)
  {
    this->bin_tilt = _arg;
    return *this;
  }
  Type & set__boost(
    const double & _arg)
  {
    this->boost = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__direction_value(
    const double & _arg)
  {
    this->direction_value = _arg;
    return *this;
  }
  Type & set__engine_speed(
    const double & _arg)
  {
    this->engine_speed = _arg;
    return *this;
  }
  Type & set__fuel(
    const double & _arg)
  {
    this->fuel = _arg;
    return *this;
  }
  Type & set__handbreak(
    const double & _arg)
  {
    this->handbreak = _arg;
    return *this;
  }
  Type & set__horn(
    const double & _arg)
  {
    this->horn = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const double & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__steering_rate(
    const double & _arg)
  {
    this->steering_rate = _arg;
    return *this;
  }
  Type & set__steering_switch(
    const double & _arg)
  {
    this->steering_switch = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::DumperOdom_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::DumperOdom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::DumperOdom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::DumperOdom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__DumperOdom
    std::shared_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__DumperOdom
    std::shared_ptr<irt_nav_msgs::msg::DumperOdom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DumperOdom_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->wheelspeed_count_fl != other.wheelspeed_count_fl) {
      return false;
    }
    if (this->wheelspeed_count_fr != other.wheelspeed_count_fr) {
      return false;
    }
    if (this->wheelspeed_count_rl != other.wheelspeed_count_rl) {
      return false;
    }
    if (this->wheelspeed_count_rr != other.wheelspeed_count_rr) {
      return false;
    }
    if (this->bin_position != other.bin_position) {
      return false;
    }
    if (this->bin_tilt != other.bin_tilt) {
      return false;
    }
    if (this->boost != other.boost) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->direction_value != other.direction_value) {
      return false;
    }
    if (this->engine_speed != other.engine_speed) {
      return false;
    }
    if (this->fuel != other.fuel) {
      return false;
    }
    if (this->handbreak != other.handbreak) {
      return false;
    }
    if (this->horn != other.horn) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->steering_rate != other.steering_rate) {
      return false;
    }
    if (this->steering_switch != other.steering_switch) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const DumperOdom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DumperOdom_

// alias to use template instance with default allocator
using DumperOdom =
  irt_nav_msgs::msg::DumperOdom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__DUMPER_ODOM__STRUCT_HPP_
