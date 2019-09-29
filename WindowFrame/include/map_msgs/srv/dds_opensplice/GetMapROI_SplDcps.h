#ifndef H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI_SPLTYPES_H
#define H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetMapROI_.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetMapROI__map_msgs__load (c_base base);

extern c_metaObject __GetMapROI__map_msgs_srv__load (c_base base);

extern c_metaObject __GetMapROI__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__GetMapROI_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__GetMapROI_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetMapROI_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetMapROI_Request___load (c_base base);
struct _map_msgs_srv_dds__GetMapROI_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetMapROI_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::GetMapROI_Request_ *from, struct _map_msgs_srv_dds__GetMapROI_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetMapROI_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetMapROI_Request_ {
    c_double x_;
    c_double y_;
    c_double l_x_;
    c_double l_y_;
};

extern const char *map_msgs_srv_dds__GetMapROI_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__GetMapROI_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetMapROI_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetMapROI_Response___load (c_base base);
struct _map_msgs_srv_dds__GetMapROI_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetMapROI_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::GetMapROI_Response_ *from, struct _map_msgs_srv_dds__GetMapROI_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetMapROI_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetMapROI_Response_ {
    struct _nav_msgs_msg_dds__OccupancyGrid_ sub_map_;
};

extern const char *map_msgs_srv_dds__Sample_GetMapROI_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_GetMapROI_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_GetMapROI_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_GetMapROI_Request___load (c_base base);
struct _map_msgs_srv_dds__Sample_GetMapROI_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_GetMapROI_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_GetMapROI_Request_ *from, struct _map_msgs_srv_dds__Sample_GetMapROI_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_GetMapROI_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_GetMapROI_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__GetMapROI_Request_ request_;
};

extern const char *map_msgs_srv_dds__Sample_GetMapROI_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_GetMapROI_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_GetMapROI_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_GetMapROI_Response___load (c_base base);
struct _map_msgs_srv_dds__Sample_GetMapROI_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_GetMapROI_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_GetMapROI_Response_ *from, struct _map_msgs_srv_dds__Sample_GetMapROI_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_GetMapROI_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_GetMapROI_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__GetMapROI_Response_ response_;
};

#undef OS_API
#endif
