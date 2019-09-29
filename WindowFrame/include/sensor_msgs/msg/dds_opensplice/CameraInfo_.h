#ifndef _H_E4E8B4BFB0E3E223BFC1C02EC1F02751_CameraInfo__H_
#define _H_E4E8B4BFB0E3E223BFC1C02EC1F02751_CameraInfo__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/dds_opensplice/RegionOfInterest_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs CameraInfo_
            {
                struct _d__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _d__seq_uniq_ > _d__seq;
                typedef DDS_DCPSSequence_var< _d__seq > _d__seq_var;
                typedef DDS_DCPSSequence_out< _d__seq > _d__seq_out;
                struct _k__uniq_{};
                typedef ::DDS::Double _k__slice;
                typedef ::DDS::Double _k_[9];
                typedef DDS_DCPS_FArray_var< _k_, _k__slice, struct _k__uniq_ > _k__var;
                typedef _k_ _k__out;
                typedef DDS_DCPS_Array_forany< _k_, _k__slice, struct _k__uniq_ > _k__forany;
                static _k__slice *_k__alloc();
                static void _k__free(_k__slice *);
                static void _k__copy(_k__slice *to, const _k__slice *from);
                static _k__slice *_k__dup(const _k__slice *from);
                struct _r__uniq_{};
                typedef ::DDS::Double _r__slice;
                typedef ::DDS::Double _r_[9];
                typedef DDS_DCPS_FArray_var< _r_, _r__slice, struct _r__uniq_ > _r__var;
                typedef _r_ _r__out;
                typedef DDS_DCPS_Array_forany< _r_, _r__slice, struct _r__uniq_ > _r__forany;
                static _r__slice *_r__alloc();
                static void _r__free(_r__slice *);
                static void _r__copy(_r__slice *to, const _r__slice *from);
                static _r__slice *_r__dup(const _r__slice *from);
                struct _p__uniq_{};
                typedef ::DDS::Double _p__slice;
                typedef ::DDS::Double _p_[12];
                typedef DDS_DCPS_FArray_var< _p_, _p__slice, struct _p__uniq_ > _p__var;
                typedef _p_ _p__out;
                typedef DDS_DCPS_Array_forany< _p_, _p__slice, struct _p__uniq_ > _p__forany;
                static _p__slice *_p__alloc();
                static void _p__free(_p__slice *);
                static void _p__copy(_p__slice *to, const _p__slice *from);
                static _p__slice *_p__dup(const _p__slice *from);
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::ULong height_;
                ::DDS::ULong width_;
                ::DDS::String_mgr distortion_model_;
                _d__seq d_;
                _k_ k_;
                _r_ r_;
                _p_ p_;
                ::DDS::ULong binning_x_;
                ::DDS::ULong binning_y_;
                ::sensor_msgs::msg::dds_::RegionOfInterest_ roi_;
            };

            typedef DDS_DCPSStruct_var<CameraInfo_> CameraInfo__var;
            typedef DDS_DCPSStruct_out < CameraInfo_> CameraInfo__out;

        }

    }

}

#endif /* _H_E4E8B4BFB0E3E223BFC1C02EC1F02751_CameraInfo__H_ */
