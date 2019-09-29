#ifndef _H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap_DCPS_H_
#define _H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SaveMap_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class SaveMap_Request_TypeSupportInterface;

            typedef SaveMap_Request_TypeSupportInterface * SaveMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Request_TypeSupportInterface> SaveMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SaveMap_Request_TypeSupportInterface> SaveMap_Request_TypeSupportInterface_out;


            class SaveMap_Request_DataWriter;

            typedef SaveMap_Request_DataWriter * SaveMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Request_DataWriter> SaveMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SaveMap_Request_DataWriter> SaveMap_Request_DataWriter_out;


            class SaveMap_Request_DataReader;

            typedef SaveMap_Request_DataReader * SaveMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Request_DataReader> SaveMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SaveMap_Request_DataReader> SaveMap_Request_DataReader_out;


            class SaveMap_Request_DataReaderView;

            typedef SaveMap_Request_DataReaderView * SaveMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Request_DataReaderView> SaveMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SaveMap_Request_DataReaderView> SaveMap_Request_DataReaderView_out;

            struct SaveMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SaveMap_Request_, struct SaveMap_Request_Seq_uniq_> SaveMap_Request_Seq;
            typedef DDS_DCPSSequence_var < SaveMap_Request_Seq> SaveMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SaveMap_Request_Seq> SaveMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SaveMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SaveMap_Request_TypeSupportInterface_var _var_type;

                static SaveMap_Request_TypeSupportInterface_ptr _duplicate (SaveMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SaveMap_Request_TypeSupportInterface () {};
                ~SaveMap_Request_TypeSupportInterface () {};
            private:
                SaveMap_Request_TypeSupportInterface (const SaveMap_Request_TypeSupportInterface &);
                SaveMap_Request_TypeSupportInterface & operator = (const SaveMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SaveMap_Request_DataWriter_ptr _ptr_type;
                typedef SaveMap_Request_DataWriter_var _var_type;

                static SaveMap_Request_DataWriter_ptr _duplicate (SaveMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SaveMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SaveMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SaveMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SaveMap_Request_& instance_data) = 0;

            protected:
                SaveMap_Request_DataWriter () {};
                ~SaveMap_Request_DataWriter () {};
            private:
                SaveMap_Request_DataWriter (const SaveMap_Request_DataWriter &);
                SaveMap_Request_DataWriter & operator = (const SaveMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SaveMap_Request_DataReader_ptr _ptr_type;
                typedef SaveMap_Request_DataReader_var _var_type;

                static SaveMap_Request_DataReader_ptr _duplicate (SaveMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SaveMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SaveMap_Request_& instance) = 0;

            protected:
                SaveMap_Request_DataReader () {};
                ~SaveMap_Request_DataReader () {};
            private:
                SaveMap_Request_DataReader (const SaveMap_Request_DataReader &);
                SaveMap_Request_DataReader & operator = (const SaveMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SaveMap_Request_DataReaderView_ptr _ptr_type;
                typedef SaveMap_Request_DataReaderView_var _var_type;

                static SaveMap_Request_DataReaderView_ptr _duplicate (SaveMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SaveMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SaveMap_Request_& instance) = 0;

            protected:
                SaveMap_Request_DataReaderView () {};
                ~SaveMap_Request_DataReaderView () {};
            private:
                SaveMap_Request_DataReaderView (const SaveMap_Request_DataReaderView &);
                SaveMap_Request_DataReaderView & operator = (const SaveMap_Request_DataReaderView &);
            };
            class SaveMap_Response_TypeSupportInterface;

            typedef SaveMap_Response_TypeSupportInterface * SaveMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Response_TypeSupportInterface> SaveMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SaveMap_Response_TypeSupportInterface> SaveMap_Response_TypeSupportInterface_out;


            class SaveMap_Response_DataWriter;

            typedef SaveMap_Response_DataWriter * SaveMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Response_DataWriter> SaveMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SaveMap_Response_DataWriter> SaveMap_Response_DataWriter_out;


            class SaveMap_Response_DataReader;

            typedef SaveMap_Response_DataReader * SaveMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Response_DataReader> SaveMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SaveMap_Response_DataReader> SaveMap_Response_DataReader_out;


            class SaveMap_Response_DataReaderView;

            typedef SaveMap_Response_DataReaderView * SaveMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SaveMap_Response_DataReaderView> SaveMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SaveMap_Response_DataReaderView> SaveMap_Response_DataReaderView_out;

            struct SaveMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SaveMap_Response_, struct SaveMap_Response_Seq_uniq_> SaveMap_Response_Seq;
            typedef DDS_DCPSSequence_var < SaveMap_Response_Seq> SaveMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SaveMap_Response_Seq> SaveMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SaveMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SaveMap_Response_TypeSupportInterface_var _var_type;

                static SaveMap_Response_TypeSupportInterface_ptr _duplicate (SaveMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SaveMap_Response_TypeSupportInterface () {};
                ~SaveMap_Response_TypeSupportInterface () {};
            private:
                SaveMap_Response_TypeSupportInterface (const SaveMap_Response_TypeSupportInterface &);
                SaveMap_Response_TypeSupportInterface & operator = (const SaveMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SaveMap_Response_DataWriter_ptr _ptr_type;
                typedef SaveMap_Response_DataWriter_var _var_type;

                static SaveMap_Response_DataWriter_ptr _duplicate (SaveMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SaveMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SaveMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SaveMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SaveMap_Response_& instance_data) = 0;

            protected:
                SaveMap_Response_DataWriter () {};
                ~SaveMap_Response_DataWriter () {};
            private:
                SaveMap_Response_DataWriter (const SaveMap_Response_DataWriter &);
                SaveMap_Response_DataWriter & operator = (const SaveMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SaveMap_Response_DataReader_ptr _ptr_type;
                typedef SaveMap_Response_DataReader_var _var_type;

                static SaveMap_Response_DataReader_ptr _duplicate (SaveMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SaveMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SaveMap_Response_& instance) = 0;

            protected:
                SaveMap_Response_DataReader () {};
                ~SaveMap_Response_DataReader () {};
            private:
                SaveMap_Response_DataReader (const SaveMap_Response_DataReader &);
                SaveMap_Response_DataReader & operator = (const SaveMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SaveMap_Response_DataReaderView_ptr _ptr_type;
                typedef SaveMap_Response_DataReaderView_var _var_type;

                static SaveMap_Response_DataReaderView_ptr _duplicate (SaveMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SaveMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SaveMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SaveMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SaveMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SaveMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SaveMap_Response_& instance) = 0;

            protected:
                SaveMap_Response_DataReaderView () {};
                ~SaveMap_Response_DataReaderView () {};
            private:
                SaveMap_Response_DataReaderView (const SaveMap_Response_DataReaderView &);
                SaveMap_Response_DataReaderView & operator = (const SaveMap_Response_DataReaderView &);
            };
            class Sample_SaveMap_Request_TypeSupportInterface;

            typedef Sample_SaveMap_Request_TypeSupportInterface * Sample_SaveMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Request_TypeSupportInterface> Sample_SaveMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Request_TypeSupportInterface> Sample_SaveMap_Request_TypeSupportInterface_out;


            class Sample_SaveMap_Request_DataWriter;

            typedef Sample_SaveMap_Request_DataWriter * Sample_SaveMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Request_DataWriter> Sample_SaveMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Request_DataWriter> Sample_SaveMap_Request_DataWriter_out;


            class Sample_SaveMap_Request_DataReader;

            typedef Sample_SaveMap_Request_DataReader * Sample_SaveMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Request_DataReader> Sample_SaveMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Request_DataReader> Sample_SaveMap_Request_DataReader_out;


            class Sample_SaveMap_Request_DataReaderView;

            typedef Sample_SaveMap_Request_DataReaderView * Sample_SaveMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Request_DataReaderView> Sample_SaveMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Request_DataReaderView> Sample_SaveMap_Request_DataReaderView_out;

            struct Sample_SaveMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SaveMap_Request_, struct Sample_SaveMap_Request_Seq_uniq_> Sample_SaveMap_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SaveMap_Request_Seq> Sample_SaveMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SaveMap_Request_Seq> Sample_SaveMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SaveMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SaveMap_Request_TypeSupportInterface_var _var_type;

                static Sample_SaveMap_Request_TypeSupportInterface_ptr _duplicate (Sample_SaveMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SaveMap_Request_TypeSupportInterface () {};
                ~Sample_SaveMap_Request_TypeSupportInterface () {};
            private:
                Sample_SaveMap_Request_TypeSupportInterface (const Sample_SaveMap_Request_TypeSupportInterface &);
                Sample_SaveMap_Request_TypeSupportInterface & operator = (const Sample_SaveMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SaveMap_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SaveMap_Request_DataWriter_var _var_type;

                static Sample_SaveMap_Request_DataWriter_ptr _duplicate (Sample_SaveMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SaveMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SaveMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SaveMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SaveMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SaveMap_Request_& instance_data) = 0;

            protected:
                Sample_SaveMap_Request_DataWriter () {};
                ~Sample_SaveMap_Request_DataWriter () {};
            private:
                Sample_SaveMap_Request_DataWriter (const Sample_SaveMap_Request_DataWriter &);
                Sample_SaveMap_Request_DataWriter & operator = (const Sample_SaveMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SaveMap_Request_DataReader_ptr _ptr_type;
                typedef Sample_SaveMap_Request_DataReader_var _var_type;

                static Sample_SaveMap_Request_DataReader_ptr _duplicate (Sample_SaveMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SaveMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SaveMap_Request_& instance) = 0;

            protected:
                Sample_SaveMap_Request_DataReader () {};
                ~Sample_SaveMap_Request_DataReader () {};
            private:
                Sample_SaveMap_Request_DataReader (const Sample_SaveMap_Request_DataReader &);
                Sample_SaveMap_Request_DataReader & operator = (const Sample_SaveMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SaveMap_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SaveMap_Request_DataReaderView_var _var_type;

                static Sample_SaveMap_Request_DataReaderView_ptr _duplicate (Sample_SaveMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SaveMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SaveMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SaveMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SaveMap_Request_& instance) = 0;

            protected:
                Sample_SaveMap_Request_DataReaderView () {};
                ~Sample_SaveMap_Request_DataReaderView () {};
            private:
                Sample_SaveMap_Request_DataReaderView (const Sample_SaveMap_Request_DataReaderView &);
                Sample_SaveMap_Request_DataReaderView & operator = (const Sample_SaveMap_Request_DataReaderView &);
            };
            class Sample_SaveMap_Response_TypeSupportInterface;

            typedef Sample_SaveMap_Response_TypeSupportInterface * Sample_SaveMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Response_TypeSupportInterface> Sample_SaveMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Response_TypeSupportInterface> Sample_SaveMap_Response_TypeSupportInterface_out;


            class Sample_SaveMap_Response_DataWriter;

            typedef Sample_SaveMap_Response_DataWriter * Sample_SaveMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Response_DataWriter> Sample_SaveMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Response_DataWriter> Sample_SaveMap_Response_DataWriter_out;


            class Sample_SaveMap_Response_DataReader;

            typedef Sample_SaveMap_Response_DataReader * Sample_SaveMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Response_DataReader> Sample_SaveMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Response_DataReader> Sample_SaveMap_Response_DataReader_out;


            class Sample_SaveMap_Response_DataReaderView;

            typedef Sample_SaveMap_Response_DataReaderView * Sample_SaveMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SaveMap_Response_DataReaderView> Sample_SaveMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SaveMap_Response_DataReaderView> Sample_SaveMap_Response_DataReaderView_out;

            struct Sample_SaveMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SaveMap_Response_, struct Sample_SaveMap_Response_Seq_uniq_> Sample_SaveMap_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SaveMap_Response_Seq> Sample_SaveMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SaveMap_Response_Seq> Sample_SaveMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SaveMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SaveMap_Response_TypeSupportInterface_var _var_type;

                static Sample_SaveMap_Response_TypeSupportInterface_ptr _duplicate (Sample_SaveMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SaveMap_Response_TypeSupportInterface () {};
                ~Sample_SaveMap_Response_TypeSupportInterface () {};
            private:
                Sample_SaveMap_Response_TypeSupportInterface (const Sample_SaveMap_Response_TypeSupportInterface &);
                Sample_SaveMap_Response_TypeSupportInterface & operator = (const Sample_SaveMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SaveMap_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SaveMap_Response_DataWriter_var _var_type;

                static Sample_SaveMap_Response_DataWriter_ptr _duplicate (Sample_SaveMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SaveMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SaveMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SaveMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SaveMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SaveMap_Response_& instance_data) = 0;

            protected:
                Sample_SaveMap_Response_DataWriter () {};
                ~Sample_SaveMap_Response_DataWriter () {};
            private:
                Sample_SaveMap_Response_DataWriter (const Sample_SaveMap_Response_DataWriter &);
                Sample_SaveMap_Response_DataWriter & operator = (const Sample_SaveMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SaveMap_Response_DataReader_ptr _ptr_type;
                typedef Sample_SaveMap_Response_DataReader_var _var_type;

                static Sample_SaveMap_Response_DataReader_ptr _duplicate (Sample_SaveMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SaveMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SaveMap_Response_& instance) = 0;

            protected:
                Sample_SaveMap_Response_DataReader () {};
                ~Sample_SaveMap_Response_DataReader () {};
            private:
                Sample_SaveMap_Response_DataReader (const Sample_SaveMap_Response_DataReader &);
                Sample_SaveMap_Response_DataReader & operator = (const Sample_SaveMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SaveMap_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SaveMap_Response_DataReaderView_var _var_type;

                static Sample_SaveMap_Response_DataReaderView_ptr _duplicate (Sample_SaveMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SaveMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SaveMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SaveMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SaveMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SaveMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SaveMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SaveMap_Response_& instance) = 0;

            protected:
                Sample_SaveMap_Response_DataReaderView () {};
                ~Sample_SaveMap_Response_DataReaderView () {};
            private:
                Sample_SaveMap_Response_DataReaderView (const Sample_SaveMap_Response_DataReaderView &);
                Sample_SaveMap_Response_DataReaderView & operator = (const Sample_SaveMap_Response_DataReaderView &);
            };
        }

    }

}

#endif
