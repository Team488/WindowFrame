#ifndef _H_3630A73C060CC2B59C3715ABEF50583A_SetBool_DCPS_H_
#define _H_3630A73C060CC2B59C3715ABEF50583A_SetBool_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetBool_.h"

#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace std_srvs
{
    namespace srv
    {
        namespace dds_
        {
            class SetBool_Request_TypeSupportInterface;

            typedef SetBool_Request_TypeSupportInterface * SetBool_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Request_TypeSupportInterface> SetBool_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetBool_Request_TypeSupportInterface> SetBool_Request_TypeSupportInterface_out;


            class SetBool_Request_DataWriter;

            typedef SetBool_Request_DataWriter * SetBool_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Request_DataWriter> SetBool_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetBool_Request_DataWriter> SetBool_Request_DataWriter_out;


            class SetBool_Request_DataReader;

            typedef SetBool_Request_DataReader * SetBool_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Request_DataReader> SetBool_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetBool_Request_DataReader> SetBool_Request_DataReader_out;


            class SetBool_Request_DataReaderView;

            typedef SetBool_Request_DataReaderView * SetBool_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Request_DataReaderView> SetBool_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetBool_Request_DataReaderView> SetBool_Request_DataReaderView_out;

            struct SetBool_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SetBool_Request_, struct SetBool_Request_Seq_uniq_> SetBool_Request_Seq;
            typedef DDS_DCPSSequence_var < SetBool_Request_Seq> SetBool_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetBool_Request_Seq> SetBool_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetBool_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetBool_Request_TypeSupportInterface_var _var_type;

                static SetBool_Request_TypeSupportInterface_ptr _duplicate (SetBool_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetBool_Request_TypeSupportInterface () {};
                ~SetBool_Request_TypeSupportInterface () {};
            private:
                SetBool_Request_TypeSupportInterface (const SetBool_Request_TypeSupportInterface &);
                SetBool_Request_TypeSupportInterface & operator = (const SetBool_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetBool_Request_DataWriter_ptr _ptr_type;
                typedef SetBool_Request_DataWriter_var _var_type;

                static SetBool_Request_DataWriter_ptr _duplicate (SetBool_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetBool_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetBool_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetBool_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetBool_Request_& instance_data) = 0;

            protected:
                SetBool_Request_DataWriter () {};
                ~SetBool_Request_DataWriter () {};
            private:
                SetBool_Request_DataWriter (const SetBool_Request_DataWriter &);
                SetBool_Request_DataWriter & operator = (const SetBool_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetBool_Request_DataReader_ptr _ptr_type;
                typedef SetBool_Request_DataReader_var _var_type;

                static SetBool_Request_DataReader_ptr _duplicate (SetBool_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetBool_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetBool_Request_& instance) = 0;

            protected:
                SetBool_Request_DataReader () {};
                ~SetBool_Request_DataReader () {};
            private:
                SetBool_Request_DataReader (const SetBool_Request_DataReader &);
                SetBool_Request_DataReader & operator = (const SetBool_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetBool_Request_DataReaderView_ptr _ptr_type;
                typedef SetBool_Request_DataReaderView_var _var_type;

                static SetBool_Request_DataReaderView_ptr _duplicate (SetBool_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetBool_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetBool_Request_& instance) = 0;

            protected:
                SetBool_Request_DataReaderView () {};
                ~SetBool_Request_DataReaderView () {};
            private:
                SetBool_Request_DataReaderView (const SetBool_Request_DataReaderView &);
                SetBool_Request_DataReaderView & operator = (const SetBool_Request_DataReaderView &);
            };
            class SetBool_Response_TypeSupportInterface;

            typedef SetBool_Response_TypeSupportInterface * SetBool_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Response_TypeSupportInterface> SetBool_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetBool_Response_TypeSupportInterface> SetBool_Response_TypeSupportInterface_out;


            class SetBool_Response_DataWriter;

            typedef SetBool_Response_DataWriter * SetBool_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Response_DataWriter> SetBool_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetBool_Response_DataWriter> SetBool_Response_DataWriter_out;


            class SetBool_Response_DataReader;

            typedef SetBool_Response_DataReader * SetBool_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Response_DataReader> SetBool_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetBool_Response_DataReader> SetBool_Response_DataReader_out;


            class SetBool_Response_DataReaderView;

            typedef SetBool_Response_DataReaderView * SetBool_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetBool_Response_DataReaderView> SetBool_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetBool_Response_DataReaderView> SetBool_Response_DataReaderView_out;

            struct SetBool_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetBool_Response_, struct SetBool_Response_Seq_uniq_> SetBool_Response_Seq;
            typedef DDS_DCPSSequence_var < SetBool_Response_Seq> SetBool_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetBool_Response_Seq> SetBool_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetBool_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetBool_Response_TypeSupportInterface_var _var_type;

                static SetBool_Response_TypeSupportInterface_ptr _duplicate (SetBool_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetBool_Response_TypeSupportInterface () {};
                ~SetBool_Response_TypeSupportInterface () {};
            private:
                SetBool_Response_TypeSupportInterface (const SetBool_Response_TypeSupportInterface &);
                SetBool_Response_TypeSupportInterface & operator = (const SetBool_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetBool_Response_DataWriter_ptr _ptr_type;
                typedef SetBool_Response_DataWriter_var _var_type;

                static SetBool_Response_DataWriter_ptr _duplicate (SetBool_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetBool_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetBool_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetBool_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetBool_Response_& instance_data) = 0;

            protected:
                SetBool_Response_DataWriter () {};
                ~SetBool_Response_DataWriter () {};
            private:
                SetBool_Response_DataWriter (const SetBool_Response_DataWriter &);
                SetBool_Response_DataWriter & operator = (const SetBool_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetBool_Response_DataReader_ptr _ptr_type;
                typedef SetBool_Response_DataReader_var _var_type;

                static SetBool_Response_DataReader_ptr _duplicate (SetBool_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetBool_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetBool_Response_& instance) = 0;

            protected:
                SetBool_Response_DataReader () {};
                ~SetBool_Response_DataReader () {};
            private:
                SetBool_Response_DataReader (const SetBool_Response_DataReader &);
                SetBool_Response_DataReader & operator = (const SetBool_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetBool_Response_DataReaderView_ptr _ptr_type;
                typedef SetBool_Response_DataReaderView_var _var_type;

                static SetBool_Response_DataReaderView_ptr _duplicate (SetBool_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetBool_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetBool_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetBool_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetBool_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetBool_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetBool_Response_& instance) = 0;

            protected:
                SetBool_Response_DataReaderView () {};
                ~SetBool_Response_DataReaderView () {};
            private:
                SetBool_Response_DataReaderView (const SetBool_Response_DataReaderView &);
                SetBool_Response_DataReaderView & operator = (const SetBool_Response_DataReaderView &);
            };
            class Sample_SetBool_Request_TypeSupportInterface;

            typedef Sample_SetBool_Request_TypeSupportInterface * Sample_SetBool_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Request_TypeSupportInterface> Sample_SetBool_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Request_TypeSupportInterface> Sample_SetBool_Request_TypeSupportInterface_out;


            class Sample_SetBool_Request_DataWriter;

            typedef Sample_SetBool_Request_DataWriter * Sample_SetBool_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Request_DataWriter> Sample_SetBool_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Request_DataWriter> Sample_SetBool_Request_DataWriter_out;


            class Sample_SetBool_Request_DataReader;

            typedef Sample_SetBool_Request_DataReader * Sample_SetBool_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Request_DataReader> Sample_SetBool_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Request_DataReader> Sample_SetBool_Request_DataReader_out;


            class Sample_SetBool_Request_DataReaderView;

            typedef Sample_SetBool_Request_DataReaderView * Sample_SetBool_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Request_DataReaderView> Sample_SetBool_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Request_DataReaderView> Sample_SetBool_Request_DataReaderView_out;

            struct Sample_SetBool_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SetBool_Request_, struct Sample_SetBool_Request_Seq_uniq_> Sample_SetBool_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetBool_Request_Seq> Sample_SetBool_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetBool_Request_Seq> Sample_SetBool_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetBool_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetBool_Request_TypeSupportInterface_var _var_type;

                static Sample_SetBool_Request_TypeSupportInterface_ptr _duplicate (Sample_SetBool_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetBool_Request_TypeSupportInterface () {};
                ~Sample_SetBool_Request_TypeSupportInterface () {};
            private:
                Sample_SetBool_Request_TypeSupportInterface (const Sample_SetBool_Request_TypeSupportInterface &);
                Sample_SetBool_Request_TypeSupportInterface & operator = (const Sample_SetBool_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetBool_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetBool_Request_DataWriter_var _var_type;

                static Sample_SetBool_Request_DataWriter_ptr _duplicate (Sample_SetBool_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetBool_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetBool_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetBool_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetBool_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetBool_Request_& instance_data) = 0;

            protected:
                Sample_SetBool_Request_DataWriter () {};
                ~Sample_SetBool_Request_DataWriter () {};
            private:
                Sample_SetBool_Request_DataWriter (const Sample_SetBool_Request_DataWriter &);
                Sample_SetBool_Request_DataWriter & operator = (const Sample_SetBool_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetBool_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetBool_Request_DataReader_var _var_type;

                static Sample_SetBool_Request_DataReader_ptr _duplicate (Sample_SetBool_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetBool_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetBool_Request_& instance) = 0;

            protected:
                Sample_SetBool_Request_DataReader () {};
                ~Sample_SetBool_Request_DataReader () {};
            private:
                Sample_SetBool_Request_DataReader (const Sample_SetBool_Request_DataReader &);
                Sample_SetBool_Request_DataReader & operator = (const Sample_SetBool_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetBool_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetBool_Request_DataReaderView_var _var_type;

                static Sample_SetBool_Request_DataReaderView_ptr _duplicate (Sample_SetBool_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetBool_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetBool_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetBool_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetBool_Request_& instance) = 0;

            protected:
                Sample_SetBool_Request_DataReaderView () {};
                ~Sample_SetBool_Request_DataReaderView () {};
            private:
                Sample_SetBool_Request_DataReaderView (const Sample_SetBool_Request_DataReaderView &);
                Sample_SetBool_Request_DataReaderView & operator = (const Sample_SetBool_Request_DataReaderView &);
            };
            class Sample_SetBool_Response_TypeSupportInterface;

            typedef Sample_SetBool_Response_TypeSupportInterface * Sample_SetBool_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Response_TypeSupportInterface> Sample_SetBool_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Response_TypeSupportInterface> Sample_SetBool_Response_TypeSupportInterface_out;


            class Sample_SetBool_Response_DataWriter;

            typedef Sample_SetBool_Response_DataWriter * Sample_SetBool_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Response_DataWriter> Sample_SetBool_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Response_DataWriter> Sample_SetBool_Response_DataWriter_out;


            class Sample_SetBool_Response_DataReader;

            typedef Sample_SetBool_Response_DataReader * Sample_SetBool_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Response_DataReader> Sample_SetBool_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Response_DataReader> Sample_SetBool_Response_DataReader_out;


            class Sample_SetBool_Response_DataReaderView;

            typedef Sample_SetBool_Response_DataReaderView * Sample_SetBool_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetBool_Response_DataReaderView> Sample_SetBool_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetBool_Response_DataReaderView> Sample_SetBool_Response_DataReaderView_out;

            struct Sample_SetBool_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetBool_Response_, struct Sample_SetBool_Response_Seq_uniq_> Sample_SetBool_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetBool_Response_Seq> Sample_SetBool_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetBool_Response_Seq> Sample_SetBool_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetBool_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetBool_Response_TypeSupportInterface_var _var_type;

                static Sample_SetBool_Response_TypeSupportInterface_ptr _duplicate (Sample_SetBool_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetBool_Response_TypeSupportInterface () {};
                ~Sample_SetBool_Response_TypeSupportInterface () {};
            private:
                Sample_SetBool_Response_TypeSupportInterface (const Sample_SetBool_Response_TypeSupportInterface &);
                Sample_SetBool_Response_TypeSupportInterface & operator = (const Sample_SetBool_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetBool_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetBool_Response_DataWriter_var _var_type;

                static Sample_SetBool_Response_DataWriter_ptr _duplicate (Sample_SetBool_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetBool_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetBool_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetBool_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetBool_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetBool_Response_& instance_data) = 0;

            protected:
                Sample_SetBool_Response_DataWriter () {};
                ~Sample_SetBool_Response_DataWriter () {};
            private:
                Sample_SetBool_Response_DataWriter (const Sample_SetBool_Response_DataWriter &);
                Sample_SetBool_Response_DataWriter & operator = (const Sample_SetBool_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetBool_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetBool_Response_DataReader_var _var_type;

                static Sample_SetBool_Response_DataReader_ptr _duplicate (Sample_SetBool_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetBool_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetBool_Response_& instance) = 0;

            protected:
                Sample_SetBool_Response_DataReader () {};
                ~Sample_SetBool_Response_DataReader () {};
            private:
                Sample_SetBool_Response_DataReader (const Sample_SetBool_Response_DataReader &);
                Sample_SetBool_Response_DataReader & operator = (const Sample_SetBool_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetBool_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetBool_Response_DataReaderView_var _var_type;

                static Sample_SetBool_Response_DataReaderView_ptr _duplicate (Sample_SetBool_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetBool_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetBool_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetBool_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetBool_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetBool_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetBool_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetBool_Response_& instance) = 0;

            protected:
                Sample_SetBool_Response_DataReaderView () {};
                ~Sample_SetBool_Response_DataReaderView () {};
            private:
                Sample_SetBool_Response_DataReaderView (const Sample_SetBool_Response_DataReaderView &);
                Sample_SetBool_Response_DataReaderView & operator = (const Sample_SetBool_Response_DataReaderView &);
            };
        }

    }

}

#endif
