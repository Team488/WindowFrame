#ifndef _H_F588A71C992D9E58C9A4C3E6BC896F5B_UInt8MultiArray__H_
#define _H_F588A71C992D9E58C9A4C3E6BC896F5B_UInt8MultiArray__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs UInt8MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<UInt8MultiArray_> UInt8MultiArray__var;
            typedef DDS_DCPSStruct_out < UInt8MultiArray_> UInt8MultiArray__out;

        }

    }

}

#endif /* _H_F588A71C992D9E58C9A4C3E6BC896F5B_UInt8MultiArray__H_ */
