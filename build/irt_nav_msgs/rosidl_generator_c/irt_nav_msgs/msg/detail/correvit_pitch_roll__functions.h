// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irt_nav_msgs:msg/CorrevitPitchRoll.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__FUNCTIONS_H_
#define IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irt_nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irt_nav_msgs/msg/detail/correvit_pitch_roll__struct.h"

/// Initialize msg/CorrevitPitchRoll message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irt_nav_msgs__msg__CorrevitPitchRoll
 * )) before or use
 * irt_nav_msgs__msg__CorrevitPitchRoll__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__CorrevitPitchRoll__init(irt_nav_msgs__msg__CorrevitPitchRoll * msg);

/// Finalize msg/CorrevitPitchRoll message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__CorrevitPitchRoll__fini(irt_nav_msgs__msg__CorrevitPitchRoll * msg);

/// Create msg/CorrevitPitchRoll message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irt_nav_msgs__msg__CorrevitPitchRoll__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__CorrevitPitchRoll *
irt_nav_msgs__msg__CorrevitPitchRoll__create();

/// Destroy msg/CorrevitPitchRoll message.
/**
 * It calls
 * irt_nav_msgs__msg__CorrevitPitchRoll__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__CorrevitPitchRoll__destroy(irt_nav_msgs__msg__CorrevitPitchRoll * msg);

/// Check for msg/CorrevitPitchRoll message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__CorrevitPitchRoll__are_equal(const irt_nav_msgs__msg__CorrevitPitchRoll * lhs, const irt_nav_msgs__msg__CorrevitPitchRoll * rhs);

/// Copy a msg/CorrevitPitchRoll message.
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
irt_nav_msgs__msg__CorrevitPitchRoll__copy(
  const irt_nav_msgs__msg__CorrevitPitchRoll * input,
  irt_nav_msgs__msg__CorrevitPitchRoll * output);

/// Initialize array of msg/CorrevitPitchRoll messages.
/**
 * It allocates the memory for the number of elements and calls
 * irt_nav_msgs__msg__CorrevitPitchRoll__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__init(irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * array, size_t size);

/// Finalize array of msg/CorrevitPitchRoll messages.
/**
 * It calls
 * irt_nav_msgs__msg__CorrevitPitchRoll__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__fini(irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * array);

/// Create array of msg/CorrevitPitchRoll messages.
/**
 * It allocates the memory for the array and calls
 * irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence *
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__create(size_t size);

/// Destroy array of msg/CorrevitPitchRoll messages.
/**
 * It calls
 * irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__destroy(irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * array);

/// Check for msg/CorrevitPitchRoll message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__are_equal(const irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * lhs, const irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * rhs);

/// Copy an array of msg/CorrevitPitchRoll messages.
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
irt_nav_msgs__msg__CorrevitPitchRoll__Sequence__copy(
  const irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * input,
  irt_nav_msgs__msg__CorrevitPitchRoll__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__CORREVIT_PITCH_ROLL__FUNCTIONS_H_
