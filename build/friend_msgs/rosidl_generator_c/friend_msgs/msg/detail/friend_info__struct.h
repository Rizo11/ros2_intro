// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from friend_msgs:msg/FriendInfo.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__STRUCT_H_
#define FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'food_items'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FriendInfo in the package friend_msgs.
typedef struct friend_msgs__msg__FriendInfo
{
  rosidl_runtime_c__String name;
  int32_t id;
  rosidl_runtime_c__int32__Sequence food_items;
} friend_msgs__msg__FriendInfo;

// Struct for a sequence of friend_msgs__msg__FriendInfo.
typedef struct friend_msgs__msg__FriendInfo__Sequence
{
  friend_msgs__msg__FriendInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} friend_msgs__msg__FriendInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__STRUCT_H_
