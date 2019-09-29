#ifndef _H_719FAB918C48D65DEF752289B0B3A014_ParameterDescriptor__H_
#define _H_719FAB918C48D65DEF752289B0B3A014_ParameterDescriptor__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/FloatingPointRange_.h"
#include "rcl_interfaces/msg/dds_opensplice/IntegerRange_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces ParameterDescriptor_
            {
                struct _floating_point_range__seq_uniq_{};
                typedef DDS_DCPSBFLSeq< ::rcl_interfaces::msg::dds_::FloatingPointRange_, struct _floating_point_range__seq_uniq_, 1 > _floating_point_range__seq;
                typedef DDS_DCPSSequence_var< _floating_point_range__seq > _floating_point_range__seq_var;
                typedef DDS_DCPSSequence_out< _floating_point_range__seq > _floating_point_range__seq_out;
                struct _integer_range__seq_uniq_{};
                typedef DDS_DCPSBFLSeq< ::rcl_interfaces::msg::dds_::IntegerRange_, struct _integer_range__seq_uniq_, 1 > _integer_range__seq;
                typedef DDS_DCPSSequence_var< _integer_range__seq > _integer_range__seq_var;
                typedef DDS_DCPSSequence_out< _integer_range__seq > _integer_range__seq_out;
                ::DDS::String_mgr name_;
                ::DDS::Octet type_;
                ::DDS::String_mgr description_;
                ::DDS::String_mgr additional_constraints_;
                ::DDS::Boolean read_only_;
                _floating_point_range__seq floating_point_range_;
                _integer_range__seq integer_range_;
            };

            typedef DDS_DCPSStruct_var<ParameterDescriptor_> ParameterDescriptor__var;
            typedef DDS_DCPSStruct_out < ParameterDescriptor_> ParameterDescriptor__out;

        }

    }

}

#endif /* _H_719FAB918C48D65DEF752289B0B3A014_ParameterDescriptor__H_ */
