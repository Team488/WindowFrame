#ifndef H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo_SPLTYPES_H
#define H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ProjectedMapsInfo_.h"
#include "map_msgs/msg/dds_opensplice/ProjectedMapInfo_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ProjectedMapsInfo__map_msgs__load (c_base base);

extern c_metaObject __ProjectedMapsInfo__map_msgs_srv__load (c_base base);

extern c_metaObject __ProjectedMapsInfo__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__ProjectedMapsInfo_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__ProjectedMapsInfo_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__ProjectedMapsInfo_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__ProjectedMapsInfo_Request___load (c_base base);
struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__ProjectedMapsInfo_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::ProjectedMapsInfo_Request_ *from, struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__ProjectedMapsInfo_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ {
    c_sequence projected_maps_info_;
};

extern const char *map_msgs_srv_dds__ProjectedMapsInfo_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__ProjectedMapsInfo_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__ProjectedMapsInfo_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__ProjectedMapsInfo_Response___load (c_base base);
struct _map_msgs_srv_dds__ProjectedMapsInfo_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__ProjectedMapsInfo_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::ProjectedMapsInfo_Response_ *from, struct _map_msgs_srv_dds__ProjectedMapsInfo_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__ProjectedMapsInfo_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__ProjectedMapsInfo_Response_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request___load (c_base base);
struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_ProjectedMapsInfo_Request_ *from, struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ request_;
};

extern const char *map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response___load (c_base base);
struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_ProjectedMapsInfo_Response_ *from, struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__ProjectedMapsInfo_Response_ response_;
};

#undef OS_API
#endif
