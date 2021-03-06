#ifndef _H_C5FDDE1397501E0A7D9425B4C165396C_Duration_DCPS_H_
#define _H_C5FDDE1397501E0A7D9425B4C165396C_Duration_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Duration_.h"

#include "builtin_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace builtin_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class Duration_TypeSupportInterface;

            typedef Duration_TypeSupportInterface * Duration_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Duration_TypeSupportInterface> Duration_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Duration_TypeSupportInterface> Duration_TypeSupportInterface_out;


            class Duration_DataWriter;

            typedef Duration_DataWriter * Duration_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Duration_DataWriter> Duration_DataWriter_var;
            typedef DDS_DCPSInterface_out < Duration_DataWriter> Duration_DataWriter_out;


            class Duration_DataReader;

            typedef Duration_DataReader * Duration_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Duration_DataReader> Duration_DataReader_var;
            typedef DDS_DCPSInterface_out < Duration_DataReader> Duration_DataReader_out;


            class Duration_DataReaderView;

            typedef Duration_DataReaderView * Duration_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Duration_DataReaderView> Duration_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Duration_DataReaderView> Duration_DataReaderView_out;

            struct Duration_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Duration_, struct Duration_Seq_uniq_> Duration_Seq;
            typedef DDS_DCPSSequence_var < Duration_Seq> Duration_Seq_var;
            typedef DDS_DCPSSequence_out < Duration_Seq> Duration_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Duration_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Duration_TypeSupportInterface_ptr _ptr_type;
                typedef Duration_TypeSupportInterface_var _var_type;

                static Duration_TypeSupportInterface_ptr _duplicate (Duration_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Duration_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Duration_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Duration_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Duration_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Duration_TypeSupportInterface () {};
                ~Duration_TypeSupportInterface () {};
            private:
                Duration_TypeSupportInterface (const Duration_TypeSupportInterface &);
                Duration_TypeSupportInterface & operator = (const Duration_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Duration_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Duration_DataWriter_ptr _ptr_type;
                typedef Duration_DataWriter_var _var_type;

                static Duration_DataWriter_ptr _duplicate (Duration_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Duration_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Duration_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Duration_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Duration_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Duration_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Duration_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Duration_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Duration_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Duration_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Duration_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Duration_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Duration_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Duration_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Duration_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Duration_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Duration_& instance_data) = 0;

            protected:
                Duration_DataWriter () {};
                ~Duration_DataWriter () {};
            private:
                Duration_DataWriter (const Duration_DataWriter &);
                Duration_DataWriter & operator = (const Duration_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Duration_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Duration_DataReader_ptr _ptr_type;
                typedef Duration_DataReader_var _var_type;

                static Duration_DataReader_ptr _duplicate (Duration_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Duration_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Duration_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Duration_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Duration_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Duration_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Duration_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Duration_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Duration_& instance) = 0;

            protected:
                Duration_DataReader () {};
                ~Duration_DataReader () {};
            private:
                Duration_DataReader (const Duration_DataReader &);
                Duration_DataReader & operator = (const Duration_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Duration_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Duration_DataReaderView_ptr _ptr_type;
                typedef Duration_DataReaderView_var _var_type;

                static Duration_DataReaderView_ptr _duplicate (Duration_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Duration_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Duration_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Duration_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Duration_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Duration_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Duration_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Duration_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Duration_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Duration_& instance) = 0;

            protected:
                Duration_DataReaderView () {};
                ~Duration_DataReaderView () {};
            private:
                Duration_DataReaderView (const Duration_DataReaderView &);
                Duration_DataReaderView & operator = (const Duration_DataReaderView &);
            };
        }

    }

}

#endif
