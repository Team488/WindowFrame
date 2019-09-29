#ifndef _H_F641A1B9402EDAEC8307A9C189D3A4AA_TwistWithCovariance__H_
#define _H_F641A1B9402EDAEC8307A9C189D3A4AA_TwistWithCovariance__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Twist_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovariance_
            {
                struct _covariance__uniq_{};
                typedef ::DDS::Double _covariance__slice;
                typedef ::DDS::Double _covariance_[36];
                typedef DDS_DCPS_FArray_var< _covariance_, _covariance__slice, struct _covariance__uniq_ > _covariance__var;
                typedef _covariance_ _covariance__out;
                typedef DDS_DCPS_Array_forany< _covariance_, _covariance__slice, struct _covariance__uniq_ > _covariance__forany;
                static _covariance__slice *_covariance__alloc();
                static void _covariance__free(_covariance__slice *);
                static void _covariance__copy(_covariance__slice *to, const _covariance__slice *from);
                static _covariance__slice *_covariance__dup(const _covariance__slice *from);
                ::geometry_msgs::msg::dds_::Twist_ twist_;
                _covariance_ covariance_;
            };

            typedef DDS_DCPSStruct_var<TwistWithCovariance_> TwistWithCovariance__var;
            typedef TwistWithCovariance_& TwistWithCovariance__out;

        }

    }

}

#endif /* _H_F641A1B9402EDAEC8307A9C189D3A4AA_TwistWithCovariance__H_ */
