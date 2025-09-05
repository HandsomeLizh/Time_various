// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/SensorProcessingReport.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__STRUCT_HPP_

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
# define DEPRECATED__irt_nav_msgs__msg__SensorProcessingReport __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__SensorProcessingReport __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorProcessingReport_
{
  using Type = SensorProcessingReport_<ContainerAllocator>;

  explicit SensorProcessingReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->ts_measurement = 0.0;
      this->num_measurements = 0;
      this->measurement_delay = 0.0;
      this->ts_start_processing = 0.0;
      this->duration_processing = 0.0;
      this->observation_available = false;
      this->message = "";
    }
  }

  explicit SensorProcessingReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_name(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->ts_measurement = 0.0;
      this->num_measurements = 0;
      this->measurement_delay = 0.0;
      this->ts_start_processing = 0.0;
      this->duration_processing = 0.0;
      this->observation_available = false;
      this->message = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_name_type sensor_name;
  using _ts_measurement_type =
    double;
  _ts_measurement_type ts_measurement;
  using _num_measurements_type =
    uint16_t;
  _num_measurements_type num_measurements;
  using _measurement_delay_type =
    double;
  _measurement_delay_type measurement_delay;
  using _ts_start_processing_type =
    double;
  _ts_start_processing_type ts_start_processing;
  using _duration_processing_type =
    double;
  _duration_processing_type duration_processing;
  using _observation_available_type =
    bool;
  _observation_available_type observation_available;
  using _residual_information_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _residual_information_type residual_information;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_name = _arg;
    return *this;
  }
  Type & set__ts_measurement(
    const double & _arg)
  {
    this->ts_measurement = _arg;
    return *this;
  }
  Type & set__num_measurements(
    const uint16_t & _arg)
  {
    this->num_measurements = _arg;
    return *this;
  }
  Type & set__measurement_delay(
    const double & _arg)
  {
    this->measurement_delay = _arg;
    return *this;
  }
  Type & set__ts_start_processing(
    const double & _arg)
  {
    this->ts_start_processing = _arg;
    return *this;
  }
  Type & set__duration_processing(
    const double & _arg)
  {
    this->duration_processing = _arg;
    return *this;
  }
  Type & set__observation_available(
    const bool & _arg)
  {
    this->observation_available = _arg;
    return *this;
  }
  Type & set__residual_information(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->residual_information = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__SensorProcessingReport
    std::shared_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__SensorProcessingReport
    std::shared_ptr<irt_nav_msgs::msg::SensorProcessingReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorProcessingReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_name != other.sensor_name) {
      return false;
    }
    if (this->ts_measurement != other.ts_measurement) {
      return false;
    }
    if (this->num_measurements != other.num_measurements) {
      return false;
    }
    if (this->measurement_delay != other.measurement_delay) {
      return false;
    }
    if (this->ts_start_processing != other.ts_start_processing) {
      return false;
    }
    if (this->duration_processing != other.duration_processing) {
      return false;
    }
    if (this->observation_available != other.observation_available) {
      return false;
    }
    if (this->residual_information != other.residual_information) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorProcessingReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorProcessingReport_

// alias to use template instance with default allocator
using SensorProcessingReport =
  irt_nav_msgs::msg::SensorProcessingReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__SENSOR_PROCESSING_REPORT__STRUCT_HPP_
