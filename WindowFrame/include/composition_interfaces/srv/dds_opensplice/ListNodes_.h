#ifndef _H_C9003363A178233440D0F96D6122C26D_ListNodes__H_
#define _H_C9003363A178233440D0F96D6122C26D_ListNodes__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace composition_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<ListNodes_Request_> ListNodes_Request__var;
            typedef ListNodes_Request_& ListNodes_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Response_
            {
                struct _full_node_names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _full_node_names__seq_uniq_ > _full_node_names__seq;
                typedef DDS_DCPSUStrSeq_var< _full_node_names__seq > _full_node_names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _full_node_names__seq > _full_node_names__seq_out;
                struct _unique_ids__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULongLong, struct _unique_ids__seq_uniq_ > _unique_ids__seq;
                typedef DDS_DCPSSequence_var< _unique_ids__seq > _unique_ids__seq_var;
                typedef DDS_DCPSSequence_out< _unique_ids__seq > _unique_ids__seq_out;
                _full_node_names__seq full_node_names_;
                _unique_ids__seq unique_ids_;
            };

            typedef DDS_DCPSStruct_var<ListNodes_Response_> ListNodes_Response__var;
            typedef DDS_DCPSStruct_out < ListNodes_Response_> ListNodes_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::composition_interfaces::srv::dds_::ListNodes_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_ListNodes_Request_> Sample_ListNodes_Request__var;
            typedef Sample_ListNodes_Request_& Sample_ListNodes_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::composition_interfaces::srv::dds_::ListNodes_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_ListNodes_Response_> Sample_ListNodes_Response__var;
            typedef DDS_DCPSStruct_out < Sample_ListNodes_Response_> Sample_ListNodes_Response__out;

        }

    }

}

#endif /* _H_C9003363A178233440D0F96D6122C26D_ListNodes__H_ */
