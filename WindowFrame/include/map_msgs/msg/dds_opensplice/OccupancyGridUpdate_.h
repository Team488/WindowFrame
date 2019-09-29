#ifndef _H_4E92FCAD470BCD7962E54CB2963348EE_OccupancyGridUpdate__H_
#define _H_4E92FCAD470BCD7962E54CB2963348EE_OccupancyGridUpdate__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs OccupancyGridUpdate_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Long x_;
                ::DDS::Long y_;
                ::DDS::ULong width_;
                ::DDS::ULong height_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<OccupancyGridUpdate_> OccupancyGridUpdate__var;
            typedef DDS_DCPSStruct_out < OccupancyGridUpdate_> OccupancyGridUpdate__out;

        }

    }

}

#endif /* _H_4E92FCAD470BCD7962E54CB2963348EE_OccupancyGridUpdate__H_ */
