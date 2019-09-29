#ifndef _H_2994B2F16581CEB971D4874E718884D4_ProjectedMap__H_
#define _H_2994B2F16581CEB971D4874E718884D4_ProjectedMap__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMap_
            {
                ::nav_msgs::msg::dds_::OccupancyGrid_ map_;
                ::DDS::Double min_z_;
                ::DDS::Double max_z_;
            };

            typedef DDS_DCPSStruct_var<ProjectedMap_> ProjectedMap__var;
            typedef DDS_DCPSStruct_out < ProjectedMap_> ProjectedMap__out;

        }

    }

}

#endif /* _H_2994B2F16581CEB971D4874E718884D4_ProjectedMap__H_ */
