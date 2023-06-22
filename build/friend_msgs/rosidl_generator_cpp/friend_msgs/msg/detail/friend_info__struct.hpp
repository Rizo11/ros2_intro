// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from friend_msgs:msg/FriendInfo.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__STRUCT_HPP_
#define FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__friend_msgs__msg__FriendInfo __attribute__((deprecated))
#else
# define DEPRECATED__friend_msgs__msg__FriendInfo __declspec(deprecated)
#endif

namespace friend_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FriendInfo_
{
  using Type = FriendInfo_<ContainerAllocator>;

  explicit FriendInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0l;
    }
  }

  explicit FriendInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    int32_t;
  _id_type id;
  using _food_items_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _food_items_type food_items;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__food_items(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->food_items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    friend_msgs::msg::FriendInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const friend_msgs::msg::FriendInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      friend_msgs::msg::FriendInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      friend_msgs::msg::FriendInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__friend_msgs__msg__FriendInfo
    std::shared_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__friend_msgs__msg__FriendInfo
    std::shared_ptr<friend_msgs::msg::FriendInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FriendInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->food_items != other.food_items) {
      return false;
    }
    return true;
  }
  bool operator!=(const FriendInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FriendInfo_

// alias to use template instance with default allocator
using FriendInfo =
  friend_msgs::msg::FriendInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__STRUCT_HPP_
