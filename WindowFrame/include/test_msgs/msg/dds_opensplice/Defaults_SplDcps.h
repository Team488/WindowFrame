#ifndef H_D322A5374FA4A4738072BDB04361CC67_Defaults_SPLTYPES_H
#define H_D322A5374FA4A4738072BDB04361CC67_Defaults_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Defaults_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Defaults__test_msgs__load (c_base base);

extern c_metaObject __Defaults__test_msgs_msg__load (c_base base);

extern c_metaObject __Defaults__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__Defaults__metaDescriptor[];
extern const int test_msgs_msg_dds__Defaults__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__Defaults__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__Defaults___load (c_base base);
struct _test_msgs_msg_dds__Defaults_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__Defaults___copyIn(c_base base, const struct test_msgs::msg::dds_::Defaults_ *from, struct _test_msgs_msg_dds__Defaults_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__Defaults___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__Defaults_ {
    c_bool bool_value_;
    c_octet byte_value_;
    c_octet char_value_;
    c_float float32_value_;
    c_double float64_value_;
    c_octet int8_value_;
    c_octet uint8_value_;
    c_short int16_value_;
    c_ushort uint16_value_;
    c_long int32_value_;
    c_ulong uint32_value_;
    c_longlong int64_value_;
    c_ulonglong uint64_value_;
};

#undef OS_API
#endif
