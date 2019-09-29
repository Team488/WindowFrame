#ifndef _H_D322A5374FA4A4738072BDB04361CC67_Defaults_DCPS_H_
#define _H_D322A5374FA4A4738072BDB04361CC67_Defaults_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Defaults_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Defaults_TypeSupportInterface;

            typedef Defaults_TypeSupportInterface * Defaults_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Defaults_TypeSupportInterface> Defaults_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Defaults_TypeSupportInterface> Defaults_TypeSupportInterface_out;


            class Defaults_DataWriter;

            typedef Defaults_DataWriter * Defaults_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Defaults_DataWriter> Defaults_DataWriter_var;
            typedef DDS_DCPSInterface_out < Defaults_DataWriter> Defaults_DataWriter_out;


            class Defaults_DataReader;

            typedef Defaults_DataReader * Defaults_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Defaults_DataReader> Defaults_DataReader_var;
            typedef DDS_DCPSInterface_out < Defaults_DataReader> Defaults_DataReader_out;


            class Defaults_DataReaderView;

            typedef Defaults_DataReaderView * Defaults_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Defaults_DataReaderView> Defaults_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Defaults_DataReaderView> Defaults_DataReaderView_out;

            struct Defaults_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Defaults_, struct Defaults_Seq_uniq_> Defaults_Seq;
            typedef DDS_DCPSSequence_var < Defaults_Seq> Defaults_Seq_var;
            typedef DDS_DCPSSequence_out < Defaults_Seq> Defaults_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Defaults_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Defaults_TypeSupportInterface_ptr _ptr_type;
                typedef Defaults_TypeSupportInterface_var _var_type;

                static Defaults_TypeSupportInterface_ptr _duplicate (Defaults_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Defaults_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Defaults_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Defaults_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Defaults_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Defaults_TypeSupportInterface () {};
                ~Defaults_TypeSupportInterface () {};
            private:
                Defaults_TypeSupportInterface (const Defaults_TypeSupportInterface &);
                Defaults_TypeSupportInterface & operator = (const Defaults_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Defaults_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Defaults_DataWriter_ptr _ptr_type;
                typedef Defaults_DataWriter_var _var_type;

                static Defaults_DataWriter_ptr _duplicate (Defaults_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Defaults_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Defaults_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Defaults_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Defaults_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Defaults_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Defaults_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Defaults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Defaults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Defaults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Defaults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Defaults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Defaults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Defaults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Defaults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Defaults_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Defaults_& instance_data) = 0;

            protected:
                Defaults_DataWriter () {};
                ~Defaults_DataWriter () {};
            private:
                Defaults_DataWriter (const Defaults_DataWriter &);
                Defaults_DataWriter & operator = (const Defaults_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Defaults_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Defaults_DataReader_ptr _ptr_type;
                typedef Defaults_DataReader_var _var_type;

                static Defaults_DataReader_ptr _duplicate (Defaults_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Defaults_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Defaults_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Defaults_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Defaults_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Defaults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Defaults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Defaults_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Defaults_& instance) = 0;

            protected:
                Defaults_DataReader () {};
                ~Defaults_DataReader () {};
            private:
                Defaults_DataReader (const Defaults_DataReader &);
                Defaults_DataReader & operator = (const Defaults_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Defaults_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Defaults_DataReaderView_ptr _ptr_type;
                typedef Defaults_DataReaderView_var _var_type;

                static Defaults_DataReaderView_ptr _duplicate (Defaults_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Defaults_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Defaults_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Defaults_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Defaults_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Defaults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Defaults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Defaults_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Defaults_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Defaults_& instance) = 0;

            protected:
                Defaults_DataReaderView () {};
                ~Defaults_DataReaderView () {};
            private:
                Defaults_DataReaderView (const Defaults_DataReaderView &);
                Defaults_DataReaderView & operator = (const Defaults_DataReaderView &);
            };
        }

    }

}

#endif
