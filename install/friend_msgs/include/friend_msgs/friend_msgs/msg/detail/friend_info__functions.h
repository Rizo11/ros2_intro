// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from friend_msgs:msg/FriendInfo.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__FUNCTIONS_H_
#define FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "friend_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "friend_msgs/msg/detail/friend_info__struct.h"

/// Initialize msg/FriendInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * friend_msgs__msg__FriendInfo
 * )) before or use
 * friend_msgs__msg__FriendInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__msg__FriendInfo__init(friend_msgs__msg__FriendInfo * msg);

/// Finalize msg/FriendInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__msg__FriendInfo__fini(friend_msgs__msg__FriendInfo * msg);

/// Create msg/FriendInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * friend_msgs__msg__FriendInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
friend_msgs__msg__FriendInfo *
friend_msgs__msg__FriendInfo__create();

/// Destroy msg/FriendInfo message.
/**
 * It calls
 * friend_msgs__msg__FriendInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__msg__FriendInfo__destroy(friend_msgs__msg__FriendInfo * msg);

/// Check for msg/FriendInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__msg__FriendInfo__are_equal(const friend_msgs__msg__FriendInfo * lhs, const friend_msgs__msg__FriendInfo * rhs);

/// Copy a msg/FriendInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__msg__FriendInfo__copy(
  const friend_msgs__msg__FriendInfo * input,
  friend_msgs__msg__FriendInfo * output);

/// Initialize array of msg/FriendInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * friend_msgs__msg__FriendInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__msg__FriendInfo__Sequence__init(friend_msgs__msg__FriendInfo__Sequence * array, size_t size);

/// Finalize array of msg/FriendInfo messages.
/**
 * It calls
 * friend_msgs__msg__FriendInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__msg__FriendInfo__Sequence__fini(friend_msgs__msg__FriendInfo__Sequence * array);

/// Create array of msg/FriendInfo messages.
/**
 * It allocates the memory for the array and calls
 * friend_msgs__msg__FriendInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
friend_msgs__msg__FriendInfo__Sequence *
friend_msgs__msg__FriendInfo__Sequence__create(size_t size);

/// Destroy array of msg/FriendInfo messages.
/**
 * It calls
 * friend_msgs__msg__FriendInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__msg__FriendInfo__Sequence__destroy(friend_msgs__msg__FriendInfo__Sequence * array);

/// Check for msg/FriendInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__msg__FriendInfo__Sequence__are_equal(const friend_msgs__msg__FriendInfo__Sequence * lhs, const friend_msgs__msg__FriendInfo__Sequence * rhs);

/// Copy an array of msg/FriendInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__msg__FriendInfo__Sequence__copy(
  const friend_msgs__msg__FriendInfo__Sequence * input,
  friend_msgs__msg__FriendInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__FUNCTIONS_H_
