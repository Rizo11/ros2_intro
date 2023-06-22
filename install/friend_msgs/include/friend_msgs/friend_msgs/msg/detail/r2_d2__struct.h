// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from friend_msgs:msg/R2D2.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__R2_D2__STRUCT_H_
#define FRIEND_MSGS__MSG__DETAIL__R2_D2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/R2D2 in the package friend_msgs.
typedef struct friend_msgs__msg__R2D2
{
  int32_t x;
  int32_t y;
  int32_t z;
  rosidl_runtime_c__String id;
} friend_msgs__msg__R2D2;

// Struct for a sequence of friend_msgs__msg__R2D2.
typedef struct friend_msgs__msg__R2D2__Sequence
{
  friend_msgs__msg__R2D2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} friend_msgs__msg__R2D2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRIEND_MSGS__MSG__DETAIL__R2_D2__STRUCT_H_
