// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy:srv/CustomSrv.idl
// generated code does not contain a copyright notice
#include "buggy/srv/detail/custom_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "std_msgs/msg/detail/bool__functions.h"

bool
buggy__srv__CustomSrv_Request__init(buggy__srv__CustomSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!std_msgs__msg__Bool__init(&msg->data)) {
    buggy__srv__CustomSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
buggy__srv__CustomSrv_Request__fini(buggy__srv__CustomSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  std_msgs__msg__Bool__fini(&msg->data);
}

bool
buggy__srv__CustomSrv_Request__are_equal(const buggy__srv__CustomSrv_Request * lhs, const buggy__srv__CustomSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
buggy__srv__CustomSrv_Request__copy(
  const buggy__srv__CustomSrv_Request * input,
  buggy__srv__CustomSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!std_msgs__msg__Bool__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

buggy__srv__CustomSrv_Request *
buggy__srv__CustomSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__srv__CustomSrv_Request * msg = (buggy__srv__CustomSrv_Request *)allocator.allocate(sizeof(buggy__srv__CustomSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy__srv__CustomSrv_Request));
  bool success = buggy__srv__CustomSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy__srv__CustomSrv_Request__destroy(buggy__srv__CustomSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy__srv__CustomSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy__srv__CustomSrv_Request__Sequence__init(buggy__srv__CustomSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__srv__CustomSrv_Request * data = NULL;

  if (size) {
    data = (buggy__srv__CustomSrv_Request *)allocator.zero_allocate(size, sizeof(buggy__srv__CustomSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy__srv__CustomSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy__srv__CustomSrv_Request__fini(&data[i - 1]);
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
buggy__srv__CustomSrv_Request__Sequence__fini(buggy__srv__CustomSrv_Request__Sequence * array)
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
      buggy__srv__CustomSrv_Request__fini(&array->data[i]);
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

buggy__srv__CustomSrv_Request__Sequence *
buggy__srv__CustomSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__srv__CustomSrv_Request__Sequence * array = (buggy__srv__CustomSrv_Request__Sequence *)allocator.allocate(sizeof(buggy__srv__CustomSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy__srv__CustomSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy__srv__CustomSrv_Request__Sequence__destroy(buggy__srv__CustomSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy__srv__CustomSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy__srv__CustomSrv_Request__Sequence__are_equal(const buggy__srv__CustomSrv_Request__Sequence * lhs, const buggy__srv__CustomSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy__srv__CustomSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy__srv__CustomSrv_Request__Sequence__copy(
  const buggy__srv__CustomSrv_Request__Sequence * input,
  buggy__srv__CustomSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy__srv__CustomSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    buggy__srv__CustomSrv_Request * data =
      (buggy__srv__CustomSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy__srv__CustomSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          buggy__srv__CustomSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!buggy__srv__CustomSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "std_msgs/msg/detail/bool__functions.h"

bool
buggy__srv__CustomSrv_Response__init(buggy__srv__CustomSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!std_msgs__msg__Bool__init(&msg->result)) {
    buggy__srv__CustomSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
buggy__srv__CustomSrv_Response__fini(buggy__srv__CustomSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  std_msgs__msg__Bool__fini(&msg->result);
}

bool
buggy__srv__CustomSrv_Response__are_equal(const buggy__srv__CustomSrv_Response * lhs, const buggy__srv__CustomSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
buggy__srv__CustomSrv_Response__copy(
  const buggy__srv__CustomSrv_Response * input,
  buggy__srv__CustomSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!std_msgs__msg__Bool__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

buggy__srv__CustomSrv_Response *
buggy__srv__CustomSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__srv__CustomSrv_Response * msg = (buggy__srv__CustomSrv_Response *)allocator.allocate(sizeof(buggy__srv__CustomSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy__srv__CustomSrv_Response));
  bool success = buggy__srv__CustomSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy__srv__CustomSrv_Response__destroy(buggy__srv__CustomSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy__srv__CustomSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy__srv__CustomSrv_Response__Sequence__init(buggy__srv__CustomSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__srv__CustomSrv_Response * data = NULL;

  if (size) {
    data = (buggy__srv__CustomSrv_Response *)allocator.zero_allocate(size, sizeof(buggy__srv__CustomSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy__srv__CustomSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy__srv__CustomSrv_Response__fini(&data[i - 1]);
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
buggy__srv__CustomSrv_Response__Sequence__fini(buggy__srv__CustomSrv_Response__Sequence * array)
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
      buggy__srv__CustomSrv_Response__fini(&array->data[i]);
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

buggy__srv__CustomSrv_Response__Sequence *
buggy__srv__CustomSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy__srv__CustomSrv_Response__Sequence * array = (buggy__srv__CustomSrv_Response__Sequence *)allocator.allocate(sizeof(buggy__srv__CustomSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy__srv__CustomSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy__srv__CustomSrv_Response__Sequence__destroy(buggy__srv__CustomSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy__srv__CustomSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy__srv__CustomSrv_Response__Sequence__are_equal(const buggy__srv__CustomSrv_Response__Sequence * lhs, const buggy__srv__CustomSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy__srv__CustomSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy__srv__CustomSrv_Response__Sequence__copy(
  const buggy__srv__CustomSrv_Response__Sequence * input,
  buggy__srv__CustomSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy__srv__CustomSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    buggy__srv__CustomSrv_Response * data =
      (buggy__srv__CustomSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy__srv__CustomSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          buggy__srv__CustomSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!buggy__srv__CustomSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}