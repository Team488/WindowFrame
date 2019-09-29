#ifndef _H_3686DE4BE50904FB1D35B234C3985683_PointCloud2Update__H_
#define _H_3686DE4BE50904FB1D35B234C3985683_PointCloud2Update__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/dds_opensplice/PointCloud2_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace PointCloud2Update_Constants
            {
                const ::DDS::ULong ADD_ = 0U;

                const ::DDS::ULong DELETE_ = 1U;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs PointCloud2Update_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::ULong type_;
                ::sensor_msgs::msg::dds_::PointCloud2_ points_;
            };

            typedef DDS_DCPSStruct_var<PointCloud2Update_> PointCloud2Update__var;
            typedef DDS_DCPSStruct_out < PointCloud2Update_> PointCloud2Update__out;

        }

    }

}

#endif /* _H_3686DE4BE50904FB1D35B234C3985683_PointCloud2Update__H_ */
