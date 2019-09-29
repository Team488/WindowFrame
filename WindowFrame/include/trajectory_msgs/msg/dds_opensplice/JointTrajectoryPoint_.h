#ifndef _H_864A3EE91455100E5C0ACD1F5BA61F94_JointTrajectoryPoint__H_
#define _H_864A3EE91455100E5C0ACD1F5BA61F94_JointTrajectoryPoint__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_.h"
#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectoryPoint_
            {
                struct _positions__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _positions__seq_uniq_ > _positions__seq;
                typedef DDS_DCPSSequence_var< _positions__seq > _positions__seq_var;
                typedef DDS_DCPSSequence_out< _positions__seq > _positions__seq_out;
                struct _velocities__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _velocities__seq_uniq_ > _velocities__seq;
                typedef DDS_DCPSSequence_var< _velocities__seq > _velocities__seq_var;
                typedef DDS_DCPSSequence_out< _velocities__seq > _velocities__seq_out;
                struct _accelerations__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _accelerations__seq_uniq_ > _accelerations__seq;
                typedef DDS_DCPSSequence_var< _accelerations__seq > _accelerations__seq_var;
                typedef DDS_DCPSSequence_out< _accelerations__seq > _accelerations__seq_out;
                struct _effort__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _effort__seq_uniq_ > _effort__seq;
                typedef DDS_DCPSSequence_var< _effort__seq > _effort__seq_var;
                typedef DDS_DCPSSequence_out< _effort__seq > _effort__seq_out;
                _positions__seq positions_;
                _velocities__seq velocities_;
                _accelerations__seq accelerations_;
                _effort__seq effort_;
                ::builtin_interfaces::msg::dds_::Duration_ time_from_start_;
            };

            typedef DDS_DCPSStruct_var<JointTrajectoryPoint_> JointTrajectoryPoint__var;
            typedef DDS_DCPSStruct_out < JointTrajectoryPoint_> JointTrajectoryPoint__out;

        }

    }

}

#endif /* _H_864A3EE91455100E5C0ACD1F5BA61F94_JointTrajectoryPoint__H_ */
