// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from friend_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
#define FRIEND_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "friend_msgs/srv/detail/set_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace friend_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Request_desired_speed
{
public:
  Init_SetSpeed_Request_desired_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::friend_msgs::srv::SetSpeed_Request desired_speed(::friend_msgs::srv::SetSpeed_Request::_desired_speed_type arg)
  {
    msg_.desired_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::friend_msgs::srv::SetSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::friend_msgs::srv::SetSpeed_Request>()
{
  return friend_msgs::srv::builder::Init_SetSpeed_Request_desired_speed();
}

}  // namespace friend_msgs


namespace friend_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Response_stalled
{
public:
  explicit Init_SetSpeed_Response_stalled(::friend_msgs::srv::SetSpeed_Response & msg)
  : msg_(msg)
  {}
  ::friend_msgs::srv::SetSpeed_Response stalled(::friend_msgs::srv::SetSpeed_Response::_stalled_type arg)
  {
    msg_.stalled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::friend_msgs::srv::SetSpeed_Response msg_;
};

class Init_SetSpeed_Response_new_speed
{
public:
  explicit Init_SetSpeed_Response_new_speed(::friend_msgs::srv::SetSpeed_Response & msg)
  : msg_(msg)
  {}
  Init_SetSpeed_Response_stalled new_speed(::friend_msgs::srv::SetSpeed_Response::_new_speed_type arg)
  {
    msg_.new_speed = std::move(arg);
    return Init_SetSpeed_Response_stalled(msg_);
  }

private:
  ::friend_msgs::srv::SetSpeed_Response msg_;
};

class Init_SetSpeed_Response_previous_speed
{
public:
  Init_SetSpeed_Response_previous_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeed_Response_new_speed previous_speed(::friend_msgs::srv::SetSpeed_Response::_previous_speed_type arg)
  {
    msg_.previous_speed = std::move(arg);
    return Init_SetSpeed_Response_new_speed(msg_);
  }

private:
  ::friend_msgs::srv::SetSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::friend_msgs::srv::SetSpeed_Response>()
{
  return friend_msgs::srv::builder::Init_SetSpeed_Response_previous_speed();
}

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
