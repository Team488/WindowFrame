#ifndef _H_5FAF3CACD957DF193045B169109FE222_State__H_
#define _H_5FAF3CACD957DF193045B169109FE222_State__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace State_Constants
            {
                const ::DDS::Octet PRIMARY_STATE_UNKNOWN_ = 0;

                const ::DDS::Octet PRIMARY_STATE_UNCONFIGURED_ = 1;

                const ::DDS::Octet PRIMARY_STATE_INACTIVE_ = 2;

                const ::DDS::Octet PRIMARY_STATE_ACTIVE_ = 3;

                const ::DDS::Octet PRIMARY_STATE_FINALIZED_ = 4;

                const ::DDS::Octet TRANSITION_STATE_CONFIGURING_ = 10;

                const ::DDS::Octet TRANSITION_STATE_CLEANINGUP_ = 11;

                const ::DDS::Octet TRANSITION_STATE_SHUTTINGDOWN_ = 12;

                const ::DDS::Octet TRANSITION_STATE_ACTIVATING_ = 13;

                const ::DDS::Octet TRANSITION_STATE_DEACTIVATING_ = 14;

                const ::DDS::Octet TRANSITION_STATE_ERRORPROCESSING_ = 15;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs State_
            {
                ::DDS::Octet id_;
                ::DDS::String_mgr label_;
            };

            typedef DDS_DCPSStruct_var<State_> State__var;
            typedef DDS_DCPSStruct_out < State_> State__out;

        }

    }

}

#endif /* _H_5FAF3CACD957DF193045B169109FE222_State__H_ */
