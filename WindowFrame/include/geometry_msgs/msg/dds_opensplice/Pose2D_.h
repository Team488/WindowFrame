#ifndef _H_0DDB37B247F59811C144647071032270_Pose2D__H_
#define _H_0DDB37B247F59811C144647071032270_Pose2D__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Pose2D_
            {
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double theta_;
            };

            typedef DDS_DCPSStruct_var<Pose2D_> Pose2D__var;
            typedef Pose2D_& Pose2D__out;

        }

    }

}

#endif /* _H_0DDB37B247F59811C144647071032270_Pose2D__H_ */
