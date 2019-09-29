#ifndef H_00268DDE05B7C4AEDFBC595204C415E4_UUID_SPLTYPES_H
#define H_00268DDE05B7C4AEDFBC595204C415E4_UUID_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_UUID_.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __UUID__unique_identifier_msgs__load (c_base base);

extern c_metaObject __UUID__unique_identifier_msgs_msg__load (c_base base);

extern c_metaObject __UUID__unique_identifier_msgs_msg_dds___load (c_base base);

extern const char *unique_identifier_msgs_msg_dds__UUID__metaDescriptor[];
extern const int unique_identifier_msgs_msg_dds__UUID__metaDescriptorArrLength;
extern const int unique_identifier_msgs_msg_dds__UUID__metaDescriptorLength;
extern c_metaObject __unique_identifier_msgs_msg_dds__UUID___load (c_base base);
struct _unique_identifier_msgs_msg_dds__UUID_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs v_copyin_result __unique_identifier_msgs_msg_dds__UUID___copyIn(c_base base, const struct unique_identifier_msgs::msg::dds_::UUID_ *from, struct _unique_identifier_msgs_msg_dds__UUID_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs void __unique_identifier_msgs_msg_dds__UUID___copyOut(const void *_from, void *_to);
struct _unique_identifier_msgs_msg_dds__UUID_ {
    c_octet uuid_[16];
};

#undef OS_API
#endif
