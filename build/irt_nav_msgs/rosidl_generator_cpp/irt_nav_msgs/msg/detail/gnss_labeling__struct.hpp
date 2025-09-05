// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__STRUCT_HPP_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__STRUCT_HPP_

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
// Member 'ant_main_labels'
// Member 'ant_aux_labels'
#include "irt_nav_msgs/msg/detail/sat_label__struct.hpp"
// Member 'ant_pos'
// Member 'ant_vel'
// Member 'gt_pos'
// Member 'gt_vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irt_nav_msgs__msg__GNSSLabeling __attribute__((deprecated))
#else
# define DEPRECATED__irt_nav_msgs__msg__GNSSLabeling __declspec(deprecated)
#endif

namespace irt_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSLabeling_
{
  using Type = GNSSLabeling_<ContainerAllocator>;

  explicit GNSSLabeling_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ant_pos(_init),
    ant_vel(_init),
    gt_pos(_init),
    gt_vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->related_state_timestamp_nanosec = 0ll;
      this->counter = 0ull;
      this->time_receive = 0.0;
      this->solution_type = 0;
      this->gt_available = false;
      this->clock_bias = 0.0;
      this->clock_drift = 0.0;
      this->gt_clock_bias = 0.0;
      this->gt_clock_drift = 0.0;
      this->environment = "";
    }
  }

  explicit GNSSLabeling_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ant_pos(_alloc, _init),
    ant_vel(_alloc, _init),
    gt_pos(_alloc, _init),
    gt_vel(_alloc, _init),
    environment(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->related_state_timestamp_nanosec = 0ll;
      this->counter = 0ull;
      this->time_receive = 0.0;
      this->solution_type = 0;
      this->gt_available = false;
      this->clock_bias = 0.0;
      this->clock_drift = 0.0;
      this->gt_clock_bias = 0.0;
      this->gt_clock_drift = 0.0;
      this->environment = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _related_state_timestamp_nanosec_type =
    int64_t;
  _related_state_timestamp_nanosec_type related_state_timestamp_nanosec;
  using _counter_type =
    uint64_t;
  _counter_type counter;
  using _time_receive_type =
    double;
  _time_receive_type time_receive;
  using _solution_type_type =
    uint8_t;
  _solution_type_type solution_type;
  using _ant_main_labels_type =
    std::vector<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>>;
  _ant_main_labels_type ant_main_labels;
  using _ant_aux_labels_type =
    std::vector<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>>;
  _ant_aux_labels_type ant_aux_labels;
  using _faulty_prn_main_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _faulty_prn_main_type faulty_prn_main;
  using _faulty_prn_aux_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _faulty_prn_aux_type faulty_prn_aux;
  using _gt_available_type =
    bool;
  _gt_available_type gt_available;
  using _ant_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ant_pos_type ant_pos;
  using _ant_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ant_vel_type ant_vel;
  using _gt_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gt_pos_type gt_pos;
  using _gt_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gt_vel_type gt_vel;
  using _clock_bias_type =
    double;
  _clock_bias_type clock_bias;
  using _clock_drift_type =
    double;
  _clock_drift_type clock_drift;
  using _gt_clock_bias_type =
    double;
  _gt_clock_bias_type gt_clock_bias;
  using _gt_clock_drift_type =
    double;
  _gt_clock_drift_type gt_clock_drift;
  using _environment_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _environment_type environment;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__related_state_timestamp_nanosec(
    const int64_t & _arg)
  {
    this->related_state_timestamp_nanosec = _arg;
    return *this;
  }
  Type & set__counter(
    const uint64_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__time_receive(
    const double & _arg)
  {
    this->time_receive = _arg;
    return *this;
  }
  Type & set__solution_type(
    const uint8_t & _arg)
  {
    this->solution_type = _arg;
    return *this;
  }
  Type & set__ant_main_labels(
    const std::vector<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>> & _arg)
  {
    this->ant_main_labels = _arg;
    return *this;
  }
  Type & set__ant_aux_labels(
    const std::vector<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irt_nav_msgs::msg::SatLabel_<ContainerAllocator>>> & _arg)
  {
    this->ant_aux_labels = _arg;
    return *this;
  }
  Type & set__faulty_prn_main(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->faulty_prn_main = _arg;
    return *this;
  }
  Type & set__faulty_prn_aux(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->faulty_prn_aux = _arg;
    return *this;
  }
  Type & set__gt_available(
    const bool & _arg)
  {
    this->gt_available = _arg;
    return *this;
  }
  Type & set__ant_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ant_pos = _arg;
    return *this;
  }
  Type & set__ant_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ant_vel = _arg;
    return *this;
  }
  Type & set__gt_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gt_pos = _arg;
    return *this;
  }
  Type & set__gt_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gt_vel = _arg;
    return *this;
  }
  Type & set__clock_bias(
    const double & _arg)
  {
    this->clock_bias = _arg;
    return *this;
  }
  Type & set__clock_drift(
    const double & _arg)
  {
    this->clock_drift = _arg;
    return *this;
  }
  Type & set__gt_clock_bias(
    const double & _arg)
  {
    this->gt_clock_bias = _arg;
    return *this;
  }
  Type & set__gt_clock_drift(
    const double & _arg)
  {
    this->gt_clock_drift = _arg;
    return *this;
  }
  Type & set__environment(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->environment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator> *;
  using ConstRawPtr =
    const irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSLabeling
    std::shared_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irt_nav_msgs__msg__GNSSLabeling
    std::shared_ptr<irt_nav_msgs::msg::GNSSLabeling_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSLabeling_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->related_state_timestamp_nanosec != other.related_state_timestamp_nanosec) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->time_receive != other.time_receive) {
      return false;
    }
    if (this->solution_type != other.solution_type) {
      return false;
    }
    if (this->ant_main_labels != other.ant_main_labels) {
      return false;
    }
    if (this->ant_aux_labels != other.ant_aux_labels) {
      return false;
    }
    if (this->faulty_prn_main != other.faulty_prn_main) {
      return false;
    }
    if (this->faulty_prn_aux != other.faulty_prn_aux) {
      return false;
    }
    if (this->gt_available != other.gt_available) {
      return false;
    }
    if (this->ant_pos != other.ant_pos) {
      return false;
    }
    if (this->ant_vel != other.ant_vel) {
      return false;
    }
    if (this->gt_pos != other.gt_pos) {
      return false;
    }
    if (this->gt_vel != other.gt_vel) {
      return false;
    }
    if (this->clock_bias != other.clock_bias) {
      return false;
    }
    if (this->clock_drift != other.clock_drift) {
      return false;
    }
    if (this->gt_clock_bias != other.gt_clock_bias) {
      return false;
    }
    if (this->gt_clock_drift != other.gt_clock_drift) {
      return false;
    }
    if (this->environment != other.environment) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSLabeling_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSLabeling_

// alias to use template instance with default allocator
using GNSSLabeling =
  irt_nav_msgs::msg::GNSSLabeling_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irt_nav_msgs

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_LABELING__STRUCT_HPP_
