#ifndef _H_64834CFEFDE187618286C57ED5BD4F77_AddDiagnostics__H_
#define _H_64834CFEFDE187618286C57ED5BD4F77_AddDiagnostics__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace diagnostic_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Request_
            {
                ::DDS::String_mgr load_namespace_;
            };

            typedef DDS_DCPSStruct_var<AddDiagnostics_Request_> AddDiagnostics_Request__var;
            typedef DDS_DCPSStruct_out < AddDiagnostics_Request_> AddDiagnostics_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Response_
            {
                ::DDS::Boolean success_;
                ::DDS::String_mgr message_;
            };

            typedef DDS_DCPSStruct_var<AddDiagnostics_Response_> AddDiagnostics_Response__var;
            typedef DDS_DCPSStruct_out < AddDiagnostics_Response_> AddDiagnostics_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::diagnostic_msgs::srv::dds_::AddDiagnostics_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_AddDiagnostics_Request_> Sample_AddDiagnostics_Request__var;
            typedef DDS_DCPSStruct_out < Sample_AddDiagnostics_Request_> Sample_AddDiagnostics_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::diagnostic_msgs::srv::dds_::AddDiagnostics_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_AddDiagnostics_Response_> Sample_AddDiagnostics_Response__var;
            typedef DDS_DCPSStruct_out < Sample_AddDiagnostics_Response_> Sample_AddDiagnostics_Response__out;

        }

    }

}

#endif /* _H_64834CFEFDE187618286C57ED5BD4F77_AddDiagnostics__H_ */
