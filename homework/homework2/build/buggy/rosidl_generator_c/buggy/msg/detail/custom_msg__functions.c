// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice
#include "buggy/msg/detail/custom_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "std_msgs/msg/detail/string__functions.h"
// Member `point`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"
// Member `flag`
#include "std_msgs/msg/detail/bool__functions.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
buggy__msg__CustomMsg__init(buggy__msg__CustomMsg * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!std_msgs__msg__String__init(&msg->name)) {
    buggy__msg__CustomMsg__fini(msg);
    return false;
  }
  // point
  if (!geometry_msgs__msg__PointStamped__init(&msg->point)) {
    buggy__msg__CustomMsg__fini(msg);
    return false;
  }
  // flag
  if (!std_msgs__msg__Bool__init(&msg->flag)) {
    buggy__msg__CustomMsg__fini(msg);
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    buggy__msg__CustomMsg__fini(msg);
    return false;
  }
  return true;
}

void
buggy__msg__CustomMsg__fini(buggy__msg__CustomMsg * msg)
{
  if (!msg) {
    return;
  }
  // name
  std_msgs__msg__String__fini(&msg->name);
  // point
  geometry_msgs__msg__PointStamped__fini(&msg->point);
  // flag
  std_msgs__msg__Bool__fini(&msg->flag);
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
}

bool
buggy__msg__CustomMsg__are_equal(const buggy__msg__CustomMsg * lhs, const buggy__msg__CustomMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!std_msgs__msg__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // point
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // flag
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->flag), &(rhs->flag)))
  {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
buggy__msg__CustomMsg__copy(
  const buggy__msg__CustomMsg * input,
  buggy__msg__CustomMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!std_msgs__msg__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // point
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // flag
  if (!std_msgs__msg__Bool__copy(
      &(input->flag), &(output->flag)))
  {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

buggy__msg__CustomMsg *
buggy__msg__CustomMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__msg__CustomMsg * msg = (buggy__msg__CustomMsg *)allocator.allocate(sizeof(buggy__msg__CustomMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy__msg__CustomMsg));
  bool success = buggy__msg__CustomMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy__msg__CustomMsg__destroy(buggy__msg__CustomMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy__msg__CustomMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy__msg__CustomMsg__Sequence__init(buggy__msg__CustomMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__msg__CustomMsg * data = NULL;

  if (size) {
    data = (buggy__msg__CustomMsg *)allocator.zero_allocate(size, sizeof(buggy__msg__CustomMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy__msg__CustomMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy__msg__CustomMsg__fini(&data[i - 1]);
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
buggy__msg__CustomMsg__Sequence__fini(buggy__msg__CustomMsg__Sequence * array)
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
      buggy__msg__CustomMsg__fini(&array->data[i]);
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

buggy__msg__CustomMsg__Sequence *
buggy__msg__CustomMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__msg__CustomMsg__Sequence * array = (buggy__msg__CustomMsg__Sequence *)allocator.allocate(sizeof(buggy__msg__CustomMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy__msg__CustomMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy__msg__CustomMsg__Sequence__destroy(buggy__msg__CustomMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy__msg__CustomMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy__msg__CustomMsg__Sequence__are_equal(const buggy__msg__CustomMsg__Sequence * lhs, const buggy__msg__CustomMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy__msg__CustomMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy__msg__CustomMsg__Sequence__copy(
  const buggy__msg__CustomMsg__Sequence * input,
  buggy__msg__CustomMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy__msg__CustomMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    buggy__msg__CustomMsg * data =
      (buggy__msg__CustomMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy__msg__CustomMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          buggy__msg__CustomMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!buggy__msg__CustomMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
