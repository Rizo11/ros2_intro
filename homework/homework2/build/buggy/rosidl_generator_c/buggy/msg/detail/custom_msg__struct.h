// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_
#define BUGGY__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_

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
#include "std_msgs/msg/detail/string__struct.h"
// Member 'point'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"
// Member 'flag'
#include "std_msgs/msg/detail/bool__struct.h"
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/CustomMsg in the package buggy.
typedef struct buggy__msg__CustomMsg
{
  std_msgs__msg__String name;
  geometry_msgs__msg__PointStamped point;
  std_msgs__msg__Bool flag;
  builtin_interfaces__msg__Time time;
} buggy__msg__CustomMsg;

// Struct for a sequence of buggy__msg__CustomMsg.
typedef struct buggy__msg__CustomMsg__Sequence
{
  buggy__msg__CustomMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy__msg__CustomMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_
