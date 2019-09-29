#ifndef _H_FF489A9FEF26B9A264BA9EDA850FAFA0_DiagnosticArray__H_
#define _H_FF489A9FEF26B9A264BA9EDA850FAFA0_DiagnosticArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "diagnostic_msgs/msg/dds_opensplice/DiagnosticStatus_.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace diagnostic_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs DiagnosticArray_
            {
                struct _status__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::diagnostic_msgs::msg::dds_::DiagnosticStatus_, struct _status__seq_uniq_ > _status__seq;
                typedef DDS_DCPSSequence_var< _status__seq > _status__seq_var;
                typedef DDS_DCPSSequence_out< _status__seq > _status__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _status__seq status_;
            };

            typedef DDS_DCPSStruct_var<DiagnosticArray_> DiagnosticArray__var;
            typedef DDS_DCPSStruct_out < DiagnosticArray_> DiagnosticArray__out;

        }

    }

}

#endif /* _H_FF489A9FEF26B9A264BA9EDA850FAFA0_DiagnosticArray__H_ */
