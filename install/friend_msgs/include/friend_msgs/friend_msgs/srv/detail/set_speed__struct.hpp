// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from friend_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_
#define FRIEND_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__friend_msgs__srv__SetSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__friend_msgs__srv__SetSpeed_Request __declspec(deprecated)
#endif

namespace friend_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSpeed_Request_
{
  using Type = SetSpeed_Request_<ContainerAllocator>;

  explicit SetSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_speed = 0.0f;
    }
  }

  explicit SetSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_speed = 0.0f;
    }
  }

  // field types and members
  using _desired_speed_type =
    float;
  _desired_speed_type desired_speed;

  // setters for named parameter idiom
  Type & set__desired_speed(
    const float & _arg)
  {
    this->desired_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    friend_msgs::srv::SetSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const friend_msgs::srv::SetSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::SetSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::SetSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__friend_msgs__srv__SetSpeed_Request
    std::shared_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__friend_msgs__srv__SetSpeed_Request
    std::shared_ptr<friend_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSpeed_Request_ & other) const
  {
    if (this->desired_speed != other.desired_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSpeed_Request_

// alias to use template instance with default allocator
using SetSpeed_Request =
  friend_msgs::srv::SetSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace friend_msgs


#ifndef _WIN32
# define DEPRECATED__friend_msgs__srv__SetSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__friend_msgs__srv__SetSpeed_Response __declspec(deprecated)
#endif

namespace friend_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSpeed_Response_
{
  using Type = SetSpeed_Response_<ContainerAllocator>;

  explicit SetSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->previous_speed = 0.0f;
      this->new_speed = 0.0f;
      this->stalled = false;
    }
  }

  explicit SetSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->previous_speed = 0.0f;
      this->new_speed = 0.0f;
      this->stalled = false;
    }
  }

  // field types and members
  using _previous_speed_type =
    float;
  _previous_speed_type previous_speed;
  using _new_speed_type =
    float;
  _new_speed_type new_speed;
  using _stalled_type =
    bool;
  _stalled_type stalled;

  // setters for named parameter idiom
  Type & set__previous_speed(
    const float & _arg)
  {
    this->previous_speed = _arg;
    return *this;
  }
  Type & set__new_speed(
    const float & _arg)
  {
    this->new_speed = _arg;
    return *this;
  }
  Type & set__stalled(
    const bool & _arg)
  {
    this->stalled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    friend_msgs::srv::SetSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const friend_msgs::srv::SetSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::SetSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::SetSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__friend_msgs__srv__SetSpeed_Response
    std::shared_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__friend_msgs__srv__SetSpeed_Response
    std::shared_ptr<friend_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSpeed_Response_ & other) const
  {
    if (this->previous_speed != other.previous_speed) {
      return false;
    }
    if (this->new_speed != other.new_speed) {
      return false;
    }
    if (this->stalled != other.stalled) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSpeed_Response_

// alias to use template instance with default allocator
using SetSpeed_Response =
  friend_msgs::srv::SetSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace friend_msgs

namespace friend_msgs
{

namespace srv
{

struct SetSpeed
{
  using Request = friend_msgs::srv::SetSpeed_Request;
  using Response = friend_msgs::srv::SetSpeed_Response;
};

}  // namespace srv

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_
