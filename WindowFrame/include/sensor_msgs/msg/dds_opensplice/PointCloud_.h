#ifndef _H_AC05FC9038B71117EED1FEC5B3BCFEB9_PointCloud__H_
#define _H_AC05FC9038B71117EED1FEC5B3BCFEB9_PointCloud__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Point32_.h"
#include "sensor_msgs/msg/dds_opensplice/ChannelFloat32_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud_
            {
                struct _points__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Point32_, struct _points__seq_uniq_ > _points__seq;
                typedef DDS_DCPSSequence_var< _points__seq > _points__seq_var;
                typedef DDS_DCPSSequence_out< _points__seq > _points__seq_out;
                struct _channels__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::sensor_msgs::msg::dds_::ChannelFloat32_, struct _channels__seq_uniq_ > _channels__seq;
                typedef DDS_DCPSSequence_var< _channels__seq > _channels__seq_var;
                typedef DDS_DCPSSequence_out< _channels__seq > _channels__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _points__seq points_;
                _channels__seq channels_;
            };

            typedef DDS_DCPSStruct_var<PointCloud_> PointCloud__var;
            typedef DDS_DCPSStruct_out < PointCloud_> PointCloud__out;

        }

    }

}

#endif /* _H_AC05FC9038B71117EED1FEC5B3BCFEB9_PointCloud__H_ */
