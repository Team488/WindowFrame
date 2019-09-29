#ifndef H_85C4AC20818E6886625885E47ED9E4EC_GetPlan_SPLTYPES_H
#define H_85C4AC20818E6886625885E47ED9E4EC_GetPlan_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetPlan_.h"
#include "geometry_msgs/msg/dds_opensplice/PoseStamped_SplDcps.h"
#include "nav_msgs/msg/dds_opensplice/Path_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetPlan__nav_msgs__load (c_base base);

extern c_metaObject __GetPlan__nav_msgs_srv__load (c_base base);

extern c_metaObject __GetPlan__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__GetPlan_Request__metaDescriptor[];
extern const int nav_msgs_srv_dds__GetPlan_Request__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__GetPlan_Request__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__GetPlan_Request___load (c_base base);
struct _nav_msgs_srv_dds__GetPlan_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__GetPlan_Request___copyIn(c_base base, const struct nav_msgs::srv::dds_::GetPlan_Request_ *from, struct _nav_msgs_srv_dds__GetPlan_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__GetPlan_Request___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__GetPlan_Request_ {
    struct _geometry_msgs_msg_dds__PoseStamped_ start_;
    struct _geometry_msgs_msg_dds__PoseStamped_ goal_;
    c_float tolerance_;
};

extern const char *nav_msgs_srv_dds__GetPlan_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__GetPlan_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__GetPlan_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__GetPlan_Response___load (c_base base);
struct _nav_msgs_srv_dds__GetPlan_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__GetPlan_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::GetPlan_Response_ *from, struct _nav_msgs_srv_dds__GetPlan_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__GetPlan_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__GetPlan_Response_ {
    struct _nav_msgs_msg_dds__Path_ plan_;
};

extern const char *nav_msgs_srv_dds__Sample_GetPlan_Request__metaDescriptor[];
extern const int nav_msgs_srv_dds__Sample_GetPlan_Request__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__Sample_GetPlan_Request__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__Sample_GetPlan_Request___load (c_base base);
struct _nav_msgs_srv_dds__Sample_GetPlan_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__Sample_GetPlan_Request___copyIn(c_base base, const struct nav_msgs::srv::dds_::Sample_GetPlan_Request_ *from, struct _nav_msgs_srv_dds__Sample_GetPlan_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__Sample_GetPlan_Request___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetPlan_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetPlan_Request_ request_;
};

extern const char *nav_msgs_srv_dds__Sample_GetPlan_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__Sample_GetPlan_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__Sample_GetPlan_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__Sample_GetPlan_Response___load (c_base base);
struct _nav_msgs_srv_dds__Sample_GetPlan_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__Sample_GetPlan_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::Sample_GetPlan_Response_ *from, struct _nav_msgs_srv_dds__Sample_GetPlan_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__Sample_GetPlan_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetPlan_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetPlan_Response_ response_;
};

#undef OS_API
#endif
