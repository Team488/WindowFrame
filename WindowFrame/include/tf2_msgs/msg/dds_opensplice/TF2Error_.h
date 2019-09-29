#ifndef _H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error__H_
#define _H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace tf2_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace TF2Error_Constants
            {
                const ::DDS::Octet NO_ERROR_ = 0;

                const ::DDS::Octet LOOKUP_ERROR_ = 1;

                const ::DDS::Octet CONNECTIVITY_ERROR_ = 2;

                const ::DDS::Octet EXTRAPOLATION_ERROR_ = 3;

                const ::DDS::Octet INVALID_ARGUMENT_ERROR_ = 4;

                const ::DDS::Octet TIMEOUT_ERROR_ = 5;

                const ::DDS::Octet TRANSFORM_ERROR_ = 6;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TF2Error_
            {
                ::DDS::Octet error_;
                ::DDS::String_mgr error_string_;
            };

            typedef DDS_DCPSStruct_var<TF2Error_> TF2Error__var;
            typedef DDS_DCPSStruct_out < TF2Error_> TF2Error__out;

        }

    }

}

#endif /* _H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error__H_ */
