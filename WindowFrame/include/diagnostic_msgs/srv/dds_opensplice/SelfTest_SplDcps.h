#ifndef H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest_SPLTYPES_H
#define H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SelfTest_.h"
#include "diagnostic_msgs/msg/dds_opensplice/DiagnosticStatus_SplDcps.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SelfTest__diagnostic_msgs__load (c_base base);

extern c_metaObject __SelfTest__diagnostic_msgs_srv__load (c_base base);

extern c_metaObject __SelfTest__diagnostic_msgs_srv_dds___load (c_base base);

extern const char *diagnostic_msgs_srv_dds__SelfTest_Request__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__SelfTest_Request__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__SelfTest_Request__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__SelfTest_Request___load (c_base base);
struct _diagnostic_msgs_srv_dds__SelfTest_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__SelfTest_Request___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::SelfTest_Request_ *from, struct _diagnostic_msgs_srv_dds__SelfTest_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__SelfTest_Request___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__SelfTest_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *diagnostic_msgs_srv_dds__SelfTest_Response__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__SelfTest_Response__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__SelfTest_Response__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__SelfTest_Response___load (c_base base);
struct _diagnostic_msgs_srv_dds__SelfTest_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__SelfTest_Response___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::SelfTest_Response_ *from, struct _diagnostic_msgs_srv_dds__SelfTest_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__SelfTest_Response___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__SelfTest_Response_ {
    c_string id_;
    c_octet passed_;
    c_sequence status_;
};

extern const char *diagnostic_msgs_srv_dds__Sample_SelfTest_Request__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__Sample_SelfTest_Request__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__Sample_SelfTest_Request__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__Sample_SelfTest_Request___load (c_base base);
struct _diagnostic_msgs_srv_dds__Sample_SelfTest_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__Sample_SelfTest_Request___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::Sample_SelfTest_Request_ *from, struct _diagnostic_msgs_srv_dds__Sample_SelfTest_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__Sample_SelfTest_Request___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__Sample_SelfTest_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _diagnostic_msgs_srv_dds__SelfTest_Request_ request_;
};

extern const char *diagnostic_msgs_srv_dds__Sample_SelfTest_Response__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__Sample_SelfTest_Response__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__Sample_SelfTest_Response__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__Sample_SelfTest_Response___load (c_base base);
struct _diagnostic_msgs_srv_dds__Sample_SelfTest_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__Sample_SelfTest_Response___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::Sample_SelfTest_Response_ *from, struct _diagnostic_msgs_srv_dds__Sample_SelfTest_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__Sample_SelfTest_Response___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__Sample_SelfTest_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _diagnostic_msgs_srv_dds__SelfTest_Response_ response_;
};

#undef OS_API
#endif
