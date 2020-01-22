#ifndef H_63CD3D7624B1F8FE23A4E1602C29CC1F_Pose_SPLTYPES_H
#define H_63CD3D7624B1F8FE23A4E1602C29CC1F_Pose_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Pose_.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Pose__turtlesim__load (c_base base);

extern c_metaObject __Pose__turtlesim_msg__load (c_base base);

extern c_metaObject __Pose__turtlesim_msg_dds___load (c_base base);

extern const char *turtlesim_msg_dds__Pose__metaDescriptor[];
extern const int turtlesim_msg_dds__Pose__metaDescriptorArrLength;
extern const int turtlesim_msg_dds__Pose__metaDescriptorLength;
extern c_metaObject __turtlesim_msg_dds__Pose___load (c_base base);
struct _turtlesim_msg_dds__Pose_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim v_copyin_result __turtlesim_msg_dds__Pose___copyIn(c_base base, const struct turtlesim::msg::dds_::Pose_ *from, struct _turtlesim_msg_dds__Pose_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim void __turtlesim_msg_dds__Pose___copyOut(const void *_from, void *_to);
struct _turtlesim_msg_dds__Pose_ {
    c_float x_;
    c_float y_;
    c_float theta_;
    c_float linear_velocity_;
    c_float angular_velocity_;
};

#undef OS_API
#endif
