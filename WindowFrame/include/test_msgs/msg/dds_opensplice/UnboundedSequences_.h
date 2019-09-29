#ifndef _H_EF8B4EDB80AC563410F7D7CBD632D11D_UnboundedSequences__H_
#define _H_EF8B4EDB80AC563410F7D7CBD632D11D_UnboundedSequences__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/dds_opensplice/BasicTypes_.h"
#include "test_msgs/msg/dds_opensplice/Constants_.h"
#include "test_msgs/msg/dds_opensplice/Defaults_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs UnboundedSequences_
            {
                struct _bool_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Boolean, struct _bool_values__seq_uniq_ > _bool_values__seq;
                typedef DDS_DCPSSequence_var< _bool_values__seq > _bool_values__seq_var;
                typedef DDS_DCPSSequence_out< _bool_values__seq > _bool_values__seq_out;
                struct _byte_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _byte_values__seq_uniq_ > _byte_values__seq;
                typedef DDS_DCPSSequence_var< _byte_values__seq > _byte_values__seq_var;
                typedef DDS_DCPSSequence_out< _byte_values__seq > _byte_values__seq_out;
                struct _char_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _char_values__seq_uniq_ > _char_values__seq;
                typedef DDS_DCPSSequence_var< _char_values__seq > _char_values__seq_var;
                typedef DDS_DCPSSequence_out< _char_values__seq > _char_values__seq_out;
                struct _float32_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _float32_values__seq_uniq_ > _float32_values__seq;
                typedef DDS_DCPSSequence_var< _float32_values__seq > _float32_values__seq_var;
                typedef DDS_DCPSSequence_out< _float32_values__seq > _float32_values__seq_out;
                struct _float64_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _float64_values__seq_uniq_ > _float64_values__seq;
                typedef DDS_DCPSSequence_var< _float64_values__seq > _float64_values__seq_var;
                typedef DDS_DCPSSequence_out< _float64_values__seq > _float64_values__seq_out;
                struct _int8_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _int8_values__seq_uniq_ > _int8_values__seq;
                typedef DDS_DCPSSequence_var< _int8_values__seq > _int8_values__seq_var;
                typedef DDS_DCPSSequence_out< _int8_values__seq > _int8_values__seq_out;
                struct _uint8_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _uint8_values__seq_uniq_ > _uint8_values__seq;
                typedef DDS_DCPSSequence_var< _uint8_values__seq > _uint8_values__seq_var;
                typedef DDS_DCPSSequence_out< _uint8_values__seq > _uint8_values__seq_out;
                struct _int16_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Short, struct _int16_values__seq_uniq_ > _int16_values__seq;
                typedef DDS_DCPSSequence_var< _int16_values__seq > _int16_values__seq_var;
                typedef DDS_DCPSSequence_out< _int16_values__seq > _int16_values__seq_out;
                struct _uint16_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::UShort, struct _uint16_values__seq_uniq_ > _uint16_values__seq;
                typedef DDS_DCPSSequence_var< _uint16_values__seq > _uint16_values__seq_var;
                typedef DDS_DCPSSequence_out< _uint16_values__seq > _uint16_values__seq_out;
                struct _int32_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Long, struct _int32_values__seq_uniq_ > _int32_values__seq;
                typedef DDS_DCPSSequence_var< _int32_values__seq > _int32_values__seq_var;
                typedef DDS_DCPSSequence_out< _int32_values__seq > _int32_values__seq_out;
                struct _uint32_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULong, struct _uint32_values__seq_uniq_ > _uint32_values__seq;
                typedef DDS_DCPSSequence_var< _uint32_values__seq > _uint32_values__seq_var;
                typedef DDS_DCPSSequence_out< _uint32_values__seq > _uint32_values__seq_out;
                struct _int64_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::LongLong, struct _int64_values__seq_uniq_ > _int64_values__seq;
                typedef DDS_DCPSSequence_var< _int64_values__seq > _int64_values__seq_var;
                typedef DDS_DCPSSequence_out< _int64_values__seq > _int64_values__seq_out;
                struct _uint64_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULongLong, struct _uint64_values__seq_uniq_ > _uint64_values__seq;
                typedef DDS_DCPSSequence_var< _uint64_values__seq > _uint64_values__seq_var;
                typedef DDS_DCPSSequence_out< _uint64_values__seq > _uint64_values__seq_out;
                struct _string_values__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _string_values__seq_uniq_ > _string_values__seq;
                typedef DDS_DCPSUStrSeq_var< _string_values__seq > _string_values__seq_var;
                typedef DDS_DCPSUStrSeq_out< _string_values__seq > _string_values__seq_out;
                struct _basic_types_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::test_msgs::msg::dds_::BasicTypes_, struct _basic_types_values__seq_uniq_ > _basic_types_values__seq;
                typedef DDS_DCPSSequence_var< _basic_types_values__seq > _basic_types_values__seq_var;
                typedef DDS_DCPSSequence_out< _basic_types_values__seq > _basic_types_values__seq_out;
                struct _constants_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::test_msgs::msg::dds_::Constants_, struct _constants_values__seq_uniq_ > _constants_values__seq;
                typedef DDS_DCPSSequence_var< _constants_values__seq > _constants_values__seq_var;
                typedef DDS_DCPSSequence_out< _constants_values__seq > _constants_values__seq_out;
                struct _defaults_values__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::test_msgs::msg::dds_::Defaults_, struct _defaults_values__seq_uniq_ > _defaults_values__seq;
                typedef DDS_DCPSSequence_var< _defaults_values__seq > _defaults_values__seq_var;
                typedef DDS_DCPSSequence_out< _defaults_values__seq > _defaults_values__seq_out;
                struct _bool_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Boolean, struct _bool_values_default__seq_uniq_ > _bool_values_default__seq;
                typedef DDS_DCPSSequence_var< _bool_values_default__seq > _bool_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _bool_values_default__seq > _bool_values_default__seq_out;
                struct _byte_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _byte_values_default__seq_uniq_ > _byte_values_default__seq;
                typedef DDS_DCPSSequence_var< _byte_values_default__seq > _byte_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _byte_values_default__seq > _byte_values_default__seq_out;
                struct _char_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _char_values_default__seq_uniq_ > _char_values_default__seq;
                typedef DDS_DCPSSequence_var< _char_values_default__seq > _char_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _char_values_default__seq > _char_values_default__seq_out;
                struct _float32_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _float32_values_default__seq_uniq_ > _float32_values_default__seq;
                typedef DDS_DCPSSequence_var< _float32_values_default__seq > _float32_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _float32_values_default__seq > _float32_values_default__seq_out;
                struct _float64_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _float64_values_default__seq_uniq_ > _float64_values_default__seq;
                typedef DDS_DCPSSequence_var< _float64_values_default__seq > _float64_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _float64_values_default__seq > _float64_values_default__seq_out;
                struct _int8_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _int8_values_default__seq_uniq_ > _int8_values_default__seq;
                typedef DDS_DCPSSequence_var< _int8_values_default__seq > _int8_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _int8_values_default__seq > _int8_values_default__seq_out;
                struct _uint8_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _uint8_values_default__seq_uniq_ > _uint8_values_default__seq;
                typedef DDS_DCPSSequence_var< _uint8_values_default__seq > _uint8_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _uint8_values_default__seq > _uint8_values_default__seq_out;
                struct _int16_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Short, struct _int16_values_default__seq_uniq_ > _int16_values_default__seq;
                typedef DDS_DCPSSequence_var< _int16_values_default__seq > _int16_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _int16_values_default__seq > _int16_values_default__seq_out;
                struct _uint16_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::UShort, struct _uint16_values_default__seq_uniq_ > _uint16_values_default__seq;
                typedef DDS_DCPSSequence_var< _uint16_values_default__seq > _uint16_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _uint16_values_default__seq > _uint16_values_default__seq_out;
                struct _int32_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Long, struct _int32_values_default__seq_uniq_ > _int32_values_default__seq;
                typedef DDS_DCPSSequence_var< _int32_values_default__seq > _int32_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _int32_values_default__seq > _int32_values_default__seq_out;
                struct _uint32_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULong, struct _uint32_values_default__seq_uniq_ > _uint32_values_default__seq;
                typedef DDS_DCPSSequence_var< _uint32_values_default__seq > _uint32_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _uint32_values_default__seq > _uint32_values_default__seq_out;
                struct _int64_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::LongLong, struct _int64_values_default__seq_uniq_ > _int64_values_default__seq;
                typedef DDS_DCPSSequence_var< _int64_values_default__seq > _int64_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _int64_values_default__seq > _int64_values_default__seq_out;
                struct _uint64_values_default__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULongLong, struct _uint64_values_default__seq_uniq_ > _uint64_values_default__seq;
                typedef DDS_DCPSSequence_var< _uint64_values_default__seq > _uint64_values_default__seq_var;
                typedef DDS_DCPSSequence_out< _uint64_values_default__seq > _uint64_values_default__seq_out;
                struct _string_values_default__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _string_values_default__seq_uniq_ > _string_values_default__seq;
                typedef DDS_DCPSUStrSeq_var< _string_values_default__seq > _string_values_default__seq_var;
                typedef DDS_DCPSUStrSeq_out< _string_values_default__seq > _string_values_default__seq_out;
                _bool_values__seq bool_values_;
                _byte_values__seq byte_values_;
                _char_values__seq char_values_;
                _float32_values__seq float32_values_;
                _float64_values__seq float64_values_;
                _int8_values__seq int8_values_;
                _uint8_values__seq uint8_values_;
                _int16_values__seq int16_values_;
                _uint16_values__seq uint16_values_;
                _int32_values__seq int32_values_;
                _uint32_values__seq uint32_values_;
                _int64_values__seq int64_values_;
                _uint64_values__seq uint64_values_;
                _string_values__seq string_values_;
                _basic_types_values__seq basic_types_values_;
                _constants_values__seq constants_values_;
                _defaults_values__seq defaults_values_;
                _bool_values_default__seq bool_values_default_;
                _byte_values_default__seq byte_values_default_;
                _char_values_default__seq char_values_default_;
                _float32_values_default__seq float32_values_default_;
                _float64_values_default__seq float64_values_default_;
                _int8_values_default__seq int8_values_default_;
                _uint8_values_default__seq uint8_values_default_;
                _int16_values_default__seq int16_values_default_;
                _uint16_values_default__seq uint16_values_default_;
                _int32_values_default__seq int32_values_default_;
                _uint32_values_default__seq uint32_values_default_;
                _int64_values_default__seq int64_values_default_;
                _uint64_values_default__seq uint64_values_default_;
                _string_values_default__seq string_values_default_;
                ::DDS::Long alignment_check_;
            };

            typedef DDS_DCPSStruct_var<UnboundedSequences_> UnboundedSequences__var;
            typedef DDS_DCPSStruct_out < UnboundedSequences_> UnboundedSequences__out;

        }

    }

}

#endif /* _H_EF8B4EDB80AC563410F7D7CBD632D11D_UnboundedSequences__H_ */
