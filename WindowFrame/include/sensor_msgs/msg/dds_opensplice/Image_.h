#ifndef _H_34BD2EF4CCF5BFF24BDDD3C397B9C913_Image__H_
#define _H_34BD2EF4CCF5BFF24BDDD3C397B9C913_Image__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Image_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::ULong height_;
                ::DDS::ULong width_;
                ::DDS::String_mgr encoding_;
                ::DDS::Octet is_bigendian_;
                ::DDS::ULong step_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<Image_> Image__var;
            typedef DDS_DCPSStruct_out < Image_> Image__out;

        }

    }

}

#endif /* _H_34BD2EF4CCF5BFF24BDDD3C397B9C913_Image__H_ */
