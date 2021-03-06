#ifndef _H_85A598F9CEDC4D8C3EFC62E57BEF0F7B_Empty_DCPS_H_
#define _H_85A598F9CEDC4D8C3EFC62E57BEF0F7B_Empty_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Empty_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class Empty_Request_TypeSupportInterface;

            typedef Empty_Request_TypeSupportInterface * Empty_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Empty_Request_TypeSupportInterface> Empty_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Empty_Request_TypeSupportInterface> Empty_Request_TypeSupportInterface_out;


            class Empty_Request_DataWriter;

            typedef Empty_Request_DataWriter * Empty_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Empty_Request_DataWriter> Empty_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Empty_Request_DataWriter> Empty_Request_DataWriter_out;


            class Empty_Request_DataReader;

            typedef Empty_Request_DataReader * Empty_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Empty_Request_DataReader> Empty_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Empty_Request_DataReader> Empty_Request_DataReader_out;


            class Empty_Request_DataReaderView;

            typedef Empty_Request_DataReaderView * Empty_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Empty_Request_DataReaderView> Empty_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Empty_Request_DataReaderView> Empty_Request_DataReaderView_out;

            struct Empty_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Empty_Request_, struct Empty_Request_Seq_uniq_> Empty_Request_Seq;
            typedef DDS_DCPSSequence_var < Empty_Request_Seq> Empty_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Empty_Request_Seq> Empty_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Empty_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Empty_Request_TypeSupportInterface_var _var_type;

                static Empty_Request_TypeSupportInterface_ptr _duplicate (Empty_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Empty_Request_TypeSupportInterface () {};
                ~Empty_Request_TypeSupportInterface () {};
            private:
                Empty_Request_TypeSupportInterface (const Empty_Request_TypeSupportInterface &);
                Empty_Request_TypeSupportInterface & operator = (const Empty_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Empty_Request_DataWriter_ptr _ptr_type;
                typedef Empty_Request_DataWriter_var _var_type;

                static Empty_Request_DataWriter_ptr _duplicate (Empty_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Empty_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Empty_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Empty_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_Request_& instance_data) = 0;

            protected:
                Empty_Request_DataWriter () {};
                ~Empty_Request_DataWriter () {};
            private:
                Empty_Request_DataWriter (const Empty_Request_DataWriter &);
                Empty_Request_DataWriter & operator = (const Empty_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Empty_Request_DataReader_ptr _ptr_type;
                typedef Empty_Request_DataReader_var _var_type;

                static Empty_Request_DataReader_ptr _duplicate (Empty_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Empty_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_Request_& instance) = 0;

            protected:
                Empty_Request_DataReader () {};
                ~Empty_Request_DataReader () {};
            private:
                Empty_Request_DataReader (const Empty_Request_DataReader &);
                Empty_Request_DataReader & operator = (const Empty_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Empty_Request_DataReaderView_ptr _ptr_type;
                typedef Empty_Request_DataReaderView_var _var_type;

                static Empty_Request_DataReaderView_ptr _duplicate (Empty_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Empty_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_Request_& instance) = 0;

            protected:
                Empty_Request_DataReaderView () {};
                ~Empty_Request_DataReaderView () {};
            private:
                Empty_Request_DataReaderView (const Empty_Request_DataReaderView &);
                Empty_Request_DataReaderView & operator = (const Empty_Request_DataReaderView &);
            };
            class Empty_Response_TypeSupportInterface;

            typedef Empty_Response_TypeSupportInterface * Empty_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Empty_Response_TypeSupportInterface> Empty_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Empty_Response_TypeSupportInterface> Empty_Response_TypeSupportInterface_out;


            class Empty_Response_DataWriter;

            typedef Empty_Response_DataWriter * Empty_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Empty_Response_DataWriter> Empty_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Empty_Response_DataWriter> Empty_Response_DataWriter_out;


            class Empty_Response_DataReader;

            typedef Empty_Response_DataReader * Empty_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Empty_Response_DataReader> Empty_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Empty_Response_DataReader> Empty_Response_DataReader_out;


            class Empty_Response_DataReaderView;

            typedef Empty_Response_DataReaderView * Empty_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Empty_Response_DataReaderView> Empty_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Empty_Response_DataReaderView> Empty_Response_DataReaderView_out;

            struct Empty_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Empty_Response_, struct Empty_Response_Seq_uniq_> Empty_Response_Seq;
            typedef DDS_DCPSSequence_var < Empty_Response_Seq> Empty_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Empty_Response_Seq> Empty_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Empty_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Empty_Response_TypeSupportInterface_var _var_type;

                static Empty_Response_TypeSupportInterface_ptr _duplicate (Empty_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Empty_Response_TypeSupportInterface () {};
                ~Empty_Response_TypeSupportInterface () {};
            private:
                Empty_Response_TypeSupportInterface (const Empty_Response_TypeSupportInterface &);
                Empty_Response_TypeSupportInterface & operator = (const Empty_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Empty_Response_DataWriter_ptr _ptr_type;
                typedef Empty_Response_DataWriter_var _var_type;

                static Empty_Response_DataWriter_ptr _duplicate (Empty_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Empty_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Empty_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Empty_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_Response_& instance_data) = 0;

            protected:
                Empty_Response_DataWriter () {};
                ~Empty_Response_DataWriter () {};
            private:
                Empty_Response_DataWriter (const Empty_Response_DataWriter &);
                Empty_Response_DataWriter & operator = (const Empty_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Empty_Response_DataReader_ptr _ptr_type;
                typedef Empty_Response_DataReader_var _var_type;

                static Empty_Response_DataReader_ptr _duplicate (Empty_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Empty_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_Response_& instance) = 0;

            protected:
                Empty_Response_DataReader () {};
                ~Empty_Response_DataReader () {};
            private:
                Empty_Response_DataReader (const Empty_Response_DataReader &);
                Empty_Response_DataReader & operator = (const Empty_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Empty_Response_DataReaderView_ptr _ptr_type;
                typedef Empty_Response_DataReaderView_var _var_type;

                static Empty_Response_DataReaderView_ptr _duplicate (Empty_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Empty_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Empty_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_Response_& instance) = 0;

            protected:
                Empty_Response_DataReaderView () {};
                ~Empty_Response_DataReaderView () {};
            private:
                Empty_Response_DataReaderView (const Empty_Response_DataReaderView &);
                Empty_Response_DataReaderView & operator = (const Empty_Response_DataReaderView &);
            };
            class Sample_Empty_Request_TypeSupportInterface;

            typedef Sample_Empty_Request_TypeSupportInterface * Sample_Empty_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Request_TypeSupportInterface> Sample_Empty_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Request_TypeSupportInterface> Sample_Empty_Request_TypeSupportInterface_out;


            class Sample_Empty_Request_DataWriter;

            typedef Sample_Empty_Request_DataWriter * Sample_Empty_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Request_DataWriter> Sample_Empty_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Request_DataWriter> Sample_Empty_Request_DataWriter_out;


            class Sample_Empty_Request_DataReader;

            typedef Sample_Empty_Request_DataReader * Sample_Empty_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Request_DataReader> Sample_Empty_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Request_DataReader> Sample_Empty_Request_DataReader_out;


            class Sample_Empty_Request_DataReaderView;

            typedef Sample_Empty_Request_DataReaderView * Sample_Empty_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Request_DataReaderView> Sample_Empty_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Request_DataReaderView> Sample_Empty_Request_DataReaderView_out;

            struct Sample_Empty_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Empty_Request_, struct Sample_Empty_Request_Seq_uniq_> Sample_Empty_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Empty_Request_Seq> Sample_Empty_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Empty_Request_Seq> Sample_Empty_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Empty_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Empty_Request_TypeSupportInterface_var _var_type;

                static Sample_Empty_Request_TypeSupportInterface_ptr _duplicate (Sample_Empty_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Empty_Request_TypeSupportInterface () {};
                ~Sample_Empty_Request_TypeSupportInterface () {};
            private:
                Sample_Empty_Request_TypeSupportInterface (const Sample_Empty_Request_TypeSupportInterface &);
                Sample_Empty_Request_TypeSupportInterface & operator = (const Sample_Empty_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Empty_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Empty_Request_DataWriter_var _var_type;

                static Sample_Empty_Request_DataWriter_ptr _duplicate (Sample_Empty_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Empty_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Empty_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Empty_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Empty_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Empty_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Empty_Request_& instance_data) = 0;

            protected:
                Sample_Empty_Request_DataWriter () {};
                ~Sample_Empty_Request_DataWriter () {};
            private:
                Sample_Empty_Request_DataWriter (const Sample_Empty_Request_DataWriter &);
                Sample_Empty_Request_DataWriter & operator = (const Sample_Empty_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Empty_Request_DataReader_ptr _ptr_type;
                typedef Sample_Empty_Request_DataReader_var _var_type;

                static Sample_Empty_Request_DataReader_ptr _duplicate (Sample_Empty_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Empty_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Empty_Request_& instance) = 0;

            protected:
                Sample_Empty_Request_DataReader () {};
                ~Sample_Empty_Request_DataReader () {};
            private:
                Sample_Empty_Request_DataReader (const Sample_Empty_Request_DataReader &);
                Sample_Empty_Request_DataReader & operator = (const Sample_Empty_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Empty_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Empty_Request_DataReaderView_var _var_type;

                static Sample_Empty_Request_DataReaderView_ptr _duplicate (Sample_Empty_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Empty_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Empty_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Empty_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Empty_Request_& instance) = 0;

            protected:
                Sample_Empty_Request_DataReaderView () {};
                ~Sample_Empty_Request_DataReaderView () {};
            private:
                Sample_Empty_Request_DataReaderView (const Sample_Empty_Request_DataReaderView &);
                Sample_Empty_Request_DataReaderView & operator = (const Sample_Empty_Request_DataReaderView &);
            };
            class Sample_Empty_Response_TypeSupportInterface;

            typedef Sample_Empty_Response_TypeSupportInterface * Sample_Empty_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Response_TypeSupportInterface> Sample_Empty_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Response_TypeSupportInterface> Sample_Empty_Response_TypeSupportInterface_out;


            class Sample_Empty_Response_DataWriter;

            typedef Sample_Empty_Response_DataWriter * Sample_Empty_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Response_DataWriter> Sample_Empty_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Response_DataWriter> Sample_Empty_Response_DataWriter_out;


            class Sample_Empty_Response_DataReader;

            typedef Sample_Empty_Response_DataReader * Sample_Empty_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Response_DataReader> Sample_Empty_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Response_DataReader> Sample_Empty_Response_DataReader_out;


            class Sample_Empty_Response_DataReaderView;

            typedef Sample_Empty_Response_DataReaderView * Sample_Empty_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Empty_Response_DataReaderView> Sample_Empty_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Empty_Response_DataReaderView> Sample_Empty_Response_DataReaderView_out;

            struct Sample_Empty_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Empty_Response_, struct Sample_Empty_Response_Seq_uniq_> Sample_Empty_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Empty_Response_Seq> Sample_Empty_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Empty_Response_Seq> Sample_Empty_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Empty_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Empty_Response_TypeSupportInterface_var _var_type;

                static Sample_Empty_Response_TypeSupportInterface_ptr _duplicate (Sample_Empty_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Empty_Response_TypeSupportInterface () {};
                ~Sample_Empty_Response_TypeSupportInterface () {};
            private:
                Sample_Empty_Response_TypeSupportInterface (const Sample_Empty_Response_TypeSupportInterface &);
                Sample_Empty_Response_TypeSupportInterface & operator = (const Sample_Empty_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Empty_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Empty_Response_DataWriter_var _var_type;

                static Sample_Empty_Response_DataWriter_ptr _duplicate (Sample_Empty_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Empty_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Empty_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Empty_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Empty_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Empty_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Empty_Response_& instance_data) = 0;

            protected:
                Sample_Empty_Response_DataWriter () {};
                ~Sample_Empty_Response_DataWriter () {};
            private:
                Sample_Empty_Response_DataWriter (const Sample_Empty_Response_DataWriter &);
                Sample_Empty_Response_DataWriter & operator = (const Sample_Empty_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Empty_Response_DataReader_ptr _ptr_type;
                typedef Sample_Empty_Response_DataReader_var _var_type;

                static Sample_Empty_Response_DataReader_ptr _duplicate (Sample_Empty_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Empty_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Empty_Response_& instance) = 0;

            protected:
                Sample_Empty_Response_DataReader () {};
                ~Sample_Empty_Response_DataReader () {};
            private:
                Sample_Empty_Response_DataReader (const Sample_Empty_Response_DataReader &);
                Sample_Empty_Response_DataReader & operator = (const Sample_Empty_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Empty_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Empty_Response_DataReaderView_var _var_type;

                static Sample_Empty_Response_DataReaderView_ptr _duplicate (Sample_Empty_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Empty_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Empty_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Empty_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Empty_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Empty_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Empty_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Empty_Response_& instance) = 0;

            protected:
                Sample_Empty_Response_DataReaderView () {};
                ~Sample_Empty_Response_DataReaderView () {};
            private:
                Sample_Empty_Response_DataReaderView (const Sample_Empty_Response_DataReaderView &);
                Sample_Empty_Response_DataReaderView & operator = (const Sample_Empty_Response_DataReaderView &);
            };
        }

    }

}

#endif
