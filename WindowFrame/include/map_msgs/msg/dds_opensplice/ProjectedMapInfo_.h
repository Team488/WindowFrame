#ifndef _H_50A87980DA33A6B0872275882AC74958_ProjectedMapInfo__H_
#define _H_50A87980DA33A6B0872275882AC74958_ProjectedMapInfo__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapInfo_
            {
                ::DDS::String_mgr frame_id_;
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double width_;
                ::DDS::Double height_;
                ::DDS::Double min_z_;
                ::DDS::Double max_z_;
            };

            typedef DDS_DCPSStruct_var<ProjectedMapInfo_> ProjectedMapInfo__var;
            typedef DDS_DCPSStruct_out < ProjectedMapInfo_> ProjectedMapInfo__out;

        }

    }

}

#endif /* _H_50A87980DA33A6B0872275882AC74958_ProjectedMapInfo__H_ */
