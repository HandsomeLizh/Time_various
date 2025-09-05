// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from boreas_msgs:msg/SensorPose.idl
// generated code does not contain a copyright notice

#ifndef BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__FUNCTIONS_H_
#define BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "boreas_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "boreas_msgs/msg/detail/sensor_pose__struct.h"

/// Initialize msg/SensorPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * boreas_msgs__msg__SensorPose
 * )) before or use
 * boreas_msgs__msg__SensorPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
bool
boreas_msgs__msg__SensorPose__init(boreas_msgs__msg__SensorPose * msg);

/// Finalize msg/SensorPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
void
boreas_msgs__msg__SensorPose__fini(boreas_msgs__msg__SensorPose * msg);

/// Create msg/SensorPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * boreas_msgs__msg__SensorPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
boreas_msgs__msg__SensorPose *
boreas_msgs__msg__SensorPose__create();

/// Destroy msg/SensorPose message.
/**
 * It calls
 * boreas_msgs__msg__SensorPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
void
boreas_msgs__msg__SensorPose__destroy(boreas_msgs__msg__SensorPose * msg);

/// Check for msg/SensorPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
bool
boreas_msgs__msg__SensorPose__are_equal(const boreas_msgs__msg__SensorPose * lhs, const boreas_msgs__msg__SensorPose * rhs);

/// Copy a msg/SensorPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
bool
boreas_msgs__msg__SensorPose__copy(
  const boreas_msgs__msg__SensorPose * input,
  boreas_msgs__msg__SensorPose * output);

/// Initialize array of msg/SensorPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * boreas_msgs__msg__SensorPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
bool
boreas_msgs__msg__SensorPose__Sequence__init(boreas_msgs__msg__SensorPose__Sequence * array, size_t size);

/// Finalize array of msg/SensorPose messages.
/**
 * It calls
 * boreas_msgs__msg__SensorPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
void
boreas_msgs__msg__SensorPose__Sequence__fini(boreas_msgs__msg__SensorPose__Sequence * array);

/// Create array of msg/SensorPose messages.
/**
 * It allocates the memory for the array and calls
 * boreas_msgs__msg__SensorPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
boreas_msgs__msg__SensorPose__Sequence *
boreas_msgs__msg__SensorPose__Sequence__create(size_t size);

/// Destroy array of msg/SensorPose messages.
/**
 * It calls
 * boreas_msgs__msg__SensorPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
void
boreas_msgs__msg__SensorPose__Sequence__destroy(boreas_msgs__msg__SensorPose__Sequence * array);

/// Check for msg/SensorPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
bool
boreas_msgs__msg__SensorPose__Sequence__are_equal(const boreas_msgs__msg__SensorPose__Sequence * lhs, const boreas_msgs__msg__SensorPose__Sequence * rhs);

/// Copy an array of msg/SensorPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_boreas_msgs
bool
boreas_msgs__msg__SensorPose__Sequence__copy(
  const boreas_msgs__msg__SensorPose__Sequence * input,
  boreas_msgs__msg__SensorPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOREAS_MSGS__MSG__DETAIL__SENSOR_POSE__FUNCTIONS_H_
