// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_study_msgs:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__BUILDER_HPP_
#define ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_study_msgs/msg/detail/my_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_study_msgs
{

namespace msg
{

namespace builder
{

class Init_MyMsg_tableno
{
public:
  explicit Init_MyMsg_tableno(::ros_study_msgs::msg::MyMsg & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::msg::MyMsg tableno(::ros_study_msgs::msg::MyMsg::_tableno_type arg)
  {
    msg_.tableno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::msg::MyMsg msg_;
};

class Init_MyMsg_cancel
{
public:
  Init_MyMsg_cancel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyMsg_tableno cancel(::ros_study_msgs::msg::MyMsg::_cancel_type arg)
  {
    msg_.cancel = std::move(arg);
    return Init_MyMsg_tableno(msg_);
  }

private:
  ::ros_study_msgs::msg::MyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::msg::MyMsg>()
{
  return ros_study_msgs::msg::builder::Init_MyMsg_cancel();
}

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__BUILDER_HPP_
