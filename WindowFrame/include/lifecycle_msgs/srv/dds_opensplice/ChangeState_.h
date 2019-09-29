#ifndef _H_5580BF376C11768984BEBC2E13043FC9_ChangeState__H_
#define _H_5580BF376C11768984BEBC2E13043FC9_ChangeState__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "lifecycle_msgs/msg/dds_opensplice/Transition_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace lifecycle_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Request_
            {
                ::lifecycle_msgs::msg::dds_::Transition_ transition_;
            };

            typedef DDS_DCPSStruct_var<ChangeState_Request_> ChangeState_Request__var;
            typedef DDS_DCPSStruct_out < ChangeState_Request_> ChangeState_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Response_
            {
                ::DDS::Boolean success_;
            };

            typedef DDS_DCPSStruct_var<ChangeState_Response_> ChangeState_Response__var;
            typedef ChangeState_Response_& ChangeState_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::ChangeState_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_ChangeState_Request_> Sample_ChangeState_Request__var;
            typedef DDS_DCPSStruct_out < Sample_ChangeState_Request_> Sample_ChangeState_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::ChangeState_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_ChangeState_Response_> Sample_ChangeState_Response__var;
            typedef Sample_ChangeState_Response_& Sample_ChangeState_Response__out;

        }

    }

}

#endif /* _H_5580BF376C11768984BEBC2E13043FC9_ChangeState__H_ */
