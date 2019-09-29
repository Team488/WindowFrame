#ifndef _H_00268DDE05B7C4AEDFBC595204C415E4_UUID__H_
#define _H_00268DDE05B7C4AEDFBC595204C415E4_UUID__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace unique_identifier_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs UUID_
            {
                struct _uuid__uniq_{};
                typedef ::DDS::Octet _uuid__slice;
                typedef ::DDS::Octet _uuid_[16];
                typedef DDS_DCPS_FArray_var< _uuid_, _uuid__slice, struct _uuid__uniq_ > _uuid__var;
                typedef _uuid_ _uuid__out;
                typedef DDS_DCPS_Array_forany< _uuid_, _uuid__slice, struct _uuid__uniq_ > _uuid__forany;
                static _uuid__slice *_uuid__alloc();
                static void _uuid__free(_uuid__slice *);
                static void _uuid__copy(_uuid__slice *to, const _uuid__slice *from);
                static _uuid__slice *_uuid__dup(const _uuid__slice *from);
                _uuid_ uuid_;
            };

            typedef DDS_DCPSStruct_var<UUID_> UUID__var;
            typedef UUID_& UUID__out;

        }

    }

}

#endif /* _H_00268DDE05B7C4AEDFBC595204C415E4_UUID__H_ */
