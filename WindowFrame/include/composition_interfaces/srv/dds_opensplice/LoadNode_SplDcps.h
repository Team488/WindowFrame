#ifndef H_0ADF5E560338E798566E3FF0596F832D_LoadNode_SPLTYPES_H
#define H_0ADF5E560338E798566E3FF0596F832D_LoadNode_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_LoadNode_.h"
#include "rcl_interfaces/msg/dds_opensplice/Parameter_SplDcps.h"

#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __LoadNode__composition_interfaces__load (c_base base);

extern c_metaObject __LoadNode__composition_interfaces_srv__load (c_base base);

extern c_metaObject __LoadNode__composition_interfaces_srv_dds___load (c_base base);

extern const char *composition_interfaces_srv_dds__LoadNode_Request__metaDescriptor[];
extern const int composition_interfaces_srv_dds__LoadNode_Request__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__LoadNode_Request__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__LoadNode_Request___load (c_base base);
struct _composition_interfaces_srv_dds__LoadNode_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__LoadNode_Request___copyIn(c_base base, const struct composition_interfaces::srv::dds_::LoadNode_Request_ *from, struct _composition_interfaces_srv_dds__LoadNode_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__LoadNode_Request___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__LoadNode_Request_ {
    c_string package_name_;
    c_string plugin_name_;
    c_string node_name_;
    c_string node_namespace_;
    c_octet log_level_;
    c_sequence remap_rules_;
    c_sequence parameters_;
    c_sequence extra_arguments_;
};

extern const char *composition_interfaces_srv_dds__LoadNode_Response__metaDescriptor[];
extern const int composition_interfaces_srv_dds__LoadNode_Response__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__LoadNode_Response__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__LoadNode_Response___load (c_base base);
struct _composition_interfaces_srv_dds__LoadNode_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__LoadNode_Response___copyIn(c_base base, const struct composition_interfaces::srv::dds_::LoadNode_Response_ *from, struct _composition_interfaces_srv_dds__LoadNode_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__LoadNode_Response___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__LoadNode_Response_ {
    c_bool success_;
    c_string error_message_;
    c_string full_node_name_;
    c_ulonglong unique_id_;
};

extern const char *composition_interfaces_srv_dds__Sample_LoadNode_Request__metaDescriptor[];
extern const int composition_interfaces_srv_dds__Sample_LoadNode_Request__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__Sample_LoadNode_Request__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__Sample_LoadNode_Request___load (c_base base);
struct _composition_interfaces_srv_dds__Sample_LoadNode_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__Sample_LoadNode_Request___copyIn(c_base base, const struct composition_interfaces::srv::dds_::Sample_LoadNode_Request_ *from, struct _composition_interfaces_srv_dds__Sample_LoadNode_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__Sample_LoadNode_Request___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__Sample_LoadNode_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _composition_interfaces_srv_dds__LoadNode_Request_ request_;
};

extern const char *composition_interfaces_srv_dds__Sample_LoadNode_Response__metaDescriptor[];
extern const int composition_interfaces_srv_dds__Sample_LoadNode_Response__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__Sample_LoadNode_Response__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__Sample_LoadNode_Response___load (c_base base);
struct _composition_interfaces_srv_dds__Sample_LoadNode_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__Sample_LoadNode_Response___copyIn(c_base base, const struct composition_interfaces::srv::dds_::Sample_LoadNode_Response_ *from, struct _composition_interfaces_srv_dds__Sample_LoadNode_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__Sample_LoadNode_Response___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__Sample_LoadNode_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _composition_interfaces_srv_dds__LoadNode_Response_ response_;
};

#undef OS_API
#endif
