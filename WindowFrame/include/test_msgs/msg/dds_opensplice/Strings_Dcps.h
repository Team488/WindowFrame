#ifndef _H_A409AE4DC7EA186D27E3598D81EBF55A_Strings_DCPS_H_
#define _H_A409AE4DC7EA186D27E3598D81EBF55A_Strings_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Strings_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Strings_TypeSupportInterface;

            typedef Strings_TypeSupportInterface * Strings_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Strings_TypeSupportInterface> Strings_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Strings_TypeSupportInterface> Strings_TypeSupportInterface_out;


            class Strings_DataWriter;

            typedef Strings_DataWriter * Strings_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Strings_DataWriter> Strings_DataWriter_var;
            typedef DDS_DCPSInterface_out < Strings_DataWriter> Strings_DataWriter_out;


            class Strings_DataReader;

            typedef Strings_DataReader * Strings_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Strings_DataReader> Strings_DataReader_var;
            typedef DDS_DCPSInterface_out < Strings_DataReader> Strings_DataReader_out;


            class Strings_DataReaderView;

            typedef Strings_DataReaderView * Strings_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Strings_DataReaderView> Strings_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Strings_DataReaderView> Strings_DataReaderView_out;

            struct Strings_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Strings_, struct Strings_Seq_uniq_> Strings_Seq;
            typedef DDS_DCPSSequence_var < Strings_Seq> Strings_Seq_var;
            typedef DDS_DCPSSequence_out < Strings_Seq> Strings_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Strings_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Strings_TypeSupportInterface_ptr _ptr_type;
                typedef Strings_TypeSupportInterface_var _var_type;

                static Strings_TypeSupportInterface_ptr _duplicate (Strings_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Strings_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Strings_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Strings_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Strings_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Strings_TypeSupportInterface () {};
                ~Strings_TypeSupportInterface () {};
            private:
                Strings_TypeSupportInterface (const Strings_TypeSupportInterface &);
                Strings_TypeSupportInterface & operator = (const Strings_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Strings_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Strings_DataWriter_ptr _ptr_type;
                typedef Strings_DataWriter_var _var_type;

                static Strings_DataWriter_ptr _duplicate (Strings_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Strings_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Strings_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Strings_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Strings_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Strings_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Strings_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Strings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Strings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Strings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Strings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Strings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Strings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Strings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Strings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Strings_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Strings_& instance_data) = 0;

            protected:
                Strings_DataWriter () {};
                ~Strings_DataWriter () {};
            private:
                Strings_DataWriter (const Strings_DataWriter &);
                Strings_DataWriter & operator = (const Strings_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Strings_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Strings_DataReader_ptr _ptr_type;
                typedef Strings_DataReader_var _var_type;

                static Strings_DataReader_ptr _duplicate (Strings_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Strings_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Strings_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Strings_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Strings_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Strings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Strings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Strings_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Strings_& instance) = 0;

            protected:
                Strings_DataReader () {};
                ~Strings_DataReader () {};
            private:
                Strings_DataReader (const Strings_DataReader &);
                Strings_DataReader & operator = (const Strings_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Strings_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Strings_DataReaderView_ptr _ptr_type;
                typedef Strings_DataReaderView_var _var_type;

                static Strings_DataReaderView_ptr _duplicate (Strings_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Strings_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Strings_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Strings_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Strings_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Strings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Strings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Strings_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Strings_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Strings_& instance) = 0;

            protected:
                Strings_DataReaderView () {};
                ~Strings_DataReaderView () {};
            private:
                Strings_DataReaderView (const Strings_DataReaderView &);
                Strings_DataReaderView & operator = (const Strings_DataReaderView &);
            };
        }

    }

}

#endif
