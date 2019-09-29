#ifndef _H_DAB16650FE126AF02A6AC83532021C79_MultiDOFJointTrajectoryPoint__H_
#define _H_DAB16650FE126AF02A6AC83532021C79_MultiDOFJointTrajectoryPoint__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Transform_.h"
#include "geometry_msgs/msg/dds_opensplice/Twist_.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_.h"
#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectoryPoint_
            {
                struct _transforms__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Transform_, struct _transforms__seq_uniq_ > _transforms__seq;
                typedef DDS_DCPSSequence_var< _transforms__seq > _transforms__seq_var;
                typedef DDS_DCPSSequence_out< _transforms__seq > _transforms__seq_out;
                struct _velocities__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Twist_, struct _velocities__seq_uniq_ > _velocities__seq;
                typedef DDS_DCPSSequence_var< _velocities__seq > _velocities__seq_var;
                typedef DDS_DCPSSequence_out< _velocities__seq > _velocities__seq_out;
                struct _accelerations__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Twist_, struct _accelerations__seq_uniq_ > _accelerations__seq;
                typedef DDS_DCPSSequence_var< _accelerations__seq > _accelerations__seq_var;
                typedef DDS_DCPSSequence_out< _accelerations__seq > _accelerations__seq_out;
                _transforms__seq transforms_;
                _velocities__seq velocities_;
                _accelerations__seq accelerations_;
                ::builtin_interfaces::msg::dds_::Duration_ time_from_start_;
            };

            typedef DDS_DCPSStruct_var<MultiDOFJointTrajectoryPoint_> MultiDOFJointTrajectoryPoint__var;
            typedef DDS_DCPSStruct_out < MultiDOFJointTrajectoryPoint_> MultiDOFJointTrajectoryPoint__out;

        }

    }

}

#endif /* _H_DAB16650FE126AF02A6AC83532021C79_MultiDOFJointTrajectoryPoint__H_ */
