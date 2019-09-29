#ifndef H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap_SPLTYPES_H
#define H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetMap_.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetMap__nav_msgs__load (c_base base);

extern c_metaObject __GetMap__nav_msgs_srv__load (c_base base);

extern c_metaObject __GetMap__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__GetMap_Request__metaDescriptor[];
extern const int nav_msgs_srv_dds__GetMap_Request__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__GetMap_Request__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__GetMap_Request___load (c_base base);
struct _nav_msgs_srv_dds__GetMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__GetMap_Request___copyIn(c_base base, const struct nav_msgs::srv::dds_::GetMap_Request_ *from, struct _nav_msgs_srv_dds__GetMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__GetMap_Request___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__GetMap_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *nav_msgs_srv_dds__GetMap_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__GetMap_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__GetMap_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__GetMap_Response___load (c_base base);
struct _nav_msgs_srv_dds__GetMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__GetMap_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::GetMap_Response_ *from, struct _nav_msgs_srv_dds__GetMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__GetMap_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__GetMap_Response_ {
    struct _nav_msgs_msg_dds__OccupancyGrid_ map_;
};

extern const char *nav_msgs_srv_dds__Sample_GetMap_Request__metaDescriptor[];
extern const int nav_msgs_srv_dds__Sample_GetMap_Request__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__Sample_GetMap_Request__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__Sample_GetMap_Request___load (c_base base);
struct _nav_msgs_srv_dds__Sample_GetMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__Sample_GetMap_Request___copyIn(c_base base, const struct nav_msgs::srv::dds_::Sample_GetMap_Request_ *from, struct _nav_msgs_srv_dds__Sample_GetMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__Sample_GetMap_Request___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetMap_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetMap_Request_ request_;
};

extern const char *nav_msgs_srv_dds__Sample_GetMap_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__Sample_GetMap_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__Sample_GetMap_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__Sample_GetMap_Response___load (c_base base);
struct _nav_msgs_srv_dds__Sample_GetMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__Sample_GetMap_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::Sample_GetMap_Response_ *from, struct _nav_msgs_srv_dds__Sample_GetMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__Sample_GetMap_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetMap_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetMap_Response_ response_;
};

#undef OS_API
#endif
