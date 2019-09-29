#ifndef _H_573AF7143716A56B843BB495F9645F38_IntegerRange__H_
#define _H_573AF7143716A56B843BB495F9645F38_IntegerRange__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces IntegerRange_
            {
                ::DDS::LongLong from_value_;
                ::DDS::LongLong to_value_;
                ::DDS::ULongLong step_;
            };

            typedef DDS_DCPSStruct_var<IntegerRange_> IntegerRange__var;
            typedef IntegerRange_& IntegerRange__out;

        }

    }

}

#endif /* _H_573AF7143716A56B843BB495F9645F38_IntegerRange__H_ */
