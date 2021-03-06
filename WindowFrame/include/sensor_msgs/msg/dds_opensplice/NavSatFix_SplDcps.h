#ifndef H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix_SPLTYPES_H
#define H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_NavSatFix_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/NavSatStatus_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __NavSatFix__sensor_msgs__load (c_base base);

extern c_metaObject __NavSatFix__sensor_msgs_msg__load (c_base base);

extern c_metaObject __NavSatFix__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __NavSatFix__sensor_msgs_msg_dds__NavSatFix_Constants__load (c_base base);

extern const char *sensor_msgs_msg_dds__NavSatFix__metaDescriptor[];
extern const int sensor_msgs_msg_dds__NavSatFix__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__NavSatFix__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__NavSatFix___load (c_base base);
struct _sensor_msgs_msg_dds__NavSatFix_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__NavSatFix___copyIn(c_base base, const struct sensor_msgs::msg::dds_::NavSatFix_ *from, struct _sensor_msgs_msg_dds__NavSatFix_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__NavSatFix___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__NavSatFix_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _sensor_msgs_msg_dds__NavSatStatus_ status_;
    c_double latitude_;
    c_double longitude_;
    c_double altitude_;
    c_double position_covariance_[9];
    c_octet position_covariance_type_;
};

#undef OS_API
#endif
