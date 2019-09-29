#ifndef _H_36A79E197C398948CC556E6E2BE74298_MapMetaData__H_
#define _H_36A79E197C398948CC556E6E2BE74298_MapMetaData__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs MapMetaData_
            {
                ::builtin_interfaces::msg::dds_::Time_ map_load_time_;
                ::DDS::Float resolution_;
                ::DDS::ULong width_;
                ::DDS::ULong height_;
                ::geometry_msgs::msg::dds_::Pose_ origin_;
            };

            typedef DDS_DCPSStruct_var<MapMetaData_> MapMetaData__var;
            typedef MapMetaData_& MapMetaData__out;

        }

    }

}

#endif /* _H_36A79E197C398948CC556E6E2BE74298_MapMetaData__H_ */
