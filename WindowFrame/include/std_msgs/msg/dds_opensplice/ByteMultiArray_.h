#ifndef _H_153C2F7FC96C002A8EEB3F44CDE20DD3_ByteMultiArray__H_
#define _H_153C2F7FC96C002A8EEB3F44CDE20DD3_ByteMultiArray__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs ByteMultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<ByteMultiArray_> ByteMultiArray__var;
            typedef DDS_DCPSStruct_out < ByteMultiArray_> ByteMultiArray__out;

        }

    }

}

#endif /* _H_153C2F7FC96C002A8EEB3F44CDE20DD3_ByteMultiArray__H_ */
