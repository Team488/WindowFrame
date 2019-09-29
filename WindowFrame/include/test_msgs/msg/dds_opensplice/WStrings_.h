#ifndef _H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings__H_
#define _H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs WStrings_
            {
                struct _array_of_wstrings__uniq_{};
                typedef ::DDS::String_mgr _array_of_wstrings__slice;
                typedef ::DDS::String_mgr _array_of_wstrings_[3];
                typedef DDS_DCPS_VArray_var< _array_of_wstrings_, _array_of_wstrings__slice, struct _array_of_wstrings__uniq_ > _array_of_wstrings__var;
                typedef DDS_DCPS_VLArray_out< _array_of_wstrings_, _array_of_wstrings__slice, _array_of_wstrings__var, struct _array_of_wstrings__uniq_ > _array_of_wstrings__out;
                typedef DDS_DCPS_Array_forany< _array_of_wstrings_, _array_of_wstrings__slice, struct _array_of_wstrings__uniq_ > _array_of_wstrings__forany;
                static _array_of_wstrings__slice *_array_of_wstrings__alloc();
                static void _array_of_wstrings__free(_array_of_wstrings__slice *);
                static void _array_of_wstrings__copy(_array_of_wstrings__slice *to, const _array_of_wstrings__slice *from);
                static _array_of_wstrings__slice *_array_of_wstrings__dup(const _array_of_wstrings__slice *from);
                struct _bounded_sequence_of_wstrings__seq_uniq_{};
                typedef DDS_DCPSBStrSeq< 3 > _bounded_sequence_of_wstrings__seq;
                typedef DDS_DCPSSequence_var< _bounded_sequence_of_wstrings__seq > _bounded_sequence_of_wstrings__seq_var;
                typedef DDS_DCPSSequence_out< _bounded_sequence_of_wstrings__seq > _bounded_sequence_of_wstrings__seq_out;
                struct _unbounded_sequence_of_wstrings__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _unbounded_sequence_of_wstrings__seq_uniq_ > _unbounded_sequence_of_wstrings__seq;
                typedef DDS_DCPSUStrSeq_var< _unbounded_sequence_of_wstrings__seq > _unbounded_sequence_of_wstrings__seq_var;
                typedef DDS_DCPSUStrSeq_out< _unbounded_sequence_of_wstrings__seq > _unbounded_sequence_of_wstrings__seq_out;
                ::DDS::String_mgr wstring_value_;
                _array_of_wstrings_ array_of_wstrings_;
                _bounded_sequence_of_wstrings__seq bounded_sequence_of_wstrings_;
                _unbounded_sequence_of_wstrings__seq unbounded_sequence_of_wstrings_;
            };

            typedef DDS_DCPSStruct_var<WStrings_> WStrings__var;
            typedef DDS_DCPSStruct_out < WStrings_> WStrings__out;

        }

    }

}

#endif /* _H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings__H_ */
