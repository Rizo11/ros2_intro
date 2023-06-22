// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from friend_msgs:msg/R2D2.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__R2_D2__BUILDER_HPP_
#define FRIEND_MSGS__MSG__DETAIL__R2_D2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "friend_msgs/msg/detail/r2_d2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace friend_msgs
{

namespace msg
{

namespace builder
{

class Init_R2D2_id
{
public:
  explicit Init_R2D2_id(::friend_msgs::msg::R2D2 & msg)
  : msg_(msg)
  {}
  ::friend_msgs::msg::R2D2 id(::friend_msgs::msg::R2D2::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::friend_msgs::msg::R2D2 msg_;
};

class Init_R2D2_z
{
public:
  explicit Init_R2D2_z(::friend_msgs::msg::R2D2 & msg)
  : msg_(msg)
  {}
  Init_R2D2_id z(::friend_msgs::msg::R2D2::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_R2D2_id(msg_);
  }

private:
  ::friend_msgs::msg::R2D2 msg_;
};

class Init_R2D2_y
{
public:
  explicit Init_R2D2_y(::friend_msgs::msg::R2D2 & msg)
  : msg_(msg)
  {}
  Init_R2D2_z y(::friend_msgs::msg::R2D2::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_R2D2_z(msg_);
  }

private:
  ::friend_msgs::msg::R2D2 msg_;
};

class Init_R2D2_x
{
public:
  Init_R2D2_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_R2D2_y x(::friend_msgs::msg::R2D2::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_R2D2_y(msg_);
  }

private:
  ::friend_msgs::msg::R2D2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::friend_msgs::msg::R2D2>()
{
  return friend_msgs::msg::builder::Init_R2D2_x();
}

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__MSG__DETAIL__R2_D2__BUILDER_HPP_
