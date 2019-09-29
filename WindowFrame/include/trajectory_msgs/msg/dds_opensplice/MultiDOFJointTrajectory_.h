#ifndef _H_B152D2F2171A732D21098A2423314702_MultiDOFJointTrajectory__H_
#define _H_B152D2F2171A732D21098A2423314702_MultiDOFJointTrajectory__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "trajectory_msgs/msg/dds_opensplice/MultiDOFJointTrajectoryPoint_.h"
#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectory_
            {
                struct _joint_names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _joint_names__seq_uniq_ > _joint_names__seq;
                typedef DDS_DCPSUStrSeq_var< _joint_names__seq > _joint_names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _joint_names__seq > _joint_names__seq_out;
                struct _points__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_, struct _points__seq_uniq_ > _points__seq;
                typedef DDS_DCPSSequence_var< _points__seq > _points__seq_var;
                typedef DDS_DCPSSequence_out< _points__seq > _points__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _joint_names__seq joint_names_;
                _points__seq points_;
            };

            typedef DDS_DCPSStruct_var<MultiDOFJointTrajectory_> MultiDOFJointTrajectory__var;
            typedef DDS_DCPSStruct_out < MultiDOFJointTrajectory_> MultiDOFJointTrajectory__out;

        }

    }

}

#endif /* _H_B152D2F2171A732D21098A2423314702_MultiDOFJointTrajectory__H_ */
