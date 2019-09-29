#ifndef _H_2F26C42C00856A250CE39B527D40DEB4_SetMap_DCPS_H_
#define _H_2F26C42C00856A250CE39B527D40DEB4_SetMap_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetMap_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class SetMap_Request_TypeSupportInterface;

            typedef SetMap_Request_TypeSupportInterface * SetMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Request_TypeSupportInterface> SetMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetMap_Request_TypeSupportInterface> SetMap_Request_TypeSupportInterface_out;


            class SetMap_Request_DataWriter;

            typedef SetMap_Request_DataWriter * SetMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Request_DataWriter> SetMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetMap_Request_DataWriter> SetMap_Request_DataWriter_out;


            class SetMap_Request_DataReader;

            typedef SetMap_Request_DataReader * SetMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Request_DataReader> SetMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetMap_Request_DataReader> SetMap_Request_DataReader_out;


            class SetMap_Request_DataReaderView;

            typedef SetMap_Request_DataReaderView * SetMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Request_DataReaderView> SetMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetMap_Request_DataReaderView> SetMap_Request_DataReaderView_out;

            struct SetMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetMap_Request_, struct SetMap_Request_Seq_uniq_> SetMap_Request_Seq;
            typedef DDS_DCPSSequence_var < SetMap_Request_Seq> SetMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetMap_Request_Seq> SetMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetMap_Request_TypeSupportInterface_var _var_type;

                static SetMap_Request_TypeSupportInterface_ptr _duplicate (SetMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetMap_Request_TypeSupportInterface () {};
                ~SetMap_Request_TypeSupportInterface () {};
            private:
                SetMap_Request_TypeSupportInterface (const SetMap_Request_TypeSupportInterface &);
                SetMap_Request_TypeSupportInterface & operator = (const SetMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetMap_Request_DataWriter_ptr _ptr_type;
                typedef SetMap_Request_DataWriter_var _var_type;

                static SetMap_Request_DataWriter_ptr _duplicate (SetMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMap_Request_& instance_data) = 0;

            protected:
                SetMap_Request_DataWriter () {};
                ~SetMap_Request_DataWriter () {};
            private:
                SetMap_Request_DataWriter (const SetMap_Request_DataWriter &);
                SetMap_Request_DataWriter & operator = (const SetMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetMap_Request_DataReader_ptr _ptr_type;
                typedef SetMap_Request_DataReader_var _var_type;

                static SetMap_Request_DataReader_ptr _duplicate (SetMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMap_Request_& instance) = 0;

            protected:
                SetMap_Request_DataReader () {};
                ~SetMap_Request_DataReader () {};
            private:
                SetMap_Request_DataReader (const SetMap_Request_DataReader &);
                SetMap_Request_DataReader & operator = (const SetMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetMap_Request_DataReaderView_ptr _ptr_type;
                typedef SetMap_Request_DataReaderView_var _var_type;

                static SetMap_Request_DataReaderView_ptr _duplicate (SetMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMap_Request_& instance) = 0;

            protected:
                SetMap_Request_DataReaderView () {};
                ~SetMap_Request_DataReaderView () {};
            private:
                SetMap_Request_DataReaderView (const SetMap_Request_DataReaderView &);
                SetMap_Request_DataReaderView & operator = (const SetMap_Request_DataReaderView &);
            };
            class SetMap_Response_TypeSupportInterface;

            typedef SetMap_Response_TypeSupportInterface * SetMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Response_TypeSupportInterface> SetMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetMap_Response_TypeSupportInterface> SetMap_Response_TypeSupportInterface_out;


            class SetMap_Response_DataWriter;

            typedef SetMap_Response_DataWriter * SetMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Response_DataWriter> SetMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetMap_Response_DataWriter> SetMap_Response_DataWriter_out;


            class SetMap_Response_DataReader;

            typedef SetMap_Response_DataReader * SetMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Response_DataReader> SetMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetMap_Response_DataReader> SetMap_Response_DataReader_out;


            class SetMap_Response_DataReaderView;

            typedef SetMap_Response_DataReaderView * SetMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetMap_Response_DataReaderView> SetMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetMap_Response_DataReaderView> SetMap_Response_DataReaderView_out;

            struct SetMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SetMap_Response_, struct SetMap_Response_Seq_uniq_> SetMap_Response_Seq;
            typedef DDS_DCPSSequence_var < SetMap_Response_Seq> SetMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetMap_Response_Seq> SetMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetMap_Response_TypeSupportInterface_var _var_type;

                static SetMap_Response_TypeSupportInterface_ptr _duplicate (SetMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetMap_Response_TypeSupportInterface () {};
                ~SetMap_Response_TypeSupportInterface () {};
            private:
                SetMap_Response_TypeSupportInterface (const SetMap_Response_TypeSupportInterface &);
                SetMap_Response_TypeSupportInterface & operator = (const SetMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetMap_Response_DataWriter_ptr _ptr_type;
                typedef SetMap_Response_DataWriter_var _var_type;

                static SetMap_Response_DataWriter_ptr _duplicate (SetMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMap_Response_& instance_data) = 0;

            protected:
                SetMap_Response_DataWriter () {};
                ~SetMap_Response_DataWriter () {};
            private:
                SetMap_Response_DataWriter (const SetMap_Response_DataWriter &);
                SetMap_Response_DataWriter & operator = (const SetMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetMap_Response_DataReader_ptr _ptr_type;
                typedef SetMap_Response_DataReader_var _var_type;

                static SetMap_Response_DataReader_ptr _duplicate (SetMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMap_Response_& instance) = 0;

            protected:
                SetMap_Response_DataReader () {};
                ~SetMap_Response_DataReader () {};
            private:
                SetMap_Response_DataReader (const SetMap_Response_DataReader &);
                SetMap_Response_DataReader & operator = (const SetMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetMap_Response_DataReaderView_ptr _ptr_type;
                typedef SetMap_Response_DataReaderView_var _var_type;

                static SetMap_Response_DataReaderView_ptr _duplicate (SetMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMap_Response_& instance) = 0;

            protected:
                SetMap_Response_DataReaderView () {};
                ~SetMap_Response_DataReaderView () {};
            private:
                SetMap_Response_DataReaderView (const SetMap_Response_DataReaderView &);
                SetMap_Response_DataReaderView & operator = (const SetMap_Response_DataReaderView &);
            };
            class Sample_SetMap_Request_TypeSupportInterface;

            typedef Sample_SetMap_Request_TypeSupportInterface * Sample_SetMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Request_TypeSupportInterface> Sample_SetMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Request_TypeSupportInterface> Sample_SetMap_Request_TypeSupportInterface_out;


            class Sample_SetMap_Request_DataWriter;

            typedef Sample_SetMap_Request_DataWriter * Sample_SetMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Request_DataWriter> Sample_SetMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Request_DataWriter> Sample_SetMap_Request_DataWriter_out;


            class Sample_SetMap_Request_DataReader;

            typedef Sample_SetMap_Request_DataReader * Sample_SetMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Request_DataReader> Sample_SetMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Request_DataReader> Sample_SetMap_Request_DataReader_out;


            class Sample_SetMap_Request_DataReaderView;

            typedef Sample_SetMap_Request_DataReaderView * Sample_SetMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Request_DataReaderView> Sample_SetMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Request_DataReaderView> Sample_SetMap_Request_DataReaderView_out;

            struct Sample_SetMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetMap_Request_, struct Sample_SetMap_Request_Seq_uniq_> Sample_SetMap_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetMap_Request_Seq> Sample_SetMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetMap_Request_Seq> Sample_SetMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetMap_Request_TypeSupportInterface_var _var_type;

                static Sample_SetMap_Request_TypeSupportInterface_ptr _duplicate (Sample_SetMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetMap_Request_TypeSupportInterface () {};
                ~Sample_SetMap_Request_TypeSupportInterface () {};
            private:
                Sample_SetMap_Request_TypeSupportInterface (const Sample_SetMap_Request_TypeSupportInterface &);
                Sample_SetMap_Request_TypeSupportInterface & operator = (const Sample_SetMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetMap_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetMap_Request_DataWriter_var _var_type;

                static Sample_SetMap_Request_DataWriter_ptr _duplicate (Sample_SetMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMap_Request_& instance_data) = 0;

            protected:
                Sample_SetMap_Request_DataWriter () {};
                ~Sample_SetMap_Request_DataWriter () {};
            private:
                Sample_SetMap_Request_DataWriter (const Sample_SetMap_Request_DataWriter &);
                Sample_SetMap_Request_DataWriter & operator = (const Sample_SetMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetMap_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetMap_Request_DataReader_var _var_type;

                static Sample_SetMap_Request_DataReader_ptr _duplicate (Sample_SetMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMap_Request_& instance) = 0;

            protected:
                Sample_SetMap_Request_DataReader () {};
                ~Sample_SetMap_Request_DataReader () {};
            private:
                Sample_SetMap_Request_DataReader (const Sample_SetMap_Request_DataReader &);
                Sample_SetMap_Request_DataReader & operator = (const Sample_SetMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetMap_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetMap_Request_DataReaderView_var _var_type;

                static Sample_SetMap_Request_DataReaderView_ptr _duplicate (Sample_SetMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMap_Request_& instance) = 0;

            protected:
                Sample_SetMap_Request_DataReaderView () {};
                ~Sample_SetMap_Request_DataReaderView () {};
            private:
                Sample_SetMap_Request_DataReaderView (const Sample_SetMap_Request_DataReaderView &);
                Sample_SetMap_Request_DataReaderView & operator = (const Sample_SetMap_Request_DataReaderView &);
            };
            class Sample_SetMap_Response_TypeSupportInterface;

            typedef Sample_SetMap_Response_TypeSupportInterface * Sample_SetMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Response_TypeSupportInterface> Sample_SetMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Response_TypeSupportInterface> Sample_SetMap_Response_TypeSupportInterface_out;


            class Sample_SetMap_Response_DataWriter;

            typedef Sample_SetMap_Response_DataWriter * Sample_SetMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Response_DataWriter> Sample_SetMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Response_DataWriter> Sample_SetMap_Response_DataWriter_out;


            class Sample_SetMap_Response_DataReader;

            typedef Sample_SetMap_Response_DataReader * Sample_SetMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Response_DataReader> Sample_SetMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Response_DataReader> Sample_SetMap_Response_DataReader_out;


            class Sample_SetMap_Response_DataReaderView;

            typedef Sample_SetMap_Response_DataReaderView * Sample_SetMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMap_Response_DataReaderView> Sample_SetMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetMap_Response_DataReaderView> Sample_SetMap_Response_DataReaderView_out;

            struct Sample_SetMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SetMap_Response_, struct Sample_SetMap_Response_Seq_uniq_> Sample_SetMap_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetMap_Response_Seq> Sample_SetMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetMap_Response_Seq> Sample_SetMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetMap_Response_TypeSupportInterface_var _var_type;

                static Sample_SetMap_Response_TypeSupportInterface_ptr _duplicate (Sample_SetMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetMap_Response_TypeSupportInterface () {};
                ~Sample_SetMap_Response_TypeSupportInterface () {};
            private:
                Sample_SetMap_Response_TypeSupportInterface (const Sample_SetMap_Response_TypeSupportInterface &);
                Sample_SetMap_Response_TypeSupportInterface & operator = (const Sample_SetMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetMap_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetMap_Response_DataWriter_var _var_type;

                static Sample_SetMap_Response_DataWriter_ptr _duplicate (Sample_SetMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMap_Response_& instance_data) = 0;

            protected:
                Sample_SetMap_Response_DataWriter () {};
                ~Sample_SetMap_Response_DataWriter () {};
            private:
                Sample_SetMap_Response_DataWriter (const Sample_SetMap_Response_DataWriter &);
                Sample_SetMap_Response_DataWriter & operator = (const Sample_SetMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetMap_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetMap_Response_DataReader_var _var_type;

                static Sample_SetMap_Response_DataReader_ptr _duplicate (Sample_SetMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMap_Response_& instance) = 0;

            protected:
                Sample_SetMap_Response_DataReader () {};
                ~Sample_SetMap_Response_DataReader () {};
            private:
                Sample_SetMap_Response_DataReader (const Sample_SetMap_Response_DataReader &);
                Sample_SetMap_Response_DataReader & operator = (const Sample_SetMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetMap_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetMap_Response_DataReaderView_var _var_type;

                static Sample_SetMap_Response_DataReaderView_ptr _duplicate (Sample_SetMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMap_Response_& instance) = 0;

            protected:
                Sample_SetMap_Response_DataReaderView () {};
                ~Sample_SetMap_Response_DataReaderView () {};
            private:
                Sample_SetMap_Response_DataReaderView (const Sample_SetMap_Response_DataReaderView &);
                Sample_SetMap_Response_DataReaderView & operator = (const Sample_SetMap_Response_DataReaderView &);
            };
        }

    }

}

#endif
