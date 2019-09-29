#ifndef _H_3ABA403BA07D0CEDF2329B1A58914ABB_Transition__H_
#define _H_3ABA403BA07D0CEDF2329B1A58914ABB_Transition__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Transition_Constants
            {
                const ::DDS::Octet TRANSITION_CREATE_ = 0;

                const ::DDS::Octet TRANSITION_CONFIGURE_ = 1;

                const ::DDS::Octet TRANSITION_CLEANUP_ = 2;

                const ::DDS::Octet TRANSITION_ACTIVATE_ = 3;

                const ::DDS::Octet TRANSITION_DEACTIVATE_ = 4;

                const ::DDS::Octet TRANSITION_UNCONFIGURED_SHUTDOWN_ = 5;

                const ::DDS::Octet TRANSITION_INACTIVE_SHUTDOWN_ = 6;

                const ::DDS::Octet TRANSITION_ACTIVE_SHUTDOWN_ = 7;

                const ::DDS::Octet TRANSITION_DESTROY_ = 8;

                const ::DDS::Octet TRANSITION_ON_CONFIGURE_SUCCESS_ = 10;

                const ::DDS::Octet TRANSITION_ON_CONFIGURE_FAILURE_ = 11;

                const ::DDS::Octet TRANSITION_ON_CONFIGURE_ERROR_ = 12;

                const ::DDS::Octet TRANSITION_ON_CLEANUP_SUCCESS_ = 20;

                const ::DDS::Octet TRANSITION_ON_CLEANUP_FAILURE_ = 21;

                const ::DDS::Octet TRANSITION_ON_CLEANUP_ERROR_ = 22;

                const ::DDS::Octet TRANSITION_ON_ACTIVATE_SUCCESS_ = 30;

                const ::DDS::Octet TRANSITION_ON_ACTIVATE_FAILURE_ = 31;

                const ::DDS::Octet TRANSITION_ON_ACTIVATE_ERROR_ = 32;

                const ::DDS::Octet TRANSITION_ON_DEACTIVATE_SUCCESS_ = 40;

                const ::DDS::Octet TRANSITION_ON_DEACTIVATE_FAILURE_ = 41;

                const ::DDS::Octet TRANSITION_ON_DEACTIVATE_ERROR_ = 42;

                const ::DDS::Octet TRANSITION_ON_SHUTDOWN_SUCCESS_ = 50;

                const ::DDS::Octet TRANSITION_ON_SHUTDOWN_FAILURE_ = 51;

                const ::DDS::Octet TRANSITION_ON_SHUTDOWN_ERROR_ = 52;

                const ::DDS::Octet TRANSITION_ON_ERROR_SUCCESS_ = 60;

                const ::DDS::Octet TRANSITION_ON_ERROR_FAILURE_ = 61;

                const ::DDS::Octet TRANSITION_ON_ERROR_ERROR_ = 62;

                const ::DDS::Octet TRANSITION_CALLBACK_SUCCESS_ = 97;

                const ::DDS::Octet TRANSITION_CALLBACK_FAILURE_ = 98;

                const ::DDS::Octet TRANSITION_CALLBACK_ERROR_ = 99;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Transition_
            {
                ::DDS::Octet id_;
                ::DDS::String_mgr label_;
            };

            typedef DDS_DCPSStruct_var<Transition_> Transition__var;
            typedef DDS_DCPSStruct_out < Transition_> Transition__out;

        }

    }

}

#endif /* _H_3ABA403BA07D0CEDF2329B1A58914ABB_Transition__H_ */
