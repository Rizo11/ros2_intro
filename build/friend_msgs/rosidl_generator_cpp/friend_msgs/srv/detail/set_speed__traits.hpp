// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from friend_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__SET_SPEED__TRAITS_HPP_
#define FRIEND_MSGS__SRV__DETAIL__SET_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "friend_msgs/srv/detail/set_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace friend_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_speed
  {
    out << "desired_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeed_Request & msg, bool use_flow_style = false)
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
  const friend_msgs::srv::SetSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  friend_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use friend_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const friend_msgs::srv::SetSpeed_Request & msg)
{
  return friend_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<friend_msgs::srv::SetSpeed_Request>()
{
  return "friend_msgs::srv::SetSpeed_Request";
}

template<>
inline const char * name<friend_msgs::srv::SetSpeed_Request>()
{
  return "friend_msgs/srv/SetSpeed_Request";
}

template<>
struct has_fixed_size<friend_msgs::srv::SetSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<friend_msgs::srv::SetSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<friend_msgs::srv::SetSpeed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace friend_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: previous_speed
  {
    out << "previous_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_speed, out);
    out << ", ";
  }

  // member: new_speed
  {
    out << "new_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.new_speed, out);
    out << ", ";
  }

  // member: stalled
  {
    out << "stalled: ";
    rosidl_generator_traits::value_to_yaml(msg.stalled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: previous_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_speed, out);
    out << "\n";
  }

  // member: new_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.new_speed, out);
    out << "\n";
  }

  // member: stalled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stalled: ";
    rosidl_generator_traits::value_to_yaml(msg.stalled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeed_Response & msg, bool use_flow_style = false)
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
  const friend_msgs::srv::SetSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  friend_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use friend_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const friend_msgs::srv::SetSpeed_Response & msg)
{
  return friend_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<friend_msgs::srv::SetSpeed_Response>()
{
  return "friend_msgs::srv::SetSpeed_Response";
}

template<>
inline const char * name<friend_msgs::srv::SetSpeed_Response>()
{
  return "friend_msgs/srv/SetSpeed_Response";
}

template<>
struct has_fixed_size<friend_msgs::srv::SetSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<friend_msgs::srv::SetSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<friend_msgs::srv::SetSpeed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<friend_msgs::srv::SetSpeed>()
{
  return "friend_msgs::srv::SetSpeed";
}

template<>
inline const char * name<friend_msgs::srv::SetSpeed>()
{
  return "friend_msgs/srv/SetSpeed";
}

template<>
struct has_fixed_size<friend_msgs::srv::SetSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<friend_msgs::srv::SetSpeed_Request>::value &&
    has_fixed_size<friend_msgs::srv::SetSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<friend_msgs::srv::SetSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<friend_msgs::srv::SetSpeed_Request>::value &&
    has_bounded_size<friend_msgs::srv::SetSpeed_Response>::value
  >
{
};

template<>
struct is_service<friend_msgs::srv::SetSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<friend_msgs::srv::SetSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<friend_msgs::srv::SetSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRIEND_MSGS__SRV__DETAIL__SET_SPEED__TRAITS_HPP_
