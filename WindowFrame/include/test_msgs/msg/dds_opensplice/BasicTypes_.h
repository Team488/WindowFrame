#ifndef _H_E72ACE1F888936C278F409DEB364A493_BasicTypes__H_
#define _H_E72ACE1F888936C278F409DEB364A493_BasicTypes__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_
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
            };

            typedef DDS_DCPSStruct_var<BasicTypes_> BasicTypes__var;
            typedef BasicTypes_& BasicTypes__out;

        }

    }

}

#endif /* _H_E72ACE1F888936C278F409DEB364A493_BasicTypes__H_ */
