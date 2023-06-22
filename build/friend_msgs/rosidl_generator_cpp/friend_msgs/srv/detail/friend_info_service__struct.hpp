// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from friend_msgs:srv/FriendInfoService.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__STRUCT_HPP_
#define FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__friend_msgs__srv__FriendInfoService_Request __attribute__((deprecated))
#else
# define DEPRECATED__friend_msgs__srv__FriendInfoService_Request __declspec(deprecated)
#endif

namespace friend_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FriendInfoService_Request_
{
  using Type = FriendInfoService_Request_<ContainerAllocator>;

  explicit FriendInfoService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->value = 0l;
    }
  }

  explicit FriendInfoService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->value = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__friend_msgs__srv__FriendInfoService_Request
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__friend_msgs__srv__FriendInfoService_Request
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FriendInfoService_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const FriendInfoService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FriendInfoService_Request_

// alias to use template instance with default allocator
using FriendInfoService_Request =
  friend_msgs::srv::FriendInfoService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace friend_msgs


#ifndef _WIN32
# define DEPRECATED__friend_msgs__srv__FriendInfoService_Response __attribute__((deprecated))
#else
# define DEPRECATED__friend_msgs__srv__FriendInfoService_Response __declspec(deprecated)
#endif

namespace friend_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FriendInfoService_Response_
{
  using Type = FriendInfoService_Response_<ContainerAllocator>;

  explicit FriendInfoService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heartbeat = 0l;
    }
  }

  explicit FriendInfoService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heartbeat = 0l;
    }
  }

  // field types and members
  using _heartbeat_type =
    int32_t;
  _heartbeat_type heartbeat;

  // setters for named parameter idiom
  Type & set__heartbeat(
    const int32_t & _arg)
  {
    this->heartbeat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__friend_msgs__srv__FriendInfoService_Response
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__friend_msgs__srv__FriendInfoService_Response
    std::shared_ptr<friend_msgs::srv::FriendInfoService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FriendInfoService_Response_ & other) const
  {
    if (this->heartbeat != other.heartbeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const FriendInfoService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FriendInfoService_Response_

// alias to use template instance with default allocator
using FriendInfoService_Response =
  friend_msgs::srv::FriendInfoService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace friend_msgs

namespace friend_msgs
{

namespace srv
{

struct FriendInfoService
{
  using Request = friend_msgs::srv::FriendInfoService_Request;
  using Response = friend_msgs::srv::FriendInfoService_Response;
};

}  // namespace srv

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__STRUCT_HPP_
