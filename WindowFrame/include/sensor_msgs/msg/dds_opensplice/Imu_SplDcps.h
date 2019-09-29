#ifndef H_73662F4D0B3495B26F9CC0697D742359_Imu_SPLTYPES_H
#define H_73662F4D0B3495B26F9CC0697D742359_Imu_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Imu_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Imu__sensor_msgs__load (c_base base);

extern c_metaObject __Imu__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Imu__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__Imu__metaDescriptor[];
extern const int sensor_msgs_msg_dds__Imu__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__Imu__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__Imu___load (c_base base);
struct _sensor_msgs_msg_dds__Imu_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__Imu___copyIn(c_base base, const struct sensor_msgs::msg::dds_::Imu_ *from, struct _sensor_msgs_msg_dds__Imu_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__Imu___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__Imu_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Quaternion_ orientation_;
    c_double orientation_covariance_[9];
    struct _geometry_msgs_msg_dds__Vector3_ angular_velocity_;
    c_double angular_velocity_covariance_[9];
    struct _geometry_msgs_msg_dds__Vector3_ linear_acceleration_;
    c_double linear_acceleration_covariance_[9];
};

#undef OS_API
#endif
