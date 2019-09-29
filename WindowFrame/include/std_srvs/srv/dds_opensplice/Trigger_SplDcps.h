#ifndef H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger_SPLTYPES_H
#define H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Trigger_.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Trigger__std_srvs__load (c_base base);

extern c_metaObject __Trigger__std_srvs_srv__load (c_base base);

extern c_metaObject __Trigger__std_srvs_srv_dds___load (c_base base);

extern const char *std_srvs_srv_dds__Trigger_Request__metaDescriptor[];
extern const int std_srvs_srv_dds__Trigger_Request__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__Trigger_Request__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__Trigger_Request___load (c_base base);
struct _std_srvs_srv_dds__Trigger_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__Trigger_Request___copyIn(c_base base, const struct std_srvs::srv::dds_::Trigger_Request_ *from, struct _std_srvs_srv_dds__Trigger_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__Trigger_Request___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__Trigger_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *std_srvs_srv_dds__Trigger_Response__metaDescriptor[];
extern const int std_srvs_srv_dds__Trigger_Response__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__Trigger_Response__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__Trigger_Response___load (c_base base);
struct _std_srvs_srv_dds__Trigger_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__Trigger_Response___copyIn(c_base base, const struct std_srvs::srv::dds_::Trigger_Response_ *from, struct _std_srvs_srv_dds__Trigger_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__Trigger_Response___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__Trigger_Response_ {
    c_bool success_;
    c_string message_;
};

extern const char *std_srvs_srv_dds__Sample_Trigger_Request__metaDescriptor[];
extern const int std_srvs_srv_dds__Sample_Trigger_Request__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__Sample_Trigger_Request__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__Sample_Trigger_Request___load (c_base base);
struct _std_srvs_srv_dds__Sample_Trigger_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__Sample_Trigger_Request___copyIn(c_base base, const struct std_srvs::srv::dds_::Sample_Trigger_Request_ *from, struct _std_srvs_srv_dds__Sample_Trigger_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__Sample_Trigger_Request___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__Sample_Trigger_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _std_srvs_srv_dds__Trigger_Request_ request_;
};

extern const char *std_srvs_srv_dds__Sample_Trigger_Response__metaDescriptor[];
extern const int std_srvs_srv_dds__Sample_Trigger_Response__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__Sample_Trigger_Response__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__Sample_Trigger_Response___load (c_base base);
struct _std_srvs_srv_dds__Sample_Trigger_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__Sample_Trigger_Response___copyIn(c_base base, const struct std_srvs::srv::dds_::Sample_Trigger_Response_ *from, struct _std_srvs_srv_dds__Sample_Trigger_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__Sample_Trigger_Response___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__Sample_Trigger_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _std_srvs_srv_dds__Trigger_Response_ response_;
};

#undef OS_API
#endif
