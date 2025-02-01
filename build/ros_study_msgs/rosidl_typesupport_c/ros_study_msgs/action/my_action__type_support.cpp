// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ros_study_msgs:action/MyAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros_study_msgs/action/detail/my_action__struct.h"
#include "ros_study_msgs/action/detail/my_action__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_Goal_type_support_ids_t;

static const _MyAction_Goal_type_support_ids_t _MyAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_Goal_type_support_symbol_names_t _MyAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_Goal)),
  }
};

typedef struct _MyAction_Goal_type_support_data_t
{
  void * data[2];
} _MyAction_Goal_type_support_data_t;

static _MyAction_Goal_type_support_data_t _MyAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_Goal_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_Goal)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_Result_type_support_ids_t;

static const _MyAction_Result_type_support_ids_t _MyAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_Result_type_support_symbol_names_t _MyAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_Result)),
  }
};

typedef struct _MyAction_Result_type_support_data_t
{
  void * data[2];
} _MyAction_Result_type_support_data_t;

static _MyAction_Result_type_support_data_t _MyAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_Result_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_Result)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_Feedback_type_support_ids_t;

static const _MyAction_Feedback_type_support_ids_t _MyAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_Feedback_type_support_symbol_names_t _MyAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_Feedback)),
  }
};

typedef struct _MyAction_Feedback_type_support_data_t
{
  void * data[2];
} _MyAction_Feedback_type_support_data_t;

static _MyAction_Feedback_type_support_data_t _MyAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_Feedback_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_Feedback)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_SendGoal_Request_type_support_ids_t;

static const _MyAction_SendGoal_Request_type_support_ids_t _MyAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_SendGoal_Request_type_support_symbol_names_t _MyAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_SendGoal_Request)),
  }
};

typedef struct _MyAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MyAction_SendGoal_Request_type_support_data_t;

static _MyAction_SendGoal_Request_type_support_data_t _MyAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_SendGoal_Request_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_SendGoal_Request)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_SendGoal_Response_type_support_ids_t;

static const _MyAction_SendGoal_Response_type_support_ids_t _MyAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_SendGoal_Response_type_support_symbol_names_t _MyAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_SendGoal_Response)),
  }
};

typedef struct _MyAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MyAction_SendGoal_Response_type_support_data_t;

static _MyAction_SendGoal_Response_type_support_data_t _MyAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_SendGoal_Response_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_SendGoal_Response)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_SendGoal_type_support_ids_t;

static const _MyAction_SendGoal_type_support_ids_t _MyAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_SendGoal_type_support_symbol_names_t _MyAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_SendGoal)),
  }
};

typedef struct _MyAction_SendGoal_type_support_data_t
{
  void * data[2];
} _MyAction_SendGoal_type_support_data_t;

static _MyAction_SendGoal_type_support_data_t _MyAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_SendGoal_service_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MyAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MyAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyAction_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_SendGoal)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_GetResult_Request_type_support_ids_t;

static const _MyAction_GetResult_Request_type_support_ids_t _MyAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_GetResult_Request_type_support_symbol_names_t _MyAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_GetResult_Request)),
  }
};

typedef struct _MyAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MyAction_GetResult_Request_type_support_data_t;

static _MyAction_GetResult_Request_type_support_data_t _MyAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_GetResult_Request_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_GetResult_Request)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_GetResult_Response_type_support_ids_t;

static const _MyAction_GetResult_Response_type_support_ids_t _MyAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_GetResult_Response_type_support_symbol_names_t _MyAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_GetResult_Response)),
  }
};

typedef struct _MyAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MyAction_GetResult_Response_type_support_data_t;

static _MyAction_GetResult_Response_type_support_data_t _MyAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_GetResult_Response_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_GetResult_Response)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_GetResult_type_support_ids_t;

static const _MyAction_GetResult_type_support_ids_t _MyAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_GetResult_type_support_symbol_names_t _MyAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_GetResult)),
  }
};

typedef struct _MyAction_GetResult_type_support_data_t
{
  void * data[2];
} _MyAction_GetResult_type_support_data_t;

static _MyAction_GetResult_type_support_data_t _MyAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_GetResult_service_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MyAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MyAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyAction_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_GetResult)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__struct.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_study_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MyAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_FeedbackMessage_type_support_ids_t;

static const _MyAction_FeedbackMessage_type_support_ids_t _MyAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_FeedbackMessage_type_support_symbol_names_t _MyAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_study_msgs, action, MyAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_study_msgs, action, MyAction_FeedbackMessage)),
  }
};

typedef struct _MyAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MyAction_FeedbackMessage_type_support_data_t;

static _MyAction_FeedbackMessage_type_support_data_t _MyAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_FeedbackMessage_message_typesupport_map = {
  2,
  "ros_study_msgs",
  &_MyAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros_study_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros_study_msgs, action, MyAction_FeedbackMessage)() {
  return &::ros_study_msgs::action::rosidl_typesupport_c::MyAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ros_study_msgs/action/my_action.h"
// already included above
// #include "ros_study_msgs/action/detail/my_action__type_support.h"

static rosidl_action_type_support_t _ros_study_msgs__action__MyAction__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ros_study_msgs, action, MyAction)()
{
  // Thread-safe by always writing the same values to the static struct
  _ros_study_msgs__action__MyAction__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ros_study_msgs, action, MyAction_SendGoal)();
  _ros_study_msgs__action__MyAction__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ros_study_msgs, action, MyAction_GetResult)();
  _ros_study_msgs__action__MyAction__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ros_study_msgs__action__MyAction__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ros_study_msgs, action, MyAction_FeedbackMessage)();
  _ros_study_msgs__action__MyAction__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ros_study_msgs__action__MyAction__typesupport_c;
}

#ifdef __cplusplus
}
#endif
