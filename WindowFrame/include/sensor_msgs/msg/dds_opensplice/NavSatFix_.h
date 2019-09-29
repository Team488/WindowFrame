#ifndef _H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix__H_
#define _H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/dds_opensplice/NavSatStatus_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace NavSatFix_Constants
            {
                const ::DDS::Octet COVARIANCE_TYPE_UNKNOWN_ = 0;

                const ::DDS::Octet COVARIANCE_TYPE_APPROXIMATED_ = 1;

                const ::DDS::Octet COVARIANCE_TYPE_DIAGONAL_KNOWN_ = 2;

                const ::DDS::Octet COVARIANCE_TYPE_KNOWN_ = 3;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatFix_
            {
                struct _position_covariance__uniq_{};
                typedef ::DDS::Double _position_covariance__slice;
                typedef ::DDS::Double _position_covariance_[9];
                typedef DDS_DCPS_FArray_var< _position_covariance_, _position_covariance__slice, struct _position_covariance__uniq_ > _position_covariance__var;
                typedef _position_covariance_ _position_covariance__out;
                typedef DDS_DCPS_Array_forany< _position_covariance_, _position_covariance__slice, struct _position_covariance__uniq_ > _position_covariance__forany;
                static _position_covariance__slice *_position_covariance__alloc();
                static void _position_covariance__free(_position_covariance__slice *);
                static void _position_covariance__copy(_position_covariance__slice *to, const _position_covariance__slice *from);
                static _position_covariance__slice *_position_covariance__dup(const _position_covariance__slice *from);
                ::std_msgs::msg::dds_::Header_ header_;
                ::sensor_msgs::msg::dds_::NavSatStatus_ status_;
                ::DDS::Double latitude_;
                ::DDS::Double longitude_;
                ::DDS::Double altitude_;
                _position_covariance_ position_covariance_;
                ::DDS::Octet position_covariance_type_;
            };

            typedef DDS_DCPSStruct_var<NavSatFix_> NavSatFix__var;
            typedef DDS_DCPSStruct_out < NavSatFix_> NavSatFix__out;

        }

    }

}

#endif /* _H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix__H_ */
