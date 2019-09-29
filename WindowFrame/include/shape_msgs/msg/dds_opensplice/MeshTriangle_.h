#ifndef _H_A284854280C7C11B4FF124C1572CC254_MeshTriangle__H_
#define _H_A284854280C7C11B4FF124C1572CC254_MeshTriangle__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs MeshTriangle_
            {
                struct _vertex_indices__uniq_{};
                typedef ::DDS::ULong _vertex_indices__slice;
                typedef ::DDS::ULong _vertex_indices_[3];
                typedef DDS_DCPS_FArray_var< _vertex_indices_, _vertex_indices__slice, struct _vertex_indices__uniq_ > _vertex_indices__var;
                typedef _vertex_indices_ _vertex_indices__out;
                typedef DDS_DCPS_Array_forany< _vertex_indices_, _vertex_indices__slice, struct _vertex_indices__uniq_ > _vertex_indices__forany;
                static _vertex_indices__slice *_vertex_indices__alloc();
                static void _vertex_indices__free(_vertex_indices__slice *);
                static void _vertex_indices__copy(_vertex_indices__slice *to, const _vertex_indices__slice *from);
                static _vertex_indices__slice *_vertex_indices__dup(const _vertex_indices__slice *from);
                _vertex_indices_ vertex_indices_;
            };

            typedef DDS_DCPSStruct_var<MeshTriangle_> MeshTriangle__var;
            typedef MeshTriangle_& MeshTriangle__out;

        }

    }

}

#endif /* _H_A284854280C7C11B4FF124C1572CC254_MeshTriangle__H_ */
