#ifndef H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings_SPLTYPES_H
#define H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_WStrings_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __WStrings__test_msgs__load (c_base base);

extern c_metaObject __WStrings__test_msgs_msg__load (c_base base);

extern c_metaObject __WStrings__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__WStrings__metaDescriptor[];
extern const int test_msgs_msg_dds__WStrings__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__WStrings__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__WStrings___load (c_base base);
struct _test_msgs_msg_dds__WStrings_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__WStrings___copyIn(c_base base, const struct test_msgs::msg::dds_::WStrings_ *from, struct _test_msgs_msg_dds__WStrings_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__WStrings___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__WStrings_ {
    c_string wstring_value_;
    c_string array_of_wstrings_[3];
    c_sequence bounded_sequence_of_wstrings_;
    c_sequence unbounded_sequence_of_wstrings_;
};

#undef OS_API
#endif
