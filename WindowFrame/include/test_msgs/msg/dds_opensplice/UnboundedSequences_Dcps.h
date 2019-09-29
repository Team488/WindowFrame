#ifndef _H_EF8B4EDB80AC563410F7D7CBD632D11D_UnboundedSequences_DCPS_H_
#define _H_EF8B4EDB80AC563410F7D7CBD632D11D_UnboundedSequences_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UnboundedSequences_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UnboundedSequences_TypeSupportInterface;

            typedef UnboundedSequences_TypeSupportInterface * UnboundedSequences_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UnboundedSequences_TypeSupportInterface> UnboundedSequences_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UnboundedSequences_TypeSupportInterface> UnboundedSequences_TypeSupportInterface_out;


            class UnboundedSequences_DataWriter;

            typedef UnboundedSequences_DataWriter * UnboundedSequences_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UnboundedSequences_DataWriter> UnboundedSequences_DataWriter_var;
            typedef DDS_DCPSInterface_out < UnboundedSequences_DataWriter> UnboundedSequences_DataWriter_out;


            class UnboundedSequences_DataReader;

            typedef UnboundedSequences_DataReader * UnboundedSequences_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UnboundedSequences_DataReader> UnboundedSequences_DataReader_var;
            typedef DDS_DCPSInterface_out < UnboundedSequences_DataReader> UnboundedSequences_DataReader_out;


            class UnboundedSequences_DataReaderView;

            typedef UnboundedSequences_DataReaderView * UnboundedSequences_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UnboundedSequences_DataReaderView> UnboundedSequences_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UnboundedSequences_DataReaderView> UnboundedSequences_DataReaderView_out;

            struct UnboundedSequences_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < UnboundedSequences_, struct UnboundedSequences_Seq_uniq_> UnboundedSequences_Seq;
            typedef DDS_DCPSSequence_var < UnboundedSequences_Seq> UnboundedSequences_Seq_var;
            typedef DDS_DCPSSequence_out < UnboundedSequences_Seq> UnboundedSequences_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs UnboundedSequences_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UnboundedSequences_TypeSupportInterface_ptr _ptr_type;
                typedef UnboundedSequences_TypeSupportInterface_var _var_type;

                static UnboundedSequences_TypeSupportInterface_ptr _duplicate (UnboundedSequences_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnboundedSequences_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UnboundedSequences_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnboundedSequences_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UnboundedSequences_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UnboundedSequences_TypeSupportInterface () {};
                ~UnboundedSequences_TypeSupportInterface () {};
            private:
                UnboundedSequences_TypeSupportInterface (const UnboundedSequences_TypeSupportInterface &);
                UnboundedSequences_TypeSupportInterface & operator = (const UnboundedSequences_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs UnboundedSequences_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UnboundedSequences_DataWriter_ptr _ptr_type;
                typedef UnboundedSequences_DataWriter_var _var_type;

                static UnboundedSequences_DataWriter_ptr _duplicate (UnboundedSequences_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnboundedSequences_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UnboundedSequences_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnboundedSequences_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UnboundedSequences_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UnboundedSequences_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UnboundedSequences_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UnboundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UnboundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UnboundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UnboundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UnboundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UnboundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UnboundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UnboundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UnboundedSequences_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnboundedSequences_& instance_data) = 0;

            protected:
                UnboundedSequences_DataWriter () {};
                ~UnboundedSequences_DataWriter () {};
            private:
                UnboundedSequences_DataWriter (const UnboundedSequences_DataWriter &);
                UnboundedSequences_DataWriter & operator = (const UnboundedSequences_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs UnboundedSequences_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UnboundedSequences_DataReader_ptr _ptr_type;
                typedef UnboundedSequences_DataReader_var _var_type;

                static UnboundedSequences_DataReader_ptr _duplicate (UnboundedSequences_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnboundedSequences_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UnboundedSequences_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnboundedSequences_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UnboundedSequences_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UnboundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UnboundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UnboundedSequences_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnboundedSequences_& instance) = 0;

            protected:
                UnboundedSequences_DataReader () {};
                ~UnboundedSequences_DataReader () {};
            private:
                UnboundedSequences_DataReader (const UnboundedSequences_DataReader &);
                UnboundedSequences_DataReader & operator = (const UnboundedSequences_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs UnboundedSequences_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UnboundedSequences_DataReaderView_ptr _ptr_type;
                typedef UnboundedSequences_DataReaderView_var _var_type;

                static UnboundedSequences_DataReaderView_ptr _duplicate (UnboundedSequences_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnboundedSequences_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UnboundedSequences_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnboundedSequences_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UnboundedSequences_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UnboundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UnboundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UnboundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UnboundedSequences_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnboundedSequences_& instance) = 0;

            protected:
                UnboundedSequences_DataReaderView () {};
                ~UnboundedSequences_DataReaderView () {};
            private:
                UnboundedSequences_DataReaderView (const UnboundedSequences_DataReaderView &);
                UnboundedSequences_DataReaderView & operator = (const UnboundedSequences_DataReaderView &);
            };
        }

    }

}

#endif
