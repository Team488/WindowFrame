#ifndef _H_9F1ECA5630F83D3F35CD9FE915D094F3_Float64MultiArray__H_
#define _H_9F1ECA5630F83D3F35CD9FE915D094F3_Float64MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs Float64MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<Float64MultiArray_> Float64MultiArray__var;
            typedef DDS_DCPSStruct_out < Float64MultiArray_> Float64MultiArray__out;

        }

    }

}

#endif /* _H_9F1ECA5630F83D3F35CD9FE915D094F3_Float64MultiArray__H_ */
