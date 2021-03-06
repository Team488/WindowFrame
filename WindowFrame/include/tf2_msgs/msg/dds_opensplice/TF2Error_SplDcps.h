#ifndef H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error_SPLTYPES_H
#define H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TF2Error_.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __TF2Error__tf2_msgs__load (c_base base);

extern c_metaObject __TF2Error__tf2_msgs_msg__load (c_base base);

extern c_metaObject __TF2Error__tf2_msgs_msg_dds___load (c_base base);

extern c_metaObject __TF2Error__tf2_msgs_msg_dds__TF2Error_Constants__load (c_base base);

extern const char *tf2_msgs_msg_dds__TF2Error__metaDescriptor[];
extern const int tf2_msgs_msg_dds__TF2Error__metaDescriptorArrLength;
extern const int tf2_msgs_msg_dds__TF2Error__metaDescriptorLength;
extern c_metaObject __tf2_msgs_msg_dds__TF2Error___load (c_base base);
struct _tf2_msgs_msg_dds__TF2Error_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_msg_dds__TF2Error___copyIn(c_base base, const struct tf2_msgs::msg::dds_::TF2Error_ *from, struct _tf2_msgs_msg_dds__TF2Error_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_msg_dds__TF2Error___copyOut(const void *_from, void *_to);
struct _tf2_msgs_msg_dds__TF2Error_ {
    c_octet error_;
    c_string error_string_;
};

#undef OS_API
#endif
