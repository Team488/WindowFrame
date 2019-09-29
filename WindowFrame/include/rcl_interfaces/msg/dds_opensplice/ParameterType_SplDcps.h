#ifndef H_110519BEA15DD23B6BD7254D08D9A6C9_ParameterType_SPLTYPES_H
#define H_110519BEA15DD23B6BD7254D08D9A6C9_ParameterType_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ParameterType_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ParameterType__rcl_interfaces__load (c_base base);

extern c_metaObject __ParameterType__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __ParameterType__rcl_interfaces_msg_dds___load (c_base base);

extern c_metaObject __ParameterType__rcl_interfaces_msg_dds__ParameterType_Constants__load (c_base base);

extern const char *rcl_interfaces_msg_dds__ParameterType__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__ParameterType__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__ParameterType__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__ParameterType___load (c_base base);
struct _rcl_interfaces_msg_dds__ParameterType_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_msg_dds__ParameterType___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::ParameterType_ *from, struct _rcl_interfaces_msg_dds__ParameterType_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_msg_dds__ParameterType___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__ParameterType_ {
    c_octet structure_needs_at_least_one_member_;
};

#undef OS_API
#endif
