#ifndef _H_55B09BB27C55629B001B1DA519A7B79D_IntraProcessMessage__H_
#define _H_55B09BB27C55629B001B1DA519A7B79D_IntraProcessMessage__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces IntraProcessMessage_
            {
                ::DDS::ULongLong publisher_id_;
                ::DDS::ULongLong message_sequence_;
            };

            typedef DDS_DCPSStruct_var<IntraProcessMessage_> IntraProcessMessage__var;
            typedef IntraProcessMessage_& IntraProcessMessage__out;

        }

    }

}

#endif /* _H_55B09BB27C55629B001B1DA519A7B79D_IntraProcessMessage__H_ */
