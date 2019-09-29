// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:action\NestedMessage.idl
// generated code does not contain a copyright notice
#include "test_msgs/action/nested_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `nested_field_no_pkg`
#include "test_msgs/msg/builtins__functions.h"
// Member `nested_field`
#include "test_msgs/msg/basic_types__functions.h"
// Member `nested_different_pkg`
#include "builtin_interfaces/msg/time__functions.h"

bool
test_msgs__action__NestedMessage_Goal__init(test_msgs__action__NestedMessage_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // nested_field_no_pkg
  if (!test_msgs__msg__Builtins__init(&msg->nested_field_no_pkg)) {
    test_msgs__action__NestedMessage_Goal__destroy(msg);
    return false;
  }
  // nested_field
  if (!test_msgs__msg__BasicTypes__init(&msg->nested_field)) {
    test_msgs__action__NestedMessage_Goal__destroy(msg);
    return false;
  }
  // nested_different_pkg
  if (!builtin_interfaces__msg__Time__init(&msg->nested_different_pkg)) {
    test_msgs__action__NestedMessage_Goal__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_Goal__fini(test_msgs__action__NestedMessage_Goal * msg)
{
  if (!msg) {
    return;
  }
  // nested_field_no_pkg
  test_msgs__msg__Builtins__fini(&msg->nested_field_no_pkg);
  // nested_field
  test_msgs__msg__BasicTypes__fini(&msg->nested_field);
  // nested_different_pkg
  builtin_interfaces__msg__Time__fini(&msg->nested_different_pkg);
}

test_msgs__action__NestedMessage_Goal *
test_msgs__action__NestedMessage_Goal__create()
{
  test_msgs__action__NestedMessage_Goal * msg = (test_msgs__action__NestedMessage_Goal *)malloc(sizeof(test_msgs__action__NestedMessage_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_Goal));
  bool success = test_msgs__action__NestedMessage_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_Goal__destroy(test_msgs__action__NestedMessage_Goal * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_Goal__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_Goal__Sequence__init(test_msgs__action__NestedMessage_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_Goal * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_Goal *)calloc(size, sizeof(test_msgs__action__NestedMessage_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_Goal__Sequence__fini(test_msgs__action__NestedMessage_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_Goal__Sequence *
test_msgs__action__NestedMessage_Goal__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_Goal__Sequence * array = (test_msgs__action__NestedMessage_Goal__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_Goal__Sequence__destroy(test_msgs__action__NestedMessage_Goal__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `nested_field_no_pkg`
// already included above
// #include "test_msgs/msg/builtins__functions.h"
// Member `nested_field`
// already included above
// #include "test_msgs/msg/basic_types__functions.h"
// Member `nested_different_pkg`
// already included above
// #include "builtin_interfaces/msg/time__functions.h"

bool
test_msgs__action__NestedMessage_Result__init(test_msgs__action__NestedMessage_Result * msg)
{
  if (!msg) {
    return false;
  }
  // nested_field_no_pkg
  if (!test_msgs__msg__Builtins__init(&msg->nested_field_no_pkg)) {
    test_msgs__action__NestedMessage_Result__destroy(msg);
    return false;
  }
  // nested_field
  if (!test_msgs__msg__BasicTypes__init(&msg->nested_field)) {
    test_msgs__action__NestedMessage_Result__destroy(msg);
    return false;
  }
  // nested_different_pkg
  if (!builtin_interfaces__msg__Time__init(&msg->nested_different_pkg)) {
    test_msgs__action__NestedMessage_Result__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_Result__fini(test_msgs__action__NestedMessage_Result * msg)
{
  if (!msg) {
    return;
  }
  // nested_field_no_pkg
  test_msgs__msg__Builtins__fini(&msg->nested_field_no_pkg);
  // nested_field
  test_msgs__msg__BasicTypes__fini(&msg->nested_field);
  // nested_different_pkg
  builtin_interfaces__msg__Time__fini(&msg->nested_different_pkg);
}

test_msgs__action__NestedMessage_Result *
test_msgs__action__NestedMessage_Result__create()
{
  test_msgs__action__NestedMessage_Result * msg = (test_msgs__action__NestedMessage_Result *)malloc(sizeof(test_msgs__action__NestedMessage_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_Result));
  bool success = test_msgs__action__NestedMessage_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_Result__destroy(test_msgs__action__NestedMessage_Result * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_Result__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_Result__Sequence__init(test_msgs__action__NestedMessage_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_Result * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_Result *)calloc(size, sizeof(test_msgs__action__NestedMessage_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_Result__Sequence__fini(test_msgs__action__NestedMessage_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_Result__Sequence *
test_msgs__action__NestedMessage_Result__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_Result__Sequence * array = (test_msgs__action__NestedMessage_Result__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_Result__Sequence__destroy(test_msgs__action__NestedMessage_Result__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `nested_field_no_pkg`
// already included above
// #include "test_msgs/msg/builtins__functions.h"
// Member `nested_field`
// already included above
// #include "test_msgs/msg/basic_types__functions.h"
// Member `nested_different_pkg`
// already included above
// #include "builtin_interfaces/msg/time__functions.h"

bool
test_msgs__action__NestedMessage_Feedback__init(test_msgs__action__NestedMessage_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // nested_field_no_pkg
  if (!test_msgs__msg__Builtins__init(&msg->nested_field_no_pkg)) {
    test_msgs__action__NestedMessage_Feedback__destroy(msg);
    return false;
  }
  // nested_field
  if (!test_msgs__msg__BasicTypes__init(&msg->nested_field)) {
    test_msgs__action__NestedMessage_Feedback__destroy(msg);
    return false;
  }
  // nested_different_pkg
  if (!builtin_interfaces__msg__Time__init(&msg->nested_different_pkg)) {
    test_msgs__action__NestedMessage_Feedback__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_Feedback__fini(test_msgs__action__NestedMessage_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // nested_field_no_pkg
  test_msgs__msg__Builtins__fini(&msg->nested_field_no_pkg);
  // nested_field
  test_msgs__msg__BasicTypes__fini(&msg->nested_field);
  // nested_different_pkg
  builtin_interfaces__msg__Time__fini(&msg->nested_different_pkg);
}

test_msgs__action__NestedMessage_Feedback *
test_msgs__action__NestedMessage_Feedback__create()
{
  test_msgs__action__NestedMessage_Feedback * msg = (test_msgs__action__NestedMessage_Feedback *)malloc(sizeof(test_msgs__action__NestedMessage_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_Feedback));
  bool success = test_msgs__action__NestedMessage_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_Feedback__destroy(test_msgs__action__NestedMessage_Feedback * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_Feedback__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_Feedback__Sequence__init(test_msgs__action__NestedMessage_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_Feedback * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_Feedback *)calloc(size, sizeof(test_msgs__action__NestedMessage_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_Feedback__Sequence__fini(test_msgs__action__NestedMessage_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_Feedback__Sequence *
test_msgs__action__NestedMessage_Feedback__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_Feedback__Sequence * array = (test_msgs__action__NestedMessage_Feedback__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_Feedback__Sequence__destroy(test_msgs__action__NestedMessage_Feedback__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "test_msgs/action/nested_message__functions.h"

bool
test_msgs__action__NestedMessage_SendGoal_Request__init(test_msgs__action__NestedMessage_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    test_msgs__action__NestedMessage_SendGoal_Request__destroy(msg);
    return false;
  }
  // goal
  if (!test_msgs__action__NestedMessage_Goal__init(&msg->goal)) {
    test_msgs__action__NestedMessage_SendGoal_Request__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_SendGoal_Request__fini(test_msgs__action__NestedMessage_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  test_msgs__action__NestedMessage_Goal__fini(&msg->goal);
}

test_msgs__action__NestedMessage_SendGoal_Request *
test_msgs__action__NestedMessage_SendGoal_Request__create()
{
  test_msgs__action__NestedMessage_SendGoal_Request * msg = (test_msgs__action__NestedMessage_SendGoal_Request *)malloc(sizeof(test_msgs__action__NestedMessage_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_SendGoal_Request));
  bool success = test_msgs__action__NestedMessage_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_SendGoal_Request__destroy(test_msgs__action__NestedMessage_SendGoal_Request * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__init(test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_SendGoal_Request * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_SendGoal_Request *)calloc(size, sizeof(test_msgs__action__NestedMessage_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__fini(test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_SendGoal_Request__Sequence *
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array = (test_msgs__action__NestedMessage_SendGoal_Request__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_SendGoal_Request__Sequence__destroy(test_msgs__action__NestedMessage_SendGoal_Request__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/time__functions.h"

bool
test_msgs__action__NestedMessage_SendGoal_Response__init(test_msgs__action__NestedMessage_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    test_msgs__action__NestedMessage_SendGoal_Response__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_SendGoal_Response__fini(test_msgs__action__NestedMessage_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

test_msgs__action__NestedMessage_SendGoal_Response *
test_msgs__action__NestedMessage_SendGoal_Response__create()
{
  test_msgs__action__NestedMessage_SendGoal_Response * msg = (test_msgs__action__NestedMessage_SendGoal_Response *)malloc(sizeof(test_msgs__action__NestedMessage_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_SendGoal_Response));
  bool success = test_msgs__action__NestedMessage_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_SendGoal_Response__destroy(test_msgs__action__NestedMessage_SendGoal_Response * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__init(test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_SendGoal_Response * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_SendGoal_Response *)calloc(size, sizeof(test_msgs__action__NestedMessage_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__fini(test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_SendGoal_Response__Sequence *
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array = (test_msgs__action__NestedMessage_SendGoal_Response__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_SendGoal_Response__Sequence__destroy(test_msgs__action__NestedMessage_SendGoal_Response__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
test_msgs__action__NestedMessage_GetResult_Request__init(test_msgs__action__NestedMessage_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    test_msgs__action__NestedMessage_GetResult_Request__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_GetResult_Request__fini(test_msgs__action__NestedMessage_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

test_msgs__action__NestedMessage_GetResult_Request *
test_msgs__action__NestedMessage_GetResult_Request__create()
{
  test_msgs__action__NestedMessage_GetResult_Request * msg = (test_msgs__action__NestedMessage_GetResult_Request *)malloc(sizeof(test_msgs__action__NestedMessage_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_GetResult_Request));
  bool success = test_msgs__action__NestedMessage_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_GetResult_Request__destroy(test_msgs__action__NestedMessage_GetResult_Request * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_GetResult_Request__Sequence__init(test_msgs__action__NestedMessage_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_GetResult_Request * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_GetResult_Request *)calloc(size, sizeof(test_msgs__action__NestedMessage_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_GetResult_Request__Sequence__fini(test_msgs__action__NestedMessage_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_GetResult_Request__Sequence *
test_msgs__action__NestedMessage_GetResult_Request__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_GetResult_Request__Sequence * array = (test_msgs__action__NestedMessage_GetResult_Request__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_GetResult_Request__Sequence__destroy(test_msgs__action__NestedMessage_GetResult_Request__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "test_msgs/action/nested_message__functions.h"

bool
test_msgs__action__NestedMessage_GetResult_Response__init(test_msgs__action__NestedMessage_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!test_msgs__action__NestedMessage_Result__init(&msg->result)) {
    test_msgs__action__NestedMessage_GetResult_Response__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_GetResult_Response__fini(test_msgs__action__NestedMessage_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  test_msgs__action__NestedMessage_Result__fini(&msg->result);
}

test_msgs__action__NestedMessage_GetResult_Response *
test_msgs__action__NestedMessage_GetResult_Response__create()
{
  test_msgs__action__NestedMessage_GetResult_Response * msg = (test_msgs__action__NestedMessage_GetResult_Response *)malloc(sizeof(test_msgs__action__NestedMessage_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_GetResult_Response));
  bool success = test_msgs__action__NestedMessage_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_GetResult_Response__destroy(test_msgs__action__NestedMessage_GetResult_Response * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_GetResult_Response__Sequence__init(test_msgs__action__NestedMessage_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_GetResult_Response * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_GetResult_Response *)calloc(size, sizeof(test_msgs__action__NestedMessage_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_GetResult_Response__Sequence__fini(test_msgs__action__NestedMessage_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_GetResult_Response__Sequence *
test_msgs__action__NestedMessage_GetResult_Response__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_GetResult_Response__Sequence * array = (test_msgs__action__NestedMessage_GetResult_Response__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_GetResult_Response__Sequence__destroy(test_msgs__action__NestedMessage_GetResult_Response__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "test_msgs/action/nested_message__functions.h"

bool
test_msgs__action__NestedMessage_FeedbackMessage__init(test_msgs__action__NestedMessage_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    test_msgs__action__NestedMessage_FeedbackMessage__destroy(msg);
    return false;
  }
  // feedback
  if (!test_msgs__action__NestedMessage_Feedback__init(&msg->feedback)) {
    test_msgs__action__NestedMessage_FeedbackMessage__destroy(msg);
    return false;
  }
  return true;
}

void
test_msgs__action__NestedMessage_FeedbackMessage__fini(test_msgs__action__NestedMessage_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  test_msgs__action__NestedMessage_Feedback__fini(&msg->feedback);
}

test_msgs__action__NestedMessage_FeedbackMessage *
test_msgs__action__NestedMessage_FeedbackMessage__create()
{
  test_msgs__action__NestedMessage_FeedbackMessage * msg = (test_msgs__action__NestedMessage_FeedbackMessage *)malloc(sizeof(test_msgs__action__NestedMessage_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__action__NestedMessage_FeedbackMessage));
  bool success = test_msgs__action__NestedMessage_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__action__NestedMessage_FeedbackMessage__destroy(test_msgs__action__NestedMessage_FeedbackMessage * msg)
{
  if (msg) {
    test_msgs__action__NestedMessage_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__init(test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__action__NestedMessage_FeedbackMessage * data = NULL;
  if (size) {
    data = (test_msgs__action__NestedMessage_FeedbackMessage *)calloc(size, sizeof(test_msgs__action__NestedMessage_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__action__NestedMessage_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__action__NestedMessage_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__fini(test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__action__NestedMessage_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__action__NestedMessage_FeedbackMessage__Sequence *
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__create(size_t size)
{
  test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array = (test_msgs__action__NestedMessage_FeedbackMessage__Sequence *)malloc(sizeof(test_msgs__action__NestedMessage_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__action__NestedMessage_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__action__NestedMessage_FeedbackMessage__Sequence__destroy(test_msgs__action__NestedMessage_FeedbackMessage__Sequence * array)
{
  if (array) {
    test_msgs__action__NestedMessage_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
