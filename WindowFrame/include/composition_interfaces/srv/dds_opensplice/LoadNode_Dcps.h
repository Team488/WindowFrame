#ifndef _H_0ADF5E560338E798566E3FF0596F832D_LoadNode_DCPS_H_
#define _H_0ADF5E560338E798566E3FF0596F832D_LoadNode_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "LoadNode_.h"

#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace composition_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class LoadNode_Request_TypeSupportInterface;

            typedef LoadNode_Request_TypeSupportInterface * LoadNode_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Request_TypeSupportInterface> LoadNode_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LoadNode_Request_TypeSupportInterface> LoadNode_Request_TypeSupportInterface_out;


            class LoadNode_Request_DataWriter;

            typedef LoadNode_Request_DataWriter * LoadNode_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Request_DataWriter> LoadNode_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < LoadNode_Request_DataWriter> LoadNode_Request_DataWriter_out;


            class LoadNode_Request_DataReader;

            typedef LoadNode_Request_DataReader * LoadNode_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Request_DataReader> LoadNode_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < LoadNode_Request_DataReader> LoadNode_Request_DataReader_out;


            class LoadNode_Request_DataReaderView;

            typedef LoadNode_Request_DataReaderView * LoadNode_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Request_DataReaderView> LoadNode_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LoadNode_Request_DataReaderView> LoadNode_Request_DataReaderView_out;

            struct LoadNode_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LoadNode_Request_, struct LoadNode_Request_Seq_uniq_> LoadNode_Request_Seq;
            typedef DDS_DCPSSequence_var < LoadNode_Request_Seq> LoadNode_Request_Seq_var;
            typedef DDS_DCPSSequence_out < LoadNode_Request_Seq> LoadNode_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LoadNode_Request_TypeSupportInterface_ptr _ptr_type;
                typedef LoadNode_Request_TypeSupportInterface_var _var_type;

                static LoadNode_Request_TypeSupportInterface_ptr _duplicate (LoadNode_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LoadNode_Request_TypeSupportInterface () {};
                ~LoadNode_Request_TypeSupportInterface () {};
            private:
                LoadNode_Request_TypeSupportInterface (const LoadNode_Request_TypeSupportInterface &);
                LoadNode_Request_TypeSupportInterface & operator = (const LoadNode_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LoadNode_Request_DataWriter_ptr _ptr_type;
                typedef LoadNode_Request_DataWriter_var _var_type;

                static LoadNode_Request_DataWriter_ptr _duplicate (LoadNode_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LoadNode_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LoadNode_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LoadNode_Request_& instance_data) = 0;

            protected:
                LoadNode_Request_DataWriter () {};
                ~LoadNode_Request_DataWriter () {};
            private:
                LoadNode_Request_DataWriter (const LoadNode_Request_DataWriter &);
                LoadNode_Request_DataWriter & operator = (const LoadNode_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LoadNode_Request_DataReader_ptr _ptr_type;
                typedef LoadNode_Request_DataReader_var _var_type;

                static LoadNode_Request_DataReader_ptr _duplicate (LoadNode_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LoadNode_Request_& instance) = 0;

            protected:
                LoadNode_Request_DataReader () {};
                ~LoadNode_Request_DataReader () {};
            private:
                LoadNode_Request_DataReader (const LoadNode_Request_DataReader &);
                LoadNode_Request_DataReader & operator = (const LoadNode_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LoadNode_Request_DataReaderView_ptr _ptr_type;
                typedef LoadNode_Request_DataReaderView_var _var_type;

                static LoadNode_Request_DataReaderView_ptr _duplicate (LoadNode_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LoadNode_Request_& instance) = 0;

            protected:
                LoadNode_Request_DataReaderView () {};
                ~LoadNode_Request_DataReaderView () {};
            private:
                LoadNode_Request_DataReaderView (const LoadNode_Request_DataReaderView &);
                LoadNode_Request_DataReaderView & operator = (const LoadNode_Request_DataReaderView &);
            };
            class LoadNode_Response_TypeSupportInterface;

            typedef LoadNode_Response_TypeSupportInterface * LoadNode_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Response_TypeSupportInterface> LoadNode_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LoadNode_Response_TypeSupportInterface> LoadNode_Response_TypeSupportInterface_out;


            class LoadNode_Response_DataWriter;

            typedef LoadNode_Response_DataWriter * LoadNode_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Response_DataWriter> LoadNode_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < LoadNode_Response_DataWriter> LoadNode_Response_DataWriter_out;


            class LoadNode_Response_DataReader;

            typedef LoadNode_Response_DataReader * LoadNode_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Response_DataReader> LoadNode_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < LoadNode_Response_DataReader> LoadNode_Response_DataReader_out;


            class LoadNode_Response_DataReaderView;

            typedef LoadNode_Response_DataReaderView * LoadNode_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LoadNode_Response_DataReaderView> LoadNode_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LoadNode_Response_DataReaderView> LoadNode_Response_DataReaderView_out;

            struct LoadNode_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LoadNode_Response_, struct LoadNode_Response_Seq_uniq_> LoadNode_Response_Seq;
            typedef DDS_DCPSSequence_var < LoadNode_Response_Seq> LoadNode_Response_Seq_var;
            typedef DDS_DCPSSequence_out < LoadNode_Response_Seq> LoadNode_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LoadNode_Response_TypeSupportInterface_ptr _ptr_type;
                typedef LoadNode_Response_TypeSupportInterface_var _var_type;

                static LoadNode_Response_TypeSupportInterface_ptr _duplicate (LoadNode_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LoadNode_Response_TypeSupportInterface () {};
                ~LoadNode_Response_TypeSupportInterface () {};
            private:
                LoadNode_Response_TypeSupportInterface (const LoadNode_Response_TypeSupportInterface &);
                LoadNode_Response_TypeSupportInterface & operator = (const LoadNode_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LoadNode_Response_DataWriter_ptr _ptr_type;
                typedef LoadNode_Response_DataWriter_var _var_type;

                static LoadNode_Response_DataWriter_ptr _duplicate (LoadNode_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LoadNode_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LoadNode_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LoadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LoadNode_Response_& instance_data) = 0;

            protected:
                LoadNode_Response_DataWriter () {};
                ~LoadNode_Response_DataWriter () {};
            private:
                LoadNode_Response_DataWriter (const LoadNode_Response_DataWriter &);
                LoadNode_Response_DataWriter & operator = (const LoadNode_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LoadNode_Response_DataReader_ptr _ptr_type;
                typedef LoadNode_Response_DataReader_var _var_type;

                static LoadNode_Response_DataReader_ptr _duplicate (LoadNode_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LoadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LoadNode_Response_& instance) = 0;

            protected:
                LoadNode_Response_DataReader () {};
                ~LoadNode_Response_DataReader () {};
            private:
                LoadNode_Response_DataReader (const LoadNode_Response_DataReader &);
                LoadNode_Response_DataReader & operator = (const LoadNode_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces LoadNode_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LoadNode_Response_DataReaderView_ptr _ptr_type;
                typedef LoadNode_Response_DataReaderView_var _var_type;

                static LoadNode_Response_DataReaderView_ptr _duplicate (LoadNode_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LoadNode_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LoadNode_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LoadNode_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LoadNode_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LoadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LoadNode_Response_& instance) = 0;

            protected:
                LoadNode_Response_DataReaderView () {};
                ~LoadNode_Response_DataReaderView () {};
            private:
                LoadNode_Response_DataReaderView (const LoadNode_Response_DataReaderView &);
                LoadNode_Response_DataReaderView & operator = (const LoadNode_Response_DataReaderView &);
            };
            class Sample_LoadNode_Request_TypeSupportInterface;

            typedef Sample_LoadNode_Request_TypeSupportInterface * Sample_LoadNode_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Request_TypeSupportInterface> Sample_LoadNode_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Request_TypeSupportInterface> Sample_LoadNode_Request_TypeSupportInterface_out;


            class Sample_LoadNode_Request_DataWriter;

            typedef Sample_LoadNode_Request_DataWriter * Sample_LoadNode_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Request_DataWriter> Sample_LoadNode_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Request_DataWriter> Sample_LoadNode_Request_DataWriter_out;


            class Sample_LoadNode_Request_DataReader;

            typedef Sample_LoadNode_Request_DataReader * Sample_LoadNode_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Request_DataReader> Sample_LoadNode_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Request_DataReader> Sample_LoadNode_Request_DataReader_out;


            class Sample_LoadNode_Request_DataReaderView;

            typedef Sample_LoadNode_Request_DataReaderView * Sample_LoadNode_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Request_DataReaderView> Sample_LoadNode_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Request_DataReaderView> Sample_LoadNode_Request_DataReaderView_out;

            struct Sample_LoadNode_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_LoadNode_Request_, struct Sample_LoadNode_Request_Seq_uniq_> Sample_LoadNode_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_LoadNode_Request_Seq> Sample_LoadNode_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_LoadNode_Request_Seq> Sample_LoadNode_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_LoadNode_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_LoadNode_Request_TypeSupportInterface_var _var_type;

                static Sample_LoadNode_Request_TypeSupportInterface_ptr _duplicate (Sample_LoadNode_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_LoadNode_Request_TypeSupportInterface () {};
                ~Sample_LoadNode_Request_TypeSupportInterface () {};
            private:
                Sample_LoadNode_Request_TypeSupportInterface (const Sample_LoadNode_Request_TypeSupportInterface &);
                Sample_LoadNode_Request_TypeSupportInterface & operator = (const Sample_LoadNode_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_LoadNode_Request_DataWriter_ptr _ptr_type;
                typedef Sample_LoadNode_Request_DataWriter_var _var_type;

                static Sample_LoadNode_Request_DataWriter_ptr _duplicate (Sample_LoadNode_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_LoadNode_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_LoadNode_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LoadNode_Request_& instance_data) = 0;

            protected:
                Sample_LoadNode_Request_DataWriter () {};
                ~Sample_LoadNode_Request_DataWriter () {};
            private:
                Sample_LoadNode_Request_DataWriter (const Sample_LoadNode_Request_DataWriter &);
                Sample_LoadNode_Request_DataWriter & operator = (const Sample_LoadNode_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_LoadNode_Request_DataReader_ptr _ptr_type;
                typedef Sample_LoadNode_Request_DataReader_var _var_type;

                static Sample_LoadNode_Request_DataReader_ptr _duplicate (Sample_LoadNode_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LoadNode_Request_& instance) = 0;

            protected:
                Sample_LoadNode_Request_DataReader () {};
                ~Sample_LoadNode_Request_DataReader () {};
            private:
                Sample_LoadNode_Request_DataReader (const Sample_LoadNode_Request_DataReader &);
                Sample_LoadNode_Request_DataReader & operator = (const Sample_LoadNode_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_LoadNode_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_LoadNode_Request_DataReaderView_var _var_type;

                static Sample_LoadNode_Request_DataReaderView_ptr _duplicate (Sample_LoadNode_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LoadNode_Request_& instance) = 0;

            protected:
                Sample_LoadNode_Request_DataReaderView () {};
                ~Sample_LoadNode_Request_DataReaderView () {};
            private:
                Sample_LoadNode_Request_DataReaderView (const Sample_LoadNode_Request_DataReaderView &);
                Sample_LoadNode_Request_DataReaderView & operator = (const Sample_LoadNode_Request_DataReaderView &);
            };
            class Sample_LoadNode_Response_TypeSupportInterface;

            typedef Sample_LoadNode_Response_TypeSupportInterface * Sample_LoadNode_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Response_TypeSupportInterface> Sample_LoadNode_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Response_TypeSupportInterface> Sample_LoadNode_Response_TypeSupportInterface_out;


            class Sample_LoadNode_Response_DataWriter;

            typedef Sample_LoadNode_Response_DataWriter * Sample_LoadNode_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Response_DataWriter> Sample_LoadNode_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Response_DataWriter> Sample_LoadNode_Response_DataWriter_out;


            class Sample_LoadNode_Response_DataReader;

            typedef Sample_LoadNode_Response_DataReader * Sample_LoadNode_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Response_DataReader> Sample_LoadNode_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Response_DataReader> Sample_LoadNode_Response_DataReader_out;


            class Sample_LoadNode_Response_DataReaderView;

            typedef Sample_LoadNode_Response_DataReaderView * Sample_LoadNode_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_LoadNode_Response_DataReaderView> Sample_LoadNode_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_LoadNode_Response_DataReaderView> Sample_LoadNode_Response_DataReaderView_out;

            struct Sample_LoadNode_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_LoadNode_Response_, struct Sample_LoadNode_Response_Seq_uniq_> Sample_LoadNode_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_LoadNode_Response_Seq> Sample_LoadNode_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_LoadNode_Response_Seq> Sample_LoadNode_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_LoadNode_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_LoadNode_Response_TypeSupportInterface_var _var_type;

                static Sample_LoadNode_Response_TypeSupportInterface_ptr _duplicate (Sample_LoadNode_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_LoadNode_Response_TypeSupportInterface () {};
                ~Sample_LoadNode_Response_TypeSupportInterface () {};
            private:
                Sample_LoadNode_Response_TypeSupportInterface (const Sample_LoadNode_Response_TypeSupportInterface &);
                Sample_LoadNode_Response_TypeSupportInterface & operator = (const Sample_LoadNode_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_LoadNode_Response_DataWriter_ptr _ptr_type;
                typedef Sample_LoadNode_Response_DataWriter_var _var_type;

                static Sample_LoadNode_Response_DataWriter_ptr _duplicate (Sample_LoadNode_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_LoadNode_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_LoadNode_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_LoadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_LoadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LoadNode_Response_& instance_data) = 0;

            protected:
                Sample_LoadNode_Response_DataWriter () {};
                ~Sample_LoadNode_Response_DataWriter () {};
            private:
                Sample_LoadNode_Response_DataWriter (const Sample_LoadNode_Response_DataWriter &);
                Sample_LoadNode_Response_DataWriter & operator = (const Sample_LoadNode_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_LoadNode_Response_DataReader_ptr _ptr_type;
                typedef Sample_LoadNode_Response_DataReader_var _var_type;

                static Sample_LoadNode_Response_DataReader_ptr _duplicate (Sample_LoadNode_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LoadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LoadNode_Response_& instance) = 0;

            protected:
                Sample_LoadNode_Response_DataReader () {};
                ~Sample_LoadNode_Response_DataReader () {};
            private:
                Sample_LoadNode_Response_DataReader (const Sample_LoadNode_Response_DataReader &);
                Sample_LoadNode_Response_DataReader & operator = (const Sample_LoadNode_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_LoadNode_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_LoadNode_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_LoadNode_Response_DataReaderView_var _var_type;

                static Sample_LoadNode_Response_DataReaderView_ptr _duplicate (Sample_LoadNode_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LoadNode_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LoadNode_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LoadNode_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LoadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LoadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LoadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LoadNode_Response_& instance) = 0;

            protected:
                Sample_LoadNode_Response_DataReaderView () {};
                ~Sample_LoadNode_Response_DataReaderView () {};
            private:
                Sample_LoadNode_Response_DataReaderView (const Sample_LoadNode_Response_DataReaderView &);
                Sample_LoadNode_Response_DataReaderView & operator = (const Sample_LoadNode_Response_DataReaderView &);
            };
        }

    }

}

#endif
