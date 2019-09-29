#ifndef _H_59EF21FEEA60F73C85429A4A4261F873_FloatingPointRange__H_
#define _H_59EF21FEEA60F73C85429A4A4261F873_FloatingPointRange__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces FloatingPointRange_
            {
                ::DDS::Double from_value_;
                ::DDS::Double to_value_;
                ::DDS::Double step_;
            };

            typedef DDS_DCPSStruct_var<FloatingPointRange_> FloatingPointRange__var;
            typedef FloatingPointRange_& FloatingPointRange__out;

        }

    }

}

#endif /* _H_59EF21FEEA60F73C85429A4A4261F873_FloatingPointRange__H_ */
