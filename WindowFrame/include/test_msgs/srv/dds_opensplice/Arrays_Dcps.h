#ifndef _H_3AC072275B70EDD9E2E0C8B563DCCB79_Arrays_DCPS_H_
#define _H_3AC072275B70EDD9E2E0C8B563DCCB79_Arrays_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Arrays_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class Arrays_Request_TypeSupportInterface;

            typedef Arrays_Request_TypeSupportInterface * Arrays_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Request_TypeSupportInterface> Arrays_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Arrays_Request_TypeSupportInterface> Arrays_Request_TypeSupportInterface_out;


            class Arrays_Request_DataWriter;

            typedef Arrays_Request_DataWriter * Arrays_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Request_DataWriter> Arrays_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Arrays_Request_DataWriter> Arrays_Request_DataWriter_out;


            class Arrays_Request_DataReader;

            typedef Arrays_Request_DataReader * Arrays_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Request_DataReader> Arrays_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Arrays_Request_DataReader> Arrays_Request_DataReader_out;


            class Arrays_Request_DataReaderView;

            typedef Arrays_Request_DataReaderView * Arrays_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Request_DataReaderView> Arrays_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Arrays_Request_DataReaderView> Arrays_Request_DataReaderView_out;

            struct Arrays_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Arrays_Request_, struct Arrays_Request_Seq_uniq_> Arrays_Request_Seq;
            typedef DDS_DCPSSequence_var < Arrays_Request_Seq> Arrays_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Arrays_Request_Seq> Arrays_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Arrays_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Arrays_Request_TypeSupportInterface_var _var_type;

                static Arrays_Request_TypeSupportInterface_ptr _duplicate (Arrays_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Arrays_Request_TypeSupportInterface () {};
                ~Arrays_Request_TypeSupportInterface () {};
            private:
                Arrays_Request_TypeSupportInterface (const Arrays_Request_TypeSupportInterface &);
                Arrays_Request_TypeSupportInterface & operator = (const Arrays_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Arrays_Request_DataWriter_ptr _ptr_type;
                typedef Arrays_Request_DataWriter_var _var_type;

                static Arrays_Request_DataWriter_ptr _duplicate (Arrays_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Arrays_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Arrays_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Arrays_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_Request_& instance_data) = 0;

            protected:
                Arrays_Request_DataWriter () {};
                ~Arrays_Request_DataWriter () {};
            private:
                Arrays_Request_DataWriter (const Arrays_Request_DataWriter &);
                Arrays_Request_DataWriter & operator = (const Arrays_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Arrays_Request_DataReader_ptr _ptr_type;
                typedef Arrays_Request_DataReader_var _var_type;

                static Arrays_Request_DataReader_ptr _duplicate (Arrays_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Arrays_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_Request_& instance) = 0;

            protected:
                Arrays_Request_DataReader () {};
                ~Arrays_Request_DataReader () {};
            private:
                Arrays_Request_DataReader (const Arrays_Request_DataReader &);
                Arrays_Request_DataReader & operator = (const Arrays_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Arrays_Request_DataReaderView_ptr _ptr_type;
                typedef Arrays_Request_DataReaderView_var _var_type;

                static Arrays_Request_DataReaderView_ptr _duplicate (Arrays_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Arrays_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_Request_& instance) = 0;

            protected:
                Arrays_Request_DataReaderView () {};
                ~Arrays_Request_DataReaderView () {};
            private:
                Arrays_Request_DataReaderView (const Arrays_Request_DataReaderView &);
                Arrays_Request_DataReaderView & operator = (const Arrays_Request_DataReaderView &);
            };
            class Arrays_Response_TypeSupportInterface;

            typedef Arrays_Response_TypeSupportInterface * Arrays_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Response_TypeSupportInterface> Arrays_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Arrays_Response_TypeSupportInterface> Arrays_Response_TypeSupportInterface_out;


            class Arrays_Response_DataWriter;

            typedef Arrays_Response_DataWriter * Arrays_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Response_DataWriter> Arrays_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Arrays_Response_DataWriter> Arrays_Response_DataWriter_out;


            class Arrays_Response_DataReader;

            typedef Arrays_Response_DataReader * Arrays_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Response_DataReader> Arrays_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Arrays_Response_DataReader> Arrays_Response_DataReader_out;


            class Arrays_Response_DataReaderView;

            typedef Arrays_Response_DataReaderView * Arrays_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Arrays_Response_DataReaderView> Arrays_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Arrays_Response_DataReaderView> Arrays_Response_DataReaderView_out;

            struct Arrays_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Arrays_Response_, struct Arrays_Response_Seq_uniq_> Arrays_Response_Seq;
            typedef DDS_DCPSSequence_var < Arrays_Response_Seq> Arrays_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Arrays_Response_Seq> Arrays_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Arrays_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Arrays_Response_TypeSupportInterface_var _var_type;

                static Arrays_Response_TypeSupportInterface_ptr _duplicate (Arrays_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Arrays_Response_TypeSupportInterface () {};
                ~Arrays_Response_TypeSupportInterface () {};
            private:
                Arrays_Response_TypeSupportInterface (const Arrays_Response_TypeSupportInterface &);
                Arrays_Response_TypeSupportInterface & operator = (const Arrays_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Arrays_Response_DataWriter_ptr _ptr_type;
                typedef Arrays_Response_DataWriter_var _var_type;

                static Arrays_Response_DataWriter_ptr _duplicate (Arrays_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Arrays_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Arrays_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Arrays_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_Response_& instance_data) = 0;

            protected:
                Arrays_Response_DataWriter () {};
                ~Arrays_Response_DataWriter () {};
            private:
                Arrays_Response_DataWriter (const Arrays_Response_DataWriter &);
                Arrays_Response_DataWriter & operator = (const Arrays_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Arrays_Response_DataReader_ptr _ptr_type;
                typedef Arrays_Response_DataReader_var _var_type;

                static Arrays_Response_DataReader_ptr _duplicate (Arrays_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Arrays_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_Response_& instance) = 0;

            protected:
                Arrays_Response_DataReader () {};
                ~Arrays_Response_DataReader () {};
            private:
                Arrays_Response_DataReader (const Arrays_Response_DataReader &);
                Arrays_Response_DataReader & operator = (const Arrays_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Arrays_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Arrays_Response_DataReaderView_ptr _ptr_type;
                typedef Arrays_Response_DataReaderView_var _var_type;

                static Arrays_Response_DataReaderView_ptr _duplicate (Arrays_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Arrays_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Arrays_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Arrays_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Arrays_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Arrays_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Arrays_Response_& instance) = 0;

            protected:
                Arrays_Response_DataReaderView () {};
                ~Arrays_Response_DataReaderView () {};
            private:
                Arrays_Response_DataReaderView (const Arrays_Response_DataReaderView &);
                Arrays_Response_DataReaderView & operator = (const Arrays_Response_DataReaderView &);
            };
            class Sample_Arrays_Request_TypeSupportInterface;

            typedef Sample_Arrays_Request_TypeSupportInterface * Sample_Arrays_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Request_TypeSupportInterface> Sample_Arrays_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Request_TypeSupportInterface> Sample_Arrays_Request_TypeSupportInterface_out;


            class Sample_Arrays_Request_DataWriter;

            typedef Sample_Arrays_Request_DataWriter * Sample_Arrays_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Request_DataWriter> Sample_Arrays_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Request_DataWriter> Sample_Arrays_Request_DataWriter_out;


            class Sample_Arrays_Request_DataReader;

            typedef Sample_Arrays_Request_DataReader * Sample_Arrays_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Request_DataReader> Sample_Arrays_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Request_DataReader> Sample_Arrays_Request_DataReader_out;


            class Sample_Arrays_Request_DataReaderView;

            typedef Sample_Arrays_Request_DataReaderView * Sample_Arrays_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Request_DataReaderView> Sample_Arrays_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Request_DataReaderView> Sample_Arrays_Request_DataReaderView_out;

            struct Sample_Arrays_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Arrays_Request_, struct Sample_Arrays_Request_Seq_uniq_> Sample_Arrays_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Arrays_Request_Seq> Sample_Arrays_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Arrays_Request_Seq> Sample_Arrays_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Arrays_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Arrays_Request_TypeSupportInterface_var _var_type;

                static Sample_Arrays_Request_TypeSupportInterface_ptr _duplicate (Sample_Arrays_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Arrays_Request_TypeSupportInterface () {};
                ~Sample_Arrays_Request_TypeSupportInterface () {};
            private:
                Sample_Arrays_Request_TypeSupportInterface (const Sample_Arrays_Request_TypeSupportInterface &);
                Sample_Arrays_Request_TypeSupportInterface & operator = (const Sample_Arrays_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Arrays_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Arrays_Request_DataWriter_var _var_type;

                static Sample_Arrays_Request_DataWriter_ptr _duplicate (Sample_Arrays_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Arrays_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Arrays_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Arrays_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Arrays_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Arrays_Request_& instance_data) = 0;

            protected:
                Sample_Arrays_Request_DataWriter () {};
                ~Sample_Arrays_Request_DataWriter () {};
            private:
                Sample_Arrays_Request_DataWriter (const Sample_Arrays_Request_DataWriter &);
                Sample_Arrays_Request_DataWriter & operator = (const Sample_Arrays_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Arrays_Request_DataReader_ptr _ptr_type;
                typedef Sample_Arrays_Request_DataReader_var _var_type;

                static Sample_Arrays_Request_DataReader_ptr _duplicate (Sample_Arrays_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Arrays_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Arrays_Request_& instance) = 0;

            protected:
                Sample_Arrays_Request_DataReader () {};
                ~Sample_Arrays_Request_DataReader () {};
            private:
                Sample_Arrays_Request_DataReader (const Sample_Arrays_Request_DataReader &);
                Sample_Arrays_Request_DataReader & operator = (const Sample_Arrays_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Arrays_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Arrays_Request_DataReaderView_var _var_type;

                static Sample_Arrays_Request_DataReaderView_ptr _duplicate (Sample_Arrays_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Arrays_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Arrays_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Arrays_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Arrays_Request_& instance) = 0;

            protected:
                Sample_Arrays_Request_DataReaderView () {};
                ~Sample_Arrays_Request_DataReaderView () {};
            private:
                Sample_Arrays_Request_DataReaderView (const Sample_Arrays_Request_DataReaderView &);
                Sample_Arrays_Request_DataReaderView & operator = (const Sample_Arrays_Request_DataReaderView &);
            };
            class Sample_Arrays_Response_TypeSupportInterface;

            typedef Sample_Arrays_Response_TypeSupportInterface * Sample_Arrays_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Response_TypeSupportInterface> Sample_Arrays_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Response_TypeSupportInterface> Sample_Arrays_Response_TypeSupportInterface_out;


            class Sample_Arrays_Response_DataWriter;

            typedef Sample_Arrays_Response_DataWriter * Sample_Arrays_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Response_DataWriter> Sample_Arrays_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Response_DataWriter> Sample_Arrays_Response_DataWriter_out;


            class Sample_Arrays_Response_DataReader;

            typedef Sample_Arrays_Response_DataReader * Sample_Arrays_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Response_DataReader> Sample_Arrays_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Response_DataReader> Sample_Arrays_Response_DataReader_out;


            class Sample_Arrays_Response_DataReaderView;

            typedef Sample_Arrays_Response_DataReaderView * Sample_Arrays_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Arrays_Response_DataReaderView> Sample_Arrays_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Arrays_Response_DataReaderView> Sample_Arrays_Response_DataReaderView_out;

            struct Sample_Arrays_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Arrays_Response_, struct Sample_Arrays_Response_Seq_uniq_> Sample_Arrays_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Arrays_Response_Seq> Sample_Arrays_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Arrays_Response_Seq> Sample_Arrays_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Arrays_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Arrays_Response_TypeSupportInterface_var _var_type;

                static Sample_Arrays_Response_TypeSupportInterface_ptr _duplicate (Sample_Arrays_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Arrays_Response_TypeSupportInterface () {};
                ~Sample_Arrays_Response_TypeSupportInterface () {};
            private:
                Sample_Arrays_Response_TypeSupportInterface (const Sample_Arrays_Response_TypeSupportInterface &);
                Sample_Arrays_Response_TypeSupportInterface & operator = (const Sample_Arrays_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Arrays_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Arrays_Response_DataWriter_var _var_type;

                static Sample_Arrays_Response_DataWriter_ptr _duplicate (Sample_Arrays_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Arrays_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Arrays_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Arrays_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Arrays_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Arrays_Response_& instance_data) = 0;

            protected:
                Sample_Arrays_Response_DataWriter () {};
                ~Sample_Arrays_Response_DataWriter () {};
            private:
                Sample_Arrays_Response_DataWriter (const Sample_Arrays_Response_DataWriter &);
                Sample_Arrays_Response_DataWriter & operator = (const Sample_Arrays_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Arrays_Response_DataReader_ptr _ptr_type;
                typedef Sample_Arrays_Response_DataReader_var _var_type;

                static Sample_Arrays_Response_DataReader_ptr _duplicate (Sample_Arrays_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Arrays_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Arrays_Response_& instance) = 0;

            protected:
                Sample_Arrays_Response_DataReader () {};
                ~Sample_Arrays_Response_DataReader () {};
            private:
                Sample_Arrays_Response_DataReader (const Sample_Arrays_Response_DataReader &);
                Sample_Arrays_Response_DataReader & operator = (const Sample_Arrays_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Arrays_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Arrays_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Arrays_Response_DataReaderView_var _var_type;

                static Sample_Arrays_Response_DataReaderView_ptr _duplicate (Sample_Arrays_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Arrays_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Arrays_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Arrays_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Arrays_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Arrays_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Arrays_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Arrays_Response_& instance) = 0;

            protected:
                Sample_Arrays_Response_DataReaderView () {};
                ~Sample_Arrays_Response_DataReaderView () {};
            private:
                Sample_Arrays_Response_DataReaderView (const Sample_Arrays_Response_DataReaderView &);
                Sample_Arrays_Response_DataReaderView & operator = (const Sample_Arrays_Response_DataReaderView &);
            };
        }

    }

}

#endif
