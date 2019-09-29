#ifndef _H_3F45F0B57795FE7D6ADE2D51B782756E_TransformStamped__H_
#define _H_3F45F0B57795FE7D6ADE2D51B782756E_TransformStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Transform_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TransformStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::String_mgr child_frame_id_;
                ::geometry_msgs::msg::dds_::Transform_ transform_;
            };

            typedef DDS_DCPSStruct_var<TransformStamped_> TransformStamped__var;
            typedef DDS_DCPSStruct_out < TransformStamped_> TransformStamped__out;

        }

    }

}

#endif /* _H_3F45F0B57795FE7D6ADE2D51B782756E_TransformStamped__H_ */
