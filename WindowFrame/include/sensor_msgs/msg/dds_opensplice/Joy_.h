#ifndef _H_AA7B1F03F6DCF5934F04C8929A146CB3_Joy__H_
#define _H_AA7B1F03F6DCF5934F04C8929A146CB3_Joy__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Joy_
            {
                struct _axes__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _axes__seq_uniq_ > _axes__seq;
                typedef DDS_DCPSSequence_var< _axes__seq > _axes__seq_var;
                typedef DDS_DCPSSequence_out< _axes__seq > _axes__seq_out;
                struct _buttons__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Long, struct _buttons__seq_uniq_ > _buttons__seq;
                typedef DDS_DCPSSequence_var< _buttons__seq > _buttons__seq_var;
                typedef DDS_DCPSSequence_out< _buttons__seq > _buttons__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _axes__seq axes_;
                _buttons__seq buttons_;
            };

            typedef DDS_DCPSStruct_var<Joy_> Joy__var;
            typedef DDS_DCPSStruct_out < Joy_> Joy__out;

        }

    }

}

#endif /* _H_AA7B1F03F6DCF5934F04C8929A146CB3_Joy__H_ */
