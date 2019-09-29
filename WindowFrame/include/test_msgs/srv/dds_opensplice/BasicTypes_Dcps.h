#ifndef _H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes_DCPS_H_
#define _H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "BasicTypes_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class BasicTypes_Request_TypeSupportInterface;

            typedef BasicTypes_Request_TypeSupportInterface * BasicTypes_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Request_TypeSupportInterface> BasicTypes_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Request_TypeSupportInterface> BasicTypes_Request_TypeSupportInterface_out;


            class BasicTypes_Request_DataWriter;

            typedef BasicTypes_Request_DataWriter * BasicTypes_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Request_DataWriter> BasicTypes_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Request_DataWriter> BasicTypes_Request_DataWriter_out;


            class BasicTypes_Request_DataReader;

            typedef BasicTypes_Request_DataReader * BasicTypes_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Request_DataReader> BasicTypes_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Request_DataReader> BasicTypes_Request_DataReader_out;


            class BasicTypes_Request_DataReaderView;

            typedef BasicTypes_Request_DataReaderView * BasicTypes_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Request_DataReaderView> BasicTypes_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Request_DataReaderView> BasicTypes_Request_DataReaderView_out;

            struct BasicTypes_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < BasicTypes_Request_, struct BasicTypes_Request_Seq_uniq_> BasicTypes_Request_Seq;
            typedef DDS_DCPSSequence_var < BasicTypes_Request_Seq> BasicTypes_Request_Seq_var;
            typedef DDS_DCPSSequence_out < BasicTypes_Request_Seq> BasicTypes_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef BasicTypes_Request_TypeSupportInterface_ptr _ptr_type;
                typedef BasicTypes_Request_TypeSupportInterface_var _var_type;

                static BasicTypes_Request_TypeSupportInterface_ptr _duplicate (BasicTypes_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                BasicTypes_Request_TypeSupportInterface () {};
                ~BasicTypes_Request_TypeSupportInterface () {};
            private:
                BasicTypes_Request_TypeSupportInterface (const BasicTypes_Request_TypeSupportInterface &);
                BasicTypes_Request_TypeSupportInterface & operator = (const BasicTypes_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef BasicTypes_Request_DataWriter_ptr _ptr_type;
                typedef BasicTypes_Request_DataWriter_var _var_type;

                static BasicTypes_Request_DataWriter_ptr _duplicate (BasicTypes_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const BasicTypes_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const BasicTypes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (BasicTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_Request_& instance_data) = 0;

            protected:
                BasicTypes_Request_DataWriter () {};
                ~BasicTypes_Request_DataWriter () {};
            private:
                BasicTypes_Request_DataWriter (const BasicTypes_Request_DataWriter &);
                BasicTypes_Request_DataWriter & operator = (const BasicTypes_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef BasicTypes_Request_DataReader_ptr _ptr_type;
                typedef BasicTypes_Request_DataReader_var _var_type;

                static BasicTypes_Request_DataReader_ptr _duplicate (BasicTypes_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BasicTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_Request_& instance) = 0;

            protected:
                BasicTypes_Request_DataReader () {};
                ~BasicTypes_Request_DataReader () {};
            private:
                BasicTypes_Request_DataReader (const BasicTypes_Request_DataReader &);
                BasicTypes_Request_DataReader & operator = (const BasicTypes_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef BasicTypes_Request_DataReaderView_ptr _ptr_type;
                typedef BasicTypes_Request_DataReaderView_var _var_type;

                static BasicTypes_Request_DataReaderView_ptr _duplicate (BasicTypes_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BasicTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_Request_& instance) = 0;

            protected:
                BasicTypes_Request_DataReaderView () {};
                ~BasicTypes_Request_DataReaderView () {};
            private:
                BasicTypes_Request_DataReaderView (const BasicTypes_Request_DataReaderView &);
                BasicTypes_Request_DataReaderView & operator = (const BasicTypes_Request_DataReaderView &);
            };
            class BasicTypes_Response_TypeSupportInterface;

            typedef BasicTypes_Response_TypeSupportInterface * BasicTypes_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Response_TypeSupportInterface> BasicTypes_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Response_TypeSupportInterface> BasicTypes_Response_TypeSupportInterface_out;


            class BasicTypes_Response_DataWriter;

            typedef BasicTypes_Response_DataWriter * BasicTypes_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Response_DataWriter> BasicTypes_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Response_DataWriter> BasicTypes_Response_DataWriter_out;


            class BasicTypes_Response_DataReader;

            typedef BasicTypes_Response_DataReader * BasicTypes_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Response_DataReader> BasicTypes_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Response_DataReader> BasicTypes_Response_DataReader_out;


            class BasicTypes_Response_DataReaderView;

            typedef BasicTypes_Response_DataReaderView * BasicTypes_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_Response_DataReaderView> BasicTypes_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < BasicTypes_Response_DataReaderView> BasicTypes_Response_DataReaderView_out;

            struct BasicTypes_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < BasicTypes_Response_, struct BasicTypes_Response_Seq_uniq_> BasicTypes_Response_Seq;
            typedef DDS_DCPSSequence_var < BasicTypes_Response_Seq> BasicTypes_Response_Seq_var;
            typedef DDS_DCPSSequence_out < BasicTypes_Response_Seq> BasicTypes_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef BasicTypes_Response_TypeSupportInterface_ptr _ptr_type;
                typedef BasicTypes_Response_TypeSupportInterface_var _var_type;

                static BasicTypes_Response_TypeSupportInterface_ptr _duplicate (BasicTypes_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                BasicTypes_Response_TypeSupportInterface () {};
                ~BasicTypes_Response_TypeSupportInterface () {};
            private:
                BasicTypes_Response_TypeSupportInterface (const BasicTypes_Response_TypeSupportInterface &);
                BasicTypes_Response_TypeSupportInterface & operator = (const BasicTypes_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef BasicTypes_Response_DataWriter_ptr _ptr_type;
                typedef BasicTypes_Response_DataWriter_var _var_type;

                static BasicTypes_Response_DataWriter_ptr _duplicate (BasicTypes_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const BasicTypes_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const BasicTypes_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (BasicTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_Response_& instance_data) = 0;

            protected:
                BasicTypes_Response_DataWriter () {};
                ~BasicTypes_Response_DataWriter () {};
            private:
                BasicTypes_Response_DataWriter (const BasicTypes_Response_DataWriter &);
                BasicTypes_Response_DataWriter & operator = (const BasicTypes_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef BasicTypes_Response_DataReader_ptr _ptr_type;
                typedef BasicTypes_Response_DataReader_var _var_type;

                static BasicTypes_Response_DataReader_ptr _duplicate (BasicTypes_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BasicTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_Response_& instance) = 0;

            protected:
                BasicTypes_Response_DataReader () {};
                ~BasicTypes_Response_DataReader () {};
            private:
                BasicTypes_Response_DataReader (const BasicTypes_Response_DataReader &);
                BasicTypes_Response_DataReader & operator = (const BasicTypes_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef BasicTypes_Response_DataReaderView_ptr _ptr_type;
                typedef BasicTypes_Response_DataReaderView_var _var_type;

                static BasicTypes_Response_DataReaderView_ptr _duplicate (BasicTypes_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BasicTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_Response_& instance) = 0;

            protected:
                BasicTypes_Response_DataReaderView () {};
                ~BasicTypes_Response_DataReaderView () {};
            private:
                BasicTypes_Response_DataReaderView (const BasicTypes_Response_DataReaderView &);
                BasicTypes_Response_DataReaderView & operator = (const BasicTypes_Response_DataReaderView &);
            };
            class Sample_BasicTypes_Request_TypeSupportInterface;

            typedef Sample_BasicTypes_Request_TypeSupportInterface * Sample_BasicTypes_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Request_TypeSupportInterface> Sample_BasicTypes_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Request_TypeSupportInterface> Sample_BasicTypes_Request_TypeSupportInterface_out;


            class Sample_BasicTypes_Request_DataWriter;

            typedef Sample_BasicTypes_Request_DataWriter * Sample_BasicTypes_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Request_DataWriter> Sample_BasicTypes_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Request_DataWriter> Sample_BasicTypes_Request_DataWriter_out;


            class Sample_BasicTypes_Request_DataReader;

            typedef Sample_BasicTypes_Request_DataReader * Sample_BasicTypes_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Request_DataReader> Sample_BasicTypes_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Request_DataReader> Sample_BasicTypes_Request_DataReader_out;


            class Sample_BasicTypes_Request_DataReaderView;

            typedef Sample_BasicTypes_Request_DataReaderView * Sample_BasicTypes_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Request_DataReaderView> Sample_BasicTypes_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Request_DataReaderView> Sample_BasicTypes_Request_DataReaderView_out;

            struct Sample_BasicTypes_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_BasicTypes_Request_, struct Sample_BasicTypes_Request_Seq_uniq_> Sample_BasicTypes_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_BasicTypes_Request_Seq> Sample_BasicTypes_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_BasicTypes_Request_Seq> Sample_BasicTypes_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_BasicTypes_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_BasicTypes_Request_TypeSupportInterface_var _var_type;

                static Sample_BasicTypes_Request_TypeSupportInterface_ptr _duplicate (Sample_BasicTypes_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_BasicTypes_Request_TypeSupportInterface () {};
                ~Sample_BasicTypes_Request_TypeSupportInterface () {};
            private:
                Sample_BasicTypes_Request_TypeSupportInterface (const Sample_BasicTypes_Request_TypeSupportInterface &);
                Sample_BasicTypes_Request_TypeSupportInterface & operator = (const Sample_BasicTypes_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_BasicTypes_Request_DataWriter_ptr _ptr_type;
                typedef Sample_BasicTypes_Request_DataWriter_var _var_type;

                static Sample_BasicTypes_Request_DataWriter_ptr _duplicate (Sample_BasicTypes_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_BasicTypes_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_BasicTypes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_BasicTypes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_BasicTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_BasicTypes_Request_& instance_data) = 0;

            protected:
                Sample_BasicTypes_Request_DataWriter () {};
                ~Sample_BasicTypes_Request_DataWriter () {};
            private:
                Sample_BasicTypes_Request_DataWriter (const Sample_BasicTypes_Request_DataWriter &);
                Sample_BasicTypes_Request_DataWriter & operator = (const Sample_BasicTypes_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_BasicTypes_Request_DataReader_ptr _ptr_type;
                typedef Sample_BasicTypes_Request_DataReader_var _var_type;

                static Sample_BasicTypes_Request_DataReader_ptr _duplicate (Sample_BasicTypes_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_BasicTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_BasicTypes_Request_& instance) = 0;

            protected:
                Sample_BasicTypes_Request_DataReader () {};
                ~Sample_BasicTypes_Request_DataReader () {};
            private:
                Sample_BasicTypes_Request_DataReader (const Sample_BasicTypes_Request_DataReader &);
                Sample_BasicTypes_Request_DataReader & operator = (const Sample_BasicTypes_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_BasicTypes_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_BasicTypes_Request_DataReaderView_var _var_type;

                static Sample_BasicTypes_Request_DataReaderView_ptr _duplicate (Sample_BasicTypes_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_BasicTypes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_BasicTypes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_BasicTypes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_BasicTypes_Request_& instance) = 0;

            protected:
                Sample_BasicTypes_Request_DataReaderView () {};
                ~Sample_BasicTypes_Request_DataReaderView () {};
            private:
                Sample_BasicTypes_Request_DataReaderView (const Sample_BasicTypes_Request_DataReaderView &);
                Sample_BasicTypes_Request_DataReaderView & operator = (const Sample_BasicTypes_Request_DataReaderView &);
            };
            class Sample_BasicTypes_Response_TypeSupportInterface;

            typedef Sample_BasicTypes_Response_TypeSupportInterface * Sample_BasicTypes_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Response_TypeSupportInterface> Sample_BasicTypes_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Response_TypeSupportInterface> Sample_BasicTypes_Response_TypeSupportInterface_out;


            class Sample_BasicTypes_Response_DataWriter;

            typedef Sample_BasicTypes_Response_DataWriter * Sample_BasicTypes_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Response_DataWriter> Sample_BasicTypes_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Response_DataWriter> Sample_BasicTypes_Response_DataWriter_out;


            class Sample_BasicTypes_Response_DataReader;

            typedef Sample_BasicTypes_Response_DataReader * Sample_BasicTypes_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Response_DataReader> Sample_BasicTypes_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Response_DataReader> Sample_BasicTypes_Response_DataReader_out;


            class Sample_BasicTypes_Response_DataReaderView;

            typedef Sample_BasicTypes_Response_DataReaderView * Sample_BasicTypes_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_BasicTypes_Response_DataReaderView> Sample_BasicTypes_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_BasicTypes_Response_DataReaderView> Sample_BasicTypes_Response_DataReaderView_out;

            struct Sample_BasicTypes_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_BasicTypes_Response_, struct Sample_BasicTypes_Response_Seq_uniq_> Sample_BasicTypes_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_BasicTypes_Response_Seq> Sample_BasicTypes_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_BasicTypes_Response_Seq> Sample_BasicTypes_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_BasicTypes_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_BasicTypes_Response_TypeSupportInterface_var _var_type;

                static Sample_BasicTypes_Response_TypeSupportInterface_ptr _duplicate (Sample_BasicTypes_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_BasicTypes_Response_TypeSupportInterface () {};
                ~Sample_BasicTypes_Response_TypeSupportInterface () {};
            private:
                Sample_BasicTypes_Response_TypeSupportInterface (const Sample_BasicTypes_Response_TypeSupportInterface &);
                Sample_BasicTypes_Response_TypeSupportInterface & operator = (const Sample_BasicTypes_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_BasicTypes_Response_DataWriter_ptr _ptr_type;
                typedef Sample_BasicTypes_Response_DataWriter_var _var_type;

                static Sample_BasicTypes_Response_DataWriter_ptr _duplicate (Sample_BasicTypes_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_BasicTypes_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_BasicTypes_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_BasicTypes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_BasicTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_BasicTypes_Response_& instance_data) = 0;

            protected:
                Sample_BasicTypes_Response_DataWriter () {};
                ~Sample_BasicTypes_Response_DataWriter () {};
            private:
                Sample_BasicTypes_Response_DataWriter (const Sample_BasicTypes_Response_DataWriter &);
                Sample_BasicTypes_Response_DataWriter & operator = (const Sample_BasicTypes_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_BasicTypes_Response_DataReader_ptr _ptr_type;
                typedef Sample_BasicTypes_Response_DataReader_var _var_type;

                static Sample_BasicTypes_Response_DataReader_ptr _duplicate (Sample_BasicTypes_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_BasicTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_BasicTypes_Response_& instance) = 0;

            protected:
                Sample_BasicTypes_Response_DataReader () {};
                ~Sample_BasicTypes_Response_DataReader () {};
            private:
                Sample_BasicTypes_Response_DataReader (const Sample_BasicTypes_Response_DataReader &);
                Sample_BasicTypes_Response_DataReader & operator = (const Sample_BasicTypes_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_BasicTypes_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_BasicTypes_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_BasicTypes_Response_DataReaderView_var _var_type;

                static Sample_BasicTypes_Response_DataReaderView_ptr _duplicate (Sample_BasicTypes_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_BasicTypes_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_BasicTypes_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_BasicTypes_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_BasicTypes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_BasicTypes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_BasicTypes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_BasicTypes_Response_& instance) = 0;

            protected:
                Sample_BasicTypes_Response_DataReaderView () {};
                ~Sample_BasicTypes_Response_DataReaderView () {};
            private:
                Sample_BasicTypes_Response_DataReaderView (const Sample_BasicTypes_Response_DataReaderView &);
                Sample_BasicTypes_Response_DataReaderView & operator = (const Sample_BasicTypes_Response_DataReaderView &);
            };
        }

    }

}

#endif
