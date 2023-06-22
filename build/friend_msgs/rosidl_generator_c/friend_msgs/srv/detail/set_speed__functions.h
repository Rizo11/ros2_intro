// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from friend_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__SET_SPEED__FUNCTIONS_H_
#define FRIEND_MSGS__SRV__DETAIL__SET_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "friend_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "friend_msgs/srv/detail/set_speed__struct.h"

/// Initialize srv/SetSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * friend_msgs__srv__SetSpeed_Request
 * )) before or use
 * friend_msgs__srv__SetSpeed_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Request__init(friend_msgs__srv__SetSpeed_Request * msg);

/// Finalize srv/SetSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Request__fini(friend_msgs__srv__SetSpeed_Request * msg);

/// Create srv/SetSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * friend_msgs__srv__SetSpeed_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
friend_msgs__srv__SetSpeed_Request *
friend_msgs__srv__SetSpeed_Request__create();

/// Destroy srv/SetSpeed message.
/**
 * It calls
 * friend_msgs__srv__SetSpeed_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Request__destroy(friend_msgs__srv__SetSpeed_Request * msg);

/// Check for srv/SetSpeed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Request__are_equal(const friend_msgs__srv__SetSpeed_Request * lhs, const friend_msgs__srv__SetSpeed_Request * rhs);

/// Copy a srv/SetSpeed message.
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
friend_msgs__srv__SetSpeed_Request__copy(
  const friend_msgs__srv__SetSpeed_Request * input,
  friend_msgs__srv__SetSpeed_Request * output);

/// Initialize array of srv/SetSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * friend_msgs__srv__SetSpeed_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Request__Sequence__init(friend_msgs__srv__SetSpeed_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetSpeed messages.
/**
 * It calls
 * friend_msgs__srv__SetSpeed_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Request__Sequence__fini(friend_msgs__srv__SetSpeed_Request__Sequence * array);

/// Create array of srv/SetSpeed messages.
/**
 * It allocates the memory for the array and calls
 * friend_msgs__srv__SetSpeed_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
friend_msgs__srv__SetSpeed_Request__Sequence *
friend_msgs__srv__SetSpeed_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetSpeed messages.
/**
 * It calls
 * friend_msgs__srv__SetSpeed_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Request__Sequence__destroy(friend_msgs__srv__SetSpeed_Request__Sequence * array);

/// Check for srv/SetSpeed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Request__Sequence__are_equal(const friend_msgs__srv__SetSpeed_Request__Sequence * lhs, const friend_msgs__srv__SetSpeed_Request__Sequence * rhs);

/// Copy an array of srv/SetSpeed messages.
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
friend_msgs__srv__SetSpeed_Request__Sequence__copy(
  const friend_msgs__srv__SetSpeed_Request__Sequence * input,
  friend_msgs__srv__SetSpeed_Request__Sequence * output);

/// Initialize srv/SetSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * friend_msgs__srv__SetSpeed_Response
 * )) before or use
 * friend_msgs__srv__SetSpeed_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Response__init(friend_msgs__srv__SetSpeed_Response * msg);

/// Finalize srv/SetSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Response__fini(friend_msgs__srv__SetSpeed_Response * msg);

/// Create srv/SetSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * friend_msgs__srv__SetSpeed_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
friend_msgs__srv__SetSpeed_Response *
friend_msgs__srv__SetSpeed_Response__create();

/// Destroy srv/SetSpeed message.
/**
 * It calls
 * friend_msgs__srv__SetSpeed_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Response__destroy(friend_msgs__srv__SetSpeed_Response * msg);

/// Check for srv/SetSpeed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Response__are_equal(const friend_msgs__srv__SetSpeed_Response * lhs, const friend_msgs__srv__SetSpeed_Response * rhs);

/// Copy a srv/SetSpeed message.
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
friend_msgs__srv__SetSpeed_Response__copy(
  const friend_msgs__srv__SetSpeed_Response * input,
  friend_msgs__srv__SetSpeed_Response * output);

/// Initialize array of srv/SetSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * friend_msgs__srv__SetSpeed_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Response__Sequence__init(friend_msgs__srv__SetSpeed_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetSpeed messages.
/**
 * It calls
 * friend_msgs__srv__SetSpeed_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Response__Sequence__fini(friend_msgs__srv__SetSpeed_Response__Sequence * array);

/// Create array of srv/SetSpeed messages.
/**
 * It allocates the memory for the array and calls
 * friend_msgs__srv__SetSpeed_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
friend_msgs__srv__SetSpeed_Response__Sequence *
friend_msgs__srv__SetSpeed_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetSpeed messages.
/**
 * It calls
 * friend_msgs__srv__SetSpeed_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
void
friend_msgs__srv__SetSpeed_Response__Sequence__destroy(friend_msgs__srv__SetSpeed_Response__Sequence * array);

/// Check for srv/SetSpeed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_friend_msgs
bool
friend_msgs__srv__SetSpeed_Response__Sequence__are_equal(const friend_msgs__srv__SetSpeed_Response__Sequence * lhs, const friend_msgs__srv__SetSpeed_Response__Sequence * rhs);

/// Copy an array of srv/SetSpeed messages.
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
friend_msgs__srv__SetSpeed_Response__Sequence__copy(
  const friend_msgs__srv__SetSpeed_Response__Sequence * input,
  friend_msgs__srv__SetSpeed_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRIEND_MSGS__SRV__DETAIL__SET_SPEED__FUNCTIONS_H_
