#ifndef _H_120B83A90B7FD4FC7CB7F8D99153FF79_SetMapProjections_DCPS_H_
#define _H_120B83A90B7FD4FC7CB7F8D99153FF79_SetMapProjections_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetMapProjections_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class SetMapProjections_Request_TypeSupportInterface;

            typedef SetMapProjections_Request_TypeSupportInterface * SetMapProjections_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Request_TypeSupportInterface> SetMapProjections_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Request_TypeSupportInterface> SetMapProjections_Request_TypeSupportInterface_out;


            class SetMapProjections_Request_DataWriter;

            typedef SetMapProjections_Request_DataWriter * SetMapProjections_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Request_DataWriter> SetMapProjections_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Request_DataWriter> SetMapProjections_Request_DataWriter_out;


            class SetMapProjections_Request_DataReader;

            typedef SetMapProjections_Request_DataReader * SetMapProjections_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Request_DataReader> SetMapProjections_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Request_DataReader> SetMapProjections_Request_DataReader_out;


            class SetMapProjections_Request_DataReaderView;

            typedef SetMapProjections_Request_DataReaderView * SetMapProjections_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Request_DataReaderView> SetMapProjections_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Request_DataReaderView> SetMapProjections_Request_DataReaderView_out;

            struct SetMapProjections_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SetMapProjections_Request_, struct SetMapProjections_Request_Seq_uniq_> SetMapProjections_Request_Seq;
            typedef DDS_DCPSSequence_var < SetMapProjections_Request_Seq> SetMapProjections_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetMapProjections_Request_Seq> SetMapProjections_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetMapProjections_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetMapProjections_Request_TypeSupportInterface_var _var_type;

                static SetMapProjections_Request_TypeSupportInterface_ptr _duplicate (SetMapProjections_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetMapProjections_Request_TypeSupportInterface () {};
                ~SetMapProjections_Request_TypeSupportInterface () {};
            private:
                SetMapProjections_Request_TypeSupportInterface (const SetMapProjections_Request_TypeSupportInterface &);
                SetMapProjections_Request_TypeSupportInterface & operator = (const SetMapProjections_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetMapProjections_Request_DataWriter_ptr _ptr_type;
                typedef SetMapProjections_Request_DataWriter_var _var_type;

                static SetMapProjections_Request_DataWriter_ptr _duplicate (SetMapProjections_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetMapProjections_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetMapProjections_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetMapProjections_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMapProjections_Request_& instance_data) = 0;

            protected:
                SetMapProjections_Request_DataWriter () {};
                ~SetMapProjections_Request_DataWriter () {};
            private:
                SetMapProjections_Request_DataWriter (const SetMapProjections_Request_DataWriter &);
                SetMapProjections_Request_DataWriter & operator = (const SetMapProjections_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetMapProjections_Request_DataReader_ptr _ptr_type;
                typedef SetMapProjections_Request_DataReader_var _var_type;

                static SetMapProjections_Request_DataReader_ptr _duplicate (SetMapProjections_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMapProjections_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMapProjections_Request_& instance) = 0;

            protected:
                SetMapProjections_Request_DataReader () {};
                ~SetMapProjections_Request_DataReader () {};
            private:
                SetMapProjections_Request_DataReader (const SetMapProjections_Request_DataReader &);
                SetMapProjections_Request_DataReader & operator = (const SetMapProjections_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetMapProjections_Request_DataReaderView_ptr _ptr_type;
                typedef SetMapProjections_Request_DataReaderView_var _var_type;

                static SetMapProjections_Request_DataReaderView_ptr _duplicate (SetMapProjections_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMapProjections_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMapProjections_Request_& instance) = 0;

            protected:
                SetMapProjections_Request_DataReaderView () {};
                ~SetMapProjections_Request_DataReaderView () {};
            private:
                SetMapProjections_Request_DataReaderView (const SetMapProjections_Request_DataReaderView &);
                SetMapProjections_Request_DataReaderView & operator = (const SetMapProjections_Request_DataReaderView &);
            };
            class SetMapProjections_Response_TypeSupportInterface;

            typedef SetMapProjections_Response_TypeSupportInterface * SetMapProjections_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Response_TypeSupportInterface> SetMapProjections_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Response_TypeSupportInterface> SetMapProjections_Response_TypeSupportInterface_out;


            class SetMapProjections_Response_DataWriter;

            typedef SetMapProjections_Response_DataWriter * SetMapProjections_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Response_DataWriter> SetMapProjections_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Response_DataWriter> SetMapProjections_Response_DataWriter_out;


            class SetMapProjections_Response_DataReader;

            typedef SetMapProjections_Response_DataReader * SetMapProjections_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Response_DataReader> SetMapProjections_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Response_DataReader> SetMapProjections_Response_DataReader_out;


            class SetMapProjections_Response_DataReaderView;

            typedef SetMapProjections_Response_DataReaderView * SetMapProjections_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetMapProjections_Response_DataReaderView> SetMapProjections_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetMapProjections_Response_DataReaderView> SetMapProjections_Response_DataReaderView_out;

            struct SetMapProjections_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetMapProjections_Response_, struct SetMapProjections_Response_Seq_uniq_> SetMapProjections_Response_Seq;
            typedef DDS_DCPSSequence_var < SetMapProjections_Response_Seq> SetMapProjections_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetMapProjections_Response_Seq> SetMapProjections_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetMapProjections_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetMapProjections_Response_TypeSupportInterface_var _var_type;

                static SetMapProjections_Response_TypeSupportInterface_ptr _duplicate (SetMapProjections_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetMapProjections_Response_TypeSupportInterface () {};
                ~SetMapProjections_Response_TypeSupportInterface () {};
            private:
                SetMapProjections_Response_TypeSupportInterface (const SetMapProjections_Response_TypeSupportInterface &);
                SetMapProjections_Response_TypeSupportInterface & operator = (const SetMapProjections_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetMapProjections_Response_DataWriter_ptr _ptr_type;
                typedef SetMapProjections_Response_DataWriter_var _var_type;

                static SetMapProjections_Response_DataWriter_ptr _duplicate (SetMapProjections_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetMapProjections_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetMapProjections_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetMapProjections_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMapProjections_Response_& instance_data) = 0;

            protected:
                SetMapProjections_Response_DataWriter () {};
                ~SetMapProjections_Response_DataWriter () {};
            private:
                SetMapProjections_Response_DataWriter (const SetMapProjections_Response_DataWriter &);
                SetMapProjections_Response_DataWriter & operator = (const SetMapProjections_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetMapProjections_Response_DataReader_ptr _ptr_type;
                typedef SetMapProjections_Response_DataReader_var _var_type;

                static SetMapProjections_Response_DataReader_ptr _duplicate (SetMapProjections_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMapProjections_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMapProjections_Response_& instance) = 0;

            protected:
                SetMapProjections_Response_DataReader () {};
                ~SetMapProjections_Response_DataReader () {};
            private:
                SetMapProjections_Response_DataReader (const SetMapProjections_Response_DataReader &);
                SetMapProjections_Response_DataReader & operator = (const SetMapProjections_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetMapProjections_Response_DataReaderView_ptr _ptr_type;
                typedef SetMapProjections_Response_DataReaderView_var _var_type;

                static SetMapProjections_Response_DataReaderView_ptr _duplicate (SetMapProjections_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMapProjections_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMapProjections_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMapProjections_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMapProjections_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMapProjections_Response_& instance) = 0;

            protected:
                SetMapProjections_Response_DataReaderView () {};
                ~SetMapProjections_Response_DataReaderView () {};
            private:
                SetMapProjections_Response_DataReaderView (const SetMapProjections_Response_DataReaderView &);
                SetMapProjections_Response_DataReaderView & operator = (const SetMapProjections_Response_DataReaderView &);
            };
            class Sample_SetMapProjections_Request_TypeSupportInterface;

            typedef Sample_SetMapProjections_Request_TypeSupportInterface * Sample_SetMapProjections_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Request_TypeSupportInterface> Sample_SetMapProjections_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Request_TypeSupportInterface> Sample_SetMapProjections_Request_TypeSupportInterface_out;


            class Sample_SetMapProjections_Request_DataWriter;

            typedef Sample_SetMapProjections_Request_DataWriter * Sample_SetMapProjections_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Request_DataWriter> Sample_SetMapProjections_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Request_DataWriter> Sample_SetMapProjections_Request_DataWriter_out;


            class Sample_SetMapProjections_Request_DataReader;

            typedef Sample_SetMapProjections_Request_DataReader * Sample_SetMapProjections_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Request_DataReader> Sample_SetMapProjections_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Request_DataReader> Sample_SetMapProjections_Request_DataReader_out;


            class Sample_SetMapProjections_Request_DataReaderView;

            typedef Sample_SetMapProjections_Request_DataReaderView * Sample_SetMapProjections_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Request_DataReaderView> Sample_SetMapProjections_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Request_DataReaderView> Sample_SetMapProjections_Request_DataReaderView_out;

            struct Sample_SetMapProjections_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SetMapProjections_Request_, struct Sample_SetMapProjections_Request_Seq_uniq_> Sample_SetMapProjections_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetMapProjections_Request_Seq> Sample_SetMapProjections_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetMapProjections_Request_Seq> Sample_SetMapProjections_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetMapProjections_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetMapProjections_Request_TypeSupportInterface_var _var_type;

                static Sample_SetMapProjections_Request_TypeSupportInterface_ptr _duplicate (Sample_SetMapProjections_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetMapProjections_Request_TypeSupportInterface () {};
                ~Sample_SetMapProjections_Request_TypeSupportInterface () {};
            private:
                Sample_SetMapProjections_Request_TypeSupportInterface (const Sample_SetMapProjections_Request_TypeSupportInterface &);
                Sample_SetMapProjections_Request_TypeSupportInterface & operator = (const Sample_SetMapProjections_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetMapProjections_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetMapProjections_Request_DataWriter_var _var_type;

                static Sample_SetMapProjections_Request_DataWriter_ptr _duplicate (Sample_SetMapProjections_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetMapProjections_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetMapProjections_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetMapProjections_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetMapProjections_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMapProjections_Request_& instance_data) = 0;

            protected:
                Sample_SetMapProjections_Request_DataWriter () {};
                ~Sample_SetMapProjections_Request_DataWriter () {};
            private:
                Sample_SetMapProjections_Request_DataWriter (const Sample_SetMapProjections_Request_DataWriter &);
                Sample_SetMapProjections_Request_DataWriter & operator = (const Sample_SetMapProjections_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetMapProjections_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetMapProjections_Request_DataReader_var _var_type;

                static Sample_SetMapProjections_Request_DataReader_ptr _duplicate (Sample_SetMapProjections_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMapProjections_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMapProjections_Request_& instance) = 0;

            protected:
                Sample_SetMapProjections_Request_DataReader () {};
                ~Sample_SetMapProjections_Request_DataReader () {};
            private:
                Sample_SetMapProjections_Request_DataReader (const Sample_SetMapProjections_Request_DataReader &);
                Sample_SetMapProjections_Request_DataReader & operator = (const Sample_SetMapProjections_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetMapProjections_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetMapProjections_Request_DataReaderView_var _var_type;

                static Sample_SetMapProjections_Request_DataReaderView_ptr _duplicate (Sample_SetMapProjections_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMapProjections_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMapProjections_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMapProjections_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMapProjections_Request_& instance) = 0;

            protected:
                Sample_SetMapProjections_Request_DataReaderView () {};
                ~Sample_SetMapProjections_Request_DataReaderView () {};
            private:
                Sample_SetMapProjections_Request_DataReaderView (const Sample_SetMapProjections_Request_DataReaderView &);
                Sample_SetMapProjections_Request_DataReaderView & operator = (const Sample_SetMapProjections_Request_DataReaderView &);
            };
            class Sample_SetMapProjections_Response_TypeSupportInterface;

            typedef Sample_SetMapProjections_Response_TypeSupportInterface * Sample_SetMapProjections_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Response_TypeSupportInterface> Sample_SetMapProjections_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Response_TypeSupportInterface> Sample_SetMapProjections_Response_TypeSupportInterface_out;


            class Sample_SetMapProjections_Response_DataWriter;

            typedef Sample_SetMapProjections_Response_DataWriter * Sample_SetMapProjections_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Response_DataWriter> Sample_SetMapProjections_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Response_DataWriter> Sample_SetMapProjections_Response_DataWriter_out;


            class Sample_SetMapProjections_Response_DataReader;

            typedef Sample_SetMapProjections_Response_DataReader * Sample_SetMapProjections_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Response_DataReader> Sample_SetMapProjections_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Response_DataReader> Sample_SetMapProjections_Response_DataReader_out;


            class Sample_SetMapProjections_Response_DataReaderView;

            typedef Sample_SetMapProjections_Response_DataReaderView * Sample_SetMapProjections_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMapProjections_Response_DataReaderView> Sample_SetMapProjections_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetMapProjections_Response_DataReaderView> Sample_SetMapProjections_Response_DataReaderView_out;

            struct Sample_SetMapProjections_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetMapProjections_Response_, struct Sample_SetMapProjections_Response_Seq_uniq_> Sample_SetMapProjections_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetMapProjections_Response_Seq> Sample_SetMapProjections_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetMapProjections_Response_Seq> Sample_SetMapProjections_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetMapProjections_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetMapProjections_Response_TypeSupportInterface_var _var_type;

                static Sample_SetMapProjections_Response_TypeSupportInterface_ptr _duplicate (Sample_SetMapProjections_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetMapProjections_Response_TypeSupportInterface () {};
                ~Sample_SetMapProjections_Response_TypeSupportInterface () {};
            private:
                Sample_SetMapProjections_Response_TypeSupportInterface (const Sample_SetMapProjections_Response_TypeSupportInterface &);
                Sample_SetMapProjections_Response_TypeSupportInterface & operator = (const Sample_SetMapProjections_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetMapProjections_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetMapProjections_Response_DataWriter_var _var_type;

                static Sample_SetMapProjections_Response_DataWriter_ptr _duplicate (Sample_SetMapProjections_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetMapProjections_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetMapProjections_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetMapProjections_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetMapProjections_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMapProjections_Response_& instance_data) = 0;

            protected:
                Sample_SetMapProjections_Response_DataWriter () {};
                ~Sample_SetMapProjections_Response_DataWriter () {};
            private:
                Sample_SetMapProjections_Response_DataWriter (const Sample_SetMapProjections_Response_DataWriter &);
                Sample_SetMapProjections_Response_DataWriter & operator = (const Sample_SetMapProjections_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetMapProjections_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetMapProjections_Response_DataReader_var _var_type;

                static Sample_SetMapProjections_Response_DataReader_ptr _duplicate (Sample_SetMapProjections_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMapProjections_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMapProjections_Response_& instance) = 0;

            protected:
                Sample_SetMapProjections_Response_DataReader () {};
                ~Sample_SetMapProjections_Response_DataReader () {};
            private:
                Sample_SetMapProjections_Response_DataReader (const Sample_SetMapProjections_Response_DataReader &);
                Sample_SetMapProjections_Response_DataReader & operator = (const Sample_SetMapProjections_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetMapProjections_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetMapProjections_Response_DataReaderView_var _var_type;

                static Sample_SetMapProjections_Response_DataReaderView_ptr _duplicate (Sample_SetMapProjections_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMapProjections_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMapProjections_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMapProjections_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMapProjections_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMapProjections_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMapProjections_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMapProjections_Response_& instance) = 0;

            protected:
                Sample_SetMapProjections_Response_DataReaderView () {};
                ~Sample_SetMapProjections_Response_DataReaderView () {};
            private:
                Sample_SetMapProjections_Response_DataReaderView (const Sample_SetMapProjections_Response_DataReaderView &);
                Sample_SetMapProjections_Response_DataReaderView & operator = (const Sample_SetMapProjections_Response_DataReaderView &);
            };
        }

    }

}

#endif
