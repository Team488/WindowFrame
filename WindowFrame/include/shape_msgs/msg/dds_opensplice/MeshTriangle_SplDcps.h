#ifndef H_A284854280C7C11B4FF124C1572CC254_MeshTriangle_SPLTYPES_H
#define H_A284854280C7C11B4FF124C1572CC254_MeshTriangle_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MeshTriangle_.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MeshTriangle__shape_msgs__load (c_base base);

extern c_metaObject __MeshTriangle__shape_msgs_msg__load (c_base base);

extern c_metaObject __MeshTriangle__shape_msgs_msg_dds___load (c_base base);

extern const char *shape_msgs_msg_dds__MeshTriangle__metaDescriptor[];
extern const int shape_msgs_msg_dds__MeshTriangle__metaDescriptorArrLength;
extern const int shape_msgs_msg_dds__MeshTriangle__metaDescriptorLength;
extern c_metaObject __shape_msgs_msg_dds__MeshTriangle___load (c_base base);
struct _shape_msgs_msg_dds__MeshTriangle_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs v_copyin_result __shape_msgs_msg_dds__MeshTriangle___copyIn(c_base base, const struct shape_msgs::msg::dds_::MeshTriangle_ *from, struct _shape_msgs_msg_dds__MeshTriangle_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs void __shape_msgs_msg_dds__MeshTriangle___copyOut(const void *_from, void *_to);
struct _shape_msgs_msg_dds__MeshTriangle_ {
    c_ulong vertex_indices_[3];
};

#undef OS_API
#endif
