#ifndef H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped_SPLTYPES_H
#define H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AccelStamped_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Accel_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __AccelStamped__geometry_msgs__load (c_base base);

extern c_metaObject __AccelStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __AccelStamped__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__AccelStamped__metaDescriptor[];
extern const int geometry_msgs_msg_dds__AccelStamped__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__AccelStamped__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__AccelStamped___load (c_base base);
struct _geometry_msgs_msg_dds__AccelStamped_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__AccelStamped___copyIn(c_base base, const struct geometry_msgs::msg::dds_::AccelStamped_ *from, struct _geometry_msgs_msg_dds__AccelStamped_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__AccelStamped___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__AccelStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Accel_ accel_;
};

#undef OS_API
#endif
