#ifndef _H_6A722E6A1CC8832BADB68136813DA9C4_JoyFeedbackArray__H_
#define _H_6A722E6A1CC8832BADB68136813DA9C4_JoyFeedbackArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/dds_opensplice/JoyFeedback_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedbackArray_
            {
                struct _array__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::sensor_msgs::msg::dds_::JoyFeedback_, struct _array__seq_uniq_ > _array__seq;
                typedef DDS_DCPSSequence_var< _array__seq > _array__seq_var;
                typedef DDS_DCPSSequence_out< _array__seq > _array__seq_out;
                _array__seq array_;
            };

            typedef DDS_DCPSStruct_var<JoyFeedbackArray_> JoyFeedbackArray__var;
            typedef DDS_DCPSStruct_out < JoyFeedbackArray_> JoyFeedbackArray__out;

        }

    }

}

#endif /* _H_6A722E6A1CC8832BADB68136813DA9C4_JoyFeedbackArray__H_ */
