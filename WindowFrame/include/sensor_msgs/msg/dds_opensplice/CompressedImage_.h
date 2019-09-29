#ifndef _H_7BAE0845263813F3D121C02B3683C71D_CompressedImage__H_
#define _H_7BAE0845263813F3D121C02B3683C71D_CompressedImage__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs CompressedImage_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::String_mgr format_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<CompressedImage_> CompressedImage__var;
            typedef DDS_DCPSStruct_out < CompressedImage_> CompressedImage__out;

        }

    }

}

#endif /* _H_7BAE0845263813F3D121C02B3683C71D_CompressedImage__H_ */
