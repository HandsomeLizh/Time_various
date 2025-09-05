// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__FUNCTIONS_H_
#define IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irt_nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irt_nav_msgs/msg/detail/fgo_state__struct.h"

/// Initialize msg/FGOState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irt_nav_msgs__msg__FGOState
 * )) before or use
 * irt_nav_msgs__msg__FGOState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__FGOState__init(irt_nav_msgs__msg__FGOState * msg);

/// Finalize msg/FGOState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__FGOState__fini(irt_nav_msgs__msg__FGOState * msg);

/// Create msg/FGOState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irt_nav_msgs__msg__FGOState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__FGOState *
irt_nav_msgs__msg__FGOState__create();

/// Destroy msg/FGOState message.
/**
 * It calls
 * irt_nav_msgs__msg__FGOState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__FGOState__destroy(irt_nav_msgs__msg__FGOState * msg);

/// Check for msg/FGOState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__FGOState__are_equal(const irt_nav_msgs__msg__FGOState * lhs, const irt_nav_msgs__msg__FGOState * rhs);

/// Copy a msg/FGOState message.
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
irt_nav_msgs__msg__FGOState__copy(
  const irt_nav_msgs__msg__FGOState * input,
  irt_nav_msgs__msg__FGOState * output);

/// Initialize array of msg/FGOState messages.
/**
 * It allocates the memory for the number of elements and calls
 * irt_nav_msgs__msg__FGOState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__FGOState__Sequence__init(irt_nav_msgs__msg__FGOState__Sequence * array, size_t size);

/// Finalize array of msg/FGOState messages.
/**
 * It calls
 * irt_nav_msgs__msg__FGOState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__FGOState__Sequence__fini(irt_nav_msgs__msg__FGOState__Sequence * array);

/// Create array of msg/FGOState messages.
/**
 * It allocates the memory for the array and calls
 * irt_nav_msgs__msg__FGOState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
irt_nav_msgs__msg__FGOState__Sequence *
irt_nav_msgs__msg__FGOState__Sequence__create(size_t size);

/// Destroy array of msg/FGOState messages.
/**
 * It calls
 * irt_nav_msgs__msg__FGOState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
void
irt_nav_msgs__msg__FGOState__Sequence__destroy(irt_nav_msgs__msg__FGOState__Sequence * array);

/// Check for msg/FGOState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irt_nav_msgs
bool
irt_nav_msgs__msg__FGOState__Sequence__are_equal(const irt_nav_msgs__msg__FGOState__Sequence * lhs, const irt_nav_msgs__msg__FGOState__Sequence * rhs);

/// Copy an array of msg/FGOState messages.
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
irt_nav_msgs__msg__FGOState__Sequence__copy(
  const irt_nav_msgs__msg__FGOState__Sequence * input,
  irt_nav_msgs__msg__FGOState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__FGO_STATE__FUNCTIONS_H_
