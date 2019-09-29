#ifndef H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap_SPLTYPES_H
#define H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SaveMap_.h"
#include "std_msgs/msg/dds_opensplice/String_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SaveMap__map_msgs__load (c_base base);

extern c_metaObject __SaveMap__map_msgs_srv__load (c_base base);

extern c_metaObject __SaveMap__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__SaveMap_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__SaveMap_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__SaveMap_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__SaveMap_Request___load (c_base base);
struct _map_msgs_srv_dds__SaveMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__SaveMap_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::SaveMap_Request_ *from, struct _map_msgs_srv_dds__SaveMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__SaveMap_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__SaveMap_Request_ {
    struct _std_msgs_msg_dds__String_ filename_;
};

extern const char *map_msgs_srv_dds__SaveMap_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__SaveMap_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__SaveMap_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__SaveMap_Response___load (c_base base);
struct _map_msgs_srv_dds__SaveMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__SaveMap_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::SaveMap_Response_ *from, struct _map_msgs_srv_dds__SaveMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__SaveMap_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__SaveMap_Response_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *map_msgs_srv_dds__Sample_SaveMap_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_SaveMap_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_SaveMap_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_SaveMap_Request___load (c_base base);
struct _map_msgs_srv_dds__Sample_SaveMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_SaveMap_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_SaveMap_Request_ *from, struct _map_msgs_srv_dds__Sample_SaveMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_SaveMap_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_SaveMap_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__SaveMap_Request_ request_;
};

extern const char *map_msgs_srv_dds__Sample_SaveMap_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_SaveMap_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_SaveMap_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_SaveMap_Response___load (c_base base);
struct _map_msgs_srv_dds__Sample_SaveMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_SaveMap_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_SaveMap_Response_ *from, struct _map_msgs_srv_dds__Sample_SaveMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_SaveMap_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_SaveMap_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__SaveMap_Response_ response_;
};

#undef OS_API
#endif
