#ifndef H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph_SPLTYPES_H
#define H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_FrameGraph_.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __FrameGraph__tf2_msgs__load (c_base base);

extern c_metaObject __FrameGraph__tf2_msgs_srv__load (c_base base);

extern c_metaObject __FrameGraph__tf2_msgs_srv_dds___load (c_base base);

extern const char *tf2_msgs_srv_dds__FrameGraph_Request__metaDescriptor[];
extern const int tf2_msgs_srv_dds__FrameGraph_Request__metaDescriptorArrLength;
extern const int tf2_msgs_srv_dds__FrameGraph_Request__metaDescriptorLength;
extern c_metaObject __tf2_msgs_srv_dds__FrameGraph_Request___load (c_base base);
struct _tf2_msgs_srv_dds__FrameGraph_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_srv_dds__FrameGraph_Request___copyIn(c_base base, const struct tf2_msgs::srv::dds_::FrameGraph_Request_ *from, struct _tf2_msgs_srv_dds__FrameGraph_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_srv_dds__FrameGraph_Request___copyOut(const void *_from, void *_to);
struct _tf2_msgs_srv_dds__FrameGraph_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *tf2_msgs_srv_dds__FrameGraph_Response__metaDescriptor[];
extern const int tf2_msgs_srv_dds__FrameGraph_Response__metaDescriptorArrLength;
extern const int tf2_msgs_srv_dds__FrameGraph_Response__metaDescriptorLength;
extern c_metaObject __tf2_msgs_srv_dds__FrameGraph_Response___load (c_base base);
struct _tf2_msgs_srv_dds__FrameGraph_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_srv_dds__FrameGraph_Response___copyIn(c_base base, const struct tf2_msgs::srv::dds_::FrameGraph_Response_ *from, struct _tf2_msgs_srv_dds__FrameGraph_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_srv_dds__FrameGraph_Response___copyOut(const void *_from, void *_to);
struct _tf2_msgs_srv_dds__FrameGraph_Response_ {
    c_string frame_yaml_;
};

extern const char *tf2_msgs_srv_dds__Sample_FrameGraph_Request__metaDescriptor[];
extern const int tf2_msgs_srv_dds__Sample_FrameGraph_Request__metaDescriptorArrLength;
extern const int tf2_msgs_srv_dds__Sample_FrameGraph_Request__metaDescriptorLength;
extern c_metaObject __tf2_msgs_srv_dds__Sample_FrameGraph_Request___load (c_base base);
struct _tf2_msgs_srv_dds__Sample_FrameGraph_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_srv_dds__Sample_FrameGraph_Request___copyIn(c_base base, const struct tf2_msgs::srv::dds_::Sample_FrameGraph_Request_ *from, struct _tf2_msgs_srv_dds__Sample_FrameGraph_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_srv_dds__Sample_FrameGraph_Request___copyOut(const void *_from, void *_to);
struct _tf2_msgs_srv_dds__Sample_FrameGraph_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _tf2_msgs_srv_dds__FrameGraph_Request_ request_;
};

extern const char *tf2_msgs_srv_dds__Sample_FrameGraph_Response__metaDescriptor[];
extern const int tf2_msgs_srv_dds__Sample_FrameGraph_Response__metaDescriptorArrLength;
extern const int tf2_msgs_srv_dds__Sample_FrameGraph_Response__metaDescriptorLength;
extern c_metaObject __tf2_msgs_srv_dds__Sample_FrameGraph_Response___load (c_base base);
struct _tf2_msgs_srv_dds__Sample_FrameGraph_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_srv_dds__Sample_FrameGraph_Response___copyIn(c_base base, const struct tf2_msgs::srv::dds_::Sample_FrameGraph_Response_ *from, struct _tf2_msgs_srv_dds__Sample_FrameGraph_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_srv_dds__Sample_FrameGraph_Response___copyOut(const void *_from, void *_to);
struct _tf2_msgs_srv_dds__Sample_FrameGraph_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _tf2_msgs_srv_dds__FrameGraph_Response_ response_;
};

#undef OS_API
#endif
