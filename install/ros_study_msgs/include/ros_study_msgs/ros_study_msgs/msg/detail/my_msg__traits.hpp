// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_study_msgs:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__TRAITS_HPP_
#define ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_study_msgs/msg/detail/my_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_study_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: cancel
  {
    out << "cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.cancel, out);
    out << ", ";
  }

  // member: tableno
  {
    out << "tableno: ";
    rosidl_generator_traits::value_to_yaml(msg.tableno, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cancel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.cancel, out);
    out << "\n";
  }

  // member: tableno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tableno: ";
    rosidl_generator_traits::value_to_yaml(msg.tableno, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::msg::MyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::msg::MyMsg & msg)
{
  return ros_study_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::msg::MyMsg>()
{
  return "ros_study_msgs::msg::MyMsg";
}

template<>
inline const char * name<ros_study_msgs::msg::MyMsg>()
{
  return "ros_study_msgs/msg/MyMsg";
}

template<>
struct has_fixed_size<ros_study_msgs::msg::MyMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_study_msgs::msg::MyMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_study_msgs::msg::MyMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_STUDY_MSGS__MSG__DETAIL__MY_MSG__TRAITS_HPP_
