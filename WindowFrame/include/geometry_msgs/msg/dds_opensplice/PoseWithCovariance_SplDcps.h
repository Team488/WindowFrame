#ifndef H_7A078C55875A9BA26B304FFFF5063D18_PoseWithCovariance_SPLTYPES_H
#define H_7A078C55875A9BA26B304FFFF5063D18_PoseWithCovariance_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_PoseWithCovariance_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __PoseWithCovariance__geometry_msgs__load (c_base base);

extern c_metaObject __PoseWithCovariance__geometry_msgs_msg__load (c_base base);

extern c_metaObject __PoseWithCovariance__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__PoseWithCovariance__metaDescriptor[];
extern const int geometry_msgs_msg_dds__PoseWithCovariance__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__PoseWithCovariance__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__PoseWithCovariance___load (c_base base);
struct _geometry_msgs_msg_dds__PoseWithCovariance_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__PoseWithCovariance___copyIn(c_base base, const struct geometry_msgs::msg::dds_::PoseWithCovariance_ *from, struct _geometry_msgs_msg_dds__PoseWithCovariance_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__PoseWithCovariance___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__PoseWithCovariance_ {
    struct _geometry_msgs_msg_dds__Pose_ pose_;
    c_double covariance_[36];
};

#undef OS_API
#endif
