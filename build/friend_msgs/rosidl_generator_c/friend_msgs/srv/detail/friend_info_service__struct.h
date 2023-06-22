// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from friend_msgs:srv/FriendInfoService.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__STRUCT_H_
#define FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FriendInfoService in the package friend_msgs.
typedef struct friend_msgs__srv__FriendInfoService_Request
{
  int32_t id;
  int32_t value;
} friend_msgs__srv__FriendInfoService_Request;

// Struct for a sequence of friend_msgs__srv__FriendInfoService_Request.
typedef struct friend_msgs__srv__FriendInfoService_Request__Sequence
{
  friend_msgs__srv__FriendInfoService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} friend_msgs__srv__FriendInfoService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FriendInfoService in the package friend_msgs.
typedef struct friend_msgs__srv__FriendInfoService_Response
{
  int32_t heartbeat;
} friend_msgs__srv__FriendInfoService_Response;

// Struct for a sequence of friend_msgs__srv__FriendInfoService_Response.
typedef struct friend_msgs__srv__FriendInfoService_Response__Sequence
{
  friend_msgs__srv__FriendInfoService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} friend_msgs__srv__FriendInfoService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__STRUCT_H_
