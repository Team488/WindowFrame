#ifndef H_5580BF376C11768984BEBC2E13043FC9_ChangeState_SPLTYPES_H
#define H_5580BF376C11768984BEBC2E13043FC9_ChangeState_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ChangeState_.h"
#include "lifecycle_msgs/msg/dds_opensplice/Transition_SplDcps.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ChangeState__lifecycle_msgs__load (c_base base);

extern c_metaObject __ChangeState__lifecycle_msgs_srv__load (c_base base);

extern c_metaObject __ChangeState__lifecycle_msgs_srv_dds___load (c_base base);

extern const char *lifecycle_msgs_srv_dds__ChangeState_Request__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__ChangeState_Request__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__ChangeState_Request__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__ChangeState_Request___load (c_base base);
struct _lifecycle_msgs_srv_dds__ChangeState_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__ChangeState_Request___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::ChangeState_Request_ *from, struct _lifecycle_msgs_srv_dds__ChangeState_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__ChangeState_Request___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__ChangeState_Request_ {
    struct _lifecycle_msgs_msg_dds__Transition_ transition_;
};

extern const char *lifecycle_msgs_srv_dds__ChangeState_Response__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__ChangeState_Response__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__ChangeState_Response__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__ChangeState_Response___load (c_base base);
struct _lifecycle_msgs_srv_dds__ChangeState_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__ChangeState_Response___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::ChangeState_Response_ *from, struct _lifecycle_msgs_srv_dds__ChangeState_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__ChangeState_Response___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__ChangeState_Response_ {
    c_bool success_;
};

extern const char *lifecycle_msgs_srv_dds__Sample_ChangeState_Request__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__Sample_ChangeState_Request__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__Sample_ChangeState_Request__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__Sample_ChangeState_Request___load (c_base base);
struct _lifecycle_msgs_srv_dds__Sample_ChangeState_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__Sample_ChangeState_Request___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::Sample_ChangeState_Request_ *from, struct _lifecycle_msgs_srv_dds__Sample_ChangeState_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__Sample_ChangeState_Request___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__Sample_ChangeState_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _lifecycle_msgs_srv_dds__ChangeState_Request_ request_;
};

extern const char *lifecycle_msgs_srv_dds__Sample_ChangeState_Response__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__Sample_ChangeState_Response__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__Sample_ChangeState_Response__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__Sample_ChangeState_Response___load (c_base base);
struct _lifecycle_msgs_srv_dds__Sample_ChangeState_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__Sample_ChangeState_Response___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::Sample_ChangeState_Response_ *from, struct _lifecycle_msgs_srv_dds__Sample_ChangeState_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__Sample_ChangeState_Response___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__Sample_ChangeState_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _lifecycle_msgs_srv_dds__ChangeState_Response_ response_;
};

#undef OS_API
#endif
