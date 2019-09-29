#ifndef H_7361E7116D72A8C795622D653FDA6FFE_Plane_SPLTYPES_H
#define H_7361E7116D72A8C795622D653FDA6FFE_Plane_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Plane_.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Plane__shape_msgs__load (c_base base);

extern c_metaObject __Plane__shape_msgs_msg__load (c_base base);

extern c_metaObject __Plane__shape_msgs_msg_dds___load (c_base base);

extern const char *shape_msgs_msg_dds__Plane__metaDescriptor[];
extern const int shape_msgs_msg_dds__Plane__metaDescriptorArrLength;
extern const int shape_msgs_msg_dds__Plane__metaDescriptorLength;
extern c_metaObject __shape_msgs_msg_dds__Plane___load (c_base base);
struct _shape_msgs_msg_dds__Plane_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs v_copyin_result __shape_msgs_msg_dds__Plane___copyIn(c_base base, const struct shape_msgs::msg::dds_::Plane_ *from, struct _shape_msgs_msg_dds__Plane_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs void __shape_msgs_msg_dds__Plane___copyOut(const void *_from, void *_to);
struct _shape_msgs_msg_dds__Plane_ {
    c_double coef_[4];
};

#undef OS_API
#endif
