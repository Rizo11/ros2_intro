// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from friend_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice
#include "friend_msgs/srv/detail/set_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "friend_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "friend_msgs/srv/detail/set_speed__struct.h"
#include "friend_msgs/srv/detail/set_speed__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetSpeed_Request__ros_msg_type = friend_msgs__srv__SetSpeed_Request;

static bool _SetSpeed_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetSpeed_Request__ros_msg_type * ros_message = static_cast<const _SetSpeed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_speed
  {
    cdr << ros_message->desired_speed;
  }

  return true;
}

static bool _SetSpeed_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetSpeed_Request__ros_msg_type * ros_message = static_cast<_SetSpeed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_speed
  {
    cdr >> ros_message->desired_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t get_serialized_size_friend_msgs__srv__SetSpeed_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetSpeed_Request__ros_msg_type * ros_message = static_cast<const _SetSpeed_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name desired_speed
  {
    size_t item_size = sizeof(ros_message->desired_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetSpeed_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_friend_msgs__srv__SetSpeed_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t max_serialized_size_friend_msgs__srv__SetSpeed_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: desired_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetSpeed_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_friend_msgs__srv__SetSpeed_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetSpeed_Request = {
  "friend_msgs::srv",
  "SetSpeed_Request",
  _SetSpeed_Request__cdr_serialize,
  _SetSpeed_Request__cdr_deserialize,
  _SetSpeed_Request__get_serialized_size,
  _SetSpeed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeed_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetSpeed_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, SetSpeed_Request)() {
  return &_SetSpeed_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "friend_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "friend_msgs/srv/detail/set_speed__struct.h"
// already included above
// #include "friend_msgs/srv/detail/set_speed__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetSpeed_Response__ros_msg_type = friend_msgs__srv__SetSpeed_Response;

static bool _SetSpeed_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetSpeed_Response__ros_msg_type * ros_message = static_cast<const _SetSpeed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: previous_speed
  {
    cdr << ros_message->previous_speed;
  }

  // Field name: new_speed
  {
    cdr << ros_message->new_speed;
  }

  // Field name: stalled
  {
    cdr << (ros_message->stalled ? true : false);
  }

  return true;
}

static bool _SetSpeed_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetSpeed_Response__ros_msg_type * ros_message = static_cast<_SetSpeed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: previous_speed
  {
    cdr >> ros_message->previous_speed;
  }

  // Field name: new_speed
  {
    cdr >> ros_message->new_speed;
  }

  // Field name: stalled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stalled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t get_serialized_size_friend_msgs__srv__SetSpeed_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetSpeed_Response__ros_msg_type * ros_message = static_cast<const _SetSpeed_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name previous_speed
  {
    size_t item_size = sizeof(ros_message->previous_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name new_speed
  {
    size_t item_size = sizeof(ros_message->new_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stalled
  {
    size_t item_size = sizeof(ros_message->stalled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetSpeed_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_friend_msgs__srv__SetSpeed_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t max_serialized_size_friend_msgs__srv__SetSpeed_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: previous_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: new_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stalled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetSpeed_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_friend_msgs__srv__SetSpeed_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetSpeed_Response = {
  "friend_msgs::srv",
  "SetSpeed_Response",
  _SetSpeed_Response__cdr_serialize,
  _SetSpeed_Response__cdr_deserialize,
  _SetSpeed_Response__get_serialized_size,
  _SetSpeed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeed_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetSpeed_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, SetSpeed_Response)() {
  return &_SetSpeed_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "friend_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "friend_msgs/srv/set_speed.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetSpeed__callbacks = {
  "friend_msgs::srv",
  "SetSpeed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, SetSpeed_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, SetSpeed_Response)(),
};

static rosidl_service_type_support_t SetSpeed__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetSpeed__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, SetSpeed)() {
  return &SetSpeed__handle;
}

#if defined(__cplusplus)
}
#endif
