#ifndef _H_32956BABF2B433A7156890D254287479_MultiNested_DCPS_H_
#define _H_32956BABF2B433A7156890D254287479_MultiNested_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MultiNested_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MultiNested_TypeSupportInterface;

            typedef MultiNested_TypeSupportInterface * MultiNested_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MultiNested_TypeSupportInterface> MultiNested_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MultiNested_TypeSupportInterface> MultiNested_TypeSupportInterface_out;


            class MultiNested_DataWriter;

            typedef MultiNested_DataWriter * MultiNested_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MultiNested_DataWriter> MultiNested_DataWriter_var;
            typedef DDS_DCPSInterface_out < MultiNested_DataWriter> MultiNested_DataWriter_out;


            class MultiNested_DataReader;

            typedef MultiNested_DataReader * MultiNested_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MultiNested_DataReader> MultiNested_DataReader_var;
            typedef DDS_DCPSInterface_out < MultiNested_DataReader> MultiNested_DataReader_out;


            class MultiNested_DataReaderView;

            typedef MultiNested_DataReaderView * MultiNested_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MultiNested_DataReaderView> MultiNested_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MultiNested_DataReaderView> MultiNested_DataReaderView_out;

            struct MultiNested_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MultiNested_, struct MultiNested_Seq_uniq_> MultiNested_Seq;
            typedef DDS_DCPSSequence_var < MultiNested_Seq> MultiNested_Seq_var;
            typedef DDS_DCPSSequence_out < MultiNested_Seq> MultiNested_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs MultiNested_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MultiNested_TypeSupportInterface_ptr _ptr_type;
                typedef MultiNested_TypeSupportInterface_var _var_type;

                static MultiNested_TypeSupportInterface_ptr _duplicate (MultiNested_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiNested_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MultiNested_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiNested_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiNested_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MultiNested_TypeSupportInterface () {};
                ~MultiNested_TypeSupportInterface () {};
            private:
                MultiNested_TypeSupportInterface (const MultiNested_TypeSupportInterface &);
                MultiNested_TypeSupportInterface & operator = (const MultiNested_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs MultiNested_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MultiNested_DataWriter_ptr _ptr_type;
                typedef MultiNested_DataWriter_var _var_type;

                static MultiNested_DataWriter_ptr _duplicate (MultiNested_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiNested_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MultiNested_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiNested_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiNested_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MultiNested_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MultiNested_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MultiNested_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MultiNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MultiNested_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MultiNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MultiNested_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MultiNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MultiNested_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MultiNested_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MultiNested_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiNested_& instance_data) = 0;

            protected:
                MultiNested_DataWriter () {};
                ~MultiNested_DataWriter () {};
            private:
                MultiNested_DataWriter (const MultiNested_DataWriter &);
                MultiNested_DataWriter & operator = (const MultiNested_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs MultiNested_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MultiNested_DataReader_ptr _ptr_type;
                typedef MultiNested_DataReader_var _var_type;

                static MultiNested_DataReader_ptr _duplicate (MultiNested_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiNested_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MultiNested_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiNested_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiNested_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiNested_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiNested_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiNested_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiNested_& instance) = 0;

            protected:
                MultiNested_DataReader () {};
                ~MultiNested_DataReader () {};
            private:
                MultiNested_DataReader (const MultiNested_DataReader &);
                MultiNested_DataReader & operator = (const MultiNested_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs MultiNested_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MultiNested_DataReaderView_ptr _ptr_type;
                typedef MultiNested_DataReaderView_var _var_type;

                static MultiNested_DataReaderView_ptr _duplicate (MultiNested_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiNested_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MultiNested_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiNested_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiNested_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiNested_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiNested_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiNested_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiNested_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiNested_& instance) = 0;

            protected:
                MultiNested_DataReaderView () {};
                ~MultiNested_DataReaderView () {};
            private:
                MultiNested_DataReaderView (const MultiNested_DataReaderView &);
                MultiNested_DataReaderView & operator = (const MultiNested_DataReaderView &);
            };
        }

    }

}

#endif
