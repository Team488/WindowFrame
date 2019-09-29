#ifndef _H_B4BFC739E309079E1A9CC9028B099DC0_UnloadNode__H_
#define _H_B4BFC739E309079E1A9CC9028B099DC0_UnloadNode__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace composition_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Request_
            {
                ::DDS::ULongLong unique_id_;
            };

            typedef DDS_DCPSStruct_var<UnloadNode_Request_> UnloadNode_Request__var;
            typedef UnloadNode_Request_& UnloadNode_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Response_
            {
                ::DDS::Boolean success_;
                ::DDS::String_mgr error_message_;
            };

            typedef DDS_DCPSStruct_var<UnloadNode_Response_> UnloadNode_Response__var;
            typedef DDS_DCPSStruct_out < UnloadNode_Response_> UnloadNode_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::composition_interfaces::srv::dds_::UnloadNode_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_UnloadNode_Request_> Sample_UnloadNode_Request__var;
            typedef Sample_UnloadNode_Request_& Sample_UnloadNode_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::composition_interfaces::srv::dds_::UnloadNode_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_UnloadNode_Response_> Sample_UnloadNode_Response__var;
            typedef DDS_DCPSStruct_out < Sample_UnloadNode_Response_> Sample_UnloadNode_Response__out;

        }

    }

}

#endif /* _H_B4BFC739E309079E1A9CC9028B099DC0_UnloadNode__H_ */
