#ifndef _H_0ADF5E560338E798566E3FF0596F832D_LoadNode__H_
#define _H_0ADF5E560338E798566E3FF0596F832D_LoadNode__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/Parameter_.h"
#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace composition_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Request_
            {
                struct _remap_rules__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _remap_rules__seq_uniq_ > _remap_rules__seq;
                typedef DDS_DCPSUStrSeq_var< _remap_rules__seq > _remap_rules__seq_var;
                typedef DDS_DCPSUStrSeq_out< _remap_rules__seq > _remap_rules__seq_out;
                struct _parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _parameters__seq_uniq_ > _parameters__seq;
                typedef DDS_DCPSSequence_var< _parameters__seq > _parameters__seq_var;
                typedef DDS_DCPSSequence_out< _parameters__seq > _parameters__seq_out;
                struct _extra_arguments__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _extra_arguments__seq_uniq_ > _extra_arguments__seq;
                typedef DDS_DCPSSequence_var< _extra_arguments__seq > _extra_arguments__seq_var;
                typedef DDS_DCPSSequence_out< _extra_arguments__seq > _extra_arguments__seq_out;
                ::DDS::String_mgr package_name_;
                ::DDS::String_mgr plugin_name_;
                ::DDS::String_mgr node_name_;
                ::DDS::String_mgr node_namespace_;
                ::DDS::Octet log_level_;
                _remap_rules__seq remap_rules_;
                _parameters__seq parameters_;
                _extra_arguments__seq extra_arguments_;
            };

            typedef DDS_DCPSStruct_var<LoadNode_Request_> LoadNode_Request__var;
            typedef DDS_DCPSStruct_out < LoadNode_Request_> LoadNode_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Response_
            {
                ::DDS::Boolean success_;
                ::DDS::String_mgr error_message_;
                ::DDS::String_mgr full_node_name_;
                ::DDS::ULongLong unique_id_;
            };

            typedef DDS_DCPSStruct_var<LoadNode_Response_> LoadNode_Response__var;
            typedef DDS_DCPSStruct_out < LoadNode_Response_> LoadNode_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::composition_interfaces::srv::dds_::LoadNode_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_LoadNode_Request_> Sample_LoadNode_Request__var;
            typedef DDS_DCPSStruct_out < Sample_LoadNode_Request_> Sample_LoadNode_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::composition_interfaces::srv::dds_::LoadNode_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_LoadNode_Response_> Sample_LoadNode_Response__var;
            typedef DDS_DCPSStruct_out < Sample_LoadNode_Response_> Sample_LoadNode_Response__out;

        }

    }

}

#endif /* _H_0ADF5E560338E798566E3FF0596F832D_LoadNode__H_ */
