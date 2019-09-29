#ifndef _H_91A6205CE793069D50AB4529DED0A97A_AccelWithCovarianceStamped__H_
#define _H_91A6205CE793069D50AB4529DED0A97A_AccelWithCovarianceStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/AccelWithCovariance_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovarianceStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::AccelWithCovariance_ accel_;
            };

            typedef DDS_DCPSStruct_var<AccelWithCovarianceStamped_> AccelWithCovarianceStamped__var;
            typedef DDS_DCPSStruct_out < AccelWithCovarianceStamped_> AccelWithCovarianceStamped__out;

        }

    }

}

#endif /* _H_91A6205CE793069D50AB4529DED0A97A_AccelWithCovarianceStamped__H_ */
