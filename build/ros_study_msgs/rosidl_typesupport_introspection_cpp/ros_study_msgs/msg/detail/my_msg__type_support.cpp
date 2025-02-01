// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_study_msgs:msg/MyMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_study_msgs/msg/detail/my_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_study_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MyMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_study_msgs::msg::MyMsg(_init);
}

void MyMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_study_msgs::msg::MyMsg *>(message_memory);
  typed_message->~MyMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MyMsg_message_member_array[2] = {
  {
    "cancel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::msg::MyMsg, cancel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tableno",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs::msg::MyMsg, tableno),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MyMsg_message_members = {
  "ros_study_msgs::msg",  // message namespace
  "MyMsg",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs::msg::MyMsg),
  MyMsg_message_member_array,  // message members
  MyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  MyMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MyMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_study_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_study_msgs::msg::MyMsg>()
{
  return &::ros_study_msgs::msg::rosidl_typesupport_introspection_cpp::MyMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_study_msgs, msg, MyMsg)() {
  return &::ros_study_msgs::msg::rosidl_typesupport_introspection_cpp::MyMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
