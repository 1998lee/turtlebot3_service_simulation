// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_study_msgs:srv/MySrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_study_msgs/srv/detail/my_srv__rosidl_typesupport_introspection_c.h"
#include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_study_msgs/srv/detail/my_srv__functions.h"
#include "ros_study_msgs/srv/detail/my_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__srv__MySrv_Request__init(message_memory);
}

void ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_fini_function(void * message_memory)
{
  ros_study_msgs__srv__MySrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_member_array[4] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tblno",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Request, tblno),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_members = {
  "ros_study_msgs__srv",  // message namespace
  "MySrv_Request",  // message name
  4,  // number of fields
  sizeof(ros_study_msgs__srv__MySrv_Request),
  ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_member_array,  // message members
  ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_type_support_handle = {
  0,
  &ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv_Request)() {
  if (!ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__srv__MySrv_Request__rosidl_typesupport_introspection_c__MySrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_study_msgs/srv/detail/my_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_study_msgs/srv/detail/my_srv__functions.h"
// already included above
// #include "ros_study_msgs/srv/detail/my_srv__struct.h"


// Include directives for member types
// Member `feedback`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_study_msgs__srv__MySrv_Response__init(message_memory);
}

void ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_fini_function(void * message_memory)
{
  ros_study_msgs__srv__MySrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_member_array[4] = {
  {
    "ordno",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Response, ordno),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Response, timer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Response, success),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_study_msgs__srv__MySrv_Response, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_members = {
  "ros_study_msgs__srv",  // message namespace
  "MySrv_Response",  // message name
  4,  // number of fields
  sizeof(ros_study_msgs__srv__MySrv_Response),
  ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_member_array,  // message members
  ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_type_support_handle = {
  0,
  &ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv_Response)() {
  if (!ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_type_support_handle.typesupport_identifier) {
    ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_study_msgs__srv__MySrv_Response__rosidl_typesupport_introspection_c__MySrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_study_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_study_msgs/srv/detail/my_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_members = {
  "ros_study_msgs__srv",  // service namespace
  "MySrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_Request_message_type_support_handle,
  NULL  // response message
  // ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_type_support_handle = {
  0,
  &ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_study_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv)() {
  if (!ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_type_support_handle.typesupport_identifier) {
    ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, srv, MySrv_Response)()->data;
  }

  return &ros_study_msgs__srv__detail__my_srv__rosidl_typesupport_introspection_c__MySrv_service_type_support_handle;
}
