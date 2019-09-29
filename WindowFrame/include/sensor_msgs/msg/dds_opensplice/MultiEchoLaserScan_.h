#ifndef _H_58F5E4B87C3DC11E2839CBD81FAB359C_MultiEchoLaserScan__H_
#define _H_58F5E4B87C3DC11E2839CBD81FAB359C_MultiEchoLaserScan__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/dds_opensplice/LaserEcho_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MultiEchoLaserScan_
            {
                struct _ranges__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::sensor_msgs::msg::dds_::LaserEcho_, struct _ranges__seq_uniq_ > _ranges__seq;
                typedef DDS_DCPSSequence_var< _ranges__seq > _ranges__seq_var;
                typedef DDS_DCPSSequence_out< _ranges__seq > _ranges__seq_out;
                struct _intensities__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::sensor_msgs::msg::dds_::LaserEcho_, struct _intensities__seq_uniq_ > _intensities__seq;
                typedef DDS_DCPSSequence_var< _intensities__seq > _intensities__seq_var;
                typedef DDS_DCPSSequence_out< _intensities__seq > _intensities__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Float angle_min_;
                ::DDS::Float angle_max_;
                ::DDS::Float angle_increment_;
                ::DDS::Float time_increment_;
                ::DDS::Float scan_time_;
                ::DDS::Float range_min_;
                ::DDS::Float range_max_;
                _ranges__seq ranges_;
                _intensities__seq intensities_;
            };

            typedef DDS_DCPSStruct_var<MultiEchoLaserScan_> MultiEchoLaserScan__var;
            typedef DDS_DCPSStruct_out < MultiEchoLaserScan_> MultiEchoLaserScan__out;

        }

    }

}

#endif /* _H_58F5E4B87C3DC11E2839CBD81FAB359C_MultiEchoLaserScan__H_ */
