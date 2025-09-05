// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__FUNCTIONS_H_
#define IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irt_nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__struct.h"

/// Initialize msg/GNSSObsPreProcessed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irt_nav_msgs__msg__GNSSObsPreProcessed
 * )) before or use
 * irt_nav_msgs__msg__GNSSObsPreProcessed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__GNSSObsPreProcessed__init(irt_nav_msgs__msg__GNSSObsPreProcessed * msg);

/// Finalize msg/GNSSObsPreProcessed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__GNSSObsPreProcessed__fini(irt_nav_msgs__msg__GNSSObsPreProcessed * msg);

/// Create msg/GNSSObsPreProcessed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irt_nav_msgs__msg__GNSSObsPreProcessed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__GNSSObsPreProcessed *
irt_nav_msgs__msg__GNSSObsPreProcessed__create();

/// Destroy msg/GNSSObsPreProcessed message.
/**
 * It calls
 * irt_nav_msgs__msg__GNSSObsPreProcessed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__GNSSObsPreProcessed__destroy(irt_nav_msgs__msg__GNSSObsPreProcessed * msg);

/// Check for msg/GNSSObsPreProcessed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__GNSSObsPreProcessed__are_equal(const irt_nav_msgs__msg__GNSSObsPreProcessed * lhs, const irt_nav_msgs__msg__GNSSObsPreProcessed * rhs);

/// Copy a msg/GNSSObsPreProcessed message.
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
irt_nav_msgs__msg__GNSSObsPreProcessed__copy(
  const irt_nav_msgs__msg__GNSSObsPreProcessed * input,
  irt_nav_msgs__msg__GNSSObsPreProcessed * output);

/// Initialize array of msg/GNSSObsPreProcessed messages.
/**
 * It allocates the memory for the number of elements and calls
 * irt_nav_msgs__msg__GNSSObsPreProcessed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__init(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array, size_t size);

/// Finalize array of msg/GNSSObsPreProcessed messages.
/**
 * It calls
 * irt_nav_msgs__msg__GNSSObsPreProcessed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__fini(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array);

/// Create array of msg/GNSSObsPreProcessed messages.
/**
 * It allocates the memory for the array and calls
 * irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence *
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__create(size_t size);

/// Destroy array of msg/GNSSObsPreProcessed messages.
/**
 * It calls
 * irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__destroy(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array);

/// Check for msg/GNSSObsPreProcessed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__are_equal(const irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * lhs, const irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * rhs);

/// Copy an array of msg/GNSSObsPreProcessed messages.
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
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__copy(
  const irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * input,
  irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__GNSS_OBS_PRE_PROCESSED__FUNCTIONS_H_
