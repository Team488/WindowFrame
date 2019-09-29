#ifndef H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap_SPLTYPES_H
#define H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetPointMap_.h"
#include "sensor_msgs/msg/dds_opensplice/PointCloud2_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetPointMap__map_msgs__load (c_base base);

extern c_metaObject __GetPointMap__map_msgs_srv__load (c_base base);

extern c_metaObject __GetPointMap__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__GetPointMap_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__GetPointMap_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetPointMap_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetPointMap_Request___load (c_base base);
struct _map_msgs_srv_dds__GetPointMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetPointMap_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::GetPointMap_Request_ *from, struct _map_msgs_srv_dds__GetPointMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetPointMap_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetPointMap_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *map_msgs_srv_dds__GetPointMap_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__GetPointMap_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetPointMap_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetPointMap_Response___load (c_base base);
struct _map_msgs_srv_dds__GetPointMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetPointMap_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::GetPointMap_Response_ *from, struct _map_msgs_srv_dds__GetPointMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetPointMap_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetPointMap_Response_ {
    struct _sensor_msgs_msg_dds__PointCloud2_ map_;
};

extern const char *map_msgs_srv_dds__Sample_GetPointMap_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_GetPointMap_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_GetPointMap_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_GetPointMap_Request___load (c_base base);
struct _map_msgs_srv_dds__Sample_GetPointMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_GetPointMap_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_GetPointMap_Request_ *from, struct _map_msgs_srv_dds__Sample_GetPointMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_GetPointMap_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_GetPointMap_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__GetPointMap_Request_ request_;
};

extern const char *map_msgs_srv_dds__Sample_GetPointMap_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_GetPointMap_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_GetPointMap_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_GetPointMap_Response___load (c_base base);
struct _map_msgs_srv_dds__Sample_GetPointMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_GetPointMap_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_GetPointMap_Response_ *from, struct _map_msgs_srv_dds__Sample_GetPointMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_GetPointMap_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_GetPointMap_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__GetPointMap_Response_ response_;
};

#undef OS_API
#endif
