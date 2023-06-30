// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_
#define BUGGY__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in srv/CustomSrv in the package buggy.
typedef struct buggy__srv__CustomSrv_Request
{
  std_msgs__msg__Bool data;
} buggy__srv__CustomSrv_Request;

// Struct for a sequence of buggy__srv__CustomSrv_Request.
typedef struct buggy__srv__CustomSrv_Request__Sequence
{
  buggy__srv__CustomSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy__srv__CustomSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in srv/CustomSrv in the package buggy.
typedef struct buggy__srv__CustomSrv_Response
{
  std_msgs__msg__Bool result;
} buggy__srv__CustomSrv_Response;

// Struct for a sequence of buggy__srv__CustomSrv_Response.
typedef struct buggy__srv__CustomSrv_Response__Sequence
{
  buggy__srv__CustomSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy__srv__CustomSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_
