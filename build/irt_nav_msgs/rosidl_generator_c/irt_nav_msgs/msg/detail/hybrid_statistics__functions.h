// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irt_nav_msgs:msg/HybridStatistics.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__FUNCTIONS_H_
#define IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irt_nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irt_nav_msgs/msg/detail/hybrid_statistics__struct.h"

/// Initialize msg/HybridStatistics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irt_nav_msgs__msg__HybridStatistics
 * )) before or use
 * irt_nav_msgs__msg__HybridStatistics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__HybridStatistics__init(irt_nav_msgs__msg__HybridStatistics * msg);

/// Finalize msg/HybridStatistics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__HybridStatistics__fini(irt_nav_msgs__msg__HybridStatistics * msg);

/// Create msg/HybridStatistics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irt_nav_msgs__msg__HybridStatistics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__HybridStatistics *
irt_nav_msgs__msg__HybridStatistics__create();

/// Destroy msg/HybridStatistics message.
/**
 * It calls
 * irt_nav_msgs__msg__HybridStatistics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__HybridStatistics__destroy(irt_nav_msgs__msg__HybridStatistics * msg);

/// Check for msg/HybridStatistics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__HybridStatistics__are_equal(const irt_nav_msgs__msg__HybridStatistics * lhs, const irt_nav_msgs__msg__HybridStatistics * rhs);

/// Copy a msg/HybridStatistics message.
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
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__HybridStatistics__copy(
  const irt_nav_msgs__msg__HybridStatistics * input,
  irt_nav_msgs__msg__HybridStatistics * output);

/// Initialize array of msg/HybridStatistics messages.
/**
 * It allocates the memory for the number of elements and calls
 * irt_nav_msgs__msg__HybridStatistics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__HybridStatistics__Sequence__init(irt_nav_msgs__msg__HybridStatistics__Sequence * array, size_t size);

/// Finalize array of msg/HybridStatistics messages.
/**
 * It calls
 * irt_nav_msgs__msg__HybridStatistics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__HybridStatistics__Sequence__fini(irt_nav_msgs__msg__HybridStatistics__Sequence * array);

/// Create array of msg/HybridStatistics messages.
/**
 * It allocates the memory for the array and calls
 * irt_nav_msgs__msg__HybridStatistics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__HybridStatistics__Sequence *
irt_nav_msgs__msg__HybridStatistics__Sequence__create(size_t size);

/// Destroy array of msg/HybridStatistics messages.
/**
 * It calls
 * irt_nav_msgs__msg__HybridStatistics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__HybridStatistics__Sequence__destroy(irt_nav_msgs__msg__HybridStatistics__Sequence * array);

/// Check for msg/HybridStatistics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__HybridStatistics__Sequence__are_equal(const irt_nav_msgs__msg__HybridStatistics__Sequence * lhs, const irt_nav_msgs__msg__HybridStatistics__Sequence * rhs);

/// Copy an array of msg/HybridStatistics messages.
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
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__HybridStatistics__Sequence__copy(
  const irt_nav_msgs__msg__HybridStatistics__Sequence * input,
  irt_nav_msgs__msg__HybridStatistics__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__HYBRID_STATISTICS__FUNCTIONS_H_
