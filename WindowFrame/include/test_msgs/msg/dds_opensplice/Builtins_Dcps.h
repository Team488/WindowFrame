#ifndef _H_4AC8CF1C8C037701F09AF5CE21962DAE_Builtins_DCPS_H_
#define _H_4AC8CF1C8C037701F09AF5CE21962DAE_Builtins_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Builtins_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Builtins_TypeSupportInterface;

            typedef Builtins_TypeSupportInterface * Builtins_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Builtins_TypeSupportInterface> Builtins_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Builtins_TypeSupportInterface> Builtins_TypeSupportInterface_out;


            class Builtins_DataWriter;

            typedef Builtins_DataWriter * Builtins_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Builtins_DataWriter> Builtins_DataWriter_var;
            typedef DDS_DCPSInterface_out < Builtins_DataWriter> Builtins_DataWriter_out;


            class Builtins_DataReader;

            typedef Builtins_DataReader * Builtins_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Builtins_DataReader> Builtins_DataReader_var;
            typedef DDS_DCPSInterface_out < Builtins_DataReader> Builtins_DataReader_out;


            class Builtins_DataReaderView;

            typedef Builtins_DataReaderView * Builtins_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Builtins_DataReaderView> Builtins_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Builtins_DataReaderView> Builtins_DataReaderView_out;

            struct Builtins_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Builtins_, struct Builtins_Seq_uniq_> Builtins_Seq;
            typedef DDS_DCPSSequence_var < Builtins_Seq> Builtins_Seq_var;
            typedef DDS_DCPSSequence_out < Builtins_Seq> Builtins_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Builtins_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Builtins_TypeSupportInterface_ptr _ptr_type;
                typedef Builtins_TypeSupportInterface_var _var_type;

                static Builtins_TypeSupportInterface_ptr _duplicate (Builtins_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Builtins_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Builtins_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Builtins_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Builtins_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Builtins_TypeSupportInterface () {};
                ~Builtins_TypeSupportInterface () {};
            private:
                Builtins_TypeSupportInterface (const Builtins_TypeSupportInterface &);
                Builtins_TypeSupportInterface & operator = (const Builtins_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Builtins_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Builtins_DataWriter_ptr _ptr_type;
                typedef Builtins_DataWriter_var _var_type;

                static Builtins_DataWriter_ptr _duplicate (Builtins_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Builtins_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Builtins_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Builtins_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Builtins_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Builtins_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Builtins_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Builtins_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Builtins_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Builtins_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Builtins_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Builtins_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Builtins_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Builtins_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Builtins_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Builtins_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Builtins_& instance_data) = 0;

            protected:
                Builtins_DataWriter () {};
                ~Builtins_DataWriter () {};
            private:
                Builtins_DataWriter (const Builtins_DataWriter &);
                Builtins_DataWriter & operator = (const Builtins_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Builtins_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Builtins_DataReader_ptr _ptr_type;
                typedef Builtins_DataReader_var _var_type;

                static Builtins_DataReader_ptr _duplicate (Builtins_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Builtins_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Builtins_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Builtins_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Builtins_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Builtins_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Builtins_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Builtins_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Builtins_& instance) = 0;

            protected:
                Builtins_DataReader () {};
                ~Builtins_DataReader () {};
            private:
                Builtins_DataReader (const Builtins_DataReader &);
                Builtins_DataReader & operator = (const Builtins_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Builtins_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Builtins_DataReaderView_ptr _ptr_type;
                typedef Builtins_DataReaderView_var _var_type;

                static Builtins_DataReaderView_ptr _duplicate (Builtins_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Builtins_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Builtins_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Builtins_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Builtins_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Builtins_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Builtins_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Builtins_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Builtins_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Builtins_& instance) = 0;

            protected:
                Builtins_DataReaderView () {};
                ~Builtins_DataReaderView () {};
            private:
                Builtins_DataReaderView (const Builtins_DataReaderView &);
                Builtins_DataReaderView & operator = (const Builtins_DataReaderView &);
            };
        }

    }

}

#endif
