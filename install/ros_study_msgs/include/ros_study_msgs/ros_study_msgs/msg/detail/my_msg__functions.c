// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_study_msgs:msg/MyMsg.idl
// generated code does not contain a copyright notice
#include "ros_study_msgs/msg/detail/my_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_study_msgs__msg__MyMsg__init(ros_study_msgs__msg__MyMsg * msg)
{
  if (!msg) {
    return false;
  }
  // cancel
  // tableno
  return true;
}

void
ros_study_msgs__msg__MyMsg__fini(ros_study_msgs__msg__MyMsg * msg)
{
  if (!msg) {
    return;
  }
  // cancel
  // tableno
}

bool
ros_study_msgs__msg__MyMsg__are_equal(const ros_study_msgs__msg__MyMsg * lhs, const ros_study_msgs__msg__MyMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cancel
  if (lhs->cancel != rhs->cancel) {
    return false;
  }
  // tableno
  if (lhs->tableno != rhs->tableno) {
    return false;
  }
  return true;
}

bool
ros_study_msgs__msg__MyMsg__copy(
  const ros_study_msgs__msg__MyMsg * input,
  ros_study_msgs__msg__MyMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // cancel
  output->cancel = input->cancel;
  // tableno
  output->tableno = input->tableno;
  return true;
}

ros_study_msgs__msg__MyMsg *
ros_study_msgs__msg__MyMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__msg__MyMsg * msg = (ros_study_msgs__msg__MyMsg *)allocator.allocate(sizeof(ros_study_msgs__msg__MyMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_study_msgs__msg__MyMsg));
  bool success = ros_study_msgs__msg__MyMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_study_msgs__msg__MyMsg__destroy(ros_study_msgs__msg__MyMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_study_msgs__msg__MyMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_study_msgs__msg__MyMsg__Sequence__init(ros_study_msgs__msg__MyMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__msg__MyMsg * data = NULL;

  if (size) {
    data = (ros_study_msgs__msg__MyMsg *)allocator.zero_allocate(size, sizeof(ros_study_msgs__msg__MyMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_study_msgs__msg__MyMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_study_msgs__msg__MyMsg__fini(&data[i - 1]);
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
ros_study_msgs__msg__MyMsg__Sequence__fini(ros_study_msgs__msg__MyMsg__Sequence * array)
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
      ros_study_msgs__msg__MyMsg__fini(&array->data[i]);
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

ros_study_msgs__msg__MyMsg__Sequence *
ros_study_msgs__msg__MyMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_study_msgs__msg__MyMsg__Sequence * array = (ros_study_msgs__msg__MyMsg__Sequence *)allocator.allocate(sizeof(ros_study_msgs__msg__MyMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_study_msgs__msg__MyMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_study_msgs__msg__MyMsg__Sequence__destroy(ros_study_msgs__msg__MyMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_study_msgs__msg__MyMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_study_msgs__msg__MyMsg__Sequence__are_equal(const ros_study_msgs__msg__MyMsg__Sequence * lhs, const ros_study_msgs__msg__MyMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_study_msgs__msg__MyMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_study_msgs__msg__MyMsg__Sequence__copy(
  const ros_study_msgs__msg__MyMsg__Sequence * input,
  ros_study_msgs__msg__MyMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_study_msgs__msg__MyMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_study_msgs__msg__MyMsg * data =
      (ros_study_msgs__msg__MyMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_study_msgs__msg__MyMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_study_msgs__msg__MyMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_study_msgs__msg__MyMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
