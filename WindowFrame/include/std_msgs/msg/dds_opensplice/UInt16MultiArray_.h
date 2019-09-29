#ifndef _H_6F728123ABB737ECC0BBE03FC95D511A_UInt16MultiArray__H_
#define _H_6F728123ABB737ECC0BBE03FC95D511A_UInt16MultiArray__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs UInt16MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::UShort, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<UInt16MultiArray_> UInt16MultiArray__var;
            typedef DDS_DCPSStruct_out < UInt16MultiArray_> UInt16MultiArray__out;

        }

    }

}

#endif /* _H_6F728123ABB737ECC0BBE03FC95D511A_UInt16MultiArray__H_ */
