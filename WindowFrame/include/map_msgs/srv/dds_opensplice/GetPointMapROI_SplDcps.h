#ifndef H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI_SPLTYPES_H
#define H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetPointMapROI_.h"
#include "sensor_msgs/msg/dds_opensplice/PointCloud2_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetPointMapROI__map_msgs__load (c_base base);

extern c_metaObject __GetPointMapROI__map_msgs_srv__load (c_base base);

extern c_metaObject __GetPointMapROI__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__GetPointMapROI_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__GetPointMapROI_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetPointMapROI_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetPointMapROI_Request___load (c_base base);
struct _map_msgs_srv_dds__GetPointMapROI_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetPointMapROI_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::GetPointMapROI_Request_ *from, struct _map_msgs_srv_dds__GetPointMapROI_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetPointMapROI_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetPointMapROI_Request_ {
    c_double x_;
    c_double y_;
    c_double z_;
    c_double r_;
    c_double l_x_;
    c_double l_y_;
    c_double l_z_;
};

extern const char *map_msgs_srv_dds__GetPointMapROI_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__GetPointMapROI_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetPointMapROI_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetPointMapROI_Response___load (c_base base);
struct _map_msgs_srv_dds__GetPointMapROI_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetPointMapROI_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::GetPointMapROI_Response_ *from, struct _map_msgs_srv_dds__GetPointMapROI_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetPointMapROI_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetPointMapROI_Response_ {
    struct _sensor_msgs_msg_dds__PointCloud2_ sub_map_;
};

extern const char *map_msgs_srv_dds__Sample_GetPointMapROI_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_GetPointMapROI_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_GetPointMapROI_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_GetPointMapROI_Request___load (c_base base);
struct _map_msgs_srv_dds__Sample_GetPointMapROI_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_GetPointMapROI_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_GetPointMapROI_Request_ *from, struct _map_msgs_srv_dds__Sample_GetPointMapROI_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_GetPointMapROI_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_GetPointMapROI_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__GetPointMapROI_Request_ request_;
};

extern const char *map_msgs_srv_dds__Sample_GetPointMapROI_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_GetPointMapROI_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_GetPointMapROI_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_GetPointMapROI_Response___load (c_base base);
struct _map_msgs_srv_dds__Sample_GetPointMapROI_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_GetPointMapROI_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_GetPointMapROI_Response_ *from, struct _map_msgs_srv_dds__Sample_GetPointMapROI_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_GetPointMapROI_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_GetPointMapROI_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__GetPointMapROI_Response_ response_;
};

#undef OS_API
#endif
