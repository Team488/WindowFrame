#ifndef _H_AF1892A4237E82A96AFE77D84E225976_Polygon__H_
#define _H_AF1892A4237E82A96AFE77D84E225976_Polygon__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Point32_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Polygon_
            {
                struct _points__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Point32_, struct _points__seq_uniq_ > _points__seq;
                typedef DDS_DCPSSequence_var< _points__seq > _points__seq_var;
                typedef DDS_DCPSSequence_out< _points__seq > _points__seq_out;
                _points__seq points_;
            };

            typedef DDS_DCPSStruct_var<Polygon_> Polygon__var;
            typedef DDS_DCPSStruct_out < Polygon_> Polygon__out;

        }

    }

}

#endif /* _H_AF1892A4237E82A96AFE77D84E225976_Polygon__H_ */
