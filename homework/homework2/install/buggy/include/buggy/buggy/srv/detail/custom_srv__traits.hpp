// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_
#define BUGGY__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "buggy/srv/detail/custom_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace buggy
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomSrv_Request & msg, bool use_flow_style = false)
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

}  // namespace buggy

namespace rosidl_generator_traits
{

[[deprecated("use buggy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const buggy::srv::CustomSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  buggy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use buggy::srv::to_yaml() instead")]]
inline std::string to_yaml(const buggy::srv::CustomSrv_Request & msg)
{
  return buggy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<buggy::srv::CustomSrv_Request>()
{
  return "buggy::srv::CustomSrv_Request";
}

template<>
inline const char * name<buggy::srv::CustomSrv_Request>()
{
  return "buggy/srv/CustomSrv_Request";
}

template<>
struct has_fixed_size<buggy::srv::CustomSrv_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<buggy::srv::CustomSrv_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<buggy::srv::CustomSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "std_msgs/msg/detail/bool__traits.hpp"

namespace buggy
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomSrv_Response & msg, bool use_flow_style = false)
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

}  // namespace buggy

namespace rosidl_generator_traits
{

[[deprecated("use buggy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const buggy::srv::CustomSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  buggy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use buggy::srv::to_yaml() instead")]]
inline std::string to_yaml(const buggy::srv::CustomSrv_Response & msg)
{
  return buggy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<buggy::srv::CustomSrv_Response>()
{
  return "buggy::srv::CustomSrv_Response";
}

template<>
inline const char * name<buggy::srv::CustomSrv_Response>()
{
  return "buggy/srv/CustomSrv_Response";
}

template<>
struct has_fixed_size<buggy::srv::CustomSrv_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<buggy::srv::CustomSrv_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<buggy::srv::CustomSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy::srv::CustomSrv>()
{
  return "buggy::srv::CustomSrv";
}

template<>
inline const char * name<buggy::srv::CustomSrv>()
{
  return "buggy/srv/CustomSrv";
}

template<>
struct has_fixed_size<buggy::srv::CustomSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<buggy::srv::CustomSrv_Request>::value &&
    has_fixed_size<buggy::srv::CustomSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<buggy::srv::CustomSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<buggy::srv::CustomSrv_Request>::value &&
    has_bounded_size<buggy::srv::CustomSrv_Response>::value
  >
{
};

template<>
struct is_service<buggy::srv::CustomSrv>
  : std::true_type
{
};

template<>
struct is_service_request<buggy::srv::CustomSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<buggy::srv::CustomSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BUGGY__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_
