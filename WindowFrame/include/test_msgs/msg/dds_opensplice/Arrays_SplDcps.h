#ifndef H_5F4CBA7BA658AE9F94EB7A533816544A_Arrays_SPLTYPES_H
#define H_5F4CBA7BA658AE9F94EB7A533816544A_Arrays_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Arrays_.h"
#include "test_msgs/msg/dds_opensplice/BasicTypes_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Constants_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Defaults_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Arrays__test_msgs__load (c_base base);

extern c_metaObject __Arrays__test_msgs_msg__load (c_base base);

extern c_metaObject __Arrays__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__Arrays__metaDescriptor[];
extern const int test_msgs_msg_dds__Arrays__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__Arrays__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__Arrays___load (c_base base);
struct _test_msgs_msg_dds__Arrays_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__Arrays___copyIn(c_base base, const struct test_msgs::msg::dds_::Arrays_ *from, struct _test_msgs_msg_dds__Arrays_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__Arrays___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__Arrays_ {
    c_bool bool_values_[3];
    c_octet byte_values_[3];
    c_octet char_values_[3];
    c_float float32_values_[3];
    c_double float64_values_[3];
    c_octet int8_values_[3];
    c_octet uint8_values_[3];
    c_short int16_values_[3];
    c_ushort uint16_values_[3];
    c_long int32_values_[3];
    c_ulong uint32_values_[3];
    c_longlong int64_values_[3];
    c_ulonglong uint64_values_[3];
    c_string string_values_[3];
    struct _test_msgs_msg_dds__BasicTypes_ basic_types_values_[3];
    struct _test_msgs_msg_dds__Constants_ constants_values_[3];
    struct _test_msgs_msg_dds__Defaults_ defaults_values_[3];
    c_bool bool_values_default_[3];
    c_octet byte_values_default_[3];
    c_octet char_values_default_[3];
    c_float float32_values_default_[3];
    c_double float64_values_default_[3];
    c_octet int8_values_default_[3];
    c_octet uint8_values_default_[3];
    c_short int16_values_default_[3];
    c_ushort uint16_values_default_[3];
    c_long int32_values_default_[3];
    c_ulong uint32_values_default_[3];
    c_longlong int64_values_default_[3];
    c_ulonglong uint64_values_default_[3];
    c_string string_values_default_[3];
    c_long alignment_check_;
};

#undef OS_API
#endif
