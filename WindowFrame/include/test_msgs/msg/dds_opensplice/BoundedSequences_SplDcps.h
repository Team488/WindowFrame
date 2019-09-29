#ifndef H_10CABBCC101DD2C7E6476DC0C013AC51_BoundedSequences_SPLTYPES_H
#define H_10CABBCC101DD2C7E6476DC0C013AC51_BoundedSequences_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_BoundedSequences_.h"
#include "test_msgs/msg/dds_opensplice/BasicTypes_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Constants_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Defaults_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __BoundedSequences__test_msgs__load (c_base base);

extern c_metaObject __BoundedSequences__test_msgs_msg__load (c_base base);

extern c_metaObject __BoundedSequences__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__BoundedSequences__metaDescriptor[];
extern const int test_msgs_msg_dds__BoundedSequences__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__BoundedSequences__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__BoundedSequences___load (c_base base);
struct _test_msgs_msg_dds__BoundedSequences_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__BoundedSequences___copyIn(c_base base, const struct test_msgs::msg::dds_::BoundedSequences_ *from, struct _test_msgs_msg_dds__BoundedSequences_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__BoundedSequences___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__BoundedSequences_ {
    c_sequence bool_values_;
    c_sequence byte_values_;
    c_sequence char_values_;
    c_sequence float32_values_;
    c_sequence float64_values_;
    c_sequence int8_values_;
    c_sequence uint8_values_;
    c_sequence int16_values_;
    c_sequence uint16_values_;
    c_sequence int32_values_;
    c_sequence uint32_values_;
    c_sequence int64_values_;
    c_sequence uint64_values_;
    c_sequence string_values_;
    c_sequence basic_types_values_;
    c_sequence constants_values_;
    c_sequence defaults_values_;
    c_sequence bool_values_default_;
    c_sequence byte_values_default_;
    c_sequence char_values_default_;
    c_sequence float32_values_default_;
    c_sequence float64_values_default_;
    c_sequence int8_values_default_;
    c_sequence uint8_values_default_;
    c_sequence int16_values_default_;
    c_sequence uint16_values_default_;
    c_sequence int32_values_default_;
    c_sequence uint32_values_default_;
    c_sequence int64_values_default_;
    c_sequence uint64_values_default_;
    c_sequence string_values_default_;
    c_long alignment_check_;
};

#undef OS_API
#endif
