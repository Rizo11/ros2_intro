// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from friend_msgs:msg/R2D2.idl
// generated code does not contain a copyright notice
#include "friend_msgs/msg/detail/r2_d2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
friend_msgs__msg__R2D2__init(friend_msgs__msg__R2D2 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    friend_msgs__msg__R2D2__fini(msg);
    return false;
  }
  return true;
}

void
friend_msgs__msg__R2D2__fini(friend_msgs__msg__R2D2 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // id
  rosidl_runtime_c__String__fini(&msg->id);
}

bool
friend_msgs__msg__R2D2__are_equal(const friend_msgs__msg__R2D2 * lhs, const friend_msgs__msg__R2D2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  return true;
}

bool
friend_msgs__msg__R2D2__copy(
  const friend_msgs__msg__R2D2 * input,
  friend_msgs__msg__R2D2 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  return true;
}

friend_msgs__msg__R2D2 *
friend_msgs__msg__R2D2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__msg__R2D2 * msg = (friend_msgs__msg__R2D2 *)allocator.allocate(sizeof(friend_msgs__msg__R2D2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(friend_msgs__msg__R2D2));
  bool success = friend_msgs__msg__R2D2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
friend_msgs__msg__R2D2__destroy(friend_msgs__msg__R2D2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    friend_msgs__msg__R2D2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
friend_msgs__msg__R2D2__Sequence__init(friend_msgs__msg__R2D2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__msg__R2D2 * data = NULL;

  if (size) {
    data = (friend_msgs__msg__R2D2 *)allocator.zero_allocate(size, sizeof(friend_msgs__msg__R2D2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = friend_msgs__msg__R2D2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        friend_msgs__msg__R2D2__fini(&data[i - 1]);
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
friend_msgs__msg__R2D2__Sequence__fini(friend_msgs__msg__R2D2__Sequence * array)
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
      friend_msgs__msg__R2D2__fini(&array->data[i]);
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

friend_msgs__msg__R2D2__Sequence *
friend_msgs__msg__R2D2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  friend_msgs__msg__R2D2__Sequence * array = (friend_msgs__msg__R2D2__Sequence *)allocator.allocate(sizeof(friend_msgs__msg__R2D2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = friend_msgs__msg__R2D2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
friend_msgs__msg__R2D2__Sequence__destroy(friend_msgs__msg__R2D2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    friend_msgs__msg__R2D2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
friend_msgs__msg__R2D2__Sequence__are_equal(const friend_msgs__msg__R2D2__Sequence * lhs, const friend_msgs__msg__R2D2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!friend_msgs__msg__R2D2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
friend_msgs__msg__R2D2__Sequence__copy(
  const friend_msgs__msg__R2D2__Sequence * input,
  friend_msgs__msg__R2D2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(friend_msgs__msg__R2D2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    friend_msgs__msg__R2D2 * data =
      (friend_msgs__msg__R2D2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!friend_msgs__msg__R2D2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          friend_msgs__msg__R2D2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!friend_msgs__msg__R2D2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
