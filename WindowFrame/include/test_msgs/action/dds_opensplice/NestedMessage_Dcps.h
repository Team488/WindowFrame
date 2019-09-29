#ifndef _H_7EF71F294292B744F81EBEA34B72E592_NestedMessage_DCPS_H_
#define _H_7EF71F294292B744F81EBEA34B72E592_NestedMessage_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "NestedMessage_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace action
    {
        namespace dds_
        {
            class NestedMessage_Goal_TypeSupportInterface;

            typedef NestedMessage_Goal_TypeSupportInterface * NestedMessage_Goal_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Goal_TypeSupportInterface> NestedMessage_Goal_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Goal_TypeSupportInterface> NestedMessage_Goal_TypeSupportInterface_out;


            class NestedMessage_Goal_DataWriter;

            typedef NestedMessage_Goal_DataWriter * NestedMessage_Goal_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Goal_DataWriter> NestedMessage_Goal_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Goal_DataWriter> NestedMessage_Goal_DataWriter_out;


            class NestedMessage_Goal_DataReader;

            typedef NestedMessage_Goal_DataReader * NestedMessage_Goal_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Goal_DataReader> NestedMessage_Goal_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Goal_DataReader> NestedMessage_Goal_DataReader_out;


            class NestedMessage_Goal_DataReaderView;

            typedef NestedMessage_Goal_DataReaderView * NestedMessage_Goal_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Goal_DataReaderView> NestedMessage_Goal_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Goal_DataReaderView> NestedMessage_Goal_DataReaderView_out;

            struct NestedMessage_Goal_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_Goal_, struct NestedMessage_Goal_Seq_uniq_> NestedMessage_Goal_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_Goal_Seq> NestedMessage_Goal_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_Goal_Seq> NestedMessage_Goal_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Goal_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_Goal_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_Goal_TypeSupportInterface_var _var_type;

                static NestedMessage_Goal_TypeSupportInterface_ptr _duplicate (NestedMessage_Goal_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Goal_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Goal_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_Goal_TypeSupportInterface () {};
                ~NestedMessage_Goal_TypeSupportInterface () {};
            private:
                NestedMessage_Goal_TypeSupportInterface (const NestedMessage_Goal_TypeSupportInterface &);
                NestedMessage_Goal_TypeSupportInterface & operator = (const NestedMessage_Goal_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Goal_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_Goal_DataWriter_ptr _ptr_type;
                typedef NestedMessage_Goal_DataWriter_var _var_type;

                static NestedMessage_Goal_DataWriter_ptr _duplicate (NestedMessage_Goal_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Goal_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Goal_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_Goal_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_Goal_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Goal_& instance_data) = 0;

            protected:
                NestedMessage_Goal_DataWriter () {};
                ~NestedMessage_Goal_DataWriter () {};
            private:
                NestedMessage_Goal_DataWriter (const NestedMessage_Goal_DataWriter &);
                NestedMessage_Goal_DataWriter & operator = (const NestedMessage_Goal_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Goal_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_Goal_DataReader_ptr _ptr_type;
                typedef NestedMessage_Goal_DataReader_var _var_type;

                static NestedMessage_Goal_DataReader_ptr _duplicate (NestedMessage_Goal_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Goal_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Goal_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Goal_& instance) = 0;

            protected:
                NestedMessage_Goal_DataReader () {};
                ~NestedMessage_Goal_DataReader () {};
            private:
                NestedMessage_Goal_DataReader (const NestedMessage_Goal_DataReader &);
                NestedMessage_Goal_DataReader & operator = (const NestedMessage_Goal_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Goal_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_Goal_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_Goal_DataReaderView_var _var_type;

                static NestedMessage_Goal_DataReaderView_ptr _duplicate (NestedMessage_Goal_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Goal_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Goal_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Goal_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Goal_& instance) = 0;

            protected:
                NestedMessage_Goal_DataReaderView () {};
                ~NestedMessage_Goal_DataReaderView () {};
            private:
                NestedMessage_Goal_DataReaderView (const NestedMessage_Goal_DataReaderView &);
                NestedMessage_Goal_DataReaderView & operator = (const NestedMessage_Goal_DataReaderView &);
            };
            class NestedMessage_SendGoal_Request_TypeSupportInterface;

            typedef NestedMessage_SendGoal_Request_TypeSupportInterface * NestedMessage_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Request_TypeSupportInterface> NestedMessage_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Request_TypeSupportInterface> NestedMessage_SendGoal_Request_TypeSupportInterface_out;


            class NestedMessage_SendGoal_Request_DataWriter;

            typedef NestedMessage_SendGoal_Request_DataWriter * NestedMessage_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Request_DataWriter> NestedMessage_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Request_DataWriter> NestedMessage_SendGoal_Request_DataWriter_out;


            class NestedMessage_SendGoal_Request_DataReader;

            typedef NestedMessage_SendGoal_Request_DataReader * NestedMessage_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Request_DataReader> NestedMessage_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Request_DataReader> NestedMessage_SendGoal_Request_DataReader_out;


            class NestedMessage_SendGoal_Request_DataReaderView;

            typedef NestedMessage_SendGoal_Request_DataReaderView * NestedMessage_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Request_DataReaderView> NestedMessage_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Request_DataReaderView> NestedMessage_SendGoal_Request_DataReaderView_out;

            struct NestedMessage_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_SendGoal_Request_, struct NestedMessage_SendGoal_Request_Seq_uniq_> NestedMessage_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_SendGoal_Request_Seq> NestedMessage_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_SendGoal_Request_Seq> NestedMessage_SendGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Request_TypeSupportInterface_var _var_type;

                static NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _duplicate (NestedMessage_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_SendGoal_Request_TypeSupportInterface () {};
                ~NestedMessage_SendGoal_Request_TypeSupportInterface () {};
            private:
                NestedMessage_SendGoal_Request_TypeSupportInterface (const NestedMessage_SendGoal_Request_TypeSupportInterface &);
                NestedMessage_SendGoal_Request_TypeSupportInterface & operator = (const NestedMessage_SendGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Request_DataWriter_var _var_type;

                static NestedMessage_SendGoal_Request_DataWriter_ptr _duplicate (NestedMessage_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_SendGoal_Request_& instance_data) = 0;

            protected:
                NestedMessage_SendGoal_Request_DataWriter () {};
                ~NestedMessage_SendGoal_Request_DataWriter () {};
            private:
                NestedMessage_SendGoal_Request_DataWriter (const NestedMessage_SendGoal_Request_DataWriter &);
                NestedMessage_SendGoal_Request_DataWriter & operator = (const NestedMessage_SendGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Request_DataReader_var _var_type;

                static NestedMessage_SendGoal_Request_DataReader_ptr _duplicate (NestedMessage_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_SendGoal_Request_& instance) = 0;

            protected:
                NestedMessage_SendGoal_Request_DataReader () {};
                ~NestedMessage_SendGoal_Request_DataReader () {};
            private:
                NestedMessage_SendGoal_Request_DataReader (const NestedMessage_SendGoal_Request_DataReader &);
                NestedMessage_SendGoal_Request_DataReader & operator = (const NestedMessage_SendGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Request_DataReaderView_var _var_type;

                static NestedMessage_SendGoal_Request_DataReaderView_ptr _duplicate (NestedMessage_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_SendGoal_Request_& instance) = 0;

            protected:
                NestedMessage_SendGoal_Request_DataReaderView () {};
                ~NestedMessage_SendGoal_Request_DataReaderView () {};
            private:
                NestedMessage_SendGoal_Request_DataReaderView (const NestedMessage_SendGoal_Request_DataReaderView &);
                NestedMessage_SendGoal_Request_DataReaderView & operator = (const NestedMessage_SendGoal_Request_DataReaderView &);
            };
            class NestedMessage_SendGoal_Response_TypeSupportInterface;

            typedef NestedMessage_SendGoal_Response_TypeSupportInterface * NestedMessage_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Response_TypeSupportInterface> NestedMessage_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Response_TypeSupportInterface> NestedMessage_SendGoal_Response_TypeSupportInterface_out;


            class NestedMessage_SendGoal_Response_DataWriter;

            typedef NestedMessage_SendGoal_Response_DataWriter * NestedMessage_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Response_DataWriter> NestedMessage_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Response_DataWriter> NestedMessage_SendGoal_Response_DataWriter_out;


            class NestedMessage_SendGoal_Response_DataReader;

            typedef NestedMessage_SendGoal_Response_DataReader * NestedMessage_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Response_DataReader> NestedMessage_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Response_DataReader> NestedMessage_SendGoal_Response_DataReader_out;


            class NestedMessage_SendGoal_Response_DataReaderView;

            typedef NestedMessage_SendGoal_Response_DataReaderView * NestedMessage_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_SendGoal_Response_DataReaderView> NestedMessage_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_SendGoal_Response_DataReaderView> NestedMessage_SendGoal_Response_DataReaderView_out;

            struct NestedMessage_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_SendGoal_Response_, struct NestedMessage_SendGoal_Response_Seq_uniq_> NestedMessage_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_SendGoal_Response_Seq> NestedMessage_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_SendGoal_Response_Seq> NestedMessage_SendGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Response_TypeSupportInterface_var _var_type;

                static NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _duplicate (NestedMessage_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_SendGoal_Response_TypeSupportInterface () {};
                ~NestedMessage_SendGoal_Response_TypeSupportInterface () {};
            private:
                NestedMessage_SendGoal_Response_TypeSupportInterface (const NestedMessage_SendGoal_Response_TypeSupportInterface &);
                NestedMessage_SendGoal_Response_TypeSupportInterface & operator = (const NestedMessage_SendGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Response_DataWriter_var _var_type;

                static NestedMessage_SendGoal_Response_DataWriter_ptr _duplicate (NestedMessage_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_SendGoal_Response_& instance_data) = 0;

            protected:
                NestedMessage_SendGoal_Response_DataWriter () {};
                ~NestedMessage_SendGoal_Response_DataWriter () {};
            private:
                NestedMessage_SendGoal_Response_DataWriter (const NestedMessage_SendGoal_Response_DataWriter &);
                NestedMessage_SendGoal_Response_DataWriter & operator = (const NestedMessage_SendGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Response_DataReader_var _var_type;

                static NestedMessage_SendGoal_Response_DataReader_ptr _duplicate (NestedMessage_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_SendGoal_Response_& instance) = 0;

            protected:
                NestedMessage_SendGoal_Response_DataReader () {};
                ~NestedMessage_SendGoal_Response_DataReader () {};
            private:
                NestedMessage_SendGoal_Response_DataReader (const NestedMessage_SendGoal_Response_DataReader &);
                NestedMessage_SendGoal_Response_DataReader & operator = (const NestedMessage_SendGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_SendGoal_Response_DataReaderView_var _var_type;

                static NestedMessage_SendGoal_Response_DataReaderView_ptr _duplicate (NestedMessage_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_SendGoal_Response_& instance) = 0;

            protected:
                NestedMessage_SendGoal_Response_DataReaderView () {};
                ~NestedMessage_SendGoal_Response_DataReaderView () {};
            private:
                NestedMessage_SendGoal_Response_DataReaderView (const NestedMessage_SendGoal_Response_DataReaderView &);
                NestedMessage_SendGoal_Response_DataReaderView & operator = (const NestedMessage_SendGoal_Response_DataReaderView &);
            };
            class Sample_NestedMessage_SendGoal_Request_TypeSupportInterface;

            typedef Sample_NestedMessage_SendGoal_Request_TypeSupportInterface * Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Request_TypeSupportInterface> Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Request_TypeSupportInterface> Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_out;


            class Sample_NestedMessage_SendGoal_Request_DataWriter;

            typedef Sample_NestedMessage_SendGoal_Request_DataWriter * Sample_NestedMessage_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Request_DataWriter> Sample_NestedMessage_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Request_DataWriter> Sample_NestedMessage_SendGoal_Request_DataWriter_out;


            class Sample_NestedMessage_SendGoal_Request_DataReader;

            typedef Sample_NestedMessage_SendGoal_Request_DataReader * Sample_NestedMessage_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Request_DataReader> Sample_NestedMessage_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Request_DataReader> Sample_NestedMessage_SendGoal_Request_DataReader_out;


            class Sample_NestedMessage_SendGoal_Request_DataReaderView;

            typedef Sample_NestedMessage_SendGoal_Request_DataReaderView * Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Request_DataReaderView> Sample_NestedMessage_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Request_DataReaderView> Sample_NestedMessage_SendGoal_Request_DataReaderView_out;

            struct Sample_NestedMessage_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_NestedMessage_SendGoal_Request_, struct Sample_NestedMessage_SendGoal_Request_Seq_uniq_> Sample_NestedMessage_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_NestedMessage_SendGoal_Request_Seq> Sample_NestedMessage_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_NestedMessage_SendGoal_Request_Seq> Sample_NestedMessage_SendGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_var _var_type;

                static Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _duplicate (Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_NestedMessage_SendGoal_Request_TypeSupportInterface () {};
                ~Sample_NestedMessage_SendGoal_Request_TypeSupportInterface () {};
            private:
                Sample_NestedMessage_SendGoal_Request_TypeSupportInterface (const Sample_NestedMessage_SendGoal_Request_TypeSupportInterface &);
                Sample_NestedMessage_SendGoal_Request_TypeSupportInterface & operator = (const Sample_NestedMessage_SendGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Request_DataWriter_var _var_type;

                static Sample_NestedMessage_SendGoal_Request_DataWriter_ptr _duplicate (Sample_NestedMessage_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_NestedMessage_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_NestedMessage_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_NestedMessage_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_SendGoal_Request_& instance_data) = 0;

            protected:
                Sample_NestedMessage_SendGoal_Request_DataWriter () {};
                ~Sample_NestedMessage_SendGoal_Request_DataWriter () {};
            private:
                Sample_NestedMessage_SendGoal_Request_DataWriter (const Sample_NestedMessage_SendGoal_Request_DataWriter &);
                Sample_NestedMessage_SendGoal_Request_DataWriter & operator = (const Sample_NestedMessage_SendGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Request_DataReader_var _var_type;

                static Sample_NestedMessage_SendGoal_Request_DataReader_ptr _duplicate (Sample_NestedMessage_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_SendGoal_Request_& instance) = 0;

            protected:
                Sample_NestedMessage_SendGoal_Request_DataReader () {};
                ~Sample_NestedMessage_SendGoal_Request_DataReader () {};
            private:
                Sample_NestedMessage_SendGoal_Request_DataReader (const Sample_NestedMessage_SendGoal_Request_DataReader &);
                Sample_NestedMessage_SendGoal_Request_DataReader & operator = (const Sample_NestedMessage_SendGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Request_DataReaderView_var _var_type;

                static Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr _duplicate (Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_SendGoal_Request_& instance) = 0;

            protected:
                Sample_NestedMessage_SendGoal_Request_DataReaderView () {};
                ~Sample_NestedMessage_SendGoal_Request_DataReaderView () {};
            private:
                Sample_NestedMessage_SendGoal_Request_DataReaderView (const Sample_NestedMessage_SendGoal_Request_DataReaderView &);
                Sample_NestedMessage_SendGoal_Request_DataReaderView & operator = (const Sample_NestedMessage_SendGoal_Request_DataReaderView &);
            };
            class Sample_NestedMessage_SendGoal_Response_TypeSupportInterface;

            typedef Sample_NestedMessage_SendGoal_Response_TypeSupportInterface * Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Response_TypeSupportInterface> Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Response_TypeSupportInterface> Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_out;


            class Sample_NestedMessage_SendGoal_Response_DataWriter;

            typedef Sample_NestedMessage_SendGoal_Response_DataWriter * Sample_NestedMessage_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Response_DataWriter> Sample_NestedMessage_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Response_DataWriter> Sample_NestedMessage_SendGoal_Response_DataWriter_out;


            class Sample_NestedMessage_SendGoal_Response_DataReader;

            typedef Sample_NestedMessage_SendGoal_Response_DataReader * Sample_NestedMessage_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Response_DataReader> Sample_NestedMessage_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Response_DataReader> Sample_NestedMessage_SendGoal_Response_DataReader_out;


            class Sample_NestedMessage_SendGoal_Response_DataReaderView;

            typedef Sample_NestedMessage_SendGoal_Response_DataReaderView * Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_SendGoal_Response_DataReaderView> Sample_NestedMessage_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_SendGoal_Response_DataReaderView> Sample_NestedMessage_SendGoal_Response_DataReaderView_out;

            struct Sample_NestedMessage_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_NestedMessage_SendGoal_Response_, struct Sample_NestedMessage_SendGoal_Response_Seq_uniq_> Sample_NestedMessage_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_NestedMessage_SendGoal_Response_Seq> Sample_NestedMessage_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_NestedMessage_SendGoal_Response_Seq> Sample_NestedMessage_SendGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_var _var_type;

                static Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _duplicate (Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_NestedMessage_SendGoal_Response_TypeSupportInterface () {};
                ~Sample_NestedMessage_SendGoal_Response_TypeSupportInterface () {};
            private:
                Sample_NestedMessage_SendGoal_Response_TypeSupportInterface (const Sample_NestedMessage_SendGoal_Response_TypeSupportInterface &);
                Sample_NestedMessage_SendGoal_Response_TypeSupportInterface & operator = (const Sample_NestedMessage_SendGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Response_DataWriter_var _var_type;

                static Sample_NestedMessage_SendGoal_Response_DataWriter_ptr _duplicate (Sample_NestedMessage_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_NestedMessage_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_NestedMessage_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_NestedMessage_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_SendGoal_Response_& instance_data) = 0;

            protected:
                Sample_NestedMessage_SendGoal_Response_DataWriter () {};
                ~Sample_NestedMessage_SendGoal_Response_DataWriter () {};
            private:
                Sample_NestedMessage_SendGoal_Response_DataWriter (const Sample_NestedMessage_SendGoal_Response_DataWriter &);
                Sample_NestedMessage_SendGoal_Response_DataWriter & operator = (const Sample_NestedMessage_SendGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Response_DataReader_var _var_type;

                static Sample_NestedMessage_SendGoal_Response_DataReader_ptr _duplicate (Sample_NestedMessage_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_SendGoal_Response_& instance) = 0;

            protected:
                Sample_NestedMessage_SendGoal_Response_DataReader () {};
                ~Sample_NestedMessage_SendGoal_Response_DataReader () {};
            private:
                Sample_NestedMessage_SendGoal_Response_DataReader (const Sample_NestedMessage_SendGoal_Response_DataReader &);
                Sample_NestedMessage_SendGoal_Response_DataReader & operator = (const Sample_NestedMessage_SendGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_NestedMessage_SendGoal_Response_DataReaderView_var _var_type;

                static Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr _duplicate (Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_SendGoal_Response_& instance) = 0;

            protected:
                Sample_NestedMessage_SendGoal_Response_DataReaderView () {};
                ~Sample_NestedMessage_SendGoal_Response_DataReaderView () {};
            private:
                Sample_NestedMessage_SendGoal_Response_DataReaderView (const Sample_NestedMessage_SendGoal_Response_DataReaderView &);
                Sample_NestedMessage_SendGoal_Response_DataReaderView & operator = (const Sample_NestedMessage_SendGoal_Response_DataReaderView &);
            };
            class NestedMessage_Result_TypeSupportInterface;

            typedef NestedMessage_Result_TypeSupportInterface * NestedMessage_Result_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Result_TypeSupportInterface> NestedMessage_Result_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Result_TypeSupportInterface> NestedMessage_Result_TypeSupportInterface_out;


            class NestedMessage_Result_DataWriter;

            typedef NestedMessage_Result_DataWriter * NestedMessage_Result_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Result_DataWriter> NestedMessage_Result_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Result_DataWriter> NestedMessage_Result_DataWriter_out;


            class NestedMessage_Result_DataReader;

            typedef NestedMessage_Result_DataReader * NestedMessage_Result_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Result_DataReader> NestedMessage_Result_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Result_DataReader> NestedMessage_Result_DataReader_out;


            class NestedMessage_Result_DataReaderView;

            typedef NestedMessage_Result_DataReaderView * NestedMessage_Result_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Result_DataReaderView> NestedMessage_Result_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Result_DataReaderView> NestedMessage_Result_DataReaderView_out;

            struct NestedMessage_Result_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_Result_, struct NestedMessage_Result_Seq_uniq_> NestedMessage_Result_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_Result_Seq> NestedMessage_Result_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_Result_Seq> NestedMessage_Result_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Result_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_Result_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_Result_TypeSupportInterface_var _var_type;

                static NestedMessage_Result_TypeSupportInterface_ptr _duplicate (NestedMessage_Result_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Result_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Result_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_Result_TypeSupportInterface () {};
                ~NestedMessage_Result_TypeSupportInterface () {};
            private:
                NestedMessage_Result_TypeSupportInterface (const NestedMessage_Result_TypeSupportInterface &);
                NestedMessage_Result_TypeSupportInterface & operator = (const NestedMessage_Result_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Result_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_Result_DataWriter_ptr _ptr_type;
                typedef NestedMessage_Result_DataWriter_var _var_type;

                static NestedMessage_Result_DataWriter_ptr _duplicate (NestedMessage_Result_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Result_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Result_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_Result_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_Result_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Result_& instance_data) = 0;

            protected:
                NestedMessage_Result_DataWriter () {};
                ~NestedMessage_Result_DataWriter () {};
            private:
                NestedMessage_Result_DataWriter (const NestedMessage_Result_DataWriter &);
                NestedMessage_Result_DataWriter & operator = (const NestedMessage_Result_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Result_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_Result_DataReader_ptr _ptr_type;
                typedef NestedMessage_Result_DataReader_var _var_type;

                static NestedMessage_Result_DataReader_ptr _duplicate (NestedMessage_Result_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Result_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Result_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Result_& instance) = 0;

            protected:
                NestedMessage_Result_DataReader () {};
                ~NestedMessage_Result_DataReader () {};
            private:
                NestedMessage_Result_DataReader (const NestedMessage_Result_DataReader &);
                NestedMessage_Result_DataReader & operator = (const NestedMessage_Result_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Result_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_Result_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_Result_DataReaderView_var _var_type;

                static NestedMessage_Result_DataReaderView_ptr _duplicate (NestedMessage_Result_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Result_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Result_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Result_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Result_& instance) = 0;

            protected:
                NestedMessage_Result_DataReaderView () {};
                ~NestedMessage_Result_DataReaderView () {};
            private:
                NestedMessage_Result_DataReaderView (const NestedMessage_Result_DataReaderView &);
                NestedMessage_Result_DataReaderView & operator = (const NestedMessage_Result_DataReaderView &);
            };
            class NestedMessage_GetResult_Request_TypeSupportInterface;

            typedef NestedMessage_GetResult_Request_TypeSupportInterface * NestedMessage_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Request_TypeSupportInterface> NestedMessage_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Request_TypeSupportInterface> NestedMessage_GetResult_Request_TypeSupportInterface_out;


            class NestedMessage_GetResult_Request_DataWriter;

            typedef NestedMessage_GetResult_Request_DataWriter * NestedMessage_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Request_DataWriter> NestedMessage_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Request_DataWriter> NestedMessage_GetResult_Request_DataWriter_out;


            class NestedMessage_GetResult_Request_DataReader;

            typedef NestedMessage_GetResult_Request_DataReader * NestedMessage_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Request_DataReader> NestedMessage_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Request_DataReader> NestedMessage_GetResult_Request_DataReader_out;


            class NestedMessage_GetResult_Request_DataReaderView;

            typedef NestedMessage_GetResult_Request_DataReaderView * NestedMessage_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Request_DataReaderView> NestedMessage_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Request_DataReaderView> NestedMessage_GetResult_Request_DataReaderView_out;

            struct NestedMessage_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_GetResult_Request_, struct NestedMessage_GetResult_Request_Seq_uniq_> NestedMessage_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_GetResult_Request_Seq> NestedMessage_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_GetResult_Request_Seq> NestedMessage_GetResult_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_GetResult_Request_TypeSupportInterface_var _var_type;

                static NestedMessage_GetResult_Request_TypeSupportInterface_ptr _duplicate (NestedMessage_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_GetResult_Request_TypeSupportInterface () {};
                ~NestedMessage_GetResult_Request_TypeSupportInterface () {};
            private:
                NestedMessage_GetResult_Request_TypeSupportInterface (const NestedMessage_GetResult_Request_TypeSupportInterface &);
                NestedMessage_GetResult_Request_TypeSupportInterface & operator = (const NestedMessage_GetResult_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef NestedMessage_GetResult_Request_DataWriter_var _var_type;

                static NestedMessage_GetResult_Request_DataWriter_ptr _duplicate (NestedMessage_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_GetResult_Request_& instance_data) = 0;

            protected:
                NestedMessage_GetResult_Request_DataWriter () {};
                ~NestedMessage_GetResult_Request_DataWriter () {};
            private:
                NestedMessage_GetResult_Request_DataWriter (const NestedMessage_GetResult_Request_DataWriter &);
                NestedMessage_GetResult_Request_DataWriter & operator = (const NestedMessage_GetResult_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_GetResult_Request_DataReader_ptr _ptr_type;
                typedef NestedMessage_GetResult_Request_DataReader_var _var_type;

                static NestedMessage_GetResult_Request_DataReader_ptr _duplicate (NestedMessage_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_GetResult_Request_& instance) = 0;

            protected:
                NestedMessage_GetResult_Request_DataReader () {};
                ~NestedMessage_GetResult_Request_DataReader () {};
            private:
                NestedMessage_GetResult_Request_DataReader (const NestedMessage_GetResult_Request_DataReader &);
                NestedMessage_GetResult_Request_DataReader & operator = (const NestedMessage_GetResult_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_GetResult_Request_DataReaderView_var _var_type;

                static NestedMessage_GetResult_Request_DataReaderView_ptr _duplicate (NestedMessage_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_GetResult_Request_& instance) = 0;

            protected:
                NestedMessage_GetResult_Request_DataReaderView () {};
                ~NestedMessage_GetResult_Request_DataReaderView () {};
            private:
                NestedMessage_GetResult_Request_DataReaderView (const NestedMessage_GetResult_Request_DataReaderView &);
                NestedMessage_GetResult_Request_DataReaderView & operator = (const NestedMessage_GetResult_Request_DataReaderView &);
            };
            class NestedMessage_GetResult_Response_TypeSupportInterface;

            typedef NestedMessage_GetResult_Response_TypeSupportInterface * NestedMessage_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Response_TypeSupportInterface> NestedMessage_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Response_TypeSupportInterface> NestedMessage_GetResult_Response_TypeSupportInterface_out;


            class NestedMessage_GetResult_Response_DataWriter;

            typedef NestedMessage_GetResult_Response_DataWriter * NestedMessage_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Response_DataWriter> NestedMessage_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Response_DataWriter> NestedMessage_GetResult_Response_DataWriter_out;


            class NestedMessage_GetResult_Response_DataReader;

            typedef NestedMessage_GetResult_Response_DataReader * NestedMessage_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Response_DataReader> NestedMessage_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Response_DataReader> NestedMessage_GetResult_Response_DataReader_out;


            class NestedMessage_GetResult_Response_DataReaderView;

            typedef NestedMessage_GetResult_Response_DataReaderView * NestedMessage_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_GetResult_Response_DataReaderView> NestedMessage_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_GetResult_Response_DataReaderView> NestedMessage_GetResult_Response_DataReaderView_out;

            struct NestedMessage_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_GetResult_Response_, struct NestedMessage_GetResult_Response_Seq_uniq_> NestedMessage_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_GetResult_Response_Seq> NestedMessage_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_GetResult_Response_Seq> NestedMessage_GetResult_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_GetResult_Response_TypeSupportInterface_var _var_type;

                static NestedMessage_GetResult_Response_TypeSupportInterface_ptr _duplicate (NestedMessage_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_GetResult_Response_TypeSupportInterface () {};
                ~NestedMessage_GetResult_Response_TypeSupportInterface () {};
            private:
                NestedMessage_GetResult_Response_TypeSupportInterface (const NestedMessage_GetResult_Response_TypeSupportInterface &);
                NestedMessage_GetResult_Response_TypeSupportInterface & operator = (const NestedMessage_GetResult_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef NestedMessage_GetResult_Response_DataWriter_var _var_type;

                static NestedMessage_GetResult_Response_DataWriter_ptr _duplicate (NestedMessage_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_GetResult_Response_& instance_data) = 0;

            protected:
                NestedMessage_GetResult_Response_DataWriter () {};
                ~NestedMessage_GetResult_Response_DataWriter () {};
            private:
                NestedMessage_GetResult_Response_DataWriter (const NestedMessage_GetResult_Response_DataWriter &);
                NestedMessage_GetResult_Response_DataWriter & operator = (const NestedMessage_GetResult_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_GetResult_Response_DataReader_ptr _ptr_type;
                typedef NestedMessage_GetResult_Response_DataReader_var _var_type;

                static NestedMessage_GetResult_Response_DataReader_ptr _duplicate (NestedMessage_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_GetResult_Response_& instance) = 0;

            protected:
                NestedMessage_GetResult_Response_DataReader () {};
                ~NestedMessage_GetResult_Response_DataReader () {};
            private:
                NestedMessage_GetResult_Response_DataReader (const NestedMessage_GetResult_Response_DataReader &);
                NestedMessage_GetResult_Response_DataReader & operator = (const NestedMessage_GetResult_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_GetResult_Response_DataReaderView_var _var_type;

                static NestedMessage_GetResult_Response_DataReaderView_ptr _duplicate (NestedMessage_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_GetResult_Response_& instance) = 0;

            protected:
                NestedMessage_GetResult_Response_DataReaderView () {};
                ~NestedMessage_GetResult_Response_DataReaderView () {};
            private:
                NestedMessage_GetResult_Response_DataReaderView (const NestedMessage_GetResult_Response_DataReaderView &);
                NestedMessage_GetResult_Response_DataReaderView & operator = (const NestedMessage_GetResult_Response_DataReaderView &);
            };
            class Sample_NestedMessage_GetResult_Request_TypeSupportInterface;

            typedef Sample_NestedMessage_GetResult_Request_TypeSupportInterface * Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Request_TypeSupportInterface> Sample_NestedMessage_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Request_TypeSupportInterface> Sample_NestedMessage_GetResult_Request_TypeSupportInterface_out;


            class Sample_NestedMessage_GetResult_Request_DataWriter;

            typedef Sample_NestedMessage_GetResult_Request_DataWriter * Sample_NestedMessage_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Request_DataWriter> Sample_NestedMessage_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Request_DataWriter> Sample_NestedMessage_GetResult_Request_DataWriter_out;


            class Sample_NestedMessage_GetResult_Request_DataReader;

            typedef Sample_NestedMessage_GetResult_Request_DataReader * Sample_NestedMessage_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Request_DataReader> Sample_NestedMessage_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Request_DataReader> Sample_NestedMessage_GetResult_Request_DataReader_out;


            class Sample_NestedMessage_GetResult_Request_DataReaderView;

            typedef Sample_NestedMessage_GetResult_Request_DataReaderView * Sample_NestedMessage_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Request_DataReaderView> Sample_NestedMessage_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Request_DataReaderView> Sample_NestedMessage_GetResult_Request_DataReaderView_out;

            struct Sample_NestedMessage_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_NestedMessage_GetResult_Request_, struct Sample_NestedMessage_GetResult_Request_Seq_uniq_> Sample_NestedMessage_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_NestedMessage_GetResult_Request_Seq> Sample_NestedMessage_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_NestedMessage_GetResult_Request_Seq> Sample_NestedMessage_GetResult_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Request_TypeSupportInterface_var _var_type;

                static Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr _duplicate (Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_NestedMessage_GetResult_Request_TypeSupportInterface () {};
                ~Sample_NestedMessage_GetResult_Request_TypeSupportInterface () {};
            private:
                Sample_NestedMessage_GetResult_Request_TypeSupportInterface (const Sample_NestedMessage_GetResult_Request_TypeSupportInterface &);
                Sample_NestedMessage_GetResult_Request_TypeSupportInterface & operator = (const Sample_NestedMessage_GetResult_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Request_DataWriter_var _var_type;

                static Sample_NestedMessage_GetResult_Request_DataWriter_ptr _duplicate (Sample_NestedMessage_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_NestedMessage_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_NestedMessage_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_NestedMessage_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_GetResult_Request_& instance_data) = 0;

            protected:
                Sample_NestedMessage_GetResult_Request_DataWriter () {};
                ~Sample_NestedMessage_GetResult_Request_DataWriter () {};
            private:
                Sample_NestedMessage_GetResult_Request_DataWriter (const Sample_NestedMessage_GetResult_Request_DataWriter &);
                Sample_NestedMessage_GetResult_Request_DataWriter & operator = (const Sample_NestedMessage_GetResult_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Request_DataReader_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Request_DataReader_var _var_type;

                static Sample_NestedMessage_GetResult_Request_DataReader_ptr _duplicate (Sample_NestedMessage_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_GetResult_Request_& instance) = 0;

            protected:
                Sample_NestedMessage_GetResult_Request_DataReader () {};
                ~Sample_NestedMessage_GetResult_Request_DataReader () {};
            private:
                Sample_NestedMessage_GetResult_Request_DataReader (const Sample_NestedMessage_GetResult_Request_DataReader &);
                Sample_NestedMessage_GetResult_Request_DataReader & operator = (const Sample_NestedMessage_GetResult_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Request_DataReaderView_var _var_type;

                static Sample_NestedMessage_GetResult_Request_DataReaderView_ptr _duplicate (Sample_NestedMessage_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_GetResult_Request_& instance) = 0;

            protected:
                Sample_NestedMessage_GetResult_Request_DataReaderView () {};
                ~Sample_NestedMessage_GetResult_Request_DataReaderView () {};
            private:
                Sample_NestedMessage_GetResult_Request_DataReaderView (const Sample_NestedMessage_GetResult_Request_DataReaderView &);
                Sample_NestedMessage_GetResult_Request_DataReaderView & operator = (const Sample_NestedMessage_GetResult_Request_DataReaderView &);
            };
            class Sample_NestedMessage_GetResult_Response_TypeSupportInterface;

            typedef Sample_NestedMessage_GetResult_Response_TypeSupportInterface * Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Response_TypeSupportInterface> Sample_NestedMessage_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Response_TypeSupportInterface> Sample_NestedMessage_GetResult_Response_TypeSupportInterface_out;


            class Sample_NestedMessage_GetResult_Response_DataWriter;

            typedef Sample_NestedMessage_GetResult_Response_DataWriter * Sample_NestedMessage_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Response_DataWriter> Sample_NestedMessage_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Response_DataWriter> Sample_NestedMessage_GetResult_Response_DataWriter_out;


            class Sample_NestedMessage_GetResult_Response_DataReader;

            typedef Sample_NestedMessage_GetResult_Response_DataReader * Sample_NestedMessage_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Response_DataReader> Sample_NestedMessage_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Response_DataReader> Sample_NestedMessage_GetResult_Response_DataReader_out;


            class Sample_NestedMessage_GetResult_Response_DataReaderView;

            typedef Sample_NestedMessage_GetResult_Response_DataReaderView * Sample_NestedMessage_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_NestedMessage_GetResult_Response_DataReaderView> Sample_NestedMessage_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_NestedMessage_GetResult_Response_DataReaderView> Sample_NestedMessage_GetResult_Response_DataReaderView_out;

            struct Sample_NestedMessage_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_NestedMessage_GetResult_Response_, struct Sample_NestedMessage_GetResult_Response_Seq_uniq_> Sample_NestedMessage_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_NestedMessage_GetResult_Response_Seq> Sample_NestedMessage_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_NestedMessage_GetResult_Response_Seq> Sample_NestedMessage_GetResult_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Response_TypeSupportInterface_var _var_type;

                static Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr _duplicate (Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_NestedMessage_GetResult_Response_TypeSupportInterface () {};
                ~Sample_NestedMessage_GetResult_Response_TypeSupportInterface () {};
            private:
                Sample_NestedMessage_GetResult_Response_TypeSupportInterface (const Sample_NestedMessage_GetResult_Response_TypeSupportInterface &);
                Sample_NestedMessage_GetResult_Response_TypeSupportInterface & operator = (const Sample_NestedMessage_GetResult_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Response_DataWriter_var _var_type;

                static Sample_NestedMessage_GetResult_Response_DataWriter_ptr _duplicate (Sample_NestedMessage_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_NestedMessage_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_NestedMessage_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_NestedMessage_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_GetResult_Response_& instance_data) = 0;

            protected:
                Sample_NestedMessage_GetResult_Response_DataWriter () {};
                ~Sample_NestedMessage_GetResult_Response_DataWriter () {};
            private:
                Sample_NestedMessage_GetResult_Response_DataWriter (const Sample_NestedMessage_GetResult_Response_DataWriter &);
                Sample_NestedMessage_GetResult_Response_DataWriter & operator = (const Sample_NestedMessage_GetResult_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Response_DataReader_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Response_DataReader_var _var_type;

                static Sample_NestedMessage_GetResult_Response_DataReader_ptr _duplicate (Sample_NestedMessage_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_GetResult_Response_& instance) = 0;

            protected:
                Sample_NestedMessage_GetResult_Response_DataReader () {};
                ~Sample_NestedMessage_GetResult_Response_DataReader () {};
            private:
                Sample_NestedMessage_GetResult_Response_DataReader (const Sample_NestedMessage_GetResult_Response_DataReader &);
                Sample_NestedMessage_GetResult_Response_DataReader & operator = (const Sample_NestedMessage_GetResult_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_NestedMessage_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_NestedMessage_GetResult_Response_DataReaderView_var _var_type;

                static Sample_NestedMessage_GetResult_Response_DataReaderView_ptr _duplicate (Sample_NestedMessage_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_NestedMessage_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_NestedMessage_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_NestedMessage_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_NestedMessage_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_NestedMessage_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_NestedMessage_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_NestedMessage_GetResult_Response_& instance) = 0;

            protected:
                Sample_NestedMessage_GetResult_Response_DataReaderView () {};
                ~Sample_NestedMessage_GetResult_Response_DataReaderView () {};
            private:
                Sample_NestedMessage_GetResult_Response_DataReaderView (const Sample_NestedMessage_GetResult_Response_DataReaderView &);
                Sample_NestedMessage_GetResult_Response_DataReaderView & operator = (const Sample_NestedMessage_GetResult_Response_DataReaderView &);
            };
            class NestedMessage_Feedback_TypeSupportInterface;

            typedef NestedMessage_Feedback_TypeSupportInterface * NestedMessage_Feedback_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Feedback_TypeSupportInterface> NestedMessage_Feedback_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Feedback_TypeSupportInterface> NestedMessage_Feedback_TypeSupportInterface_out;


            class NestedMessage_Feedback_DataWriter;

            typedef NestedMessage_Feedback_DataWriter * NestedMessage_Feedback_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Feedback_DataWriter> NestedMessage_Feedback_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Feedback_DataWriter> NestedMessage_Feedback_DataWriter_out;


            class NestedMessage_Feedback_DataReader;

            typedef NestedMessage_Feedback_DataReader * NestedMessage_Feedback_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Feedback_DataReader> NestedMessage_Feedback_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Feedback_DataReader> NestedMessage_Feedback_DataReader_out;


            class NestedMessage_Feedback_DataReaderView;

            typedef NestedMessage_Feedback_DataReaderView * NestedMessage_Feedback_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_Feedback_DataReaderView> NestedMessage_Feedback_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_Feedback_DataReaderView> NestedMessage_Feedback_DataReaderView_out;

            struct NestedMessage_Feedback_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_Feedback_, struct NestedMessage_Feedback_Seq_uniq_> NestedMessage_Feedback_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_Feedback_Seq> NestedMessage_Feedback_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_Feedback_Seq> NestedMessage_Feedback_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Feedback_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_Feedback_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_Feedback_TypeSupportInterface_var _var_type;

                static NestedMessage_Feedback_TypeSupportInterface_ptr _duplicate (NestedMessage_Feedback_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Feedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Feedback_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_Feedback_TypeSupportInterface () {};
                ~NestedMessage_Feedback_TypeSupportInterface () {};
            private:
                NestedMessage_Feedback_TypeSupportInterface (const NestedMessage_Feedback_TypeSupportInterface &);
                NestedMessage_Feedback_TypeSupportInterface & operator = (const NestedMessage_Feedback_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Feedback_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_Feedback_DataWriter_ptr _ptr_type;
                typedef NestedMessage_Feedback_DataWriter_var _var_type;

                static NestedMessage_Feedback_DataWriter_ptr _duplicate (NestedMessage_Feedback_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Feedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Feedback_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_Feedback_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_Feedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Feedback_& instance_data) = 0;

            protected:
                NestedMessage_Feedback_DataWriter () {};
                ~NestedMessage_Feedback_DataWriter () {};
            private:
                NestedMessage_Feedback_DataWriter (const NestedMessage_Feedback_DataWriter &);
                NestedMessage_Feedback_DataWriter & operator = (const NestedMessage_Feedback_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Feedback_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_Feedback_DataReader_ptr _ptr_type;
                typedef NestedMessage_Feedback_DataReader_var _var_type;

                static NestedMessage_Feedback_DataReader_ptr _duplicate (NestedMessage_Feedback_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Feedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Feedback_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Feedback_& instance) = 0;

            protected:
                NestedMessage_Feedback_DataReader () {};
                ~NestedMessage_Feedback_DataReader () {};
            private:
                NestedMessage_Feedback_DataReader (const NestedMessage_Feedback_DataReader &);
                NestedMessage_Feedback_DataReader & operator = (const NestedMessage_Feedback_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Feedback_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_Feedback_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_Feedback_DataReaderView_var _var_type;

                static NestedMessage_Feedback_DataReaderView_ptr _duplicate (NestedMessage_Feedback_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_Feedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_Feedback_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_Feedback_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_Feedback_& instance) = 0;

            protected:
                NestedMessage_Feedback_DataReaderView () {};
                ~NestedMessage_Feedback_DataReaderView () {};
            private:
                NestedMessage_Feedback_DataReaderView (const NestedMessage_Feedback_DataReaderView &);
                NestedMessage_Feedback_DataReaderView & operator = (const NestedMessage_Feedback_DataReaderView &);
            };
            class NestedMessage_FeedbackMessage_TypeSupportInterface;

            typedef NestedMessage_FeedbackMessage_TypeSupportInterface * NestedMessage_FeedbackMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_FeedbackMessage_TypeSupportInterface> NestedMessage_FeedbackMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NestedMessage_FeedbackMessage_TypeSupportInterface> NestedMessage_FeedbackMessage_TypeSupportInterface_out;


            class NestedMessage_FeedbackMessage_DataWriter;

            typedef NestedMessage_FeedbackMessage_DataWriter * NestedMessage_FeedbackMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_FeedbackMessage_DataWriter> NestedMessage_FeedbackMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < NestedMessage_FeedbackMessage_DataWriter> NestedMessage_FeedbackMessage_DataWriter_out;


            class NestedMessage_FeedbackMessage_DataReader;

            typedef NestedMessage_FeedbackMessage_DataReader * NestedMessage_FeedbackMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_FeedbackMessage_DataReader> NestedMessage_FeedbackMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < NestedMessage_FeedbackMessage_DataReader> NestedMessage_FeedbackMessage_DataReader_out;


            class NestedMessage_FeedbackMessage_DataReaderView;

            typedef NestedMessage_FeedbackMessage_DataReaderView * NestedMessage_FeedbackMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NestedMessage_FeedbackMessage_DataReaderView> NestedMessage_FeedbackMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NestedMessage_FeedbackMessage_DataReaderView> NestedMessage_FeedbackMessage_DataReaderView_out;

            struct NestedMessage_FeedbackMessage_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NestedMessage_FeedbackMessage_, struct NestedMessage_FeedbackMessage_Seq_uniq_> NestedMessage_FeedbackMessage_Seq;
            typedef DDS_DCPSSequence_var < NestedMessage_FeedbackMessage_Seq> NestedMessage_FeedbackMessage_Seq_var;
            typedef DDS_DCPSSequence_out < NestedMessage_FeedbackMessage_Seq> NestedMessage_FeedbackMessage_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_FeedbackMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NestedMessage_FeedbackMessage_TypeSupportInterface_ptr _ptr_type;
                typedef NestedMessage_FeedbackMessage_TypeSupportInterface_var _var_type;

                static NestedMessage_FeedbackMessage_TypeSupportInterface_ptr _duplicate (NestedMessage_FeedbackMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_FeedbackMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_FeedbackMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NestedMessage_FeedbackMessage_TypeSupportInterface () {};
                ~NestedMessage_FeedbackMessage_TypeSupportInterface () {};
            private:
                NestedMessage_FeedbackMessage_TypeSupportInterface (const NestedMessage_FeedbackMessage_TypeSupportInterface &);
                NestedMessage_FeedbackMessage_TypeSupportInterface & operator = (const NestedMessage_FeedbackMessage_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_FeedbackMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NestedMessage_FeedbackMessage_DataWriter_ptr _ptr_type;
                typedef NestedMessage_FeedbackMessage_DataWriter_var _var_type;

                static NestedMessage_FeedbackMessage_DataWriter_ptr _duplicate (NestedMessage_FeedbackMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_FeedbackMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_FeedbackMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NestedMessage_FeedbackMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NestedMessage_FeedbackMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NestedMessage_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NestedMessage_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_FeedbackMessage_& instance_data) = 0;

            protected:
                NestedMessage_FeedbackMessage_DataWriter () {};
                ~NestedMessage_FeedbackMessage_DataWriter () {};
            private:
                NestedMessage_FeedbackMessage_DataWriter (const NestedMessage_FeedbackMessage_DataWriter &);
                NestedMessage_FeedbackMessage_DataWriter & operator = (const NestedMessage_FeedbackMessage_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_FeedbackMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NestedMessage_FeedbackMessage_DataReader_ptr _ptr_type;
                typedef NestedMessage_FeedbackMessage_DataReader_var _var_type;

                static NestedMessage_FeedbackMessage_DataReader_ptr _duplicate (NestedMessage_FeedbackMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_FeedbackMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_FeedbackMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_FeedbackMessage_& instance) = 0;

            protected:
                NestedMessage_FeedbackMessage_DataReader () {};
                ~NestedMessage_FeedbackMessage_DataReader () {};
            private:
                NestedMessage_FeedbackMessage_DataReader (const NestedMessage_FeedbackMessage_DataReader &);
                NestedMessage_FeedbackMessage_DataReader & operator = (const NestedMessage_FeedbackMessage_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_FeedbackMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NestedMessage_FeedbackMessage_DataReaderView_ptr _ptr_type;
                typedef NestedMessage_FeedbackMessage_DataReaderView_var _var_type;

                static NestedMessage_FeedbackMessage_DataReaderView_ptr _duplicate (NestedMessage_FeedbackMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NestedMessage_FeedbackMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NestedMessage_FeedbackMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NestedMessage_FeedbackMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NestedMessage_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NestedMessage_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NestedMessage_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NestedMessage_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NestedMessage_FeedbackMessage_& instance) = 0;

            protected:
                NestedMessage_FeedbackMessage_DataReaderView () {};
                ~NestedMessage_FeedbackMessage_DataReaderView () {};
            private:
                NestedMessage_FeedbackMessage_DataReaderView (const NestedMessage_FeedbackMessage_DataReaderView &);
                NestedMessage_FeedbackMessage_DataReaderView & operator = (const NestedMessage_FeedbackMessage_DataReaderView &);
            };
        }

    }

}

#endif
