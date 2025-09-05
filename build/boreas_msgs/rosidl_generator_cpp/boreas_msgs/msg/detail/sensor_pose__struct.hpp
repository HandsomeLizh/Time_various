// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boreas_msgs:msg/SensorPose.idl
// generated code does not contain a copyright notice

#ifndef BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__STRUCT_HPP_
#define BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__STRUCT_HPP_

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
# define DEPRECATED__boreas_msgs__msg__SensorPose __attribute__((deprecated))
#else
# define DEPRECATED__boreas_msgs__msg__SensorPose __declspec(deprecated)
#endif

namespace boreas_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorPose_
{
  using Type = SensorPose_<ContainerAllocator>;

  explicit SensorPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_timestamp = 0.0;
      this->pos_easting = 0.0;
      this->pos_northing = 0.0;
      this->pos_altitude = 0.0;
      this->vel_north = 0.0;
      this->vel_east = 0.0;
      this->vel_up = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->heading = 0.0;
      this->ang_vel_x = 0.0;
      this->ang_vel_y = 0.0;
      this->ang_vel_z = 0.0;
    }
  }

  explicit SensorPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_timestamp = 0.0;
      this->pos_easting = 0.0;
      this->pos_northing = 0.0;
      this->pos_altitude = 0.0;
      this->vel_north = 0.0;
      this->vel_east = 0.0;
      this->vel_up = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->heading = 0.0;
      this->ang_vel_x = 0.0;
      this->ang_vel_y = 0.0;
      this->ang_vel_z = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gps_timestamp_type =
    double;
  _gps_timestamp_type gps_timestamp;
  using _pos_easting_type =
    double;
  _pos_easting_type pos_easting;
  using _pos_northing_type =
    double;
  _pos_northing_type pos_northing;
  using _pos_altitude_type =
    double;
  _pos_altitude_type pos_altitude;
  using _vel_north_type =
    double;
  _vel_north_type vel_north;
  using _vel_east_type =
    double;
  _vel_east_type vel_east;
  using _vel_up_type =
    double;
  _vel_up_type vel_up;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _heading_type =
    double;
  _heading_type heading;
  using _ang_vel_x_type =
    double;
  _ang_vel_x_type ang_vel_x;
  using _ang_vel_y_type =
    double;
  _ang_vel_y_type ang_vel_y;
  using _ang_vel_z_type =
    double;
  _ang_vel_z_type ang_vel_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gps_timestamp(
    const double & _arg)
  {
    this->gps_timestamp = _arg;
    return *this;
  }
  Type & set__pos_easting(
    const double & _arg)
  {
    this->pos_easting = _arg;
    return *this;
  }
  Type & set__pos_northing(
    const double & _arg)
  {
    this->pos_northing = _arg;
    return *this;
  }
  Type & set__pos_altitude(
    const double & _arg)
  {
    this->pos_altitude = _arg;
    return *this;
  }
  Type & set__vel_north(
    const double & _arg)
  {
    this->vel_north = _arg;
    return *this;
  }
  Type & set__vel_east(
    const double & _arg)
  {
    this->vel_east = _arg;
    return *this;
  }
  Type & set__vel_up(
    const double & _arg)
  {
    this->vel_up = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__ang_vel_x(
    const double & _arg)
  {
    this->ang_vel_x = _arg;
    return *this;
  }
  Type & set__ang_vel_y(
    const double & _arg)
  {
    this->ang_vel_y = _arg;
    return *this;
  }
  Type & set__ang_vel_z(
    const double & _arg)
  {
    this->ang_vel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boreas_msgs::msg::SensorPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const boreas_msgs::msg::SensorPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boreas_msgs::msg::SensorPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boreas_msgs::msg::SensorPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boreas_msgs__msg__SensorPose
    std::shared_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boreas_msgs__msg__SensorPose
    std::shared_ptr<boreas_msgs::msg::SensorPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gps_timestamp != other.gps_timestamp) {
      return false;
    }
    if (this->pos_easting != other.pos_easting) {
      return false;
    }
    if (this->pos_northing != other.pos_northing) {
      return false;
    }
    if (this->pos_altitude != other.pos_altitude) {
      return false;
    }
    if (this->vel_north != other.vel_north) {
      return false;
    }
    if (this->vel_east != other.vel_east) {
      return false;
    }
    if (this->vel_up != other.vel_up) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->ang_vel_x != other.ang_vel_x) {
      return false;
    }
    if (this->ang_vel_y != other.ang_vel_y) {
      return false;
    }
    if (this->ang_vel_z != other.ang_vel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorPose_

// alias to use template instance with default allocator
using SensorPose =
  boreas_msgs::msg::SensorPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boreas_msgs

#endif  // BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__STRUCT_HPP_
