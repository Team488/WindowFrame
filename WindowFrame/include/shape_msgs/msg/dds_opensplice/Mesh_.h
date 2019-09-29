#ifndef _H_2A46B60BEAEE656CBC27AFBD8C898621_Mesh__H_
#define _H_2A46B60BEAEE656CBC27AFBD8C898621_Mesh__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "shape_msgs/msg/dds_opensplice/MeshTriangle_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Mesh_
            {
                struct _triangles__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::shape_msgs::msg::dds_::MeshTriangle_, struct _triangles__seq_uniq_ > _triangles__seq;
                typedef DDS_DCPSSequence_var< _triangles__seq > _triangles__seq_var;
                typedef DDS_DCPSSequence_out< _triangles__seq > _triangles__seq_out;
                struct _vertices__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Point_, struct _vertices__seq_uniq_ > _vertices__seq;
                typedef DDS_DCPSSequence_var< _vertices__seq > _vertices__seq_var;
                typedef DDS_DCPSSequence_out< _vertices__seq > _vertices__seq_out;
                _triangles__seq triangles_;
                _vertices__seq vertices_;
            };

            typedef DDS_DCPSStruct_var<Mesh_> Mesh__var;
            typedef DDS_DCPSStruct_out < Mesh_> Mesh__out;

        }

    }

}

#endif /* _H_2A46B60BEAEE656CBC27AFBD8C898621_Mesh__H_ */
