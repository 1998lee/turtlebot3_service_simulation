// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_study_msgs:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
#include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
#include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_Goal__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_member_array[1] = {
  {
    "goal_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_Goal, goal_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_Goal",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_Goal),
  ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_Goal)() {
  if (!ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_Goal__rosidl_typesupport_introspection_c__ArithmeticChecker_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `all_formula`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_Result__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_Result__fini(message_memory);
}

size_t ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__size_function__ArithmeticChecker_Result__all_formula(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__get_const_function__ArithmeticChecker_Result__all_formula(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__get_function__ArithmeticChecker_Result__all_formula(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__fetch_function__ArithmeticChecker_Result__all_formula(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__get_const_function__ArithmeticChecker_Result__all_formula(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__assign_function__ArithmeticChecker_Result__all_formula(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__get_function__ArithmeticChecker_Result__all_formula(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__resize_function__ArithmeticChecker_Result__all_formula(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_member_array[2] = {
  {
    "all_formula",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_Result, all_formula),  // bytes offset in struct
    NULL,  // default value
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__size_function__ArithmeticChecker_Result__all_formula,  // size() function pointer
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__get_const_function__ArithmeticChecker_Result__all_formula,  // get_const(index) function pointer
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__get_function__ArithmeticChecker_Result__all_formula,  // get(index) function pointer
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__fetch_function__ArithmeticChecker_Result__all_formula,  // fetch(index, &value) function pointer
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__assign_function__ArithmeticChecker_Result__all_formula,  // assign(index, value) function pointer
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__resize_function__ArithmeticChecker_Result__all_formula  // resize(index) function pointer
  },
  {
    "total_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_Result, total_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_Result",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_Result),
  ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_Result)() {
  if (!ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_Result__rosidl_typesupport_introspection_c__ArithmeticChecker_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `formula`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_Feedback__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_Feedback__fini(message_memory);
}

size_t ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__size_function__ArithmeticChecker_Feedback__formula(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__get_const_function__ArithmeticChecker_Feedback__formula(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__get_function__ArithmeticChecker_Feedback__formula(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__fetch_function__ArithmeticChecker_Feedback__formula(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__get_const_function__ArithmeticChecker_Feedback__formula(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__assign_function__ArithmeticChecker_Feedback__formula(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__get_function__ArithmeticChecker_Feedback__formula(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__resize_function__ArithmeticChecker_Feedback__formula(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_member_array[1] = {
  {
    "formula",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_Feedback, formula),  // bytes offset in struct
    NULL,  // default value
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__size_function__ArithmeticChecker_Feedback__formula,  // size() function pointer
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__get_const_function__ArithmeticChecker_Feedback__formula,  // get_const(index) function pointer
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__get_function__ArithmeticChecker_Feedback__formula,  // get(index) function pointer
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__fetch_function__ArithmeticChecker_Feedback__formula,  // fetch(index, &value) function pointer
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__assign_function__ArithmeticChecker_Feedback__formula,  // assign(index, value) function pointer
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__resize_function__ArithmeticChecker_Feedback__formula  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_Feedback",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_Feedback),
  ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_Feedback)() {
  if (!ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_Feedback__rosidl_typesupport_introspection_c__ArithmeticChecker_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ros_study_msgs/action/arithmetic_checker.h"
// Member `goal`
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_SendGoal_Request),
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal_Request)() {
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_Goal)();
  if (!ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_SendGoal_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_SendGoal_Response),
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal_Response)() {
  ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_SendGoal_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_members = {
  "ros_study_msgs__action",  // service namespace
  "ArithmeticChecker_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_type_support_handle = {
  0,
  &ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal)() {
  if (!ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_SendGoal_Response)()->data;
  }

  return &ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_GetResult_Request__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_GetResult_Request),
  ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult_Request)() {
  ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_GetResult_Request__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ros_study_msgs/action/arithmetic_checker.h"
// Member `result`
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_GetResult_Response__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_GetResult_Response),
  ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult_Response)() {
  ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_Result)();
  if (!ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_GetResult_Response__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_members = {
  "ros_study_msgs__action",  // service namespace
  "ArithmeticChecker_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_type_support_handle = {
  0,
  &ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult)() {
  if (!ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_GetResult_Response)()->data;
  }

  return &ros_study_msgs__action__detail__arithmetic_checker__rosidl_typesupport_introspection_c__ArithmeticChecker_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__functions.h"
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ros_study_msgs/action/arithmetic_checker.h"
// Member `feedback`
// already included above
// #include "ros_study_msgs/action/detail/arithmetic_checker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__init(message_memory);
}

void ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_fini_function(void * message_memory)
{
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__action__ArithmeticChecker_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_members = {
  "ros_study_msgs__action",  // message namespace
  "ArithmeticChecker_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ros_study_msgs__action__ArithmeticChecker_FeedbackMessage),
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_member_array,  // message members
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_type_support_handle = {
  0,
  &ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_FeedbackMessage)() {
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, ArithmeticChecker_Feedback)();
  if (!ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__action__ArithmeticChecker_FeedbackMessage__rosidl_typesupport_introspection_c__ArithmeticChecker_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
