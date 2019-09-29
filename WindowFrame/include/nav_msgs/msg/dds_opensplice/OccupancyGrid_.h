#ifndef _H_1517DF66AF1A37CB0B37263CC32E6CFE_OccupancyGrid__H_
#define _H_1517DF66AF1A37CB0B37263CC32E6CFE_OccupancyGrid__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "nav_msgs/msg/dds_opensplice/MapMetaData_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs OccupancyGrid_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::nav_msgs::msg::dds_::MapMetaData_ info_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<OccupancyGrid_> OccupancyGrid__var;
            typedef DDS_DCPSStruct_out < OccupancyGrid_> OccupancyGrid__out;

        }

    }

}

#endif /* _H_1517DF66AF1A37CB0B37263CC32E6CFE_OccupancyGrid__H_ */
