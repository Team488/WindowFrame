#ifndef _H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo__H_
#define _H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/dds_opensplice/CameraInfo_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_
            {
                ::sensor_msgs::msg::dds_::CameraInfo_ camera_info_;
            };

            typedef DDS_DCPSStruct_var<SetCameraInfo_Request_> SetCameraInfo_Request__var;
            typedef DDS_DCPSStruct_out < SetCameraInfo_Request_> SetCameraInfo_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Response_
            {
                ::DDS::Boolean success_;
                ::DDS::String_mgr status_message_;
            };

            typedef DDS_DCPSStruct_var<SetCameraInfo_Response_> SetCameraInfo_Response__var;
            typedef DDS_DCPSStruct_out < SetCameraInfo_Response_> SetCameraInfo_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::sensor_msgs::srv::dds_::SetCameraInfo_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetCameraInfo_Request_> Sample_SetCameraInfo_Request__var;
            typedef DDS_DCPSStruct_out < Sample_SetCameraInfo_Request_> Sample_SetCameraInfo_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::sensor_msgs::srv::dds_::SetCameraInfo_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetCameraInfo_Response_> Sample_SetCameraInfo_Response__var;
            typedef DDS_DCPSStruct_out < Sample_SetCameraInfo_Response_> Sample_SetCameraInfo_Response__out;

        }

    }

}

#endif /* _H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo__H_ */
