#ifndef H_32956BABF2B433A7156890D254287479_MultiNested_SPLTYPES_H
#define H_32956BABF2B433A7156890D254287479_MultiNested_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MultiNested_.h"
#include "test_msgs/msg/dds_opensplice/Arrays_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/BoundedSequences_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/UnboundedSequences_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MultiNested__test_msgs__load (c_base base);

extern c_metaObject __MultiNested__test_msgs_msg__load (c_base base);

extern c_metaObject __MultiNested__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__MultiNested__metaDescriptor[];
extern const int test_msgs_msg_dds__MultiNested__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__MultiNested__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__MultiNested___load (c_base base);
struct _test_msgs_msg_dds__MultiNested_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__MultiNested___copyIn(c_base base, const struct test_msgs::msg::dds_::MultiNested_ *from, struct _test_msgs_msg_dds__MultiNested_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__MultiNested___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__MultiNested_ {
    struct _test_msgs_msg_dds__Arrays_ array_of_arrays_[3];
    struct _test_msgs_msg_dds__BoundedSequences_ array_of_bounded_sequences_[3];
    struct _test_msgs_msg_dds__UnboundedSequences_ array_of_unbounded_sequences_[3];
    c_sequence bounded_sequence_of_arrays_;
    c_sequence bounded_sequence_of_bounded_sequences_;
    c_sequence bounded_sequence_of_unbounded_sequences_;
    c_sequence unbounded_sequence_of_arrays_;
    c_sequence unbounded_sequence_of_bounded_sequences_;
    c_sequence unbounded_sequence_of_unbounded_sequences_;
};

#undef OS_API
#endif
