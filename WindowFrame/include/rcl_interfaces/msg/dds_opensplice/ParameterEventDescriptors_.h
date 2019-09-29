#ifndef _H_3BC9E0D965B76321C06DDDA9F3EDB6FA_ParameterEventDescriptors__H_
#define _H_3BC9E0D965B76321C06DDDA9F3EDB6FA_ParameterEventDescriptors__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterDescriptor_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces ParameterEventDescriptors_
            {
                struct _new_parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::ParameterDescriptor_, struct _new_parameters__seq_uniq_ > _new_parameters__seq;
                typedef DDS_DCPSSequence_var< _new_parameters__seq > _new_parameters__seq_var;
                typedef DDS_DCPSSequence_out< _new_parameters__seq > _new_parameters__seq_out;
                struct _changed_parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::ParameterDescriptor_, struct _changed_parameters__seq_uniq_ > _changed_parameters__seq;
                typedef DDS_DCPSSequence_var< _changed_parameters__seq > _changed_parameters__seq_var;
                typedef DDS_DCPSSequence_out< _changed_parameters__seq > _changed_parameters__seq_out;
                struct _deleted_parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::ParameterDescriptor_, struct _deleted_parameters__seq_uniq_ > _deleted_parameters__seq;
                typedef DDS_DCPSSequence_var< _deleted_parameters__seq > _deleted_parameters__seq_var;
                typedef DDS_DCPSSequence_out< _deleted_parameters__seq > _deleted_parameters__seq_out;
                _new_parameters__seq new_parameters_;
                _changed_parameters__seq changed_parameters_;
                _deleted_parameters__seq deleted_parameters_;
            };

            typedef DDS_DCPSStruct_var<ParameterEventDescriptors_> ParameterEventDescriptors__var;
            typedef DDS_DCPSStruct_out < ParameterEventDescriptors_> ParameterEventDescriptors__out;

        }

    }

}

#endif /* _H_3BC9E0D965B76321C06DDDA9F3EDB6FA_ParameterEventDescriptors__H_ */
