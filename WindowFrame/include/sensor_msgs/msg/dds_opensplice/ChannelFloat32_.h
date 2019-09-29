#ifndef _H_166166F045F7703716904AA42D242328_ChannelFloat32__H_
#define _H_166166F045F7703716904AA42D242328_ChannelFloat32__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs ChannelFloat32_
            {
                struct _values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _values__seq_uniq_ > _values__seq;
                typedef DDS_DCPSSequence_var< _values__seq > _values__seq_var;
                typedef DDS_DCPSSequence_out< _values__seq > _values__seq_out;
                ::DDS::String_mgr name_;
                _values__seq values_;
            };

            typedef DDS_DCPSStruct_var<ChannelFloat32_> ChannelFloat32__var;
            typedef DDS_DCPSStruct_out < ChannelFloat32_> ChannelFloat32__out;

        }

    }

}

#endif /* _H_166166F045F7703716904AA42D242328_ChannelFloat32__H_ */
