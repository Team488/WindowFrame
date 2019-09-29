#ifndef _H_105C7525AC148DEB4F949B8510A633F5_DiagnosticStatus__H_
#define _H_105C7525AC148DEB4F949B8510A633F5_DiagnosticStatus__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "diagnostic_msgs/msg/dds_opensplice/KeyValue_.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace diagnostic_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace DiagnosticStatus_Constants
            {
                const ::DDS::Octet OK_ = 0;

                const ::DDS::Octet WARN_ = 1;

                const ::DDS::Octet ERROR_ = 2;

                const ::DDS::Octet STALE_ = 3;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs DiagnosticStatus_
            {
                struct _values__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::diagnostic_msgs::msg::dds_::KeyValue_, struct _values__seq_uniq_ > _values__seq;
                typedef DDS_DCPSSequence_var< _values__seq > _values__seq_var;
                typedef DDS_DCPSSequence_out< _values__seq > _values__seq_out;
                ::DDS::Octet level_;
                ::DDS::String_mgr name_;
                ::DDS::String_mgr message_;
                ::DDS::String_mgr hardware_id_;
                _values__seq values_;
            };

            typedef DDS_DCPSStruct_var<DiagnosticStatus_> DiagnosticStatus__var;
            typedef DDS_DCPSStruct_out < DiagnosticStatus_> DiagnosticStatus__out;

        }

    }

}

#endif /* _H_105C7525AC148DEB4F949B8510A633F5_DiagnosticStatus__H_ */
