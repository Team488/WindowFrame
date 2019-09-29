#ifndef _H_8C0FC2D181D39BE5395C4E4AE7496900_PoseArray__H_
#define _H_8C0FC2D181D39BE5395C4E4AE7496900_PoseArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseArray_
            {
                struct _poses__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Pose_, struct _poses__seq_uniq_ > _poses__seq;
                typedef DDS_DCPSSequence_var< _poses__seq > _poses__seq_var;
                typedef DDS_DCPSSequence_out< _poses__seq > _poses__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _poses__seq poses_;
            };

            typedef DDS_DCPSStruct_var<PoseArray_> PoseArray__var;
            typedef DDS_DCPSStruct_out < PoseArray_> PoseArray__out;

        }

    }

}

#endif /* _H_8C0FC2D181D39BE5395C4E4AE7496900_PoseArray__H_ */
