#ifndef _H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger__H_
#define _H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_srvs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Trigger_Request_> Trigger_Request__var;
            typedef Trigger_Request_& Trigger_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Response_
            {
                ::DDS::Boolean success_;
                ::DDS::String_mgr message_;
            };

            typedef DDS_DCPSStruct_var<Trigger_Response_> Trigger_Response__var;
            typedef DDS_DCPSStruct_out < Trigger_Response_> Trigger_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::std_srvs::srv::dds_::Trigger_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Trigger_Request_> Sample_Trigger_Request__var;
            typedef Sample_Trigger_Request_& Sample_Trigger_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::std_srvs::srv::dds_::Trigger_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Trigger_Response_> Sample_Trigger_Response__var;
            typedef DDS_DCPSStruct_out < Sample_Trigger_Response_> Sample_Trigger_Response__out;

        }

    }

}

#endif /* _H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger__H_ */
