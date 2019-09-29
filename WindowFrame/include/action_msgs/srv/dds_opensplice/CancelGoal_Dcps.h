#ifndef _H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal_DCPS_H_
#define _H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "CancelGoal_.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace action_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class CancelGoal_Request_TypeSupportInterface;

            typedef CancelGoal_Request_TypeSupportInterface * CancelGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Request_TypeSupportInterface> CancelGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Request_TypeSupportInterface> CancelGoal_Request_TypeSupportInterface_out;


            class CancelGoal_Request_DataWriter;

            typedef CancelGoal_Request_DataWriter * CancelGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Request_DataWriter> CancelGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Request_DataWriter> CancelGoal_Request_DataWriter_out;


            class CancelGoal_Request_DataReader;

            typedef CancelGoal_Request_DataReader * CancelGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Request_DataReader> CancelGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Request_DataReader> CancelGoal_Request_DataReader_out;


            class CancelGoal_Request_DataReaderView;

            typedef CancelGoal_Request_DataReaderView * CancelGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Request_DataReaderView> CancelGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Request_DataReaderView> CancelGoal_Request_DataReaderView_out;

            struct CancelGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < CancelGoal_Request_, struct CancelGoal_Request_Seq_uniq_> CancelGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < CancelGoal_Request_Seq> CancelGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < CancelGoal_Request_Seq> CancelGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef CancelGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef CancelGoal_Request_TypeSupportInterface_var _var_type;

                static CancelGoal_Request_TypeSupportInterface_ptr _duplicate (CancelGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                CancelGoal_Request_TypeSupportInterface () {};
                ~CancelGoal_Request_TypeSupportInterface () {};
            private:
                CancelGoal_Request_TypeSupportInterface (const CancelGoal_Request_TypeSupportInterface &);
                CancelGoal_Request_TypeSupportInterface & operator = (const CancelGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef CancelGoal_Request_DataWriter_ptr _ptr_type;
                typedef CancelGoal_Request_DataWriter_var _var_type;

                static CancelGoal_Request_DataWriter_ptr _duplicate (CancelGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const CancelGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const CancelGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CancelGoal_Request_& instance_data) = 0;

            protected:
                CancelGoal_Request_DataWriter () {};
                ~CancelGoal_Request_DataWriter () {};
            private:
                CancelGoal_Request_DataWriter (const CancelGoal_Request_DataWriter &);
                CancelGoal_Request_DataWriter & operator = (const CancelGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef CancelGoal_Request_DataReader_ptr _ptr_type;
                typedef CancelGoal_Request_DataReader_var _var_type;

                static CancelGoal_Request_DataReader_ptr _duplicate (CancelGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CancelGoal_Request_& instance) = 0;

            protected:
                CancelGoal_Request_DataReader () {};
                ~CancelGoal_Request_DataReader () {};
            private:
                CancelGoal_Request_DataReader (const CancelGoal_Request_DataReader &);
                CancelGoal_Request_DataReader & operator = (const CancelGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef CancelGoal_Request_DataReaderView_ptr _ptr_type;
                typedef CancelGoal_Request_DataReaderView_var _var_type;

                static CancelGoal_Request_DataReaderView_ptr _duplicate (CancelGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CancelGoal_Request_& instance) = 0;

            protected:
                CancelGoal_Request_DataReaderView () {};
                ~CancelGoal_Request_DataReaderView () {};
            private:
                CancelGoal_Request_DataReaderView (const CancelGoal_Request_DataReaderView &);
                CancelGoal_Request_DataReaderView & operator = (const CancelGoal_Request_DataReaderView &);
            };
            class CancelGoal_Response_TypeSupportInterface;

            typedef CancelGoal_Response_TypeSupportInterface * CancelGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Response_TypeSupportInterface> CancelGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Response_TypeSupportInterface> CancelGoal_Response_TypeSupportInterface_out;


            class CancelGoal_Response_DataWriter;

            typedef CancelGoal_Response_DataWriter * CancelGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Response_DataWriter> CancelGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Response_DataWriter> CancelGoal_Response_DataWriter_out;


            class CancelGoal_Response_DataReader;

            typedef CancelGoal_Response_DataReader * CancelGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Response_DataReader> CancelGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Response_DataReader> CancelGoal_Response_DataReader_out;


            class CancelGoal_Response_DataReaderView;

            typedef CancelGoal_Response_DataReaderView * CancelGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < CancelGoal_Response_DataReaderView> CancelGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < CancelGoal_Response_DataReaderView> CancelGoal_Response_DataReaderView_out;

            struct CancelGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < CancelGoal_Response_, struct CancelGoal_Response_Seq_uniq_> CancelGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < CancelGoal_Response_Seq> CancelGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < CancelGoal_Response_Seq> CancelGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef CancelGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef CancelGoal_Response_TypeSupportInterface_var _var_type;

                static CancelGoal_Response_TypeSupportInterface_ptr _duplicate (CancelGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                CancelGoal_Response_TypeSupportInterface () {};
                ~CancelGoal_Response_TypeSupportInterface () {};
            private:
                CancelGoal_Response_TypeSupportInterface (const CancelGoal_Response_TypeSupportInterface &);
                CancelGoal_Response_TypeSupportInterface & operator = (const CancelGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef CancelGoal_Response_DataWriter_ptr _ptr_type;
                typedef CancelGoal_Response_DataWriter_var _var_type;

                static CancelGoal_Response_DataWriter_ptr _duplicate (CancelGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const CancelGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const CancelGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (CancelGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CancelGoal_Response_& instance_data) = 0;

            protected:
                CancelGoal_Response_DataWriter () {};
                ~CancelGoal_Response_DataWriter () {};
            private:
                CancelGoal_Response_DataWriter (const CancelGoal_Response_DataWriter &);
                CancelGoal_Response_DataWriter & operator = (const CancelGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef CancelGoal_Response_DataReader_ptr _ptr_type;
                typedef CancelGoal_Response_DataReader_var _var_type;

                static CancelGoal_Response_DataReader_ptr _duplicate (CancelGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (CancelGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CancelGoal_Response_& instance) = 0;

            protected:
                CancelGoal_Response_DataReader () {};
                ~CancelGoal_Response_DataReader () {};
            private:
                CancelGoal_Response_DataReader (const CancelGoal_Response_DataReader &);
                CancelGoal_Response_DataReader & operator = (const CancelGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef CancelGoal_Response_DataReaderView_ptr _ptr_type;
                typedef CancelGoal_Response_DataReaderView_var _var_type;

                static CancelGoal_Response_DataReaderView_ptr _duplicate (CancelGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CancelGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CancelGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                CancelGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (CancelGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CancelGoal_Response_& instance) = 0;

            protected:
                CancelGoal_Response_DataReaderView () {};
                ~CancelGoal_Response_DataReaderView () {};
            private:
                CancelGoal_Response_DataReaderView (const CancelGoal_Response_DataReaderView &);
                CancelGoal_Response_DataReaderView & operator = (const CancelGoal_Response_DataReaderView &);
            };
            class Sample_CancelGoal_Request_TypeSupportInterface;

            typedef Sample_CancelGoal_Request_TypeSupportInterface * Sample_CancelGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Request_TypeSupportInterface> Sample_CancelGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Request_TypeSupportInterface> Sample_CancelGoal_Request_TypeSupportInterface_out;


            class Sample_CancelGoal_Request_DataWriter;

            typedef Sample_CancelGoal_Request_DataWriter * Sample_CancelGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Request_DataWriter> Sample_CancelGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Request_DataWriter> Sample_CancelGoal_Request_DataWriter_out;


            class Sample_CancelGoal_Request_DataReader;

            typedef Sample_CancelGoal_Request_DataReader * Sample_CancelGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Request_DataReader> Sample_CancelGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Request_DataReader> Sample_CancelGoal_Request_DataReader_out;


            class Sample_CancelGoal_Request_DataReaderView;

            typedef Sample_CancelGoal_Request_DataReaderView * Sample_CancelGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Request_DataReaderView> Sample_CancelGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Request_DataReaderView> Sample_CancelGoal_Request_DataReaderView_out;

            struct Sample_CancelGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_CancelGoal_Request_, struct Sample_CancelGoal_Request_Seq_uniq_> Sample_CancelGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_CancelGoal_Request_Seq> Sample_CancelGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_CancelGoal_Request_Seq> Sample_CancelGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_CancelGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_CancelGoal_Request_TypeSupportInterface_var _var_type;

                static Sample_CancelGoal_Request_TypeSupportInterface_ptr _duplicate (Sample_CancelGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_CancelGoal_Request_TypeSupportInterface () {};
                ~Sample_CancelGoal_Request_TypeSupportInterface () {};
            private:
                Sample_CancelGoal_Request_TypeSupportInterface (const Sample_CancelGoal_Request_TypeSupportInterface &);
                Sample_CancelGoal_Request_TypeSupportInterface & operator = (const Sample_CancelGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_CancelGoal_Request_DataWriter_ptr _ptr_type;
                typedef Sample_CancelGoal_Request_DataWriter_var _var_type;

                static Sample_CancelGoal_Request_DataWriter_ptr _duplicate (Sample_CancelGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_CancelGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_CancelGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_CancelGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_CancelGoal_Request_& instance_data) = 0;

            protected:
                Sample_CancelGoal_Request_DataWriter () {};
                ~Sample_CancelGoal_Request_DataWriter () {};
            private:
                Sample_CancelGoal_Request_DataWriter (const Sample_CancelGoal_Request_DataWriter &);
                Sample_CancelGoal_Request_DataWriter & operator = (const Sample_CancelGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_CancelGoal_Request_DataReader_ptr _ptr_type;
                typedef Sample_CancelGoal_Request_DataReader_var _var_type;

                static Sample_CancelGoal_Request_DataReader_ptr _duplicate (Sample_CancelGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_CancelGoal_Request_& instance) = 0;

            protected:
                Sample_CancelGoal_Request_DataReader () {};
                ~Sample_CancelGoal_Request_DataReader () {};
            private:
                Sample_CancelGoal_Request_DataReader (const Sample_CancelGoal_Request_DataReader &);
                Sample_CancelGoal_Request_DataReader & operator = (const Sample_CancelGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_CancelGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_CancelGoal_Request_DataReaderView_var _var_type;

                static Sample_CancelGoal_Request_DataReaderView_ptr _duplicate (Sample_CancelGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_CancelGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_CancelGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_CancelGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_CancelGoal_Request_& instance) = 0;

            protected:
                Sample_CancelGoal_Request_DataReaderView () {};
                ~Sample_CancelGoal_Request_DataReaderView () {};
            private:
                Sample_CancelGoal_Request_DataReaderView (const Sample_CancelGoal_Request_DataReaderView &);
                Sample_CancelGoal_Request_DataReaderView & operator = (const Sample_CancelGoal_Request_DataReaderView &);
            };
            class Sample_CancelGoal_Response_TypeSupportInterface;

            typedef Sample_CancelGoal_Response_TypeSupportInterface * Sample_CancelGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Response_TypeSupportInterface> Sample_CancelGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Response_TypeSupportInterface> Sample_CancelGoal_Response_TypeSupportInterface_out;


            class Sample_CancelGoal_Response_DataWriter;

            typedef Sample_CancelGoal_Response_DataWriter * Sample_CancelGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Response_DataWriter> Sample_CancelGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Response_DataWriter> Sample_CancelGoal_Response_DataWriter_out;


            class Sample_CancelGoal_Response_DataReader;

            typedef Sample_CancelGoal_Response_DataReader * Sample_CancelGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Response_DataReader> Sample_CancelGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Response_DataReader> Sample_CancelGoal_Response_DataReader_out;


            class Sample_CancelGoal_Response_DataReaderView;

            typedef Sample_CancelGoal_Response_DataReaderView * Sample_CancelGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_CancelGoal_Response_DataReaderView> Sample_CancelGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_CancelGoal_Response_DataReaderView> Sample_CancelGoal_Response_DataReaderView_out;

            struct Sample_CancelGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_CancelGoal_Response_, struct Sample_CancelGoal_Response_Seq_uniq_> Sample_CancelGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_CancelGoal_Response_Seq> Sample_CancelGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_CancelGoal_Response_Seq> Sample_CancelGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_CancelGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_CancelGoal_Response_TypeSupportInterface_var _var_type;

                static Sample_CancelGoal_Response_TypeSupportInterface_ptr _duplicate (Sample_CancelGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_CancelGoal_Response_TypeSupportInterface () {};
                ~Sample_CancelGoal_Response_TypeSupportInterface () {};
            private:
                Sample_CancelGoal_Response_TypeSupportInterface (const Sample_CancelGoal_Response_TypeSupportInterface &);
                Sample_CancelGoal_Response_TypeSupportInterface & operator = (const Sample_CancelGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_CancelGoal_Response_DataWriter_ptr _ptr_type;
                typedef Sample_CancelGoal_Response_DataWriter_var _var_type;

                static Sample_CancelGoal_Response_DataWriter_ptr _duplicate (Sample_CancelGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_CancelGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_CancelGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_CancelGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_CancelGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_CancelGoal_Response_& instance_data) = 0;

            protected:
                Sample_CancelGoal_Response_DataWriter () {};
                ~Sample_CancelGoal_Response_DataWriter () {};
            private:
                Sample_CancelGoal_Response_DataWriter (const Sample_CancelGoal_Response_DataWriter &);
                Sample_CancelGoal_Response_DataWriter & operator = (const Sample_CancelGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_CancelGoal_Response_DataReader_ptr _ptr_type;
                typedef Sample_CancelGoal_Response_DataReader_var _var_type;

                static Sample_CancelGoal_Response_DataReader_ptr _duplicate (Sample_CancelGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_CancelGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_CancelGoal_Response_& instance) = 0;

            protected:
                Sample_CancelGoal_Response_DataReader () {};
                ~Sample_CancelGoal_Response_DataReader () {};
            private:
                Sample_CancelGoal_Response_DataReader (const Sample_CancelGoal_Response_DataReader &);
                Sample_CancelGoal_Response_DataReader & operator = (const Sample_CancelGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_CancelGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_CancelGoal_Response_DataReaderView_var _var_type;

                static Sample_CancelGoal_Response_DataReaderView_ptr _duplicate (Sample_CancelGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_CancelGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_CancelGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_CancelGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_CancelGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_CancelGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_CancelGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_CancelGoal_Response_& instance) = 0;

            protected:
                Sample_CancelGoal_Response_DataReaderView () {};
                ~Sample_CancelGoal_Response_DataReaderView () {};
            private:
                Sample_CancelGoal_Response_DataReaderView (const Sample_CancelGoal_Response_DataReaderView &);
                Sample_CancelGoal_Response_DataReaderView & operator = (const Sample_CancelGoal_Response_DataReaderView &);
            };
        }

    }

}

#endif
