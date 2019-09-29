#ifndef _H_3E1C938B5D65B9788913B1BD5B63640D_AddTwoInts_DCPS_H_
#define _H_3E1C938B5D65B9788913B1BD5B63640D_AddTwoInts_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AddTwoInts_.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace example_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class AddTwoInts_Request_TypeSupportInterface;

            typedef AddTwoInts_Request_TypeSupportInterface * AddTwoInts_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Request_TypeSupportInterface> AddTwoInts_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Request_TypeSupportInterface> AddTwoInts_Request_TypeSupportInterface_out;


            class AddTwoInts_Request_DataWriter;

            typedef AddTwoInts_Request_DataWriter * AddTwoInts_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Request_DataWriter> AddTwoInts_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Request_DataWriter> AddTwoInts_Request_DataWriter_out;


            class AddTwoInts_Request_DataReader;

            typedef AddTwoInts_Request_DataReader * AddTwoInts_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Request_DataReader> AddTwoInts_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Request_DataReader> AddTwoInts_Request_DataReader_out;


            class AddTwoInts_Request_DataReaderView;

            typedef AddTwoInts_Request_DataReaderView * AddTwoInts_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Request_DataReaderView> AddTwoInts_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Request_DataReaderView> AddTwoInts_Request_DataReaderView_out;

            struct AddTwoInts_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < AddTwoInts_Request_, struct AddTwoInts_Request_Seq_uniq_> AddTwoInts_Request_Seq;
            typedef DDS_DCPSSequence_var < AddTwoInts_Request_Seq> AddTwoInts_Request_Seq_var;
            typedef DDS_DCPSSequence_out < AddTwoInts_Request_Seq> AddTwoInts_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddTwoInts_Request_TypeSupportInterface_ptr _ptr_type;
                typedef AddTwoInts_Request_TypeSupportInterface_var _var_type;

                static AddTwoInts_Request_TypeSupportInterface_ptr _duplicate (AddTwoInts_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddTwoInts_Request_TypeSupportInterface () {};
                ~AddTwoInts_Request_TypeSupportInterface () {};
            private:
                AddTwoInts_Request_TypeSupportInterface (const AddTwoInts_Request_TypeSupportInterface &);
                AddTwoInts_Request_TypeSupportInterface & operator = (const AddTwoInts_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddTwoInts_Request_DataWriter_ptr _ptr_type;
                typedef AddTwoInts_Request_DataWriter_var _var_type;

                static AddTwoInts_Request_DataWriter_ptr _duplicate (AddTwoInts_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddTwoInts_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddTwoInts_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddTwoInts_Request_& instance_data) = 0;

            protected:
                AddTwoInts_Request_DataWriter () {};
                ~AddTwoInts_Request_DataWriter () {};
            private:
                AddTwoInts_Request_DataWriter (const AddTwoInts_Request_DataWriter &);
                AddTwoInts_Request_DataWriter & operator = (const AddTwoInts_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddTwoInts_Request_DataReader_ptr _ptr_type;
                typedef AddTwoInts_Request_DataReader_var _var_type;

                static AddTwoInts_Request_DataReader_ptr _duplicate (AddTwoInts_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddTwoInts_Request_& instance) = 0;

            protected:
                AddTwoInts_Request_DataReader () {};
                ~AddTwoInts_Request_DataReader () {};
            private:
                AddTwoInts_Request_DataReader (const AddTwoInts_Request_DataReader &);
                AddTwoInts_Request_DataReader & operator = (const AddTwoInts_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddTwoInts_Request_DataReaderView_ptr _ptr_type;
                typedef AddTwoInts_Request_DataReaderView_var _var_type;

                static AddTwoInts_Request_DataReaderView_ptr _duplicate (AddTwoInts_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddTwoInts_Request_& instance) = 0;

            protected:
                AddTwoInts_Request_DataReaderView () {};
                ~AddTwoInts_Request_DataReaderView () {};
            private:
                AddTwoInts_Request_DataReaderView (const AddTwoInts_Request_DataReaderView &);
                AddTwoInts_Request_DataReaderView & operator = (const AddTwoInts_Request_DataReaderView &);
            };
            class AddTwoInts_Response_TypeSupportInterface;

            typedef AddTwoInts_Response_TypeSupportInterface * AddTwoInts_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Response_TypeSupportInterface> AddTwoInts_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Response_TypeSupportInterface> AddTwoInts_Response_TypeSupportInterface_out;


            class AddTwoInts_Response_DataWriter;

            typedef AddTwoInts_Response_DataWriter * AddTwoInts_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Response_DataWriter> AddTwoInts_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Response_DataWriter> AddTwoInts_Response_DataWriter_out;


            class AddTwoInts_Response_DataReader;

            typedef AddTwoInts_Response_DataReader * AddTwoInts_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Response_DataReader> AddTwoInts_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Response_DataReader> AddTwoInts_Response_DataReader_out;


            class AddTwoInts_Response_DataReaderView;

            typedef AddTwoInts_Response_DataReaderView * AddTwoInts_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddTwoInts_Response_DataReaderView> AddTwoInts_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddTwoInts_Response_DataReaderView> AddTwoInts_Response_DataReaderView_out;

            struct AddTwoInts_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < AddTwoInts_Response_, struct AddTwoInts_Response_Seq_uniq_> AddTwoInts_Response_Seq;
            typedef DDS_DCPSSequence_var < AddTwoInts_Response_Seq> AddTwoInts_Response_Seq_var;
            typedef DDS_DCPSSequence_out < AddTwoInts_Response_Seq> AddTwoInts_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddTwoInts_Response_TypeSupportInterface_ptr _ptr_type;
                typedef AddTwoInts_Response_TypeSupportInterface_var _var_type;

                static AddTwoInts_Response_TypeSupportInterface_ptr _duplicate (AddTwoInts_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddTwoInts_Response_TypeSupportInterface () {};
                ~AddTwoInts_Response_TypeSupportInterface () {};
            private:
                AddTwoInts_Response_TypeSupportInterface (const AddTwoInts_Response_TypeSupportInterface &);
                AddTwoInts_Response_TypeSupportInterface & operator = (const AddTwoInts_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddTwoInts_Response_DataWriter_ptr _ptr_type;
                typedef AddTwoInts_Response_DataWriter_var _var_type;

                static AddTwoInts_Response_DataWriter_ptr _duplicate (AddTwoInts_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddTwoInts_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddTwoInts_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddTwoInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddTwoInts_Response_& instance_data) = 0;

            protected:
                AddTwoInts_Response_DataWriter () {};
                ~AddTwoInts_Response_DataWriter () {};
            private:
                AddTwoInts_Response_DataWriter (const AddTwoInts_Response_DataWriter &);
                AddTwoInts_Response_DataWriter & operator = (const AddTwoInts_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddTwoInts_Response_DataReader_ptr _ptr_type;
                typedef AddTwoInts_Response_DataReader_var _var_type;

                static AddTwoInts_Response_DataReader_ptr _duplicate (AddTwoInts_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddTwoInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddTwoInts_Response_& instance) = 0;

            protected:
                AddTwoInts_Response_DataReader () {};
                ~AddTwoInts_Response_DataReader () {};
            private:
                AddTwoInts_Response_DataReader (const AddTwoInts_Response_DataReader &);
                AddTwoInts_Response_DataReader & operator = (const AddTwoInts_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddTwoInts_Response_DataReaderView_ptr _ptr_type;
                typedef AddTwoInts_Response_DataReaderView_var _var_type;

                static AddTwoInts_Response_DataReaderView_ptr _duplicate (AddTwoInts_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddTwoInts_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddTwoInts_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddTwoInts_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddTwoInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddTwoInts_Response_& instance) = 0;

            protected:
                AddTwoInts_Response_DataReaderView () {};
                ~AddTwoInts_Response_DataReaderView () {};
            private:
                AddTwoInts_Response_DataReaderView (const AddTwoInts_Response_DataReaderView &);
                AddTwoInts_Response_DataReaderView & operator = (const AddTwoInts_Response_DataReaderView &);
            };
            class Sample_AddTwoInts_Request_TypeSupportInterface;

            typedef Sample_AddTwoInts_Request_TypeSupportInterface * Sample_AddTwoInts_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Request_TypeSupportInterface> Sample_AddTwoInts_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Request_TypeSupportInterface> Sample_AddTwoInts_Request_TypeSupportInterface_out;


            class Sample_AddTwoInts_Request_DataWriter;

            typedef Sample_AddTwoInts_Request_DataWriter * Sample_AddTwoInts_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Request_DataWriter> Sample_AddTwoInts_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Request_DataWriter> Sample_AddTwoInts_Request_DataWriter_out;


            class Sample_AddTwoInts_Request_DataReader;

            typedef Sample_AddTwoInts_Request_DataReader * Sample_AddTwoInts_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Request_DataReader> Sample_AddTwoInts_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Request_DataReader> Sample_AddTwoInts_Request_DataReader_out;


            class Sample_AddTwoInts_Request_DataReaderView;

            typedef Sample_AddTwoInts_Request_DataReaderView * Sample_AddTwoInts_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Request_DataReaderView> Sample_AddTwoInts_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Request_DataReaderView> Sample_AddTwoInts_Request_DataReaderView_out;

            struct Sample_AddTwoInts_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_AddTwoInts_Request_, struct Sample_AddTwoInts_Request_Seq_uniq_> Sample_AddTwoInts_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_AddTwoInts_Request_Seq> Sample_AddTwoInts_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_AddTwoInts_Request_Seq> Sample_AddTwoInts_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_AddTwoInts_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_AddTwoInts_Request_TypeSupportInterface_var _var_type;

                static Sample_AddTwoInts_Request_TypeSupportInterface_ptr _duplicate (Sample_AddTwoInts_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_AddTwoInts_Request_TypeSupportInterface () {};
                ~Sample_AddTwoInts_Request_TypeSupportInterface () {};
            private:
                Sample_AddTwoInts_Request_TypeSupportInterface (const Sample_AddTwoInts_Request_TypeSupportInterface &);
                Sample_AddTwoInts_Request_TypeSupportInterface & operator = (const Sample_AddTwoInts_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_AddTwoInts_Request_DataWriter_ptr _ptr_type;
                typedef Sample_AddTwoInts_Request_DataWriter_var _var_type;

                static Sample_AddTwoInts_Request_DataWriter_ptr _duplicate (Sample_AddTwoInts_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_AddTwoInts_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_AddTwoInts_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddTwoInts_Request_& instance_data) = 0;

            protected:
                Sample_AddTwoInts_Request_DataWriter () {};
                ~Sample_AddTwoInts_Request_DataWriter () {};
            private:
                Sample_AddTwoInts_Request_DataWriter (const Sample_AddTwoInts_Request_DataWriter &);
                Sample_AddTwoInts_Request_DataWriter & operator = (const Sample_AddTwoInts_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_AddTwoInts_Request_DataReader_ptr _ptr_type;
                typedef Sample_AddTwoInts_Request_DataReader_var _var_type;

                static Sample_AddTwoInts_Request_DataReader_ptr _duplicate (Sample_AddTwoInts_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddTwoInts_Request_& instance) = 0;

            protected:
                Sample_AddTwoInts_Request_DataReader () {};
                ~Sample_AddTwoInts_Request_DataReader () {};
            private:
                Sample_AddTwoInts_Request_DataReader (const Sample_AddTwoInts_Request_DataReader &);
                Sample_AddTwoInts_Request_DataReader & operator = (const Sample_AddTwoInts_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_AddTwoInts_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_AddTwoInts_Request_DataReaderView_var _var_type;

                static Sample_AddTwoInts_Request_DataReaderView_ptr _duplicate (Sample_AddTwoInts_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddTwoInts_Request_& instance) = 0;

            protected:
                Sample_AddTwoInts_Request_DataReaderView () {};
                ~Sample_AddTwoInts_Request_DataReaderView () {};
            private:
                Sample_AddTwoInts_Request_DataReaderView (const Sample_AddTwoInts_Request_DataReaderView &);
                Sample_AddTwoInts_Request_DataReaderView & operator = (const Sample_AddTwoInts_Request_DataReaderView &);
            };
            class Sample_AddTwoInts_Response_TypeSupportInterface;

            typedef Sample_AddTwoInts_Response_TypeSupportInterface * Sample_AddTwoInts_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Response_TypeSupportInterface> Sample_AddTwoInts_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Response_TypeSupportInterface> Sample_AddTwoInts_Response_TypeSupportInterface_out;


            class Sample_AddTwoInts_Response_DataWriter;

            typedef Sample_AddTwoInts_Response_DataWriter * Sample_AddTwoInts_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Response_DataWriter> Sample_AddTwoInts_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Response_DataWriter> Sample_AddTwoInts_Response_DataWriter_out;


            class Sample_AddTwoInts_Response_DataReader;

            typedef Sample_AddTwoInts_Response_DataReader * Sample_AddTwoInts_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Response_DataReader> Sample_AddTwoInts_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Response_DataReader> Sample_AddTwoInts_Response_DataReader_out;


            class Sample_AddTwoInts_Response_DataReaderView;

            typedef Sample_AddTwoInts_Response_DataReaderView * Sample_AddTwoInts_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddTwoInts_Response_DataReaderView> Sample_AddTwoInts_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_AddTwoInts_Response_DataReaderView> Sample_AddTwoInts_Response_DataReaderView_out;

            struct Sample_AddTwoInts_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_AddTwoInts_Response_, struct Sample_AddTwoInts_Response_Seq_uniq_> Sample_AddTwoInts_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_AddTwoInts_Response_Seq> Sample_AddTwoInts_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_AddTwoInts_Response_Seq> Sample_AddTwoInts_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_AddTwoInts_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_AddTwoInts_Response_TypeSupportInterface_var _var_type;

                static Sample_AddTwoInts_Response_TypeSupportInterface_ptr _duplicate (Sample_AddTwoInts_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_AddTwoInts_Response_TypeSupportInterface () {};
                ~Sample_AddTwoInts_Response_TypeSupportInterface () {};
            private:
                Sample_AddTwoInts_Response_TypeSupportInterface (const Sample_AddTwoInts_Response_TypeSupportInterface &);
                Sample_AddTwoInts_Response_TypeSupportInterface & operator = (const Sample_AddTwoInts_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_AddTwoInts_Response_DataWriter_ptr _ptr_type;
                typedef Sample_AddTwoInts_Response_DataWriter_var _var_type;

                static Sample_AddTwoInts_Response_DataWriter_ptr _duplicate (Sample_AddTwoInts_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_AddTwoInts_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_AddTwoInts_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_AddTwoInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_AddTwoInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddTwoInts_Response_& instance_data) = 0;

            protected:
                Sample_AddTwoInts_Response_DataWriter () {};
                ~Sample_AddTwoInts_Response_DataWriter () {};
            private:
                Sample_AddTwoInts_Response_DataWriter (const Sample_AddTwoInts_Response_DataWriter &);
                Sample_AddTwoInts_Response_DataWriter & operator = (const Sample_AddTwoInts_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_AddTwoInts_Response_DataReader_ptr _ptr_type;
                typedef Sample_AddTwoInts_Response_DataReader_var _var_type;

                static Sample_AddTwoInts_Response_DataReader_ptr _duplicate (Sample_AddTwoInts_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddTwoInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddTwoInts_Response_& instance) = 0;

            protected:
                Sample_AddTwoInts_Response_DataReader () {};
                ~Sample_AddTwoInts_Response_DataReader () {};
            private:
                Sample_AddTwoInts_Response_DataReader (const Sample_AddTwoInts_Response_DataReader &);
                Sample_AddTwoInts_Response_DataReader & operator = (const Sample_AddTwoInts_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_AddTwoInts_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_AddTwoInts_Response_DataReaderView_var _var_type;

                static Sample_AddTwoInts_Response_DataReaderView_ptr _duplicate (Sample_AddTwoInts_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddTwoInts_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddTwoInts_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddTwoInts_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddTwoInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddTwoInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddTwoInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddTwoInts_Response_& instance) = 0;

            protected:
                Sample_AddTwoInts_Response_DataReaderView () {};
                ~Sample_AddTwoInts_Response_DataReaderView () {};
            private:
                Sample_AddTwoInts_Response_DataReaderView (const Sample_AddTwoInts_Response_DataReaderView &);
                Sample_AddTwoInts_Response_DataReaderView & operator = (const Sample_AddTwoInts_Response_DataReaderView &);
            };
        }

    }

}

#endif
