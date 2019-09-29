#ifndef H_B9AE46F71932211595F92CE06E7621C9_Fibonacci_SPLTYPES_H
#define H_B9AE46F71932211595F92CE06E7621C9_Fibonacci_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Fibonacci_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Fibonacci__test_msgs__load (c_base base);

extern c_metaObject __Fibonacci__test_msgs_action__load (c_base base);

extern c_metaObject __Fibonacci__test_msgs_action_dds___load (c_base base);

extern const char *test_msgs_action_dds__Fibonacci_Goal__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_Goal__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_Goal__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_Goal___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_Goal_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_Goal___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_Goal_ *from, struct _test_msgs_action_dds__Fibonacci_Goal_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_Goal___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_Goal_ {
    c_long order_;
};

extern const char *test_msgs_action_dds__Fibonacci_SendGoal_Request__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_SendGoal_Request__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_SendGoal_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_SendGoal_Request___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_SendGoal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_SendGoal_Request___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_SendGoal_Request_ *from, struct _test_msgs_action_dds__Fibonacci_SendGoal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_SendGoal_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_SendGoal_Request_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
    struct _test_msgs_action_dds__Fibonacci_Goal_ goal_;
};

extern const char *test_msgs_action_dds__Fibonacci_SendGoal_Response__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_SendGoal_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_SendGoal_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_SendGoal_Response___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_SendGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_SendGoal_Response___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_SendGoal_Response_ *from, struct _test_msgs_action_dds__Fibonacci_SendGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_SendGoal_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_SendGoal_Response_ {
    c_bool accepted_;
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
};

extern const char *test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request__metaDescriptor[];
extern const int test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___load (c_base base);
struct _test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyIn(c_base base, const struct test_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ *from, struct _test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Sample_Fibonacci_SendGoal_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_action_dds__Fibonacci_SendGoal_Request_ request_;
};

extern const char *test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response__metaDescriptor[];
extern const int test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___load (c_base base);
struct _test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyIn(c_base base, const struct test_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ *from, struct _test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Sample_Fibonacci_SendGoal_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_action_dds__Fibonacci_SendGoal_Response_ response_;
};

extern const char *test_msgs_action_dds__Fibonacci_Result__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_Result__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_Result__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_Result___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_Result_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_Result___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_Result_ *from, struct _test_msgs_action_dds__Fibonacci_Result_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_Result___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_Result_ {
    c_sequence sequence_;
};

extern const char *test_msgs_action_dds__Fibonacci_GetResult_Request__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_GetResult_Request__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_GetResult_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_GetResult_Request___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_GetResult_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_GetResult_Request___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_GetResult_Request_ *from, struct _test_msgs_action_dds__Fibonacci_GetResult_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_GetResult_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_GetResult_Request_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
};

extern const char *test_msgs_action_dds__Fibonacci_GetResult_Response__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_GetResult_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_GetResult_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_GetResult_Response___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_GetResult_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_GetResult_Response___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_GetResult_Response_ *from, struct _test_msgs_action_dds__Fibonacci_GetResult_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_GetResult_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_GetResult_Response_ {
    c_octet status_;
    struct _test_msgs_action_dds__Fibonacci_Result_ result_;
};

extern const char *test_msgs_action_dds__Sample_Fibonacci_GetResult_Request__metaDescriptor[];
extern const int test_msgs_action_dds__Sample_Fibonacci_GetResult_Request__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Sample_Fibonacci_GetResult_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Sample_Fibonacci_GetResult_Request___load (c_base base);
struct _test_msgs_action_dds__Sample_Fibonacci_GetResult_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyIn(c_base base, const struct test_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ *from, struct _test_msgs_action_dds__Sample_Fibonacci_GetResult_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Sample_Fibonacci_GetResult_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_action_dds__Fibonacci_GetResult_Request_ request_;
};

extern const char *test_msgs_action_dds__Sample_Fibonacci_GetResult_Response__metaDescriptor[];
extern const int test_msgs_action_dds__Sample_Fibonacci_GetResult_Response__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Sample_Fibonacci_GetResult_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Sample_Fibonacci_GetResult_Response___load (c_base base);
struct _test_msgs_action_dds__Sample_Fibonacci_GetResult_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyIn(c_base base, const struct test_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ *from, struct _test_msgs_action_dds__Sample_Fibonacci_GetResult_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Sample_Fibonacci_GetResult_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_action_dds__Fibonacci_GetResult_Response_ response_;
};

extern const char *test_msgs_action_dds__Fibonacci_Feedback__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_Feedback__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_Feedback__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_Feedback___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_Feedback_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_Feedback___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_Feedback_ *from, struct _test_msgs_action_dds__Fibonacci_Feedback_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_Feedback___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_Feedback_ {
    c_sequence sequence_;
};

extern const char *test_msgs_action_dds__Fibonacci_FeedbackMessage__metaDescriptor[];
extern const int test_msgs_action_dds__Fibonacci_FeedbackMessage__metaDescriptorArrLength;
extern const int test_msgs_action_dds__Fibonacci_FeedbackMessage__metaDescriptorLength;
extern c_metaObject __test_msgs_action_dds__Fibonacci_FeedbackMessage___load (c_base base);
struct _test_msgs_action_dds__Fibonacci_FeedbackMessage_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_action_dds__Fibonacci_FeedbackMessage___copyIn(c_base base, const struct test_msgs::action::dds_::Fibonacci_FeedbackMessage_ *from, struct _test_msgs_action_dds__Fibonacci_FeedbackMessage_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_action_dds__Fibonacci_FeedbackMessage___copyOut(const void *_from, void *_to);
struct _test_msgs_action_dds__Fibonacci_FeedbackMessage_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
    struct _test_msgs_action_dds__Fibonacci_Feedback_ feedback_;
};

#undef OS_API
#endif