#ifndef _H_32956BABF2B433A7156890D254287479_MultiNested__H_
#define _H_32956BABF2B433A7156890D254287479_MultiNested__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/dds_opensplice/Arrays_.h"
#include "test_msgs/msg/dds_opensplice/BoundedSequences_.h"
#include "test_msgs/msg/dds_opensplice/UnboundedSequences_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs MultiNested_
            {
                struct _array_of_arrays__uniq_{};
                typedef ::test_msgs::msg::dds_::Arrays_ _array_of_arrays__slice;
                typedef ::test_msgs::msg::dds_::Arrays_ _array_of_arrays_[3];
                typedef DDS_DCPS_VArray_var< _array_of_arrays_, _array_of_arrays__slice, struct _array_of_arrays__uniq_ > _array_of_arrays__var;
                typedef DDS_DCPS_VLArray_out< _array_of_arrays_, _array_of_arrays__slice, _array_of_arrays__var, struct _array_of_arrays__uniq_ > _array_of_arrays__out;
                typedef DDS_DCPS_Array_forany< _array_of_arrays_, _array_of_arrays__slice, struct _array_of_arrays__uniq_ > _array_of_arrays__forany;
                static _array_of_arrays__slice *_array_of_arrays__alloc();
                static void _array_of_arrays__free(_array_of_arrays__slice *);
                static void _array_of_arrays__copy(_array_of_arrays__slice *to, const _array_of_arrays__slice *from);
                static _array_of_arrays__slice *_array_of_arrays__dup(const _array_of_arrays__slice *from);
                struct _array_of_bounded_sequences__uniq_{};
                typedef ::test_msgs::msg::dds_::BoundedSequences_ _array_of_bounded_sequences__slice;
                typedef ::test_msgs::msg::dds_::BoundedSequences_ _array_of_bounded_sequences_[3];
                typedef DDS_DCPS_VArray_var< _array_of_bounded_sequences_, _array_of_bounded_sequences__slice, struct _array_of_bounded_sequences__uniq_ > _array_of_bounded_sequences__var;
                typedef DDS_DCPS_VLArray_out< _array_of_bounded_sequences_, _array_of_bounded_sequences__slice, _array_of_bounded_sequences__var, struct _array_of_bounded_sequences__uniq_ > _array_of_bounded_sequences__out;
                typedef DDS_DCPS_Array_forany< _array_of_bounded_sequences_, _array_of_bounded_sequences__slice, struct _array_of_bounded_sequences__uniq_ > _array_of_bounded_sequences__forany;
                static _array_of_bounded_sequences__slice *_array_of_bounded_sequences__alloc();
                static void _array_of_bounded_sequences__free(_array_of_bounded_sequences__slice *);
                static void _array_of_bounded_sequences__copy(_array_of_bounded_sequences__slice *to, const _array_of_bounded_sequences__slice *from);
                static _array_of_bounded_sequences__slice *_array_of_bounded_sequences__dup(const _array_of_bounded_sequences__slice *from);
                struct _array_of_unbounded_sequences__uniq_{};
                typedef ::test_msgs::msg::dds_::UnboundedSequences_ _array_of_unbounded_sequences__slice;
                typedef ::test_msgs::msg::dds_::UnboundedSequences_ _array_of_unbounded_sequences_[3];
                typedef DDS_DCPS_VArray_var< _array_of_unbounded_sequences_, _array_of_unbounded_sequences__slice, struct _array_of_unbounded_sequences__uniq_ > _array_of_unbounded_sequences__var;
                typedef DDS_DCPS_VLArray_out< _array_of_unbounded_sequences_, _array_of_unbounded_sequences__slice, _array_of_unbounded_sequences__var, struct _array_of_unbounded_sequences__uniq_ > _array_of_unbounded_sequences__out;
                typedef DDS_DCPS_Array_forany< _array_of_unbounded_sequences_, _array_of_unbounded_sequences__slice, struct _array_of_unbounded_sequences__uniq_ > _array_of_unbounded_sequences__forany;
                static _array_of_unbounded_sequences__slice *_array_of_unbounded_sequences__alloc();
                static void _array_of_unbounded_sequences__free(_array_of_unbounded_sequences__slice *);
                static void _array_of_unbounded_sequences__copy(_array_of_unbounded_sequences__slice *to, const _array_of_unbounded_sequences__slice *from);
                static _array_of_unbounded_sequences__slice *_array_of_unbounded_sequences__dup(const _array_of_unbounded_sequences__slice *from);
                struct _bounded_sequence_of_arrays__seq_uniq_{};
                typedef DDS_DCPSBVLSeq< ::test_msgs::msg::dds_::Arrays_, 3 > _bounded_sequence_of_arrays__seq;
                typedef DDS_DCPSSequence_var< _bounded_sequence_of_arrays__seq > _bounded_sequence_of_arrays__seq_var;
                typedef DDS_DCPSSequence_out< _bounded_sequence_of_arrays__seq > _bounded_sequence_of_arrays__seq_out;
                struct _bounded_sequence_of_bounded_sequences__seq_uniq_{};
                typedef DDS_DCPSBVLSeq< ::test_msgs::msg::dds_::BoundedSequences_, 3 > _bounded_sequence_of_bounded_sequences__seq;
                typedef DDS_DCPSSequence_var< _bounded_sequence_of_bounded_sequences__seq > _bounded_sequence_of_bounded_sequences__seq_var;
                typedef DDS_DCPSSequence_out< _bounded_sequence_of_bounded_sequences__seq > _bounded_sequence_of_bounded_sequences__seq_out;
                struct _bounded_sequence_of_unbounded_sequences__seq_uniq_{};
                typedef DDS_DCPSBVLSeq< ::test_msgs::msg::dds_::UnboundedSequences_, 3 > _bounded_sequence_of_unbounded_sequences__seq;
                typedef DDS_DCPSSequence_var< _bounded_sequence_of_unbounded_sequences__seq > _bounded_sequence_of_unbounded_sequences__seq_var;
                typedef DDS_DCPSSequence_out< _bounded_sequence_of_unbounded_sequences__seq > _bounded_sequence_of_unbounded_sequences__seq_out;
                struct _unbounded_sequence_of_arrays__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::test_msgs::msg::dds_::Arrays_, struct _unbounded_sequence_of_arrays__seq_uniq_ > _unbounded_sequence_of_arrays__seq;
                typedef DDS_DCPSSequence_var< _unbounded_sequence_of_arrays__seq > _unbounded_sequence_of_arrays__seq_var;
                typedef DDS_DCPSSequence_out< _unbounded_sequence_of_arrays__seq > _unbounded_sequence_of_arrays__seq_out;
                struct _unbounded_sequence_of_bounded_sequences__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::test_msgs::msg::dds_::BoundedSequences_, struct _unbounded_sequence_of_bounded_sequences__seq_uniq_ > _unbounded_sequence_of_bounded_sequences__seq;
                typedef DDS_DCPSSequence_var< _unbounded_sequence_of_bounded_sequences__seq > _unbounded_sequence_of_bounded_sequences__seq_var;
                typedef DDS_DCPSSequence_out< _unbounded_sequence_of_bounded_sequences__seq > _unbounded_sequence_of_bounded_sequences__seq_out;
                struct _unbounded_sequence_of_unbounded_sequences__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::test_msgs::msg::dds_::UnboundedSequences_, struct _unbounded_sequence_of_unbounded_sequences__seq_uniq_ > _unbounded_sequence_of_unbounded_sequences__seq;
                typedef DDS_DCPSSequence_var< _unbounded_sequence_of_unbounded_sequences__seq > _unbounded_sequence_of_unbounded_sequences__seq_var;
                typedef DDS_DCPSSequence_out< _unbounded_sequence_of_unbounded_sequences__seq > _unbounded_sequence_of_unbounded_sequences__seq_out;
                _array_of_arrays_ array_of_arrays_;
                _array_of_bounded_sequences_ array_of_bounded_sequences_;
                _array_of_unbounded_sequences_ array_of_unbounded_sequences_;
                _bounded_sequence_of_arrays__seq bounded_sequence_of_arrays_;
                _bounded_sequence_of_bounded_sequences__seq bounded_sequence_of_bounded_sequences_;
                _bounded_sequence_of_unbounded_sequences__seq bounded_sequence_of_unbounded_sequences_;
                _unbounded_sequence_of_arrays__seq unbounded_sequence_of_arrays_;
                _unbounded_sequence_of_bounded_sequences__seq unbounded_sequence_of_bounded_sequences_;
                _unbounded_sequence_of_unbounded_sequences__seq unbounded_sequence_of_unbounded_sequences_;
            };

            typedef DDS_DCPSStruct_var<MultiNested_> MultiNested__var;
            typedef DDS_DCPSStruct_out < MultiNested_> MultiNested__out;

        }

    }

}

#endif /* _H_32956BABF2B433A7156890D254287479_MultiNested__H_ */
