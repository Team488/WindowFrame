#ifndef _H_69056535A8A162F204F26EEAB77FE0AD_TwistWithCovarianceStamped__H_
#define _H_69056535A8A162F204F26EEAB77FE0AD_TwistWithCovarianceStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/TwistWithCovariance_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovarianceStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::TwistWithCovariance_ twist_;
            };

            typedef DDS_DCPSStruct_var<TwistWithCovarianceStamped_> TwistWithCovarianceStamped__var;
            typedef DDS_DCPSStruct_out < TwistWithCovarianceStamped_> TwistWithCovarianceStamped__out;

        }

    }

}

#endif /* _H_69056535A8A162F204F26EEAB77FE0AD_TwistWithCovarianceStamped__H_ */
