// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from friend_msgs:srv/FriendInfoService.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__TRAITS_HPP_
#define FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "friend_msgs/srv/detail/friend_info_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace friend_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FriendInfoService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FriendInfoService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FriendInfoService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace friend_msgs

namespace rosidl_generator_traits
{

[[deprecated("use friend_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const friend_msgs::srv::FriendInfoService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  friend_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use friend_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const friend_msgs::srv::FriendInfoService_Request & msg)
{
  return friend_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<friend_msgs::srv::FriendInfoService_Request>()
{
  return "friend_msgs::srv::FriendInfoService_Request";
}

template<>
inline const char * name<friend_msgs::srv::FriendInfoService_Request>()
{
  return "friend_msgs/srv/FriendInfoService_Request";
}

template<>
struct has_fixed_size<friend_msgs::srv::FriendInfoService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<friend_msgs::srv::FriendInfoService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<friend_msgs::srv::FriendInfoService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace friend_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FriendInfoService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: heartbeat
  {
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FriendInfoService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FriendInfoService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace friend_msgs

namespace rosidl_generator_traits
{

[[deprecated("use friend_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const friend_msgs::srv::FriendInfoService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  friend_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use friend_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const friend_msgs::srv::FriendInfoService_Response & msg)
{
  return friend_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<friend_msgs::srv::FriendInfoService_Response>()
{
  return "friend_msgs::srv::FriendInfoService_Response";
}

template<>
inline const char * name<friend_msgs::srv::FriendInfoService_Response>()
{
  return "friend_msgs/srv/FriendInfoService_Response";
}

template<>
struct has_fixed_size<friend_msgs::srv::FriendInfoService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<friend_msgs::srv::FriendInfoService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<friend_msgs::srv::FriendInfoService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<friend_msgs::srv::FriendInfoService>()
{
  return "friend_msgs::srv::FriendInfoService";
}

template<>
inline const char * name<friend_msgs::srv::FriendInfoService>()
{
  return "friend_msgs/srv/FriendInfoService";
}

template<>
struct has_fixed_size<friend_msgs::srv::FriendInfoService>
  : std::integral_constant<
    bool,
    has_fixed_size<friend_msgs::srv::FriendInfoService_Request>::value &&
    has_fixed_size<friend_msgs::srv::FriendInfoService_Response>::value
  >
{
};

template<>
struct has_bounded_size<friend_msgs::srv::FriendInfoService>
  : std::integral_constant<
    bool,
    has_bounded_size<friend_msgs::srv::FriendInfoService_Request>::value &&
    has_bounded_size<friend_msgs::srv::FriendInfoService_Response>::value
  >
{
};

template<>
struct is_service<friend_msgs::srv::FriendInfoService>
  : std::true_type
{
};

template<>
struct is_service_request<friend_msgs::srv::FriendInfoService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<friend_msgs::srv::FriendInfoService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__TRAITS_HPP_
