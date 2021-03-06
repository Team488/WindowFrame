#ifndef H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus_SPLTYPES_H
#define H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_NavSatStatus_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __NavSatStatus__sensor_msgs__load (c_base base);

extern c_metaObject __NavSatStatus__sensor_msgs_msg__load (c_base base);

extern c_metaObject __NavSatStatus__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __NavSatStatus__sensor_msgs_msg_dds__NavSatStatus_Constants__load (c_base base);

extern const char *sensor_msgs_msg_dds__NavSatStatus__metaDescriptor[];
extern const int sensor_msgs_msg_dds__NavSatStatus__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__NavSatStatus__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__NavSatStatus___load (c_base base);
struct _sensor_msgs_msg_dds__NavSatStatus_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__NavSatStatus___copyIn(c_base base, const struct sensor_msgs::msg::dds_::NavSatStatus_ *from, struct _sensor_msgs_msg_dds__NavSatStatus_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__NavSatStatus___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__NavSatStatus_ {
    c_octet status_;
    c_ushort service_;
};

#undef OS_API
#endif
