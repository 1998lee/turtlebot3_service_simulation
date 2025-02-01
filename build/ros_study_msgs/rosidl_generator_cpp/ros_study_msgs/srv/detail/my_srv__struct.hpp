// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_study_msgs:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__SRV__DETAIL__MY_SRV__STRUCT_HPP_
#define ROS_STUDY_MSGS__SRV__DETAIL__MY_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__srv__MySrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__srv__MySrv_Request __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MySrv_Request_
{
  using Type = MySrv_Request_<ContainerAllocator>;

  explicit MySrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
      this->c = 0l;
      this->tblno = 0l;
    }
  }

  explicit MySrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
      this->c = 0l;
      this->tblno = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;
  using _c_type =
    int32_t;
  _c_type c;
  using _tblno_type =
    int32_t;
  _tblno_type tblno;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int32_t & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__tblno(
    const int32_t & _arg)
  {
    this->tblno = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::srv::MySrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::srv::MySrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::srv::MySrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::srv::MySrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__srv__MySrv_Request
    std::shared_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__srv__MySrv_Request
    std::shared_ptr<ros_study_msgs::srv::MySrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MySrv_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->tblno != other.tblno) {
      return false;
    }
    return true;
  }
  bool operator!=(const MySrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MySrv_Request_

// alias to use template instance with default allocator
using MySrv_Request =
  ros_study_msgs::srv::MySrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_study_msgs


#ifndef _WIN32
# define DEPRECATED__ros_study_msgs__srv__MySrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_study_msgs__srv__MySrv_Response __declspec(deprecated)
#endif

namespace ros_study_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MySrv_Response_
{
  using Type = MySrv_Response_<ContainerAllocator>;

  explicit MySrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ordno = 0l;
      this->timer = 0l;
      this->success = false;
      this->feedback = "";
    }
  }

  explicit MySrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ordno = 0l;
      this->timer = 0l;
      this->success = false;
      this->feedback = "";
    }
  }

  // field types and members
  using _ordno_type =
    int32_t;
  _ordno_type ordno;
  using _timer_type =
    int32_t;
  _timer_type timer;
  using _success_type =
    bool;
  _success_type success;
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__ordno(
    const int32_t & _arg)
  {
    this->ordno = _arg;
    return *this;
  }
  Type & set__timer(
    const int32_t & _arg)
  {
    this->timer = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_study_msgs::srv::MySrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_study_msgs::srv::MySrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::srv::MySrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_study_msgs::srv::MySrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_study_msgs__srv__MySrv_Response
    std::shared_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_study_msgs__srv__MySrv_Response
    std::shared_ptr<ros_study_msgs::srv::MySrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MySrv_Response_ & other) const
  {
    if (this->ordno != other.ordno) {
      return false;
    }
    if (this->timer != other.timer) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MySrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MySrv_Response_

// alias to use template instance with default allocator
using MySrv_Response =
  ros_study_msgs::srv::MySrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_study_msgs

namespace ros_study_msgs
{

namespace srv
{

struct MySrv
{
  using Request = ros_study_msgs::srv::MySrv_Request;
  using Response = ros_study_msgs::srv::MySrv_Response;
};

}  // namespace srv

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__SRV__DETAIL__MY_SRV__STRUCT_HPP_
