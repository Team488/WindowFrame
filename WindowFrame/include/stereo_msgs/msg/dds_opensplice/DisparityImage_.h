#ifndef _H_E31D87DB2DF79C2CFBF9F29110A189AE_DisparityImage__H_
#define _H_E31D87DB2DF79C2CFBF9F29110A189AE_DisparityImage__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/dds_opensplice/Image_.h"
#include "sensor_msgs/msg/dds_opensplice/RegionOfInterest_.h"
#include "stereo_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace stereo_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs DisparityImage_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::sensor_msgs::msg::dds_::Image_ image_;
                ::DDS::Float f_;
                ::DDS::Float t_;
                ::sensor_msgs::msg::dds_::RegionOfInterest_ valid_window_;
                ::DDS::Float min_disparity_;
                ::DDS::Float max_disparity_;
                ::DDS::Float delta_d_;
            };

            typedef DDS_DCPSStruct_var<DisparityImage_> DisparityImage__var;
            typedef DDS_DCPSStruct_out < DisparityImage_> DisparityImage__out;

        }

    }

}

#endif /* _H_E31D87DB2DF79C2CFBF9F29110A189AE_DisparityImage__H_ */
