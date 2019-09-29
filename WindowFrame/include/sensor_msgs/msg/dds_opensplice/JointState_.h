#ifndef _H_C6249533BAC4BB43889C2FDC23A708FA_JointState__H_
#define _H_C6249533BAC4BB43889C2FDC23A708FA_JointState__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JointState_
            {
                struct _name__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _name__seq_uniq_ > _name__seq;
                typedef DDS_DCPSUStrSeq_var< _name__seq > _name__seq_var;
                typedef DDS_DCPSUStrSeq_out< _name__seq > _name__seq_out;
                struct _position__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _position__seq_uniq_ > _position__seq;
                typedef DDS_DCPSSequence_var< _position__seq > _position__seq_var;
                typedef DDS_DCPSSequence_out< _position__seq > _position__seq_out;
                struct _velocity__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _velocity__seq_uniq_ > _velocity__seq;
                typedef DDS_DCPSSequence_var< _velocity__seq > _velocity__seq_var;
                typedef DDS_DCPSSequence_out< _velocity__seq > _velocity__seq_out;
                struct _effort__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _effort__seq_uniq_ > _effort__seq;
                typedef DDS_DCPSSequence_var< _effort__seq > _effort__seq_var;
                typedef DDS_DCPSSequence_out< _effort__seq > _effort__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _name__seq name_;
                _position__seq position_;
                _velocity__seq velocity_;
                _effort__seq effort_;
            };

            typedef DDS_DCPSStruct_var<JointState_> JointState__var;
            typedef DDS_DCPSStruct_out < JointState_> JointState__out;

        }

    }

}

#endif /* _H_C6249533BAC4BB43889C2FDC23A708FA_JointState__H_ */
