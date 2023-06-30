// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
#define BUGGY__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "buggy/msg/detail/custom_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace buggy
{

namespace msg
{

namespace builder
{

class Init_CustomMsg_time
{
public:
  explicit Init_CustomMsg_time(::buggy::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  ::buggy::msg::CustomMsg time(::buggy::msg::CustomMsg::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy::msg::CustomMsg msg_;
};

class Init_CustomMsg_flag
{
public:
  explicit Init_CustomMsg_flag(::buggy::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  Init_CustomMsg_time flag(::buggy::msg::CustomMsg::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_CustomMsg_time(msg_);
  }

private:
  ::buggy::msg::CustomMsg msg_;
};

class Init_CustomMsg_point
{
public:
  explicit Init_CustomMsg_point(::buggy::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  Init_CustomMsg_flag point(::buggy::msg::CustomMsg::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_CustomMsg_flag(msg_);
  }

private:
  ::buggy::msg::CustomMsg msg_;
};

class Init_CustomMsg_name
{
public:
  Init_CustomMsg_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMsg_point name(::buggy::msg::CustomMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CustomMsg_point(msg_);
  }

private:
  ::buggy::msg::CustomMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy::msg::CustomMsg>()
{
  return buggy::msg::builder::Init_CustomMsg_name();
}

}  // namespace buggy

#endif  // BUGGY__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
