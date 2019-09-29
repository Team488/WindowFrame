#ifndef _H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes__H_
#define _H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Request_
            {
                ::DDS::Boolean bool_value_;
                ::DDS::Octet byte_value_;
                ::DDS::Octet char_value_;
                ::DDS::Float float32_value_;
                ::DDS::Double float64_value_;
                ::DDS::Octet int8_value_;
                ::DDS::Octet uint8_value_;
                ::DDS::Short int16_value_;
                ::DDS::UShort uint16_value_;
                ::DDS::Long int32_value_;
                ::DDS::ULong uint32_value_;
                ::DDS::LongLong int64_value_;
                ::DDS::ULongLong uint64_value_;
                ::DDS::String_mgr string_value_;
            };

            typedef DDS_DCPSStruct_var<BasicTypes_Request_> BasicTypes_Request__var;
            typedef DDS_DCPSStruct_out < BasicTypes_Request_> BasicTypes_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Response_
            {
                ::DDS::Boolean bool_value_;
                ::DDS::Octet byte_value_;
                ::DDS::Octet char_value_;
                ::DDS::Float float32_value_;
                ::DDS::Double float64_value_;
                ::DDS::Octet int8_value_;
                ::DDS::Octet uint8_value_;
                ::DDS::Short int16_value_;
                ::DDS::UShort uint16_value_;
                ::DDS::Long int32_value_;
                ::DDS::ULong uint32_value_;
                ::DDS::LongLong int64_value_;
                ::DDS::ULongLong uint64_value_;
                ::DDS::String_mgr string_value_;
            };

            typedef DDS_DCPSStruct_var<BasicTypes_Response_> BasicTypes_Response__var;
            typedef DDS_DCPSStruct_out < BasicTypes_Response_> BasicTypes_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::srv::dds_::BasicTypes_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_BasicTypes_Request_> Sample_BasicTypes_Request__var;
            typedef DDS_DCPSStruct_out < Sample_BasicTypes_Request_> Sample_BasicTypes_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::srv::dds_::BasicTypes_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_BasicTypes_Response_> Sample_BasicTypes_Response__var;
            typedef DDS_DCPSStruct_out < Sample_BasicTypes_Response_> Sample_BasicTypes_Response__out;

        }

    }

}

#endif /* _H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes__H_ */
