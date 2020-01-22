#ifndef _H_63CD3D7624B1F8FE23A4E1602C29CC1F_Pose__H_
#define _H_63CD3D7624B1F8FE23A4E1602C29CC1F_Pose__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Pose_
            {
                ::DDS::Float x_;
                ::DDS::Float y_;
                ::DDS::Float theta_;
                ::DDS::Float linear_velocity_;
                ::DDS::Float angular_velocity_;
            };

            typedef DDS_DCPSStruct_var<Pose_> Pose__var;
            typedef Pose_& Pose__out;

        }

    }

}

#endif /* _H_63CD3D7624B1F8FE23A4E1602C29CC1F_Pose__H_ */
