#ifndef H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField_SPLTYPES_H
#define H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MagneticField_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MagneticField__sensor_msgs__load (c_base base);

extern c_metaObject __MagneticField__sensor_msgs_msg__load (c_base base);

extern c_metaObject __MagneticField__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__MagneticField__metaDescriptor[];
extern const int sensor_msgs_msg_dds__MagneticField__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__MagneticField__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__MagneticField___load (c_base base);
struct _sensor_msgs_msg_dds__MagneticField_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__MagneticField___copyIn(c_base base, const struct sensor_msgs::msg::dds_::MagneticField_ *from, struct _sensor_msgs_msg_dds__MagneticField_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__MagneticField___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__MagneticField_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Vector3_ magnetic_field_;
    c_double magnetic_field_covariance_[9];
};

#undef OS_API
#endif
