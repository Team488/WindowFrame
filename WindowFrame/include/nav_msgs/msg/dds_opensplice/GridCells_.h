#ifndef _H_656FFE9946DFEA7CAE69D18F551C9053_GridCells__H_
#define _H_656FFE9946DFEA7CAE69D18F551C9053_GridCells__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GridCells_
            {
                struct _cells__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Point_, struct _cells__seq_uniq_ > _cells__seq;
                typedef DDS_DCPSSequence_var< _cells__seq > _cells__seq_var;
                typedef DDS_DCPSSequence_out< _cells__seq > _cells__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Float cell_width_;
                ::DDS::Float cell_height_;
                _cells__seq cells_;
            };

            typedef DDS_DCPSStruct_var<GridCells_> GridCells__var;
            typedef DDS_DCPSStruct_out < GridCells_> GridCells__out;

        }

    }

}

#endif /* _H_656FFE9946DFEA7CAE69D18F551C9053_GridCells__H_ */
