// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from friend_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_H_
#define FRIEND_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetSpeed in the package friend_msgs.
typedef struct friend_msgs__srv__SetSpeed_Request
{
  float desired_speed;
} friend_msgs__srv__SetSpeed_Request;

// Struct for a sequence of friend_msgs__srv__SetSpeed_Request.
typedef struct friend_msgs__srv__SetSpeed_Request__Sequence
{
  friend_msgs__srv__SetSpeed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} friend_msgs__srv__SetSpeed_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetSpeed in the package friend_msgs.
typedef struct friend_msgs__srv__SetSpeed_Response
{
  float previous_speed;
  float new_speed;
  bool stalled;
} friend_msgs__srv__SetSpeed_Response;

// Struct for a sequence of friend_msgs__srv__SetSpeed_Response.
typedef struct friend_msgs__srv__SetSpeed_Response__Sequence
{
  friend_msgs__srv__SetSpeed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} friend_msgs__srv__SetSpeed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRIEND_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_H_
