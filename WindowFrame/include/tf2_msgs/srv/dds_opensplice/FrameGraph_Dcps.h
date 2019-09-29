#ifndef _H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph_DCPS_H_
#define _H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "FrameGraph_.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace tf2_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class FrameGraph_Request_TypeSupportInterface;

            typedef FrameGraph_Request_TypeSupportInterface * FrameGraph_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Request_TypeSupportInterface> FrameGraph_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Request_TypeSupportInterface> FrameGraph_Request_TypeSupportInterface_out;


            class FrameGraph_Request_DataWriter;

            typedef FrameGraph_Request_DataWriter * FrameGraph_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Request_DataWriter> FrameGraph_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Request_DataWriter> FrameGraph_Request_DataWriter_out;


            class FrameGraph_Request_DataReader;

            typedef FrameGraph_Request_DataReader * FrameGraph_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Request_DataReader> FrameGraph_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Request_DataReader> FrameGraph_Request_DataReader_out;


            class FrameGraph_Request_DataReaderView;

            typedef FrameGraph_Request_DataReaderView * FrameGraph_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Request_DataReaderView> FrameGraph_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Request_DataReaderView> FrameGraph_Request_DataReaderView_out;

            struct FrameGraph_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < FrameGraph_Request_, struct FrameGraph_Request_Seq_uniq_> FrameGraph_Request_Seq;
            typedef DDS_DCPSSequence_var < FrameGraph_Request_Seq> FrameGraph_Request_Seq_var;
            typedef DDS_DCPSSequence_out < FrameGraph_Request_Seq> FrameGraph_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef FrameGraph_Request_TypeSupportInterface_ptr _ptr_type;
                typedef FrameGraph_Request_TypeSupportInterface_var _var_type;

                static FrameGraph_Request_TypeSupportInterface_ptr _duplicate (FrameGraph_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                FrameGraph_Request_TypeSupportInterface () {};
                ~FrameGraph_Request_TypeSupportInterface () {};
            private:
                FrameGraph_Request_TypeSupportInterface (const FrameGraph_Request_TypeSupportInterface &);
                FrameGraph_Request_TypeSupportInterface & operator = (const FrameGraph_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef FrameGraph_Request_DataWriter_ptr _ptr_type;
                typedef FrameGraph_Request_DataWriter_var _var_type;

                static FrameGraph_Request_DataWriter_ptr _duplicate (FrameGraph_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const FrameGraph_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const FrameGraph_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (FrameGraph_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FrameGraph_Request_& instance_data) = 0;

            protected:
                FrameGraph_Request_DataWriter () {};
                ~FrameGraph_Request_DataWriter () {};
            private:
                FrameGraph_Request_DataWriter (const FrameGraph_Request_DataWriter &);
                FrameGraph_Request_DataWriter & operator = (const FrameGraph_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef FrameGraph_Request_DataReader_ptr _ptr_type;
                typedef FrameGraph_Request_DataReader_var _var_type;

                static FrameGraph_Request_DataReader_ptr _duplicate (FrameGraph_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (FrameGraph_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FrameGraph_Request_& instance) = 0;

            protected:
                FrameGraph_Request_DataReader () {};
                ~FrameGraph_Request_DataReader () {};
            private:
                FrameGraph_Request_DataReader (const FrameGraph_Request_DataReader &);
                FrameGraph_Request_DataReader & operator = (const FrameGraph_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef FrameGraph_Request_DataReaderView_ptr _ptr_type;
                typedef FrameGraph_Request_DataReaderView_var _var_type;

                static FrameGraph_Request_DataReaderView_ptr _duplicate (FrameGraph_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (FrameGraph_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FrameGraph_Request_& instance) = 0;

            protected:
                FrameGraph_Request_DataReaderView () {};
                ~FrameGraph_Request_DataReaderView () {};
            private:
                FrameGraph_Request_DataReaderView (const FrameGraph_Request_DataReaderView &);
                FrameGraph_Request_DataReaderView & operator = (const FrameGraph_Request_DataReaderView &);
            };
            class FrameGraph_Response_TypeSupportInterface;

            typedef FrameGraph_Response_TypeSupportInterface * FrameGraph_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Response_TypeSupportInterface> FrameGraph_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Response_TypeSupportInterface> FrameGraph_Response_TypeSupportInterface_out;


            class FrameGraph_Response_DataWriter;

            typedef FrameGraph_Response_DataWriter * FrameGraph_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Response_DataWriter> FrameGraph_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Response_DataWriter> FrameGraph_Response_DataWriter_out;


            class FrameGraph_Response_DataReader;

            typedef FrameGraph_Response_DataReader * FrameGraph_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Response_DataReader> FrameGraph_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Response_DataReader> FrameGraph_Response_DataReader_out;


            class FrameGraph_Response_DataReaderView;

            typedef FrameGraph_Response_DataReaderView * FrameGraph_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < FrameGraph_Response_DataReaderView> FrameGraph_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < FrameGraph_Response_DataReaderView> FrameGraph_Response_DataReaderView_out;

            struct FrameGraph_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < FrameGraph_Response_, struct FrameGraph_Response_Seq_uniq_> FrameGraph_Response_Seq;
            typedef DDS_DCPSSequence_var < FrameGraph_Response_Seq> FrameGraph_Response_Seq_var;
            typedef DDS_DCPSSequence_out < FrameGraph_Response_Seq> FrameGraph_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef FrameGraph_Response_TypeSupportInterface_ptr _ptr_type;
                typedef FrameGraph_Response_TypeSupportInterface_var _var_type;

                static FrameGraph_Response_TypeSupportInterface_ptr _duplicate (FrameGraph_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                FrameGraph_Response_TypeSupportInterface () {};
                ~FrameGraph_Response_TypeSupportInterface () {};
            private:
                FrameGraph_Response_TypeSupportInterface (const FrameGraph_Response_TypeSupportInterface &);
                FrameGraph_Response_TypeSupportInterface & operator = (const FrameGraph_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef FrameGraph_Response_DataWriter_ptr _ptr_type;
                typedef FrameGraph_Response_DataWriter_var _var_type;

                static FrameGraph_Response_DataWriter_ptr _duplicate (FrameGraph_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const FrameGraph_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const FrameGraph_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (FrameGraph_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FrameGraph_Response_& instance_data) = 0;

            protected:
                FrameGraph_Response_DataWriter () {};
                ~FrameGraph_Response_DataWriter () {};
            private:
                FrameGraph_Response_DataWriter (const FrameGraph_Response_DataWriter &);
                FrameGraph_Response_DataWriter & operator = (const FrameGraph_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef FrameGraph_Response_DataReader_ptr _ptr_type;
                typedef FrameGraph_Response_DataReader_var _var_type;

                static FrameGraph_Response_DataReader_ptr _duplicate (FrameGraph_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (FrameGraph_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FrameGraph_Response_& instance) = 0;

            protected:
                FrameGraph_Response_DataReader () {};
                ~FrameGraph_Response_DataReader () {};
            private:
                FrameGraph_Response_DataReader (const FrameGraph_Response_DataReader &);
                FrameGraph_Response_DataReader & operator = (const FrameGraph_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef FrameGraph_Response_DataReaderView_ptr _ptr_type;
                typedef FrameGraph_Response_DataReaderView_var _var_type;

                static FrameGraph_Response_DataReaderView_ptr _duplicate (FrameGraph_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FrameGraph_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FrameGraph_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                FrameGraph_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (FrameGraph_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FrameGraph_Response_& instance) = 0;

            protected:
                FrameGraph_Response_DataReaderView () {};
                ~FrameGraph_Response_DataReaderView () {};
            private:
                FrameGraph_Response_DataReaderView (const FrameGraph_Response_DataReaderView &);
                FrameGraph_Response_DataReaderView & operator = (const FrameGraph_Response_DataReaderView &);
            };
            class Sample_FrameGraph_Request_TypeSupportInterface;

            typedef Sample_FrameGraph_Request_TypeSupportInterface * Sample_FrameGraph_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Request_TypeSupportInterface> Sample_FrameGraph_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Request_TypeSupportInterface> Sample_FrameGraph_Request_TypeSupportInterface_out;


            class Sample_FrameGraph_Request_DataWriter;

            typedef Sample_FrameGraph_Request_DataWriter * Sample_FrameGraph_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Request_DataWriter> Sample_FrameGraph_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Request_DataWriter> Sample_FrameGraph_Request_DataWriter_out;


            class Sample_FrameGraph_Request_DataReader;

            typedef Sample_FrameGraph_Request_DataReader * Sample_FrameGraph_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Request_DataReader> Sample_FrameGraph_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Request_DataReader> Sample_FrameGraph_Request_DataReader_out;


            class Sample_FrameGraph_Request_DataReaderView;

            typedef Sample_FrameGraph_Request_DataReaderView * Sample_FrameGraph_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Request_DataReaderView> Sample_FrameGraph_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Request_DataReaderView> Sample_FrameGraph_Request_DataReaderView_out;

            struct Sample_FrameGraph_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_FrameGraph_Request_, struct Sample_FrameGraph_Request_Seq_uniq_> Sample_FrameGraph_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_FrameGraph_Request_Seq> Sample_FrameGraph_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_FrameGraph_Request_Seq> Sample_FrameGraph_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_FrameGraph_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_FrameGraph_Request_TypeSupportInterface_var _var_type;

                static Sample_FrameGraph_Request_TypeSupportInterface_ptr _duplicate (Sample_FrameGraph_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_FrameGraph_Request_TypeSupportInterface () {};
                ~Sample_FrameGraph_Request_TypeSupportInterface () {};
            private:
                Sample_FrameGraph_Request_TypeSupportInterface (const Sample_FrameGraph_Request_TypeSupportInterface &);
                Sample_FrameGraph_Request_TypeSupportInterface & operator = (const Sample_FrameGraph_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_FrameGraph_Request_DataWriter_ptr _ptr_type;
                typedef Sample_FrameGraph_Request_DataWriter_var _var_type;

                static Sample_FrameGraph_Request_DataWriter_ptr _duplicate (Sample_FrameGraph_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_FrameGraph_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_FrameGraph_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_FrameGraph_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_FrameGraph_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_FrameGraph_Request_& instance_data) = 0;

            protected:
                Sample_FrameGraph_Request_DataWriter () {};
                ~Sample_FrameGraph_Request_DataWriter () {};
            private:
                Sample_FrameGraph_Request_DataWriter (const Sample_FrameGraph_Request_DataWriter &);
                Sample_FrameGraph_Request_DataWriter & operator = (const Sample_FrameGraph_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_FrameGraph_Request_DataReader_ptr _ptr_type;
                typedef Sample_FrameGraph_Request_DataReader_var _var_type;

                static Sample_FrameGraph_Request_DataReader_ptr _duplicate (Sample_FrameGraph_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_FrameGraph_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_FrameGraph_Request_& instance) = 0;

            protected:
                Sample_FrameGraph_Request_DataReader () {};
                ~Sample_FrameGraph_Request_DataReader () {};
            private:
                Sample_FrameGraph_Request_DataReader (const Sample_FrameGraph_Request_DataReader &);
                Sample_FrameGraph_Request_DataReader & operator = (const Sample_FrameGraph_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_FrameGraph_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_FrameGraph_Request_DataReaderView_var _var_type;

                static Sample_FrameGraph_Request_DataReaderView_ptr _duplicate (Sample_FrameGraph_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_FrameGraph_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_FrameGraph_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_FrameGraph_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_FrameGraph_Request_& instance) = 0;

            protected:
                Sample_FrameGraph_Request_DataReaderView () {};
                ~Sample_FrameGraph_Request_DataReaderView () {};
            private:
                Sample_FrameGraph_Request_DataReaderView (const Sample_FrameGraph_Request_DataReaderView &);
                Sample_FrameGraph_Request_DataReaderView & operator = (const Sample_FrameGraph_Request_DataReaderView &);
            };
            class Sample_FrameGraph_Response_TypeSupportInterface;

            typedef Sample_FrameGraph_Response_TypeSupportInterface * Sample_FrameGraph_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Response_TypeSupportInterface> Sample_FrameGraph_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Response_TypeSupportInterface> Sample_FrameGraph_Response_TypeSupportInterface_out;


            class Sample_FrameGraph_Response_DataWriter;

            typedef Sample_FrameGraph_Response_DataWriter * Sample_FrameGraph_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Response_DataWriter> Sample_FrameGraph_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Response_DataWriter> Sample_FrameGraph_Response_DataWriter_out;


            class Sample_FrameGraph_Response_DataReader;

            typedef Sample_FrameGraph_Response_DataReader * Sample_FrameGraph_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Response_DataReader> Sample_FrameGraph_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Response_DataReader> Sample_FrameGraph_Response_DataReader_out;


            class Sample_FrameGraph_Response_DataReaderView;

            typedef Sample_FrameGraph_Response_DataReaderView * Sample_FrameGraph_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_FrameGraph_Response_DataReaderView> Sample_FrameGraph_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_FrameGraph_Response_DataReaderView> Sample_FrameGraph_Response_DataReaderView_out;

            struct Sample_FrameGraph_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_FrameGraph_Response_, struct Sample_FrameGraph_Response_Seq_uniq_> Sample_FrameGraph_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_FrameGraph_Response_Seq> Sample_FrameGraph_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_FrameGraph_Response_Seq> Sample_FrameGraph_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_FrameGraph_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_FrameGraph_Response_TypeSupportInterface_var _var_type;

                static Sample_FrameGraph_Response_TypeSupportInterface_ptr _duplicate (Sample_FrameGraph_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_FrameGraph_Response_TypeSupportInterface () {};
                ~Sample_FrameGraph_Response_TypeSupportInterface () {};
            private:
                Sample_FrameGraph_Response_TypeSupportInterface (const Sample_FrameGraph_Response_TypeSupportInterface &);
                Sample_FrameGraph_Response_TypeSupportInterface & operator = (const Sample_FrameGraph_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_FrameGraph_Response_DataWriter_ptr _ptr_type;
                typedef Sample_FrameGraph_Response_DataWriter_var _var_type;

                static Sample_FrameGraph_Response_DataWriter_ptr _duplicate (Sample_FrameGraph_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_FrameGraph_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_FrameGraph_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_FrameGraph_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_FrameGraph_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_FrameGraph_Response_& instance_data) = 0;

            protected:
                Sample_FrameGraph_Response_DataWriter () {};
                ~Sample_FrameGraph_Response_DataWriter () {};
            private:
                Sample_FrameGraph_Response_DataWriter (const Sample_FrameGraph_Response_DataWriter &);
                Sample_FrameGraph_Response_DataWriter & operator = (const Sample_FrameGraph_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_FrameGraph_Response_DataReader_ptr _ptr_type;
                typedef Sample_FrameGraph_Response_DataReader_var _var_type;

                static Sample_FrameGraph_Response_DataReader_ptr _duplicate (Sample_FrameGraph_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_FrameGraph_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_FrameGraph_Response_& instance) = 0;

            protected:
                Sample_FrameGraph_Response_DataReader () {};
                ~Sample_FrameGraph_Response_DataReader () {};
            private:
                Sample_FrameGraph_Response_DataReader (const Sample_FrameGraph_Response_DataReader &);
                Sample_FrameGraph_Response_DataReader & operator = (const Sample_FrameGraph_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_FrameGraph_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_FrameGraph_Response_DataReaderView_var _var_type;

                static Sample_FrameGraph_Response_DataReaderView_ptr _duplicate (Sample_FrameGraph_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_FrameGraph_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_FrameGraph_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_FrameGraph_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_FrameGraph_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_FrameGraph_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_FrameGraph_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_FrameGraph_Response_& instance) = 0;

            protected:
                Sample_FrameGraph_Response_DataReaderView () {};
                ~Sample_FrameGraph_Response_DataReaderView () {};
            private:
                Sample_FrameGraph_Response_DataReaderView (const Sample_FrameGraph_Response_DataReaderView &);
                Sample_FrameGraph_Response_DataReaderView & operator = (const Sample_FrameGraph_Response_DataReaderView &);
            };
        }

    }

}

#endif
