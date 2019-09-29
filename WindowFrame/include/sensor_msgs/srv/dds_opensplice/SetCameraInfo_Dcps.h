#ifndef _H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo_DCPS_H_
#define _H_6465E0288B8D8B1B97EB1EE7D717F8F7_SetCameraInfo_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetCameraInfo_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class SetCameraInfo_Request_TypeSupportInterface;

            typedef SetCameraInfo_Request_TypeSupportInterface * SetCameraInfo_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Request_TypeSupportInterface> SetCameraInfo_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Request_TypeSupportInterface> SetCameraInfo_Request_TypeSupportInterface_out;


            class SetCameraInfo_Request_DataWriter;

            typedef SetCameraInfo_Request_DataWriter * SetCameraInfo_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Request_DataWriter> SetCameraInfo_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Request_DataWriter> SetCameraInfo_Request_DataWriter_out;


            class SetCameraInfo_Request_DataReader;

            typedef SetCameraInfo_Request_DataReader * SetCameraInfo_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Request_DataReader> SetCameraInfo_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Request_DataReader> SetCameraInfo_Request_DataReader_out;


            class SetCameraInfo_Request_DataReaderView;

            typedef SetCameraInfo_Request_DataReaderView * SetCameraInfo_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Request_DataReaderView> SetCameraInfo_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Request_DataReaderView> SetCameraInfo_Request_DataReaderView_out;

            struct SetCameraInfo_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetCameraInfo_Request_, struct SetCameraInfo_Request_Seq_uniq_> SetCameraInfo_Request_Seq;
            typedef DDS_DCPSSequence_var < SetCameraInfo_Request_Seq> SetCameraInfo_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetCameraInfo_Request_Seq> SetCameraInfo_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetCameraInfo_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetCameraInfo_Request_TypeSupportInterface_var _var_type;

                static SetCameraInfo_Request_TypeSupportInterface_ptr _duplicate (SetCameraInfo_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetCameraInfo_Request_TypeSupportInterface () {};
                ~SetCameraInfo_Request_TypeSupportInterface () {};
            private:
                SetCameraInfo_Request_TypeSupportInterface (const SetCameraInfo_Request_TypeSupportInterface &);
                SetCameraInfo_Request_TypeSupportInterface & operator = (const SetCameraInfo_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetCameraInfo_Request_DataWriter_ptr _ptr_type;
                typedef SetCameraInfo_Request_DataWriter_var _var_type;

                static SetCameraInfo_Request_DataWriter_ptr _duplicate (SetCameraInfo_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetCameraInfo_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetCameraInfo_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetCameraInfo_Request_& instance_data) = 0;

            protected:
                SetCameraInfo_Request_DataWriter () {};
                ~SetCameraInfo_Request_DataWriter () {};
            private:
                SetCameraInfo_Request_DataWriter (const SetCameraInfo_Request_DataWriter &);
                SetCameraInfo_Request_DataWriter & operator = (const SetCameraInfo_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetCameraInfo_Request_DataReader_ptr _ptr_type;
                typedef SetCameraInfo_Request_DataReader_var _var_type;

                static SetCameraInfo_Request_DataReader_ptr _duplicate (SetCameraInfo_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetCameraInfo_Request_& instance) = 0;

            protected:
                SetCameraInfo_Request_DataReader () {};
                ~SetCameraInfo_Request_DataReader () {};
            private:
                SetCameraInfo_Request_DataReader (const SetCameraInfo_Request_DataReader &);
                SetCameraInfo_Request_DataReader & operator = (const SetCameraInfo_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetCameraInfo_Request_DataReaderView_ptr _ptr_type;
                typedef SetCameraInfo_Request_DataReaderView_var _var_type;

                static SetCameraInfo_Request_DataReaderView_ptr _duplicate (SetCameraInfo_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetCameraInfo_Request_& instance) = 0;

            protected:
                SetCameraInfo_Request_DataReaderView () {};
                ~SetCameraInfo_Request_DataReaderView () {};
            private:
                SetCameraInfo_Request_DataReaderView (const SetCameraInfo_Request_DataReaderView &);
                SetCameraInfo_Request_DataReaderView & operator = (const SetCameraInfo_Request_DataReaderView &);
            };
            class SetCameraInfo_Response_TypeSupportInterface;

            typedef SetCameraInfo_Response_TypeSupportInterface * SetCameraInfo_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Response_TypeSupportInterface> SetCameraInfo_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Response_TypeSupportInterface> SetCameraInfo_Response_TypeSupportInterface_out;


            class SetCameraInfo_Response_DataWriter;

            typedef SetCameraInfo_Response_DataWriter * SetCameraInfo_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Response_DataWriter> SetCameraInfo_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Response_DataWriter> SetCameraInfo_Response_DataWriter_out;


            class SetCameraInfo_Response_DataReader;

            typedef SetCameraInfo_Response_DataReader * SetCameraInfo_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Response_DataReader> SetCameraInfo_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Response_DataReader> SetCameraInfo_Response_DataReader_out;


            class SetCameraInfo_Response_DataReaderView;

            typedef SetCameraInfo_Response_DataReaderView * SetCameraInfo_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetCameraInfo_Response_DataReaderView> SetCameraInfo_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetCameraInfo_Response_DataReaderView> SetCameraInfo_Response_DataReaderView_out;

            struct SetCameraInfo_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetCameraInfo_Response_, struct SetCameraInfo_Response_Seq_uniq_> SetCameraInfo_Response_Seq;
            typedef DDS_DCPSSequence_var < SetCameraInfo_Response_Seq> SetCameraInfo_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetCameraInfo_Response_Seq> SetCameraInfo_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetCameraInfo_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetCameraInfo_Response_TypeSupportInterface_var _var_type;

                static SetCameraInfo_Response_TypeSupportInterface_ptr _duplicate (SetCameraInfo_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetCameraInfo_Response_TypeSupportInterface () {};
                ~SetCameraInfo_Response_TypeSupportInterface () {};
            private:
                SetCameraInfo_Response_TypeSupportInterface (const SetCameraInfo_Response_TypeSupportInterface &);
                SetCameraInfo_Response_TypeSupportInterface & operator = (const SetCameraInfo_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetCameraInfo_Response_DataWriter_ptr _ptr_type;
                typedef SetCameraInfo_Response_DataWriter_var _var_type;

                static SetCameraInfo_Response_DataWriter_ptr _duplicate (SetCameraInfo_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetCameraInfo_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetCameraInfo_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetCameraInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetCameraInfo_Response_& instance_data) = 0;

            protected:
                SetCameraInfo_Response_DataWriter () {};
                ~SetCameraInfo_Response_DataWriter () {};
            private:
                SetCameraInfo_Response_DataWriter (const SetCameraInfo_Response_DataWriter &);
                SetCameraInfo_Response_DataWriter & operator = (const SetCameraInfo_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetCameraInfo_Response_DataReader_ptr _ptr_type;
                typedef SetCameraInfo_Response_DataReader_var _var_type;

                static SetCameraInfo_Response_DataReader_ptr _duplicate (SetCameraInfo_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetCameraInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetCameraInfo_Response_& instance) = 0;

            protected:
                SetCameraInfo_Response_DataReader () {};
                ~SetCameraInfo_Response_DataReader () {};
            private:
                SetCameraInfo_Response_DataReader (const SetCameraInfo_Response_DataReader &);
                SetCameraInfo_Response_DataReader & operator = (const SetCameraInfo_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetCameraInfo_Response_DataReaderView_ptr _ptr_type;
                typedef SetCameraInfo_Response_DataReaderView_var _var_type;

                static SetCameraInfo_Response_DataReaderView_ptr _duplicate (SetCameraInfo_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetCameraInfo_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetCameraInfo_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetCameraInfo_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetCameraInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetCameraInfo_Response_& instance) = 0;

            protected:
                SetCameraInfo_Response_DataReaderView () {};
                ~SetCameraInfo_Response_DataReaderView () {};
            private:
                SetCameraInfo_Response_DataReaderView (const SetCameraInfo_Response_DataReaderView &);
                SetCameraInfo_Response_DataReaderView & operator = (const SetCameraInfo_Response_DataReaderView &);
            };
            class Sample_SetCameraInfo_Request_TypeSupportInterface;

            typedef Sample_SetCameraInfo_Request_TypeSupportInterface * Sample_SetCameraInfo_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Request_TypeSupportInterface> Sample_SetCameraInfo_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Request_TypeSupportInterface> Sample_SetCameraInfo_Request_TypeSupportInterface_out;


            class Sample_SetCameraInfo_Request_DataWriter;

            typedef Sample_SetCameraInfo_Request_DataWriter * Sample_SetCameraInfo_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Request_DataWriter> Sample_SetCameraInfo_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Request_DataWriter> Sample_SetCameraInfo_Request_DataWriter_out;


            class Sample_SetCameraInfo_Request_DataReader;

            typedef Sample_SetCameraInfo_Request_DataReader * Sample_SetCameraInfo_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Request_DataReader> Sample_SetCameraInfo_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Request_DataReader> Sample_SetCameraInfo_Request_DataReader_out;


            class Sample_SetCameraInfo_Request_DataReaderView;

            typedef Sample_SetCameraInfo_Request_DataReaderView * Sample_SetCameraInfo_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Request_DataReaderView> Sample_SetCameraInfo_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Request_DataReaderView> Sample_SetCameraInfo_Request_DataReaderView_out;

            struct Sample_SetCameraInfo_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetCameraInfo_Request_, struct Sample_SetCameraInfo_Request_Seq_uniq_> Sample_SetCameraInfo_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetCameraInfo_Request_Seq> Sample_SetCameraInfo_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetCameraInfo_Request_Seq> Sample_SetCameraInfo_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetCameraInfo_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Request_TypeSupportInterface_var _var_type;

                static Sample_SetCameraInfo_Request_TypeSupportInterface_ptr _duplicate (Sample_SetCameraInfo_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetCameraInfo_Request_TypeSupportInterface () {};
                ~Sample_SetCameraInfo_Request_TypeSupportInterface () {};
            private:
                Sample_SetCameraInfo_Request_TypeSupportInterface (const Sample_SetCameraInfo_Request_TypeSupportInterface &);
                Sample_SetCameraInfo_Request_TypeSupportInterface & operator = (const Sample_SetCameraInfo_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetCameraInfo_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Request_DataWriter_var _var_type;

                static Sample_SetCameraInfo_Request_DataWriter_ptr _duplicate (Sample_SetCameraInfo_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetCameraInfo_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetCameraInfo_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetCameraInfo_Request_& instance_data) = 0;

            protected:
                Sample_SetCameraInfo_Request_DataWriter () {};
                ~Sample_SetCameraInfo_Request_DataWriter () {};
            private:
                Sample_SetCameraInfo_Request_DataWriter (const Sample_SetCameraInfo_Request_DataWriter &);
                Sample_SetCameraInfo_Request_DataWriter & operator = (const Sample_SetCameraInfo_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetCameraInfo_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Request_DataReader_var _var_type;

                static Sample_SetCameraInfo_Request_DataReader_ptr _duplicate (Sample_SetCameraInfo_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetCameraInfo_Request_& instance) = 0;

            protected:
                Sample_SetCameraInfo_Request_DataReader () {};
                ~Sample_SetCameraInfo_Request_DataReader () {};
            private:
                Sample_SetCameraInfo_Request_DataReader (const Sample_SetCameraInfo_Request_DataReader &);
                Sample_SetCameraInfo_Request_DataReader & operator = (const Sample_SetCameraInfo_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetCameraInfo_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Request_DataReaderView_var _var_type;

                static Sample_SetCameraInfo_Request_DataReaderView_ptr _duplicate (Sample_SetCameraInfo_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetCameraInfo_Request_& instance) = 0;

            protected:
                Sample_SetCameraInfo_Request_DataReaderView () {};
                ~Sample_SetCameraInfo_Request_DataReaderView () {};
            private:
                Sample_SetCameraInfo_Request_DataReaderView (const Sample_SetCameraInfo_Request_DataReaderView &);
                Sample_SetCameraInfo_Request_DataReaderView & operator = (const Sample_SetCameraInfo_Request_DataReaderView &);
            };
            class Sample_SetCameraInfo_Response_TypeSupportInterface;

            typedef Sample_SetCameraInfo_Response_TypeSupportInterface * Sample_SetCameraInfo_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Response_TypeSupportInterface> Sample_SetCameraInfo_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Response_TypeSupportInterface> Sample_SetCameraInfo_Response_TypeSupportInterface_out;


            class Sample_SetCameraInfo_Response_DataWriter;

            typedef Sample_SetCameraInfo_Response_DataWriter * Sample_SetCameraInfo_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Response_DataWriter> Sample_SetCameraInfo_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Response_DataWriter> Sample_SetCameraInfo_Response_DataWriter_out;


            class Sample_SetCameraInfo_Response_DataReader;

            typedef Sample_SetCameraInfo_Response_DataReader * Sample_SetCameraInfo_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Response_DataReader> Sample_SetCameraInfo_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Response_DataReader> Sample_SetCameraInfo_Response_DataReader_out;


            class Sample_SetCameraInfo_Response_DataReaderView;

            typedef Sample_SetCameraInfo_Response_DataReaderView * Sample_SetCameraInfo_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetCameraInfo_Response_DataReaderView> Sample_SetCameraInfo_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetCameraInfo_Response_DataReaderView> Sample_SetCameraInfo_Response_DataReaderView_out;

            struct Sample_SetCameraInfo_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetCameraInfo_Response_, struct Sample_SetCameraInfo_Response_Seq_uniq_> Sample_SetCameraInfo_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetCameraInfo_Response_Seq> Sample_SetCameraInfo_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetCameraInfo_Response_Seq> Sample_SetCameraInfo_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetCameraInfo_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Response_TypeSupportInterface_var _var_type;

                static Sample_SetCameraInfo_Response_TypeSupportInterface_ptr _duplicate (Sample_SetCameraInfo_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetCameraInfo_Response_TypeSupportInterface () {};
                ~Sample_SetCameraInfo_Response_TypeSupportInterface () {};
            private:
                Sample_SetCameraInfo_Response_TypeSupportInterface (const Sample_SetCameraInfo_Response_TypeSupportInterface &);
                Sample_SetCameraInfo_Response_TypeSupportInterface & operator = (const Sample_SetCameraInfo_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetCameraInfo_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Response_DataWriter_var _var_type;

                static Sample_SetCameraInfo_Response_DataWriter_ptr _duplicate (Sample_SetCameraInfo_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetCameraInfo_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetCameraInfo_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetCameraInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetCameraInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetCameraInfo_Response_& instance_data) = 0;

            protected:
                Sample_SetCameraInfo_Response_DataWriter () {};
                ~Sample_SetCameraInfo_Response_DataWriter () {};
            private:
                Sample_SetCameraInfo_Response_DataWriter (const Sample_SetCameraInfo_Response_DataWriter &);
                Sample_SetCameraInfo_Response_DataWriter & operator = (const Sample_SetCameraInfo_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetCameraInfo_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Response_DataReader_var _var_type;

                static Sample_SetCameraInfo_Response_DataReader_ptr _duplicate (Sample_SetCameraInfo_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetCameraInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetCameraInfo_Response_& instance) = 0;

            protected:
                Sample_SetCameraInfo_Response_DataReader () {};
                ~Sample_SetCameraInfo_Response_DataReader () {};
            private:
                Sample_SetCameraInfo_Response_DataReader (const Sample_SetCameraInfo_Response_DataReader &);
                Sample_SetCameraInfo_Response_DataReader & operator = (const Sample_SetCameraInfo_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Sample_SetCameraInfo_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetCameraInfo_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetCameraInfo_Response_DataReaderView_var _var_type;

                static Sample_SetCameraInfo_Response_DataReaderView_ptr _duplicate (Sample_SetCameraInfo_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetCameraInfo_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetCameraInfo_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetCameraInfo_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetCameraInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetCameraInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetCameraInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetCameraInfo_Response_& instance) = 0;

            protected:
                Sample_SetCameraInfo_Response_DataReaderView () {};
                ~Sample_SetCameraInfo_Response_DataReaderView () {};
            private:
                Sample_SetCameraInfo_Response_DataReaderView (const Sample_SetCameraInfo_Response_DataReaderView &);
                Sample_SetCameraInfo_Response_DataReaderView & operator = (const Sample_SetCameraInfo_Response_DataReaderView &);
            };
        }

    }

}

#endif
