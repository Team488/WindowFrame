#ifndef _H_5F4CBA7BA658AE9F94EB7A533816544A_Arrays_DCPS_H_
#define _H_5F4CBA7BA658AE9F94EB7A533816544A_Arrays_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Arrays_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Arrays_TypeSupportInterface;

            typedef Arrays_TypeSupportInterface * Arrays_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Arrays_TypeSupportInterface> Arrays_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Arrays_TypeSupportInterface> Arrays_TypeSupportInterface_out;


            class Arrays_DataWriter;

            typedef Arrays_DataWriter * Arrays_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Arrays_DataWriter> Arrays_DataWriter_var;
            typedef DDS_DCPSInterface_out < Arrays_DataWriter> Arrays_DataWriter_out;


            class Arrays_DataReader;

            typedef Arrays_DataReader * Arrays_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Arrays_DataReader> Arrays_DataReader_var;
            typedef DDS_DCPSInterface_out < Arrays_DataReader> Arrays_DataReader_out;


            class Arrays_DataReaderView;

            typedef Arrays_DataReaderView * Arrays_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Arrays_DataReaderView> Arrays_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Arrays_DataReaderView> Arrays_DataReaderView_out;

            struct Arrays_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Arrays_, struct Arrays_Seq_uniq_> Arrays_Seq;
            typedef DDS_DCPSSequence_var < Arrays_Seq> Arrays_Seq_var;
            typedef DDS_DCPSSequence_out < Arrays_Seq> Arrays_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Arrays_TypeSupportInterface_ptr _ptr_type;
                typedef Arrays_TypeSupportInterface_var _var_type;

                static Arrays_TypeSupportInterface_ptr _duplicate (Arrays_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Arrays_TypeSupportInterface () {};
                ~Arrays_TypeSupportInterface () {};
            private:
                Arrays_TypeSupportInterface (const Arrays_TypeSupportInterface &);
                Arrays_TypeSupportInterface & operator = (const Arrays_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Arrays_DataWriter_ptr _ptr_type;
                typedef Arrays_DataWriter_var _var_type;

                static Arrays_DataWriter_ptr _duplicate (Arrays_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Arrays_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Arrays_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Arrays_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Arrays_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Arrays_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Arrays_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Arrays_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Arrays_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Arrays_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Arrays_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Arrays_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_& instance_data) = 0;

            protected:
                Arrays_DataWriter () {};
                ~Arrays_DataWriter () {};
            private:
                Arrays_DataWriter (const Arrays_DataWriter &);
                Arrays_DataWriter & operator = (const Arrays_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Arrays_DataReader_ptr _ptr_type;
                typedef Arrays_DataReader_var _var_type;

                static Arrays_DataReader_ptr _duplicate (Arrays_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Arrays_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Arrays_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Arrays_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_& instance) = 0;

            protected:
                Arrays_DataReader () {};
                ~Arrays_DataReader () {};
            private:
                Arrays_DataReader (const Arrays_DataReader &);
                Arrays_DataReader & operator = (const Arrays_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Arrays_DataReaderView_ptr _ptr_type;
                typedef Arrays_DataReaderView_var _var_type;

                static Arrays_DataReaderView_ptr _duplicate (Arrays_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Arrays_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Arrays_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Arrays_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Arrays_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_& instance) = 0;

            protected:
                Arrays_DataReaderView () {};
                ~Arrays_DataReaderView () {};
            private:
                Arrays_DataReaderView (const Arrays_DataReaderView &);
                Arrays_DataReaderView & operator = (const Arrays_DataReaderView &);
            };
        }

    }

}

#endif
