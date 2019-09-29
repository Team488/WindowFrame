#ifndef H_B3418CAE12F0E21298022F6849FB3988_Empty_SPLTYPES_H
#define H_B3418CAE12F0E21298022F6849FB3988_Empty_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Empty_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Empty__test_msgs__load (c_base base);

extern c_metaObject __Empty__test_msgs_msg__load (c_base base);

extern c_metaObject __Empty__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__Empty__metaDescriptor[];
extern const int test_msgs_msg_dds__Empty__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__Empty__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__Empty___load (c_base base);
struct _test_msgs_msg_dds__Empty_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__Empty___copyIn(c_base base, const struct test_msgs::msg::dds_::Empty_ *from, struct _test_msgs_msg_dds__Empty_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__Empty___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__Empty_ {
    c_octet structure_needs_at_least_one_member_;
};

#undef OS_API
#endif
