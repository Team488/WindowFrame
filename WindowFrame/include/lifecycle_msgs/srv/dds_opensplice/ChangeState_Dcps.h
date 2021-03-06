#ifndef _H_5580BF376C11768984BEBC2E13043FC9_ChangeState_DCPS_H_
#define _H_5580BF376C11768984BEBC2E13043FC9_ChangeState_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ChangeState_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class ChangeState_Request_TypeSupportInterface;

            typedef ChangeState_Request_TypeSupportInterface * ChangeState_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Request_TypeSupportInterface> ChangeState_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ChangeState_Request_TypeSupportInterface> ChangeState_Request_TypeSupportInterface_out;


            class ChangeState_Request_DataWriter;

            typedef ChangeState_Request_DataWriter * ChangeState_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Request_DataWriter> ChangeState_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < ChangeState_Request_DataWriter> ChangeState_Request_DataWriter_out;


            class ChangeState_Request_DataReader;

            typedef ChangeState_Request_DataReader * ChangeState_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Request_DataReader> ChangeState_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < ChangeState_Request_DataReader> ChangeState_Request_DataReader_out;


            class ChangeState_Request_DataReaderView;

            typedef ChangeState_Request_DataReaderView * ChangeState_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Request_DataReaderView> ChangeState_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ChangeState_Request_DataReaderView> ChangeState_Request_DataReaderView_out;

            struct ChangeState_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ChangeState_Request_, struct ChangeState_Request_Seq_uniq_> ChangeState_Request_Seq;
            typedef DDS_DCPSSequence_var < ChangeState_Request_Seq> ChangeState_Request_Seq_var;
            typedef DDS_DCPSSequence_out < ChangeState_Request_Seq> ChangeState_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ChangeState_Request_TypeSupportInterface_ptr _ptr_type;
                typedef ChangeState_Request_TypeSupportInterface_var _var_type;

                static ChangeState_Request_TypeSupportInterface_ptr _duplicate (ChangeState_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ChangeState_Request_TypeSupportInterface () {};
                ~ChangeState_Request_TypeSupportInterface () {};
            private:
                ChangeState_Request_TypeSupportInterface (const ChangeState_Request_TypeSupportInterface &);
                ChangeState_Request_TypeSupportInterface & operator = (const ChangeState_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ChangeState_Request_DataWriter_ptr _ptr_type;
                typedef ChangeState_Request_DataWriter_var _var_type;

                static ChangeState_Request_DataWriter_ptr _duplicate (ChangeState_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ChangeState_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ChangeState_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ChangeState_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChangeState_Request_& instance_data) = 0;

            protected:
                ChangeState_Request_DataWriter () {};
                ~ChangeState_Request_DataWriter () {};
            private:
                ChangeState_Request_DataWriter (const ChangeState_Request_DataWriter &);
                ChangeState_Request_DataWriter & operator = (const ChangeState_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ChangeState_Request_DataReader_ptr _ptr_type;
                typedef ChangeState_Request_DataReader_var _var_type;

                static ChangeState_Request_DataReader_ptr _duplicate (ChangeState_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ChangeState_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChangeState_Request_& instance) = 0;

            protected:
                ChangeState_Request_DataReader () {};
                ~ChangeState_Request_DataReader () {};
            private:
                ChangeState_Request_DataReader (const ChangeState_Request_DataReader &);
                ChangeState_Request_DataReader & operator = (const ChangeState_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ChangeState_Request_DataReaderView_ptr _ptr_type;
                typedef ChangeState_Request_DataReaderView_var _var_type;

                static ChangeState_Request_DataReaderView_ptr _duplicate (ChangeState_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ChangeState_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChangeState_Request_& instance) = 0;

            protected:
                ChangeState_Request_DataReaderView () {};
                ~ChangeState_Request_DataReaderView () {};
            private:
                ChangeState_Request_DataReaderView (const ChangeState_Request_DataReaderView &);
                ChangeState_Request_DataReaderView & operator = (const ChangeState_Request_DataReaderView &);
            };
            class ChangeState_Response_TypeSupportInterface;

            typedef ChangeState_Response_TypeSupportInterface * ChangeState_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Response_TypeSupportInterface> ChangeState_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ChangeState_Response_TypeSupportInterface> ChangeState_Response_TypeSupportInterface_out;


            class ChangeState_Response_DataWriter;

            typedef ChangeState_Response_DataWriter * ChangeState_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Response_DataWriter> ChangeState_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < ChangeState_Response_DataWriter> ChangeState_Response_DataWriter_out;


            class ChangeState_Response_DataReader;

            typedef ChangeState_Response_DataReader * ChangeState_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Response_DataReader> ChangeState_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < ChangeState_Response_DataReader> ChangeState_Response_DataReader_out;


            class ChangeState_Response_DataReaderView;

            typedef ChangeState_Response_DataReaderView * ChangeState_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ChangeState_Response_DataReaderView> ChangeState_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ChangeState_Response_DataReaderView> ChangeState_Response_DataReaderView_out;

            struct ChangeState_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ChangeState_Response_, struct ChangeState_Response_Seq_uniq_> ChangeState_Response_Seq;
            typedef DDS_DCPSSequence_var < ChangeState_Response_Seq> ChangeState_Response_Seq_var;
            typedef DDS_DCPSSequence_out < ChangeState_Response_Seq> ChangeState_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ChangeState_Response_TypeSupportInterface_ptr _ptr_type;
                typedef ChangeState_Response_TypeSupportInterface_var _var_type;

                static ChangeState_Response_TypeSupportInterface_ptr _duplicate (ChangeState_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ChangeState_Response_TypeSupportInterface () {};
                ~ChangeState_Response_TypeSupportInterface () {};
            private:
                ChangeState_Response_TypeSupportInterface (const ChangeState_Response_TypeSupportInterface &);
                ChangeState_Response_TypeSupportInterface & operator = (const ChangeState_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ChangeState_Response_DataWriter_ptr _ptr_type;
                typedef ChangeState_Response_DataWriter_var _var_type;

                static ChangeState_Response_DataWriter_ptr _duplicate (ChangeState_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ChangeState_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ChangeState_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ChangeState_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChangeState_Response_& instance_data) = 0;

            protected:
                ChangeState_Response_DataWriter () {};
                ~ChangeState_Response_DataWriter () {};
            private:
                ChangeState_Response_DataWriter (const ChangeState_Response_DataWriter &);
                ChangeState_Response_DataWriter & operator = (const ChangeState_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ChangeState_Response_DataReader_ptr _ptr_type;
                typedef ChangeState_Response_DataReader_var _var_type;

                static ChangeState_Response_DataReader_ptr _duplicate (ChangeState_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ChangeState_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChangeState_Response_& instance) = 0;

            protected:
                ChangeState_Response_DataReader () {};
                ~ChangeState_Response_DataReader () {};
            private:
                ChangeState_Response_DataReader (const ChangeState_Response_DataReader &);
                ChangeState_Response_DataReader & operator = (const ChangeState_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs ChangeState_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ChangeState_Response_DataReaderView_ptr _ptr_type;
                typedef ChangeState_Response_DataReaderView_var _var_type;

                static ChangeState_Response_DataReaderView_ptr _duplicate (ChangeState_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChangeState_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ChangeState_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChangeState_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ChangeState_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ChangeState_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChangeState_Response_& instance) = 0;

            protected:
                ChangeState_Response_DataReaderView () {};
                ~ChangeState_Response_DataReaderView () {};
            private:
                ChangeState_Response_DataReaderView (const ChangeState_Response_DataReaderView &);
                ChangeState_Response_DataReaderView & operator = (const ChangeState_Response_DataReaderView &);
            };
            class Sample_ChangeState_Request_TypeSupportInterface;

            typedef Sample_ChangeState_Request_TypeSupportInterface * Sample_ChangeState_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Request_TypeSupportInterface> Sample_ChangeState_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Request_TypeSupportInterface> Sample_ChangeState_Request_TypeSupportInterface_out;


            class Sample_ChangeState_Request_DataWriter;

            typedef Sample_ChangeState_Request_DataWriter * Sample_ChangeState_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Request_DataWriter> Sample_ChangeState_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Request_DataWriter> Sample_ChangeState_Request_DataWriter_out;


            class Sample_ChangeState_Request_DataReader;

            typedef Sample_ChangeState_Request_DataReader * Sample_ChangeState_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Request_DataReader> Sample_ChangeState_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Request_DataReader> Sample_ChangeState_Request_DataReader_out;


            class Sample_ChangeState_Request_DataReaderView;

            typedef Sample_ChangeState_Request_DataReaderView * Sample_ChangeState_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Request_DataReaderView> Sample_ChangeState_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Request_DataReaderView> Sample_ChangeState_Request_DataReaderView_out;

            struct Sample_ChangeState_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_ChangeState_Request_, struct Sample_ChangeState_Request_Seq_uniq_> Sample_ChangeState_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_ChangeState_Request_Seq> Sample_ChangeState_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ChangeState_Request_Seq> Sample_ChangeState_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ChangeState_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ChangeState_Request_TypeSupportInterface_var _var_type;

                static Sample_ChangeState_Request_TypeSupportInterface_ptr _duplicate (Sample_ChangeState_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ChangeState_Request_TypeSupportInterface () {};
                ~Sample_ChangeState_Request_TypeSupportInterface () {};
            private:
                Sample_ChangeState_Request_TypeSupportInterface (const Sample_ChangeState_Request_TypeSupportInterface &);
                Sample_ChangeState_Request_TypeSupportInterface & operator = (const Sample_ChangeState_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ChangeState_Request_DataWriter_ptr _ptr_type;
                typedef Sample_ChangeState_Request_DataWriter_var _var_type;

                static Sample_ChangeState_Request_DataWriter_ptr _duplicate (Sample_ChangeState_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ChangeState_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ChangeState_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ChangeState_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ChangeState_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ChangeState_Request_& instance_data) = 0;

            protected:
                Sample_ChangeState_Request_DataWriter () {};
                ~Sample_ChangeState_Request_DataWriter () {};
            private:
                Sample_ChangeState_Request_DataWriter (const Sample_ChangeState_Request_DataWriter &);
                Sample_ChangeState_Request_DataWriter & operator = (const Sample_ChangeState_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ChangeState_Request_DataReader_ptr _ptr_type;
                typedef Sample_ChangeState_Request_DataReader_var _var_type;

                static Sample_ChangeState_Request_DataReader_ptr _duplicate (Sample_ChangeState_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ChangeState_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ChangeState_Request_& instance) = 0;

            protected:
                Sample_ChangeState_Request_DataReader () {};
                ~Sample_ChangeState_Request_DataReader () {};
            private:
                Sample_ChangeState_Request_DataReader (const Sample_ChangeState_Request_DataReader &);
                Sample_ChangeState_Request_DataReader & operator = (const Sample_ChangeState_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ChangeState_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_ChangeState_Request_DataReaderView_var _var_type;

                static Sample_ChangeState_Request_DataReaderView_ptr _duplicate (Sample_ChangeState_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ChangeState_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ChangeState_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ChangeState_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ChangeState_Request_& instance) = 0;

            protected:
                Sample_ChangeState_Request_DataReaderView () {};
                ~Sample_ChangeState_Request_DataReaderView () {};
            private:
                Sample_ChangeState_Request_DataReaderView (const Sample_ChangeState_Request_DataReaderView &);
                Sample_ChangeState_Request_DataReaderView & operator = (const Sample_ChangeState_Request_DataReaderView &);
            };
            class Sample_ChangeState_Response_TypeSupportInterface;

            typedef Sample_ChangeState_Response_TypeSupportInterface * Sample_ChangeState_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Response_TypeSupportInterface> Sample_ChangeState_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Response_TypeSupportInterface> Sample_ChangeState_Response_TypeSupportInterface_out;


            class Sample_ChangeState_Response_DataWriter;

            typedef Sample_ChangeState_Response_DataWriter * Sample_ChangeState_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Response_DataWriter> Sample_ChangeState_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Response_DataWriter> Sample_ChangeState_Response_DataWriter_out;


            class Sample_ChangeState_Response_DataReader;

            typedef Sample_ChangeState_Response_DataReader * Sample_ChangeState_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Response_DataReader> Sample_ChangeState_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Response_DataReader> Sample_ChangeState_Response_DataReader_out;


            class Sample_ChangeState_Response_DataReaderView;

            typedef Sample_ChangeState_Response_DataReaderView * Sample_ChangeState_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ChangeState_Response_DataReaderView> Sample_ChangeState_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ChangeState_Response_DataReaderView> Sample_ChangeState_Response_DataReaderView_out;

            struct Sample_ChangeState_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_ChangeState_Response_, struct Sample_ChangeState_Response_Seq_uniq_> Sample_ChangeState_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_ChangeState_Response_Seq> Sample_ChangeState_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ChangeState_Response_Seq> Sample_ChangeState_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ChangeState_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ChangeState_Response_TypeSupportInterface_var _var_type;

                static Sample_ChangeState_Response_TypeSupportInterface_ptr _duplicate (Sample_ChangeState_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ChangeState_Response_TypeSupportInterface () {};
                ~Sample_ChangeState_Response_TypeSupportInterface () {};
            private:
                Sample_ChangeState_Response_TypeSupportInterface (const Sample_ChangeState_Response_TypeSupportInterface &);
                Sample_ChangeState_Response_TypeSupportInterface & operator = (const Sample_ChangeState_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ChangeState_Response_DataWriter_ptr _ptr_type;
                typedef Sample_ChangeState_Response_DataWriter_var _var_type;

                static Sample_ChangeState_Response_DataWriter_ptr _duplicate (Sample_ChangeState_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ChangeState_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ChangeState_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ChangeState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ChangeState_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ChangeState_Response_& instance_data) = 0;

            protected:
                Sample_ChangeState_Response_DataWriter () {};
                ~Sample_ChangeState_Response_DataWriter () {};
            private:
                Sample_ChangeState_Response_DataWriter (const Sample_ChangeState_Response_DataWriter &);
                Sample_ChangeState_Response_DataWriter & operator = (const Sample_ChangeState_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ChangeState_Response_DataReader_ptr _ptr_type;
                typedef Sample_ChangeState_Response_DataReader_var _var_type;

                static Sample_ChangeState_Response_DataReader_ptr _duplicate (Sample_ChangeState_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ChangeState_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ChangeState_Response_& instance) = 0;

            protected:
                Sample_ChangeState_Response_DataReader () {};
                ~Sample_ChangeState_Response_DataReader () {};
            private:
                Sample_ChangeState_Response_DataReader (const Sample_ChangeState_Response_DataReader &);
                Sample_ChangeState_Response_DataReader & operator = (const Sample_ChangeState_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_ChangeState_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ChangeState_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_ChangeState_Response_DataReaderView_var _var_type;

                static Sample_ChangeState_Response_DataReaderView_ptr _duplicate (Sample_ChangeState_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ChangeState_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ChangeState_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ChangeState_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ChangeState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ChangeState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ChangeState_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ChangeState_Response_& instance) = 0;

            protected:
                Sample_ChangeState_Response_DataReaderView () {};
                ~Sample_ChangeState_Response_DataReaderView () {};
            private:
                Sample_ChangeState_Response_DataReaderView (const Sample_ChangeState_Response_DataReaderView &);
                Sample_ChangeState_Response_DataReaderView & operator = (const Sample_ChangeState_Response_DataReaderView &);
            };
        }

    }

}

#endif
