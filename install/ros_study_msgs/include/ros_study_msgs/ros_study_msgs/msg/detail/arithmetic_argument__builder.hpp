// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_study_msgs:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_
#define ROS_STUDY_MSGS__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_study_msgs/msg/detail/arithmetic_argument__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_study_msgs
{

namespace msg
{

namespace builder
{

class Init_ArithmeticArgument_argument_b
{
public:
  explicit Init_ArithmeticArgument_argument_b(::ros_study_msgs::msg::ArithmeticArgument & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::msg::ArithmeticArgument argument_b(::ros_study_msgs::msg::ArithmeticArgument::_argument_b_type arg)
  {
    msg_.argument_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::msg::ArithmeticArgument msg_;
};

class Init_ArithmeticArgument_argument_a
{
public:
  explicit Init_ArithmeticArgument_argument_a(::ros_study_msgs::msg::ArithmeticArgument & msg)
  : msg_(msg)
  {}
  Init_ArithmeticArgument_argument_b argument_a(::ros_study_msgs::msg::ArithmeticArgument::_argument_a_type arg)
  {
    msg_.argument_a = std::move(arg);
    return Init_ArithmeticArgument_argument_b(msg_);
  }

private:
  ::ros_study_msgs::msg::ArithmeticArgument msg_;
};

class Init_ArithmeticArgument_stamp
{
public:
  Init_ArithmeticArgument_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticArgument_argument_a stamp(::ros_study_msgs::msg::ArithmeticArgument::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ArithmeticArgument_argument_a(msg_);
  }

private:
  ::ros_study_msgs::msg::ArithmeticArgument msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::msg::ArithmeticArgument>()
{
  return ros_study_msgs::msg::builder::Init_ArithmeticArgument_stamp();
}

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_
