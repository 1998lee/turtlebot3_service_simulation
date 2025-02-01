// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_study_msgs:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__STRUCT_HPP_
#define ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__msg__MyMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__msg__MyMsg __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyMsg_
{
  using Type = MyMsg_<ContainerAllocator>;

  explicit MyMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cancel = false;
      this->tableno = 0l;
    }
  }

  explicit MyMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cancel = false;
      this->tableno = 0l;
    }
  }

  // field types and members
  using _cancel_type =
    bool;
  _cancel_type cancel;
  using _tableno_type =
    int32_t;
  _tableno_type tableno;

  // setters for named parameter idiom
  Type & set__cancel(
    const bool & _arg)
  {
    this->cancel = _arg;
    return *this;
  }
  Type & set__tableno(
    const int32_t & _arg)
  {
    this->tableno = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::msg::MyMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::msg::MyMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::msg::MyMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::msg::MyMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__msg__MyMsg
    std::shared_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__msg__MyMsg
    std::shared_ptr<ros_study_msgs::msg::MyMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyMsg_ & other) const
  {
    if (this->cancel != other.cancel) {
      return false;
    }
    if (this->tableno != other.tableno) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyMsg_

// alias to use template instance with default allocator
using MyMsg =
  ros_study_msgs::msg::MyMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__STRUCT_HPP_
