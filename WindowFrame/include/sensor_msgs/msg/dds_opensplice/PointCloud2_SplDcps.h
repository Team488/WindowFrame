#ifndef H_595C9FF965EAA48DA34EE6988365791D_PointCloud2_SPLTYPES_H
#define H_595C9FF965EAA48DA34EE6988365791D_PointCloud2_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_PointCloud2_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/PointField_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __PointCloud2__sensor_msgs__load (c_base base);

extern c_metaObject __PointCloud2__sensor_msgs_msg__load (c_base base);

extern c_metaObject __PointCloud2__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__PointCloud2__metaDescriptor[];
extern const int sensor_msgs_msg_dds__PointCloud2__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__PointCloud2__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__PointCloud2___load (c_base base);
struct _sensor_msgs_msg_dds__PointCloud2_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__PointCloud2___copyIn(c_base base, const struct sensor_msgs::msg::dds_::PointCloud2_ *from, struct _sensor_msgs_msg_dds__PointCloud2_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__PointCloud2___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__PointCloud2_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_ulong height_;
    c_ulong width_;
    c_sequence fields_;
    c_bool is_bigendian_;
    c_ulong point_step_;
    c_ulong row_step_;
    c_sequence data_;
    c_bool is_dense_;
};

#undef OS_API
#endif
