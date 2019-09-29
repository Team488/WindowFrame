#ifndef _H_9409BA771630794E5529D065D7B67F64_ListParametersResult__H_
#define _H_9409BA771630794E5529D065D7B67F64_ListParametersResult__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces ListParametersResult_
            {
                struct _names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _names__seq_uniq_ > _names__seq;
                typedef DDS_DCPSUStrSeq_var< _names__seq > _names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _names__seq > _names__seq_out;
                struct _prefixes__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _prefixes__seq_uniq_ > _prefixes__seq;
                typedef DDS_DCPSUStrSeq_var< _prefixes__seq > _prefixes__seq_var;
                typedef DDS_DCPSUStrSeq_out< _prefixes__seq > _prefixes__seq_out;
                _names__seq names_;
                _prefixes__seq prefixes_;
            };

            typedef DDS_DCPSStruct_var<ListParametersResult_> ListParametersResult__var;
            typedef DDS_DCPSStruct_out < ListParametersResult_> ListParametersResult__out;

        }

    }

}

#endif /* _H_9409BA771630794E5529D065D7B67F64_ListParametersResult__H_ */
