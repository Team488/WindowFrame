#ifndef H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped_SPLTYPES_H
#define H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_QuaternionStamped_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __QuaternionStamped__geometry_msgs__load (c_base base);

extern c_metaObject __QuaternionStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __QuaternionStamped__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__QuaternionStamped__metaDescriptor[];
extern const int geometry_msgs_msg_dds__QuaternionStamped__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__QuaternionStamped__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__QuaternionStamped___load (c_base base);
struct _geometry_msgs_msg_dds__QuaternionStamped_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__QuaternionStamped___copyIn(c_base base, const struct geometry_msgs::msg::dds_::QuaternionStamped_ *from, struct _geometry_msgs_msg_dds__QuaternionStamped_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__QuaternionStamped___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__QuaternionStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Quaternion_ quaternion_;
};

#undef OS_API
#endif
