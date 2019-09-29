#ifndef H_A409AE4DC7EA186D27E3598D81EBF55A_Strings_SPLTYPES_H
#define H_A409AE4DC7EA186D27E3598D81EBF55A_Strings_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Strings_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Strings__test_msgs__load (c_base base);

extern c_metaObject __Strings__test_msgs_msg__load (c_base base);

extern c_metaObject __Strings__test_msgs_msg_dds___load (c_base base);

extern c_metaObject __Strings__test_msgs_msg_dds__Strings_Constants__load (c_base base);

extern const char *test_msgs_msg_dds__Strings__metaDescriptor[];
extern const int test_msgs_msg_dds__Strings__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__Strings__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__Strings___load (c_base base);
struct _test_msgs_msg_dds__Strings_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__Strings___copyIn(c_base base, const struct test_msgs::msg::dds_::Strings_ *from, struct _test_msgs_msg_dds__Strings_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__Strings___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__Strings_ {
    c_string string_value_;
    c_string string_value_default1_;
    c_string string_value_default2_;
    c_string string_value_default3_;
    c_string string_value_default4_;
    c_string string_value_default5_;
    c_string bounded_string_value_;
    c_string bounded_string_value_default1_;
    c_string bounded_string_value_default2_;
    c_string bounded_string_value_default3_;
    c_string bounded_string_value_default4_;
    c_string bounded_string_value_default5_;
};

#undef OS_API
#endif
