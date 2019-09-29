#ifndef H_C9003363A178233440D0F96D6122C26D_ListNodes_SPLTYPES_H
#define H_C9003363A178233440D0F96D6122C26D_ListNodes_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ListNodes_.h"
#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ListNodes__composition_interfaces__load (c_base base);

extern c_metaObject __ListNodes__composition_interfaces_srv__load (c_base base);

extern c_metaObject __ListNodes__composition_interfaces_srv_dds___load (c_base base);

extern const char *composition_interfaces_srv_dds__ListNodes_Request__metaDescriptor[];
extern const int composition_interfaces_srv_dds__ListNodes_Request__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__ListNodes_Request__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__ListNodes_Request___load (c_base base);
struct _composition_interfaces_srv_dds__ListNodes_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__ListNodes_Request___copyIn(c_base base, const struct composition_interfaces::srv::dds_::ListNodes_Request_ *from, struct _composition_interfaces_srv_dds__ListNodes_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__ListNodes_Request___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__ListNodes_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *composition_interfaces_srv_dds__ListNodes_Response__metaDescriptor[];
extern const int composition_interfaces_srv_dds__ListNodes_Response__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__ListNodes_Response__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__ListNodes_Response___load (c_base base);
struct _composition_interfaces_srv_dds__ListNodes_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__ListNodes_Response___copyIn(c_base base, const struct composition_interfaces::srv::dds_::ListNodes_Response_ *from, struct _composition_interfaces_srv_dds__ListNodes_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__ListNodes_Response___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__ListNodes_Response_ {
    c_sequence full_node_names_;
    c_sequence unique_ids_;
};

extern const char *composition_interfaces_srv_dds__Sample_ListNodes_Request__metaDescriptor[];
extern const int composition_interfaces_srv_dds__Sample_ListNodes_Request__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__Sample_ListNodes_Request__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__Sample_ListNodes_Request___load (c_base base);
struct _composition_interfaces_srv_dds__Sample_ListNodes_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__Sample_ListNodes_Request___copyIn(c_base base, const struct composition_interfaces::srv::dds_::Sample_ListNodes_Request_ *from, struct _composition_interfaces_srv_dds__Sample_ListNodes_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__Sample_ListNodes_Request___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__Sample_ListNodes_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _composition_interfaces_srv_dds__ListNodes_Request_ request_;
};

extern const char *composition_interfaces_srv_dds__Sample_ListNodes_Response__metaDescriptor[];
extern const int composition_interfaces_srv_dds__Sample_ListNodes_Response__metaDescriptorArrLength;
extern const int composition_interfaces_srv_dds__Sample_ListNodes_Response__metaDescriptorLength;
extern c_metaObject __composition_interfaces_srv_dds__Sample_ListNodes_Response___load (c_base base);
struct _composition_interfaces_srv_dds__Sample_ListNodes_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces v_copyin_result __composition_interfaces_srv_dds__Sample_ListNodes_Response___copyIn(c_base base, const struct composition_interfaces::srv::dds_::Sample_ListNodes_Response_ *from, struct _composition_interfaces_srv_dds__Sample_ListNodes_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces void __composition_interfaces_srv_dds__Sample_ListNodes_Response___copyOut(const void *_from, void *_to);
struct _composition_interfaces_srv_dds__Sample_ListNodes_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _composition_interfaces_srv_dds__ListNodes_Response_ response_;
};

#undef OS_API
#endif