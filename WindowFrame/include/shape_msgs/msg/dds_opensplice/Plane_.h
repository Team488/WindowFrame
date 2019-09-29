#ifndef _H_7361E7116D72A8C795622D653FDA6FFE_Plane__H_
#define _H_7361E7116D72A8C795622D653FDA6FFE_Plane__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Plane_
            {
                struct _coef__uniq_{};
                typedef ::DDS::Double _coef__slice;
                typedef ::DDS::Double _coef_[4];
                typedef DDS_DCPS_FArray_var< _coef_, _coef__slice, struct _coef__uniq_ > _coef__var;
                typedef _coef_ _coef__out;
                typedef DDS_DCPS_Array_forany< _coef_, _coef__slice, struct _coef__uniq_ > _coef__forany;
                static _coef__slice *_coef__alloc();
                static void _coef__free(_coef__slice *);
                static void _coef__copy(_coef__slice *to, const _coef__slice *from);
                static _coef__slice *_coef__dup(const _coef__slice *from);
                _coef_ coef_;
            };

            typedef DDS_DCPSStruct_var<Plane_> Plane__var;
            typedef Plane_& Plane__out;

        }

    }

}

#endif /* _H_7361E7116D72A8C795622D653FDA6FFE_Plane__H_ */
