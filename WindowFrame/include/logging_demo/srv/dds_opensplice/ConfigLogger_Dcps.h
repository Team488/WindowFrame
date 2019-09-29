#ifndef _H_8C2CCA202FD992B141EFDC37CB8EA7B5_ConfigLogger_DCPS_H_
#define _H_8C2CCA202FD992B141EFDC37CB8EA7B5_ConfigLogger_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ConfigLogger_.h"

#include "logging_demo/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace logging_demo
{
    namespace srv
    {
        namespace dds_
        {
            class ConfigLogger_Request_TypeSupportInterface;

            typedef ConfigLogger_Request_TypeSupportInterface * ConfigLogger_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Request_TypeSupportInterface> ConfigLogger_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Request_TypeSupportInterface> ConfigLogger_Request_TypeSupportInterface_out;


            class ConfigLogger_Request_DataWriter;

            typedef ConfigLogger_Request_DataWriter * ConfigLogger_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Request_DataWriter> ConfigLogger_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Request_DataWriter> ConfigLogger_Request_DataWriter_out;


            class ConfigLogger_Request_DataReader;

            typedef ConfigLogger_Request_DataReader * ConfigLogger_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Request_DataReader> ConfigLogger_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Request_DataReader> ConfigLogger_Request_DataReader_out;


            class ConfigLogger_Request_DataReaderView;

            typedef ConfigLogger_Request_DataReaderView * ConfigLogger_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Request_DataReaderView> ConfigLogger_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Request_DataReaderView> ConfigLogger_Request_DataReaderView_out;

            struct ConfigLogger_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ConfigLogger_Request_, struct ConfigLogger_Request_Seq_uniq_> ConfigLogger_Request_Seq;
            typedef DDS_DCPSSequence_var < ConfigLogger_Request_Seq> ConfigLogger_Request_Seq_var;
            typedef DDS_DCPSSequence_out < ConfigLogger_Request_Seq> ConfigLogger_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ConfigLogger_Request_TypeSupportInterface_ptr _ptr_type;
                typedef ConfigLogger_Request_TypeSupportInterface_var _var_type;

                static ConfigLogger_Request_TypeSupportInterface_ptr _duplicate (ConfigLogger_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ConfigLogger_Request_TypeSupportInterface () {};
                ~ConfigLogger_Request_TypeSupportInterface () {};
            private:
                ConfigLogger_Request_TypeSupportInterface (const ConfigLogger_Request_TypeSupportInterface &);
                ConfigLogger_Request_TypeSupportInterface & operator = (const ConfigLogger_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ConfigLogger_Request_DataWriter_ptr _ptr_type;
                typedef ConfigLogger_Request_DataWriter_var _var_type;

                static ConfigLogger_Request_DataWriter_ptr _duplicate (ConfigLogger_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ConfigLogger_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ConfigLogger_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ConfigLogger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ConfigLogger_Request_& instance_data) = 0;

            protected:
                ConfigLogger_Request_DataWriter () {};
                ~ConfigLogger_Request_DataWriter () {};
            private:
                ConfigLogger_Request_DataWriter (const ConfigLogger_Request_DataWriter &);
                ConfigLogger_Request_DataWriter & operator = (const ConfigLogger_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ConfigLogger_Request_DataReader_ptr _ptr_type;
                typedef ConfigLogger_Request_DataReader_var _var_type;

                static ConfigLogger_Request_DataReader_ptr _duplicate (ConfigLogger_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ConfigLogger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ConfigLogger_Request_& instance) = 0;

            protected:
                ConfigLogger_Request_DataReader () {};
                ~ConfigLogger_Request_DataReader () {};
            private:
                ConfigLogger_Request_DataReader (const ConfigLogger_Request_DataReader &);
                ConfigLogger_Request_DataReader & operator = (const ConfigLogger_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ConfigLogger_Request_DataReaderView_ptr _ptr_type;
                typedef ConfigLogger_Request_DataReaderView_var _var_type;

                static ConfigLogger_Request_DataReaderView_ptr _duplicate (ConfigLogger_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ConfigLogger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ConfigLogger_Request_& instance) = 0;

            protected:
                ConfigLogger_Request_DataReaderView () {};
                ~ConfigLogger_Request_DataReaderView () {};
            private:
                ConfigLogger_Request_DataReaderView (const ConfigLogger_Request_DataReaderView &);
                ConfigLogger_Request_DataReaderView & operator = (const ConfigLogger_Request_DataReaderView &);
            };
            class ConfigLogger_Response_TypeSupportInterface;

            typedef ConfigLogger_Response_TypeSupportInterface * ConfigLogger_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Response_TypeSupportInterface> ConfigLogger_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Response_TypeSupportInterface> ConfigLogger_Response_TypeSupportInterface_out;


            class ConfigLogger_Response_DataWriter;

            typedef ConfigLogger_Response_DataWriter * ConfigLogger_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Response_DataWriter> ConfigLogger_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Response_DataWriter> ConfigLogger_Response_DataWriter_out;


            class ConfigLogger_Response_DataReader;

            typedef ConfigLogger_Response_DataReader * ConfigLogger_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Response_DataReader> ConfigLogger_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Response_DataReader> ConfigLogger_Response_DataReader_out;


            class ConfigLogger_Response_DataReaderView;

            typedef ConfigLogger_Response_DataReaderView * ConfigLogger_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ConfigLogger_Response_DataReaderView> ConfigLogger_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ConfigLogger_Response_DataReaderView> ConfigLogger_Response_DataReaderView_out;

            struct ConfigLogger_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ConfigLogger_Response_, struct ConfigLogger_Response_Seq_uniq_> ConfigLogger_Response_Seq;
            typedef DDS_DCPSSequence_var < ConfigLogger_Response_Seq> ConfigLogger_Response_Seq_var;
            typedef DDS_DCPSSequence_out < ConfigLogger_Response_Seq> ConfigLogger_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ConfigLogger_Response_TypeSupportInterface_ptr _ptr_type;
                typedef ConfigLogger_Response_TypeSupportInterface_var _var_type;

                static ConfigLogger_Response_TypeSupportInterface_ptr _duplicate (ConfigLogger_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ConfigLogger_Response_TypeSupportInterface () {};
                ~ConfigLogger_Response_TypeSupportInterface () {};
            private:
                ConfigLogger_Response_TypeSupportInterface (const ConfigLogger_Response_TypeSupportInterface &);
                ConfigLogger_Response_TypeSupportInterface & operator = (const ConfigLogger_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ConfigLogger_Response_DataWriter_ptr _ptr_type;
                typedef ConfigLogger_Response_DataWriter_var _var_type;

                static ConfigLogger_Response_DataWriter_ptr _duplicate (ConfigLogger_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ConfigLogger_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ConfigLogger_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ConfigLogger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ConfigLogger_Response_& instance_data) = 0;

            protected:
                ConfigLogger_Response_DataWriter () {};
                ~ConfigLogger_Response_DataWriter () {};
            private:
                ConfigLogger_Response_DataWriter (const ConfigLogger_Response_DataWriter &);
                ConfigLogger_Response_DataWriter & operator = (const ConfigLogger_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ConfigLogger_Response_DataReader_ptr _ptr_type;
                typedef ConfigLogger_Response_DataReader_var _var_type;

                static ConfigLogger_Response_DataReader_ptr _duplicate (ConfigLogger_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ConfigLogger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ConfigLogger_Response_& instance) = 0;

            protected:
                ConfigLogger_Response_DataReader () {};
                ~ConfigLogger_Response_DataReader () {};
            private:
                ConfigLogger_Response_DataReader (const ConfigLogger_Response_DataReader &);
                ConfigLogger_Response_DataReader & operator = (const ConfigLogger_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ConfigLogger_Response_DataReaderView_ptr _ptr_type;
                typedef ConfigLogger_Response_DataReaderView_var _var_type;

                static ConfigLogger_Response_DataReaderView_ptr _duplicate (ConfigLogger_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ConfigLogger_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ConfigLogger_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ConfigLogger_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ConfigLogger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ConfigLogger_Response_& instance) = 0;

            protected:
                ConfigLogger_Response_DataReaderView () {};
                ~ConfigLogger_Response_DataReaderView () {};
            private:
                ConfigLogger_Response_DataReaderView (const ConfigLogger_Response_DataReaderView &);
                ConfigLogger_Response_DataReaderView & operator = (const ConfigLogger_Response_DataReaderView &);
            };
            class Sample_ConfigLogger_Request_TypeSupportInterface;

            typedef Sample_ConfigLogger_Request_TypeSupportInterface * Sample_ConfigLogger_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Request_TypeSupportInterface> Sample_ConfigLogger_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Request_TypeSupportInterface> Sample_ConfigLogger_Request_TypeSupportInterface_out;


            class Sample_ConfigLogger_Request_DataWriter;

            typedef Sample_ConfigLogger_Request_DataWriter * Sample_ConfigLogger_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Request_DataWriter> Sample_ConfigLogger_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Request_DataWriter> Sample_ConfigLogger_Request_DataWriter_out;


            class Sample_ConfigLogger_Request_DataReader;

            typedef Sample_ConfigLogger_Request_DataReader * Sample_ConfigLogger_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Request_DataReader> Sample_ConfigLogger_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Request_DataReader> Sample_ConfigLogger_Request_DataReader_out;


            class Sample_ConfigLogger_Request_DataReaderView;

            typedef Sample_ConfigLogger_Request_DataReaderView * Sample_ConfigLogger_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Request_DataReaderView> Sample_ConfigLogger_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Request_DataReaderView> Sample_ConfigLogger_Request_DataReaderView_out;

            struct Sample_ConfigLogger_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_ConfigLogger_Request_, struct Sample_ConfigLogger_Request_Seq_uniq_> Sample_ConfigLogger_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_ConfigLogger_Request_Seq> Sample_ConfigLogger_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ConfigLogger_Request_Seq> Sample_ConfigLogger_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ConfigLogger_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ConfigLogger_Request_TypeSupportInterface_var _var_type;

                static Sample_ConfigLogger_Request_TypeSupportInterface_ptr _duplicate (Sample_ConfigLogger_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ConfigLogger_Request_TypeSupportInterface () {};
                ~Sample_ConfigLogger_Request_TypeSupportInterface () {};
            private:
                Sample_ConfigLogger_Request_TypeSupportInterface (const Sample_ConfigLogger_Request_TypeSupportInterface &);
                Sample_ConfigLogger_Request_TypeSupportInterface & operator = (const Sample_ConfigLogger_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ConfigLogger_Request_DataWriter_ptr _ptr_type;
                typedef Sample_ConfigLogger_Request_DataWriter_var _var_type;

                static Sample_ConfigLogger_Request_DataWriter_ptr _duplicate (Sample_ConfigLogger_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ConfigLogger_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ConfigLogger_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ConfigLogger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ConfigLogger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ConfigLogger_Request_& instance_data) = 0;

            protected:
                Sample_ConfigLogger_Request_DataWriter () {};
                ~Sample_ConfigLogger_Request_DataWriter () {};
            private:
                Sample_ConfigLogger_Request_DataWriter (const Sample_ConfigLogger_Request_DataWriter &);
                Sample_ConfigLogger_Request_DataWriter & operator = (const Sample_ConfigLogger_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ConfigLogger_Request_DataReader_ptr _ptr_type;
                typedef Sample_ConfigLogger_Request_DataReader_var _var_type;

                static Sample_ConfigLogger_Request_DataReader_ptr _duplicate (Sample_ConfigLogger_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ConfigLogger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ConfigLogger_Request_& instance) = 0;

            protected:
                Sample_ConfigLogger_Request_DataReader () {};
                ~Sample_ConfigLogger_Request_DataReader () {};
            private:
                Sample_ConfigLogger_Request_DataReader (const Sample_ConfigLogger_Request_DataReader &);
                Sample_ConfigLogger_Request_DataReader & operator = (const Sample_ConfigLogger_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ConfigLogger_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_ConfigLogger_Request_DataReaderView_var _var_type;

                static Sample_ConfigLogger_Request_DataReaderView_ptr _duplicate (Sample_ConfigLogger_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ConfigLogger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ConfigLogger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ConfigLogger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ConfigLogger_Request_& instance) = 0;

            protected:
                Sample_ConfigLogger_Request_DataReaderView () {};
                ~Sample_ConfigLogger_Request_DataReaderView () {};
            private:
                Sample_ConfigLogger_Request_DataReaderView (const Sample_ConfigLogger_Request_DataReaderView &);
                Sample_ConfigLogger_Request_DataReaderView & operator = (const Sample_ConfigLogger_Request_DataReaderView &);
            };
            class Sample_ConfigLogger_Response_TypeSupportInterface;

            typedef Sample_ConfigLogger_Response_TypeSupportInterface * Sample_ConfigLogger_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Response_TypeSupportInterface> Sample_ConfigLogger_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Response_TypeSupportInterface> Sample_ConfigLogger_Response_TypeSupportInterface_out;


            class Sample_ConfigLogger_Response_DataWriter;

            typedef Sample_ConfigLogger_Response_DataWriter * Sample_ConfigLogger_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Response_DataWriter> Sample_ConfigLogger_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Response_DataWriter> Sample_ConfigLogger_Response_DataWriter_out;


            class Sample_ConfigLogger_Response_DataReader;

            typedef Sample_ConfigLogger_Response_DataReader * Sample_ConfigLogger_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Response_DataReader> Sample_ConfigLogger_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Response_DataReader> Sample_ConfigLogger_Response_DataReader_out;


            class Sample_ConfigLogger_Response_DataReaderView;

            typedef Sample_ConfigLogger_Response_DataReaderView * Sample_ConfigLogger_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ConfigLogger_Response_DataReaderView> Sample_ConfigLogger_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ConfigLogger_Response_DataReaderView> Sample_ConfigLogger_Response_DataReaderView_out;

            struct Sample_ConfigLogger_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_ConfigLogger_Response_, struct Sample_ConfigLogger_Response_Seq_uniq_> Sample_ConfigLogger_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_ConfigLogger_Response_Seq> Sample_ConfigLogger_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ConfigLogger_Response_Seq> Sample_ConfigLogger_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ConfigLogger_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ConfigLogger_Response_TypeSupportInterface_var _var_type;

                static Sample_ConfigLogger_Response_TypeSupportInterface_ptr _duplicate (Sample_ConfigLogger_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ConfigLogger_Response_TypeSupportInterface () {};
                ~Sample_ConfigLogger_Response_TypeSupportInterface () {};
            private:
                Sample_ConfigLogger_Response_TypeSupportInterface (const Sample_ConfigLogger_Response_TypeSupportInterface &);
                Sample_ConfigLogger_Response_TypeSupportInterface & operator = (const Sample_ConfigLogger_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ConfigLogger_Response_DataWriter_ptr _ptr_type;
                typedef Sample_ConfigLogger_Response_DataWriter_var _var_type;

                static Sample_ConfigLogger_Response_DataWriter_ptr _duplicate (Sample_ConfigLogger_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ConfigLogger_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ConfigLogger_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ConfigLogger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ConfigLogger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ConfigLogger_Response_& instance_data) = 0;

            protected:
                Sample_ConfigLogger_Response_DataWriter () {};
                ~Sample_ConfigLogger_Response_DataWriter () {};
            private:
                Sample_ConfigLogger_Response_DataWriter (const Sample_ConfigLogger_Response_DataWriter &);
                Sample_ConfigLogger_Response_DataWriter & operator = (const Sample_ConfigLogger_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ConfigLogger_Response_DataReader_ptr _ptr_type;
                typedef Sample_ConfigLogger_Response_DataReader_var _var_type;

                static Sample_ConfigLogger_Response_DataReader_ptr _duplicate (Sample_ConfigLogger_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ConfigLogger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ConfigLogger_Response_& instance) = 0;

            protected:
                Sample_ConfigLogger_Response_DataReader () {};
                ~Sample_ConfigLogger_Response_DataReader () {};
            private:
                Sample_ConfigLogger_Response_DataReader (const Sample_ConfigLogger_Response_DataReader &);
                Sample_ConfigLogger_Response_DataReader & operator = (const Sample_ConfigLogger_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ConfigLogger_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_ConfigLogger_Response_DataReaderView_var _var_type;

                static Sample_ConfigLogger_Response_DataReaderView_ptr _duplicate (Sample_ConfigLogger_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ConfigLogger_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ConfigLogger_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ConfigLogger_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ConfigLogger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ConfigLogger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ConfigLogger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ConfigLogger_Response_& instance) = 0;

            protected:
                Sample_ConfigLogger_Response_DataReaderView () {};
                ~Sample_ConfigLogger_Response_DataReaderView () {};
            private:
                Sample_ConfigLogger_Response_DataReaderView (const Sample_ConfigLogger_Response_DataReaderView &);
                Sample_ConfigLogger_Response_DataReaderView & operator = (const Sample_ConfigLogger_Response_DataReaderView &);
            };
        }

    }

}

#endif
