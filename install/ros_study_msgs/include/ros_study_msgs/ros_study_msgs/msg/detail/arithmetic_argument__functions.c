// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_study_msgs:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice
#include "ros_study_msgs/msg/detail/arithmetic_argument__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros_study_msgs__msg__ArithmeticArgument__init(ros_study_msgs__msg__ArithmeticArgument * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros_study_msgs__msg__ArithmeticArgument__fini(msg);
    return false;
  }
  // argument_a
  // argument_b
  return true;
}

void
ros_study_msgs__msg__ArithmeticArgument__fini(ros_study_msgs__msg__ArithmeticArgument * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // argument_a
  // argument_b
}

bool
ros_study_msgs__msg__ArithmeticArgument__are_equal(const ros_study_msgs__msg__ArithmeticArgument * lhs, const ros_study_msgs__msg__ArithmeticArgument * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // argument_a
  if (lhs->argument_a != rhs->argument_a) {
    return false;
  }
  // argument_b
  if (lhs->argument_b != rhs->argument_b) {
    return false;
  }
  return true;
}

bool
ros_study_msgs__msg__ArithmeticArgument__copy(
  const ros_study_msgs__msg__ArithmeticArgument * input,
  ros_study_msgs__msg__ArithmeticArgument * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // argument_a
  output->argument_a = input->argument_a;
  // argument_b
  output->argument_b = input->argument_b;
  return true;
}

ros_study_msgs__msg__ArithmeticArgument *
ros_study_msgs__msg__ArithmeticArgument__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__msg__ArithmeticArgument * msg = (ros_study_msgs__msg__ArithmeticArgument *)allocator.allocate(sizeof(ros_study_msgs__msg__ArithmeticArgument), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__msg__ArithmeticArgument));
  bool success = ros_study_msgs__msg__ArithmeticArgument__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__msg__ArithmeticArgument__destroy(ros_study_msgs__msg__ArithmeticArgument * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__msg__ArithmeticArgument__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__msg__ArithmeticArgument__Sequence__init(ros_study_msgs__msg__ArithmeticArgument__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__msg__ArithmeticArgument * data = NULL;

  if (size) {
    data = (ros_study_msgs__msg__ArithmeticArgument *)allocator.zero_allocate(size, sizeof(ros_study_msgs__msg__ArithmeticArgument), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__msg__ArithmeticArgument__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__msg__ArithmeticArgument__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_study_msgs__msg__ArithmeticArgument__Sequence__fini(ros_study_msgs__msg__ArithmeticArgument__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_study_msgs__msg__ArithmeticArgument__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_study_msgs__msg__ArithmeticArgument__Sequence *
ros_study_msgs__msg__ArithmeticArgument__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__msg__ArithmeticArgument__Sequence * array = (ros_study_msgs__msg__ArithmeticArgument__Sequence *)allocator.allocate(sizeof(ros_study_msgs__msg__ArithmeticArgument__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__msg__ArithmeticArgument__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__msg__ArithmeticArgument__Sequence__destroy(ros_study_msgs__msg__ArithmeticArgument__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__msg__ArithmeticArgument__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__msg__ArithmeticArgument__Sequence__are_equal(const ros_study_msgs__msg__ArithmeticArgument__Sequence * lhs, const ros_study_msgs__msg__ArithmeticArgument__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__msg__ArithmeticArgument__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__msg__ArithmeticArgument__Sequence__copy(
  const ros_study_msgs__msg__ArithmeticArgument__Sequence * input,
  ros_study_msgs__msg__ArithmeticArgument__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__msg__ArithmeticArgument);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__msg__ArithmeticArgument * data =
      (ros_study_msgs__msg__ArithmeticArgument *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__msg__ArithmeticArgument__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__msg__ArithmeticArgument__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__msg__ArithmeticArgument__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
