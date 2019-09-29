#ifndef _H_053326011214FECCE4DCCBE7744B8068_PoseStamped__H_
#define _H_053326011214FECCE4DCCBE7744B8068_PoseStamped__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Pose_ pose_;
            };

            typedef DDS_DCPSStruct_var<PoseStamped_> PoseStamped__var;
            typedef DDS_DCPSStruct_out < PoseStamped_> PoseStamped__out;

        }

    }

}

#endif /* _H_053326011214FECCE4DCCBE7744B8068_PoseStamped__H_ */
