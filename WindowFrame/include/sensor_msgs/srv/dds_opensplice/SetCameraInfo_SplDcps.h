#ifndef H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo_SPLTYPES_H
#define H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetCameraInfo_.h"
#include "sensor_msgs/msg/dds_opensplice/CameraInfo_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetCameraInfo__sensor_msgs__load (c_base base);

extern c_metaObject __SetCameraInfo__sensor_msgs_srv__load (c_base base);

extern c_metaObject __SetCameraInfo__sensor_msgs_srv_dds___load (c_base base);

extern const char *sensor_msgs_srv_dds__SetCameraInfo_Request__metaDescriptor[];
extern const int sensor_msgs_srv_dds__SetCameraInfo_Request__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__SetCameraInfo_Request__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__SetCameraInfo_Request___load (c_base base);
struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__SetCameraInfo_Request___copyIn(c_base base, const struct sensor_msgs::srv::dds_::SetCameraInfo_Request_ *from, struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__SetCameraInfo_Request___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ {
    struct _sensor_msgs_msg_dds__CameraInfo_ camera_info_;
};

extern const char *sensor_msgs_srv_dds__SetCameraInfo_Response__metaDescriptor[];
extern const int sensor_msgs_srv_dds__SetCameraInfo_Response__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__SetCameraInfo_Response__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__SetCameraInfo_Response___load (c_base base);
struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__SetCameraInfo_Response___copyIn(c_base base, const struct sensor_msgs::srv::dds_::SetCameraInfo_Response_ *from, struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__SetCameraInfo_Response___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ {
    c_bool success_;
    c_string status_message_;
};

extern const char *sensor_msgs_srv_dds__Sample_SetCameraInfo_Request__metaDescriptor[];
extern const int sensor_msgs_srv_dds__Sample_SetCameraInfo_Request__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__Sample_SetCameraInfo_Request__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___load (c_base base);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___copyIn(c_base base, const struct sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_ *from, struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ request_;
};

extern const char *sensor_msgs_srv_dds__Sample_SetCameraInfo_Response__metaDescriptor[];
extern const int sensor_msgs_srv_dds__Sample_SetCameraInfo_Response__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__Sample_SetCameraInfo_Response__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__Sample_SetCameraInfo_Response___load (c_base base);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__Sample_SetCameraInfo_Response___copyIn(c_base base, const struct sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_ *from, struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__Sample_SetCameraInfo_Response___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ response_;
};

#undef OS_API
#endif
