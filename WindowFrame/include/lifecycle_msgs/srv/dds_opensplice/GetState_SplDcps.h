#ifndef H_1934D82CD6CC72861B53A9F73A34FEC8_GetState_SPLTYPES_H
#define H_1934D82CD6CC72861B53A9F73A34FEC8_GetState_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetState_.h"
#include "lifecycle_msgs/msg/dds_opensplice/State_SplDcps.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetState__lifecycle_msgs__load (c_base base);

extern c_metaObject __GetState__lifecycle_msgs_srv__load (c_base base);

extern c_metaObject __GetState__lifecycle_msgs_srv_dds___load (c_base base);

extern const char *lifecycle_msgs_srv_dds__GetState_Request__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__GetState_Request__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__GetState_Request__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__GetState_Request___load (c_base base);
struct _lifecycle_msgs_srv_dds__GetState_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__GetState_Request___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::GetState_Request_ *from, struct _lifecycle_msgs_srv_dds__GetState_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__GetState_Request___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__GetState_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *lifecycle_msgs_srv_dds__GetState_Response__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__GetState_Response__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__GetState_Response__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__GetState_Response___load (c_base base);
struct _lifecycle_msgs_srv_dds__GetState_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__GetState_Response___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::GetState_Response_ *from, struct _lifecycle_msgs_srv_dds__GetState_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__GetState_Response___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__GetState_Response_ {
    struct _lifecycle_msgs_msg_dds__State_ current_state_;
};

extern const char *lifecycle_msgs_srv_dds__Sample_GetState_Request__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__Sample_GetState_Request__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__Sample_GetState_Request__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__Sample_GetState_Request___load (c_base base);
struct _lifecycle_msgs_srv_dds__Sample_GetState_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__Sample_GetState_Request___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::Sample_GetState_Request_ *from, struct _lifecycle_msgs_srv_dds__Sample_GetState_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__Sample_GetState_Request___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__Sample_GetState_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _lifecycle_msgs_srv_dds__GetState_Request_ request_;
};

extern const char *lifecycle_msgs_srv_dds__Sample_GetState_Response__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__Sample_GetState_Response__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__Sample_GetState_Response__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__Sample_GetState_Response___load (c_base base);
struct _lifecycle_msgs_srv_dds__Sample_GetState_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__Sample_GetState_Response___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::Sample_GetState_Response_ *from, struct _lifecycle_msgs_srv_dds__Sample_GetState_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__Sample_GetState_Response___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__Sample_GetState_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _lifecycle_msgs_srv_dds__GetState_Response_ response_;
};

#undef OS_API
#endif
