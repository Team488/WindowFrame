#ifndef _H_FF489A9FEF26B9A264BA9EDA850FAFA0_DiagnosticArray_DCPS_H_
#define _H_FF489A9FEF26B9A264BA9EDA850FAFA0_DiagnosticArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "DiagnosticArray_.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace diagnostic_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class DiagnosticArray_TypeSupportInterface;

            typedef DiagnosticArray_TypeSupportInterface * DiagnosticArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < DiagnosticArray_TypeSupportInterface> DiagnosticArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < DiagnosticArray_TypeSupportInterface> DiagnosticArray_TypeSupportInterface_out;


            class DiagnosticArray_DataWriter;

            typedef DiagnosticArray_DataWriter * DiagnosticArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < DiagnosticArray_DataWriter> DiagnosticArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < DiagnosticArray_DataWriter> DiagnosticArray_DataWriter_out;


            class DiagnosticArray_DataReader;

            typedef DiagnosticArray_DataReader * DiagnosticArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < DiagnosticArray_DataReader> DiagnosticArray_DataReader_var;
            typedef DDS_DCPSInterface_out < DiagnosticArray_DataReader> DiagnosticArray_DataReader_out;


            class DiagnosticArray_DataReaderView;

            typedef DiagnosticArray_DataReaderView * DiagnosticArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < DiagnosticArray_DataReaderView> DiagnosticArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < DiagnosticArray_DataReaderView> DiagnosticArray_DataReaderView_out;

            struct DiagnosticArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < DiagnosticArray_, struct DiagnosticArray_Seq_uniq_> DiagnosticArray_Seq;
            typedef DDS_DCPSSequence_var < DiagnosticArray_Seq> DiagnosticArray_Seq_var;
            typedef DDS_DCPSSequence_out < DiagnosticArray_Seq> DiagnosticArray_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs DiagnosticArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef DiagnosticArray_TypeSupportInterface_ptr _ptr_type;
                typedef DiagnosticArray_TypeSupportInterface_var _var_type;

                static DiagnosticArray_TypeSupportInterface_ptr _duplicate (DiagnosticArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DiagnosticArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static DiagnosticArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DiagnosticArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                DiagnosticArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                DiagnosticArray_TypeSupportInterface () {};
                ~DiagnosticArray_TypeSupportInterface () {};
            private:
                DiagnosticArray_TypeSupportInterface (const DiagnosticArray_TypeSupportInterface &);
                DiagnosticArray_TypeSupportInterface & operator = (const DiagnosticArray_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs DiagnosticArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef DiagnosticArray_DataWriter_ptr _ptr_type;
                typedef DiagnosticArray_DataWriter_var _var_type;

                static DiagnosticArray_DataWriter_ptr _duplicate (DiagnosticArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DiagnosticArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static DiagnosticArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DiagnosticArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                DiagnosticArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const DiagnosticArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const DiagnosticArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const DiagnosticArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const DiagnosticArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const DiagnosticArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const DiagnosticArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const DiagnosticArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const DiagnosticArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const DiagnosticArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const DiagnosticArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (DiagnosticArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DiagnosticArray_& instance_data) = 0;

            protected:
                DiagnosticArray_DataWriter () {};
                ~DiagnosticArray_DataWriter () {};
            private:
                DiagnosticArray_DataWriter (const DiagnosticArray_DataWriter &);
                DiagnosticArray_DataWriter & operator = (const DiagnosticArray_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs DiagnosticArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef DiagnosticArray_DataReader_ptr _ptr_type;
                typedef DiagnosticArray_DataReader_var _var_type;

                static DiagnosticArray_DataReader_ptr _duplicate (DiagnosticArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DiagnosticArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static DiagnosticArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DiagnosticArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                DiagnosticArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DiagnosticArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DiagnosticArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DiagnosticArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DiagnosticArray_& instance) = 0;

            protected:
                DiagnosticArray_DataReader () {};
                ~DiagnosticArray_DataReader () {};
            private:
                DiagnosticArray_DataReader (const DiagnosticArray_DataReader &);
                DiagnosticArray_DataReader & operator = (const DiagnosticArray_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs DiagnosticArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef DiagnosticArray_DataReaderView_ptr _ptr_type;
                typedef DiagnosticArray_DataReaderView_var _var_type;

                static DiagnosticArray_DataReaderView_ptr _duplicate (DiagnosticArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DiagnosticArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static DiagnosticArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DiagnosticArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                DiagnosticArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DiagnosticArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DiagnosticArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DiagnosticArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DiagnosticArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DiagnosticArray_& instance) = 0;

            protected:
                DiagnosticArray_DataReaderView () {};
                ~DiagnosticArray_DataReaderView () {};
            private:
                DiagnosticArray_DataReaderView (const DiagnosticArray_DataReaderView &);
                DiagnosticArray_DataReaderView & operator = (const DiagnosticArray_DataReaderView &);
            };
        }

    }

}

#endif
