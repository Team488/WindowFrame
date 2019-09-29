#ifndef H_59EF21FEEA60F73C85429A4A4261F873_FloatingPointRange_SPLTYPES_H
#define H_59EF21FEEA60F73C85429A4A4261F873_FloatingPointRange_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_FloatingPointRange_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __FloatingPointRange__rcl_interfaces__load (c_base base);

extern c_metaObject __FloatingPointRange__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __FloatingPointRange__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__FloatingPointRange__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__FloatingPointRange__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__FloatingPointRange__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__FloatingPointRange___load (c_base base);
struct _rcl_interfaces_msg_dds__FloatingPointRange_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_msg_dds__FloatingPointRange___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::FloatingPointRange_ *from, struct _rcl_interfaces_msg_dds__FloatingPointRange_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_msg_dds__FloatingPointRange___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__FloatingPointRange_ {
    c_double from_value_;
    c_double to_value_;
    c_double step_;
};

#undef OS_API
#endif
