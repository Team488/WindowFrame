#ifndef _H_64834CFEFDE187618286C57ED5BD4F77_AddDiagnostics_DCPS_H_
#define _H_64834CFEFDE187618286C57ED5BD4F77_AddDiagnostics_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AddDiagnostics_.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace diagnostic_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class AddDiagnostics_Request_TypeSupportInterface;

            typedef AddDiagnostics_Request_TypeSupportInterface * AddDiagnostics_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Request_TypeSupportInterface> AddDiagnostics_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Request_TypeSupportInterface> AddDiagnostics_Request_TypeSupportInterface_out;


            class AddDiagnostics_Request_DataWriter;

            typedef AddDiagnostics_Request_DataWriter * AddDiagnostics_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Request_DataWriter> AddDiagnostics_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Request_DataWriter> AddDiagnostics_Request_DataWriter_out;


            class AddDiagnostics_Request_DataReader;

            typedef AddDiagnostics_Request_DataReader * AddDiagnostics_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Request_DataReader> AddDiagnostics_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Request_DataReader> AddDiagnostics_Request_DataReader_out;


            class AddDiagnostics_Request_DataReaderView;

            typedef AddDiagnostics_Request_DataReaderView * AddDiagnostics_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Request_DataReaderView> AddDiagnostics_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Request_DataReaderView> AddDiagnostics_Request_DataReaderView_out;

            struct AddDiagnostics_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < AddDiagnostics_Request_, struct AddDiagnostics_Request_Seq_uniq_> AddDiagnostics_Request_Seq;
            typedef DDS_DCPSSequence_var < AddDiagnostics_Request_Seq> AddDiagnostics_Request_Seq_var;
            typedef DDS_DCPSSequence_out < AddDiagnostics_Request_Seq> AddDiagnostics_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddDiagnostics_Request_TypeSupportInterface_ptr _ptr_type;
                typedef AddDiagnostics_Request_TypeSupportInterface_var _var_type;

                static AddDiagnostics_Request_TypeSupportInterface_ptr _duplicate (AddDiagnostics_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddDiagnostics_Request_TypeSupportInterface () {};
                ~AddDiagnostics_Request_TypeSupportInterface () {};
            private:
                AddDiagnostics_Request_TypeSupportInterface (const AddDiagnostics_Request_TypeSupportInterface &);
                AddDiagnostics_Request_TypeSupportInterface & operator = (const AddDiagnostics_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddDiagnostics_Request_DataWriter_ptr _ptr_type;
                typedef AddDiagnostics_Request_DataWriter_var _var_type;

                static AddDiagnostics_Request_DataWriter_ptr _duplicate (AddDiagnostics_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddDiagnostics_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddDiagnostics_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddDiagnostics_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddDiagnostics_Request_& instance_data) = 0;

            protected:
                AddDiagnostics_Request_DataWriter () {};
                ~AddDiagnostics_Request_DataWriter () {};
            private:
                AddDiagnostics_Request_DataWriter (const AddDiagnostics_Request_DataWriter &);
                AddDiagnostics_Request_DataWriter & operator = (const AddDiagnostics_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddDiagnostics_Request_DataReader_ptr _ptr_type;
                typedef AddDiagnostics_Request_DataReader_var _var_type;

                static AddDiagnostics_Request_DataReader_ptr _duplicate (AddDiagnostics_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddDiagnostics_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddDiagnostics_Request_& instance) = 0;

            protected:
                AddDiagnostics_Request_DataReader () {};
                ~AddDiagnostics_Request_DataReader () {};
            private:
                AddDiagnostics_Request_DataReader (const AddDiagnostics_Request_DataReader &);
                AddDiagnostics_Request_DataReader & operator = (const AddDiagnostics_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddDiagnostics_Request_DataReaderView_ptr _ptr_type;
                typedef AddDiagnostics_Request_DataReaderView_var _var_type;

                static AddDiagnostics_Request_DataReaderView_ptr _duplicate (AddDiagnostics_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddDiagnostics_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddDiagnostics_Request_& instance) = 0;

            protected:
                AddDiagnostics_Request_DataReaderView () {};
                ~AddDiagnostics_Request_DataReaderView () {};
            private:
                AddDiagnostics_Request_DataReaderView (const AddDiagnostics_Request_DataReaderView &);
                AddDiagnostics_Request_DataReaderView & operator = (const AddDiagnostics_Request_DataReaderView &);
            };
            class AddDiagnostics_Response_TypeSupportInterface;

            typedef AddDiagnostics_Response_TypeSupportInterface * AddDiagnostics_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Response_TypeSupportInterface> AddDiagnostics_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Response_TypeSupportInterface> AddDiagnostics_Response_TypeSupportInterface_out;


            class AddDiagnostics_Response_DataWriter;

            typedef AddDiagnostics_Response_DataWriter * AddDiagnostics_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Response_DataWriter> AddDiagnostics_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Response_DataWriter> AddDiagnostics_Response_DataWriter_out;


            class AddDiagnostics_Response_DataReader;

            typedef AddDiagnostics_Response_DataReader * AddDiagnostics_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Response_DataReader> AddDiagnostics_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Response_DataReader> AddDiagnostics_Response_DataReader_out;


            class AddDiagnostics_Response_DataReaderView;

            typedef AddDiagnostics_Response_DataReaderView * AddDiagnostics_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddDiagnostics_Response_DataReaderView> AddDiagnostics_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddDiagnostics_Response_DataReaderView> AddDiagnostics_Response_DataReaderView_out;

            struct AddDiagnostics_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < AddDiagnostics_Response_, struct AddDiagnostics_Response_Seq_uniq_> AddDiagnostics_Response_Seq;
            typedef DDS_DCPSSequence_var < AddDiagnostics_Response_Seq> AddDiagnostics_Response_Seq_var;
            typedef DDS_DCPSSequence_out < AddDiagnostics_Response_Seq> AddDiagnostics_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddDiagnostics_Response_TypeSupportInterface_ptr _ptr_type;
                typedef AddDiagnostics_Response_TypeSupportInterface_var _var_type;

                static AddDiagnostics_Response_TypeSupportInterface_ptr _duplicate (AddDiagnostics_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddDiagnostics_Response_TypeSupportInterface () {};
                ~AddDiagnostics_Response_TypeSupportInterface () {};
            private:
                AddDiagnostics_Response_TypeSupportInterface (const AddDiagnostics_Response_TypeSupportInterface &);
                AddDiagnostics_Response_TypeSupportInterface & operator = (const AddDiagnostics_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddDiagnostics_Response_DataWriter_ptr _ptr_type;
                typedef AddDiagnostics_Response_DataWriter_var _var_type;

                static AddDiagnostics_Response_DataWriter_ptr _duplicate (AddDiagnostics_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddDiagnostics_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddDiagnostics_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddDiagnostics_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddDiagnostics_Response_& instance_data) = 0;

            protected:
                AddDiagnostics_Response_DataWriter () {};
                ~AddDiagnostics_Response_DataWriter () {};
            private:
                AddDiagnostics_Response_DataWriter (const AddDiagnostics_Response_DataWriter &);
                AddDiagnostics_Response_DataWriter & operator = (const AddDiagnostics_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddDiagnostics_Response_DataReader_ptr _ptr_type;
                typedef AddDiagnostics_Response_DataReader_var _var_type;

                static AddDiagnostics_Response_DataReader_ptr _duplicate (AddDiagnostics_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddDiagnostics_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddDiagnostics_Response_& instance) = 0;

            protected:
                AddDiagnostics_Response_DataReader () {};
                ~AddDiagnostics_Response_DataReader () {};
            private:
                AddDiagnostics_Response_DataReader (const AddDiagnostics_Response_DataReader &);
                AddDiagnostics_Response_DataReader & operator = (const AddDiagnostics_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs AddDiagnostics_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddDiagnostics_Response_DataReaderView_ptr _ptr_type;
                typedef AddDiagnostics_Response_DataReaderView_var _var_type;

                static AddDiagnostics_Response_DataReaderView_ptr _duplicate (AddDiagnostics_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddDiagnostics_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddDiagnostics_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddDiagnostics_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddDiagnostics_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddDiagnostics_Response_& instance) = 0;

            protected:
                AddDiagnostics_Response_DataReaderView () {};
                ~AddDiagnostics_Response_DataReaderView () {};
            private:
                AddDiagnostics_Response_DataReaderView (const AddDiagnostics_Response_DataReaderView &);
                AddDiagnostics_Response_DataReaderView & operator = (const AddDiagnostics_Response_DataReaderView &);
            };
            class Sample_AddDiagnostics_Request_TypeSupportInterface;

            typedef Sample_AddDiagnostics_Request_TypeSupportInterface * Sample_AddDiagnostics_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Request_TypeSupportInterface> Sample_AddDiagnostics_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Request_TypeSupportInterface> Sample_AddDiagnostics_Request_TypeSupportInterface_out;


            class Sample_AddDiagnostics_Request_DataWriter;

            typedef Sample_AddDiagnostics_Request_DataWriter * Sample_AddDiagnostics_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Request_DataWriter> Sample_AddDiagnostics_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Request_DataWriter> Sample_AddDiagnostics_Request_DataWriter_out;


            class Sample_AddDiagnostics_Request_DataReader;

            typedef Sample_AddDiagnostics_Request_DataReader * Sample_AddDiagnostics_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Request_DataReader> Sample_AddDiagnostics_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Request_DataReader> Sample_AddDiagnostics_Request_DataReader_out;


            class Sample_AddDiagnostics_Request_DataReaderView;

            typedef Sample_AddDiagnostics_Request_DataReaderView * Sample_AddDiagnostics_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Request_DataReaderView> Sample_AddDiagnostics_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Request_DataReaderView> Sample_AddDiagnostics_Request_DataReaderView_out;

            struct Sample_AddDiagnostics_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_AddDiagnostics_Request_, struct Sample_AddDiagnostics_Request_Seq_uniq_> Sample_AddDiagnostics_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_AddDiagnostics_Request_Seq> Sample_AddDiagnostics_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_AddDiagnostics_Request_Seq> Sample_AddDiagnostics_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_AddDiagnostics_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Request_TypeSupportInterface_var _var_type;

                static Sample_AddDiagnostics_Request_TypeSupportInterface_ptr _duplicate (Sample_AddDiagnostics_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_AddDiagnostics_Request_TypeSupportInterface () {};
                ~Sample_AddDiagnostics_Request_TypeSupportInterface () {};
            private:
                Sample_AddDiagnostics_Request_TypeSupportInterface (const Sample_AddDiagnostics_Request_TypeSupportInterface &);
                Sample_AddDiagnostics_Request_TypeSupportInterface & operator = (const Sample_AddDiagnostics_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_AddDiagnostics_Request_DataWriter_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Request_DataWriter_var _var_type;

                static Sample_AddDiagnostics_Request_DataWriter_ptr _duplicate (Sample_AddDiagnostics_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_AddDiagnostics_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_AddDiagnostics_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_AddDiagnostics_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_AddDiagnostics_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddDiagnostics_Request_& instance_data) = 0;

            protected:
                Sample_AddDiagnostics_Request_DataWriter () {};
                ~Sample_AddDiagnostics_Request_DataWriter () {};
            private:
                Sample_AddDiagnostics_Request_DataWriter (const Sample_AddDiagnostics_Request_DataWriter &);
                Sample_AddDiagnostics_Request_DataWriter & operator = (const Sample_AddDiagnostics_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_AddDiagnostics_Request_DataReader_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Request_DataReader_var _var_type;

                static Sample_AddDiagnostics_Request_DataReader_ptr _duplicate (Sample_AddDiagnostics_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddDiagnostics_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddDiagnostics_Request_& instance) = 0;

            protected:
                Sample_AddDiagnostics_Request_DataReader () {};
                ~Sample_AddDiagnostics_Request_DataReader () {};
            private:
                Sample_AddDiagnostics_Request_DataReader (const Sample_AddDiagnostics_Request_DataReader &);
                Sample_AddDiagnostics_Request_DataReader & operator = (const Sample_AddDiagnostics_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_AddDiagnostics_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Request_DataReaderView_var _var_type;

                static Sample_AddDiagnostics_Request_DataReaderView_ptr _duplicate (Sample_AddDiagnostics_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddDiagnostics_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddDiagnostics_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddDiagnostics_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddDiagnostics_Request_& instance) = 0;

            protected:
                Sample_AddDiagnostics_Request_DataReaderView () {};
                ~Sample_AddDiagnostics_Request_DataReaderView () {};
            private:
                Sample_AddDiagnostics_Request_DataReaderView (const Sample_AddDiagnostics_Request_DataReaderView &);
                Sample_AddDiagnostics_Request_DataReaderView & operator = (const Sample_AddDiagnostics_Request_DataReaderView &);
            };
            class Sample_AddDiagnostics_Response_TypeSupportInterface;

            typedef Sample_AddDiagnostics_Response_TypeSupportInterface * Sample_AddDiagnostics_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Response_TypeSupportInterface> Sample_AddDiagnostics_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Response_TypeSupportInterface> Sample_AddDiagnostics_Response_TypeSupportInterface_out;


            class Sample_AddDiagnostics_Response_DataWriter;

            typedef Sample_AddDiagnostics_Response_DataWriter * Sample_AddDiagnostics_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Response_DataWriter> Sample_AddDiagnostics_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Response_DataWriter> Sample_AddDiagnostics_Response_DataWriter_out;


            class Sample_AddDiagnostics_Response_DataReader;

            typedef Sample_AddDiagnostics_Response_DataReader * Sample_AddDiagnostics_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Response_DataReader> Sample_AddDiagnostics_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Response_DataReader> Sample_AddDiagnostics_Response_DataReader_out;


            class Sample_AddDiagnostics_Response_DataReaderView;

            typedef Sample_AddDiagnostics_Response_DataReaderView * Sample_AddDiagnostics_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddDiagnostics_Response_DataReaderView> Sample_AddDiagnostics_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_AddDiagnostics_Response_DataReaderView> Sample_AddDiagnostics_Response_DataReaderView_out;

            struct Sample_AddDiagnostics_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_AddDiagnostics_Response_, struct Sample_AddDiagnostics_Response_Seq_uniq_> Sample_AddDiagnostics_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_AddDiagnostics_Response_Seq> Sample_AddDiagnostics_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_AddDiagnostics_Response_Seq> Sample_AddDiagnostics_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_AddDiagnostics_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Response_TypeSupportInterface_var _var_type;

                static Sample_AddDiagnostics_Response_TypeSupportInterface_ptr _duplicate (Sample_AddDiagnostics_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_AddDiagnostics_Response_TypeSupportInterface () {};
                ~Sample_AddDiagnostics_Response_TypeSupportInterface () {};
            private:
                Sample_AddDiagnostics_Response_TypeSupportInterface (const Sample_AddDiagnostics_Response_TypeSupportInterface &);
                Sample_AddDiagnostics_Response_TypeSupportInterface & operator = (const Sample_AddDiagnostics_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_AddDiagnostics_Response_DataWriter_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Response_DataWriter_var _var_type;

                static Sample_AddDiagnostics_Response_DataWriter_ptr _duplicate (Sample_AddDiagnostics_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_AddDiagnostics_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_AddDiagnostics_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_AddDiagnostics_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_AddDiagnostics_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddDiagnostics_Response_& instance_data) = 0;

            protected:
                Sample_AddDiagnostics_Response_DataWriter () {};
                ~Sample_AddDiagnostics_Response_DataWriter () {};
            private:
                Sample_AddDiagnostics_Response_DataWriter (const Sample_AddDiagnostics_Response_DataWriter &);
                Sample_AddDiagnostics_Response_DataWriter & operator = (const Sample_AddDiagnostics_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_AddDiagnostics_Response_DataReader_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Response_DataReader_var _var_type;

                static Sample_AddDiagnostics_Response_DataReader_ptr _duplicate (Sample_AddDiagnostics_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddDiagnostics_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddDiagnostics_Response_& instance) = 0;

            protected:
                Sample_AddDiagnostics_Response_DataReader () {};
                ~Sample_AddDiagnostics_Response_DataReader () {};
            private:
                Sample_AddDiagnostics_Response_DataReader (const Sample_AddDiagnostics_Response_DataReader &);
                Sample_AddDiagnostics_Response_DataReader & operator = (const Sample_AddDiagnostics_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_AddDiagnostics_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_AddDiagnostics_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_AddDiagnostics_Response_DataReaderView_var _var_type;

                static Sample_AddDiagnostics_Response_DataReaderView_ptr _duplicate (Sample_AddDiagnostics_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddDiagnostics_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddDiagnostics_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddDiagnostics_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddDiagnostics_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddDiagnostics_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddDiagnostics_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddDiagnostics_Response_& instance) = 0;

            protected:
                Sample_AddDiagnostics_Response_DataReaderView () {};
                ~Sample_AddDiagnostics_Response_DataReaderView () {};
            private:
                Sample_AddDiagnostics_Response_DataReaderView (const Sample_AddDiagnostics_Response_DataReaderView &);
                Sample_AddDiagnostics_Response_DataReaderView & operator = (const Sample_AddDiagnostics_Response_DataReaderView &);
            };
        }

    }

}

#endif
