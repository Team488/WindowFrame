#ifndef _H_1A82234E783515488AF550FDF75BE8C1_LookupTransform_DCPS_H_
#define _H_1A82234E783515488AF550FDF75BE8C1_LookupTransform_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "LookupTransform_.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace tf2_msgs
{
    namespace action
    {
        namespace dds_
        {
            class LookupTransform_Goal_TypeSupportInterface;

            typedef LookupTransform_Goal_TypeSupportInterface * LookupTransform_Goal_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Goal_TypeSupportInterface> LookupTransform_Goal_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Goal_TypeSupportInterface> LookupTransform_Goal_TypeSupportInterface_out;


            class LookupTransform_Goal_DataWriter;

            typedef LookupTransform_Goal_DataWriter * LookupTransform_Goal_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Goal_DataWriter> LookupTransform_Goal_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Goal_DataWriter> LookupTransform_Goal_DataWriter_out;


            class LookupTransform_Goal_DataReader;

            typedef LookupTransform_Goal_DataReader * LookupTransform_Goal_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Goal_DataReader> LookupTransform_Goal_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Goal_DataReader> LookupTransform_Goal_DataReader_out;


            class LookupTransform_Goal_DataReaderView;

            typedef LookupTransform_Goal_DataReaderView * LookupTransform_Goal_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Goal_DataReaderView> LookupTransform_Goal_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Goal_DataReaderView> LookupTransform_Goal_DataReaderView_out;

            struct LookupTransform_Goal_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LookupTransform_Goal_, struct LookupTransform_Goal_Seq_uniq_> LookupTransform_Goal_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_Goal_Seq> LookupTransform_Goal_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_Goal_Seq> LookupTransform_Goal_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Goal_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_Goal_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_Goal_TypeSupportInterface_var _var_type;

                static LookupTransform_Goal_TypeSupportInterface_ptr _duplicate (LookupTransform_Goal_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Goal_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Goal_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_Goal_TypeSupportInterface () {};
                ~LookupTransform_Goal_TypeSupportInterface () {};
            private:
                LookupTransform_Goal_TypeSupportInterface (const LookupTransform_Goal_TypeSupportInterface &);
                LookupTransform_Goal_TypeSupportInterface & operator = (const LookupTransform_Goal_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Goal_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_Goal_DataWriter_ptr _ptr_type;
                typedef LookupTransform_Goal_DataWriter_var _var_type;

                static LookupTransform_Goal_DataWriter_ptr _duplicate (LookupTransform_Goal_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Goal_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Goal_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_Goal_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_Goal_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Goal_& instance_data) = 0;

            protected:
                LookupTransform_Goal_DataWriter () {};
                ~LookupTransform_Goal_DataWriter () {};
            private:
                LookupTransform_Goal_DataWriter (const LookupTransform_Goal_DataWriter &);
                LookupTransform_Goal_DataWriter & operator = (const LookupTransform_Goal_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Goal_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_Goal_DataReader_ptr _ptr_type;
                typedef LookupTransform_Goal_DataReader_var _var_type;

                static LookupTransform_Goal_DataReader_ptr _duplicate (LookupTransform_Goal_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Goal_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Goal_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Goal_& instance) = 0;

            protected:
                LookupTransform_Goal_DataReader () {};
                ~LookupTransform_Goal_DataReader () {};
            private:
                LookupTransform_Goal_DataReader (const LookupTransform_Goal_DataReader &);
                LookupTransform_Goal_DataReader & operator = (const LookupTransform_Goal_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Goal_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_Goal_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_Goal_DataReaderView_var _var_type;

                static LookupTransform_Goal_DataReaderView_ptr _duplicate (LookupTransform_Goal_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Goal_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Goal_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Goal_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Goal_& instance) = 0;

            protected:
                LookupTransform_Goal_DataReaderView () {};
                ~LookupTransform_Goal_DataReaderView () {};
            private:
                LookupTransform_Goal_DataReaderView (const LookupTransform_Goal_DataReaderView &);
                LookupTransform_Goal_DataReaderView & operator = (const LookupTransform_Goal_DataReaderView &);
            };
            class LookupTransform_SendGoal_Request_TypeSupportInterface;

            typedef LookupTransform_SendGoal_Request_TypeSupportInterface * LookupTransform_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Request_TypeSupportInterface> LookupTransform_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Request_TypeSupportInterface> LookupTransform_SendGoal_Request_TypeSupportInterface_out;


            class LookupTransform_SendGoal_Request_DataWriter;

            typedef LookupTransform_SendGoal_Request_DataWriter * LookupTransform_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Request_DataWriter> LookupTransform_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Request_DataWriter> LookupTransform_SendGoal_Request_DataWriter_out;


            class LookupTransform_SendGoal_Request_DataReader;

            typedef LookupTransform_SendGoal_Request_DataReader * LookupTransform_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Request_DataReader> LookupTransform_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Request_DataReader> LookupTransform_SendGoal_Request_DataReader_out;


            class LookupTransform_SendGoal_Request_DataReaderView;

            typedef LookupTransform_SendGoal_Request_DataReaderView * LookupTransform_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Request_DataReaderView> LookupTransform_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Request_DataReaderView> LookupTransform_SendGoal_Request_DataReaderView_out;

            struct LookupTransform_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LookupTransform_SendGoal_Request_, struct LookupTransform_SendGoal_Request_Seq_uniq_> LookupTransform_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_SendGoal_Request_Seq> LookupTransform_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_SendGoal_Request_Seq> LookupTransform_SendGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Request_TypeSupportInterface_var _var_type;

                static LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _duplicate (LookupTransform_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_SendGoal_Request_TypeSupportInterface () {};
                ~LookupTransform_SendGoal_Request_TypeSupportInterface () {};
            private:
                LookupTransform_SendGoal_Request_TypeSupportInterface (const LookupTransform_SendGoal_Request_TypeSupportInterface &);
                LookupTransform_SendGoal_Request_TypeSupportInterface & operator = (const LookupTransform_SendGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Request_DataWriter_var _var_type;

                static LookupTransform_SendGoal_Request_DataWriter_ptr _duplicate (LookupTransform_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_SendGoal_Request_& instance_data) = 0;

            protected:
                LookupTransform_SendGoal_Request_DataWriter () {};
                ~LookupTransform_SendGoal_Request_DataWriter () {};
            private:
                LookupTransform_SendGoal_Request_DataWriter (const LookupTransform_SendGoal_Request_DataWriter &);
                LookupTransform_SendGoal_Request_DataWriter & operator = (const LookupTransform_SendGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Request_DataReader_var _var_type;

                static LookupTransform_SendGoal_Request_DataReader_ptr _duplicate (LookupTransform_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_SendGoal_Request_& instance) = 0;

            protected:
                LookupTransform_SendGoal_Request_DataReader () {};
                ~LookupTransform_SendGoal_Request_DataReader () {};
            private:
                LookupTransform_SendGoal_Request_DataReader (const LookupTransform_SendGoal_Request_DataReader &);
                LookupTransform_SendGoal_Request_DataReader & operator = (const LookupTransform_SendGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Request_DataReaderView_var _var_type;

                static LookupTransform_SendGoal_Request_DataReaderView_ptr _duplicate (LookupTransform_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_SendGoal_Request_& instance) = 0;

            protected:
                LookupTransform_SendGoal_Request_DataReaderView () {};
                ~LookupTransform_SendGoal_Request_DataReaderView () {};
            private:
                LookupTransform_SendGoal_Request_DataReaderView (const LookupTransform_SendGoal_Request_DataReaderView &);
                LookupTransform_SendGoal_Request_DataReaderView & operator = (const LookupTransform_SendGoal_Request_DataReaderView &);
            };
            class LookupTransform_SendGoal_Response_TypeSupportInterface;

            typedef LookupTransform_SendGoal_Response_TypeSupportInterface * LookupTransform_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Response_TypeSupportInterface> LookupTransform_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Response_TypeSupportInterface> LookupTransform_SendGoal_Response_TypeSupportInterface_out;


            class LookupTransform_SendGoal_Response_DataWriter;

            typedef LookupTransform_SendGoal_Response_DataWriter * LookupTransform_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Response_DataWriter> LookupTransform_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Response_DataWriter> LookupTransform_SendGoal_Response_DataWriter_out;


            class LookupTransform_SendGoal_Response_DataReader;

            typedef LookupTransform_SendGoal_Response_DataReader * LookupTransform_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Response_DataReader> LookupTransform_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Response_DataReader> LookupTransform_SendGoal_Response_DataReader_out;


            class LookupTransform_SendGoal_Response_DataReaderView;

            typedef LookupTransform_SendGoal_Response_DataReaderView * LookupTransform_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_SendGoal_Response_DataReaderView> LookupTransform_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_SendGoal_Response_DataReaderView> LookupTransform_SendGoal_Response_DataReaderView_out;

            struct LookupTransform_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < LookupTransform_SendGoal_Response_, struct LookupTransform_SendGoal_Response_Seq_uniq_> LookupTransform_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_SendGoal_Response_Seq> LookupTransform_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_SendGoal_Response_Seq> LookupTransform_SendGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Response_TypeSupportInterface_var _var_type;

                static LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _duplicate (LookupTransform_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_SendGoal_Response_TypeSupportInterface () {};
                ~LookupTransform_SendGoal_Response_TypeSupportInterface () {};
            private:
                LookupTransform_SendGoal_Response_TypeSupportInterface (const LookupTransform_SendGoal_Response_TypeSupportInterface &);
                LookupTransform_SendGoal_Response_TypeSupportInterface & operator = (const LookupTransform_SendGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Response_DataWriter_var _var_type;

                static LookupTransform_SendGoal_Response_DataWriter_ptr _duplicate (LookupTransform_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_SendGoal_Response_& instance_data) = 0;

            protected:
                LookupTransform_SendGoal_Response_DataWriter () {};
                ~LookupTransform_SendGoal_Response_DataWriter () {};
            private:
                LookupTransform_SendGoal_Response_DataWriter (const LookupTransform_SendGoal_Response_DataWriter &);
                LookupTransform_SendGoal_Response_DataWriter & operator = (const LookupTransform_SendGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Response_DataReader_var _var_type;

                static LookupTransform_SendGoal_Response_DataReader_ptr _duplicate (LookupTransform_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_SendGoal_Response_& instance) = 0;

            protected:
                LookupTransform_SendGoal_Response_DataReader () {};
                ~LookupTransform_SendGoal_Response_DataReader () {};
            private:
                LookupTransform_SendGoal_Response_DataReader (const LookupTransform_SendGoal_Response_DataReader &);
                LookupTransform_SendGoal_Response_DataReader & operator = (const LookupTransform_SendGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_SendGoal_Response_DataReaderView_var _var_type;

                static LookupTransform_SendGoal_Response_DataReaderView_ptr _duplicate (LookupTransform_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_SendGoal_Response_& instance) = 0;

            protected:
                LookupTransform_SendGoal_Response_DataReaderView () {};
                ~LookupTransform_SendGoal_Response_DataReaderView () {};
            private:
                LookupTransform_SendGoal_Response_DataReaderView (const LookupTransform_SendGoal_Response_DataReaderView &);
                LookupTransform_SendGoal_Response_DataReaderView & operator = (const LookupTransform_SendGoal_Response_DataReaderView &);
            };
            class Sample_LookupTransform_SendGoal_Request_TypeSupportInterface;

            typedef Sample_LookupTransform_SendGoal_Request_TypeSupportInterface * Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Request_TypeSupportInterface> Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Request_TypeSupportInterface> Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_out;


            class Sample_LookupTransform_SendGoal_Request_DataWriter;

            typedef Sample_LookupTransform_SendGoal_Request_DataWriter * Sample_LookupTransform_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Request_DataWriter> Sample_LookupTransform_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Request_DataWriter> Sample_LookupTransform_SendGoal_Request_DataWriter_out;


            class Sample_LookupTransform_SendGoal_Request_DataReader;

            typedef Sample_LookupTransform_SendGoal_Request_DataReader * Sample_LookupTransform_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Request_DataReader> Sample_LookupTransform_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Request_DataReader> Sample_LookupTransform_SendGoal_Request_DataReader_out;


            class Sample_LookupTransform_SendGoal_Request_DataReaderView;

            typedef Sample_LookupTransform_SendGoal_Request_DataReaderView * Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Request_DataReaderView> Sample_LookupTransform_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Request_DataReaderView> Sample_LookupTransform_SendGoal_Request_DataReaderView_out;

            struct Sample_LookupTransform_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_LookupTransform_SendGoal_Request_, struct Sample_LookupTransform_SendGoal_Request_Seq_uniq_> Sample_LookupTransform_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_LookupTransform_SendGoal_Request_Seq> Sample_LookupTransform_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_LookupTransform_SendGoal_Request_Seq> Sample_LookupTransform_SendGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_var _var_type;

                static Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _duplicate (Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_LookupTransform_SendGoal_Request_TypeSupportInterface () {};
                ~Sample_LookupTransform_SendGoal_Request_TypeSupportInterface () {};
            private:
                Sample_LookupTransform_SendGoal_Request_TypeSupportInterface (const Sample_LookupTransform_SendGoal_Request_TypeSupportInterface &);
                Sample_LookupTransform_SendGoal_Request_TypeSupportInterface & operator = (const Sample_LookupTransform_SendGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Request_DataWriter_var _var_type;

                static Sample_LookupTransform_SendGoal_Request_DataWriter_ptr _duplicate (Sample_LookupTransform_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_LookupTransform_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_LookupTransform_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_LookupTransform_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_SendGoal_Request_& instance_data) = 0;

            protected:
                Sample_LookupTransform_SendGoal_Request_DataWriter () {};
                ~Sample_LookupTransform_SendGoal_Request_DataWriter () {};
            private:
                Sample_LookupTransform_SendGoal_Request_DataWriter (const Sample_LookupTransform_SendGoal_Request_DataWriter &);
                Sample_LookupTransform_SendGoal_Request_DataWriter & operator = (const Sample_LookupTransform_SendGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Request_DataReader_var _var_type;

                static Sample_LookupTransform_SendGoal_Request_DataReader_ptr _duplicate (Sample_LookupTransform_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_SendGoal_Request_& instance) = 0;

            protected:
                Sample_LookupTransform_SendGoal_Request_DataReader () {};
                ~Sample_LookupTransform_SendGoal_Request_DataReader () {};
            private:
                Sample_LookupTransform_SendGoal_Request_DataReader (const Sample_LookupTransform_SendGoal_Request_DataReader &);
                Sample_LookupTransform_SendGoal_Request_DataReader & operator = (const Sample_LookupTransform_SendGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Request_DataReaderView_var _var_type;

                static Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr _duplicate (Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_SendGoal_Request_& instance) = 0;

            protected:
                Sample_LookupTransform_SendGoal_Request_DataReaderView () {};
                ~Sample_LookupTransform_SendGoal_Request_DataReaderView () {};
            private:
                Sample_LookupTransform_SendGoal_Request_DataReaderView (const Sample_LookupTransform_SendGoal_Request_DataReaderView &);
                Sample_LookupTransform_SendGoal_Request_DataReaderView & operator = (const Sample_LookupTransform_SendGoal_Request_DataReaderView &);
            };
            class Sample_LookupTransform_SendGoal_Response_TypeSupportInterface;

            typedef Sample_LookupTransform_SendGoal_Response_TypeSupportInterface * Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Response_TypeSupportInterface> Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Response_TypeSupportInterface> Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_out;


            class Sample_LookupTransform_SendGoal_Response_DataWriter;

            typedef Sample_LookupTransform_SendGoal_Response_DataWriter * Sample_LookupTransform_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Response_DataWriter> Sample_LookupTransform_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Response_DataWriter> Sample_LookupTransform_SendGoal_Response_DataWriter_out;


            class Sample_LookupTransform_SendGoal_Response_DataReader;

            typedef Sample_LookupTransform_SendGoal_Response_DataReader * Sample_LookupTransform_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Response_DataReader> Sample_LookupTransform_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Response_DataReader> Sample_LookupTransform_SendGoal_Response_DataReader_out;


            class Sample_LookupTransform_SendGoal_Response_DataReaderView;

            typedef Sample_LookupTransform_SendGoal_Response_DataReaderView * Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_SendGoal_Response_DataReaderView> Sample_LookupTransform_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_SendGoal_Response_DataReaderView> Sample_LookupTransform_SendGoal_Response_DataReaderView_out;

            struct Sample_LookupTransform_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_LookupTransform_SendGoal_Response_, struct Sample_LookupTransform_SendGoal_Response_Seq_uniq_> Sample_LookupTransform_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_LookupTransform_SendGoal_Response_Seq> Sample_LookupTransform_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_LookupTransform_SendGoal_Response_Seq> Sample_LookupTransform_SendGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_var _var_type;

                static Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _duplicate (Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_LookupTransform_SendGoal_Response_TypeSupportInterface () {};
                ~Sample_LookupTransform_SendGoal_Response_TypeSupportInterface () {};
            private:
                Sample_LookupTransform_SendGoal_Response_TypeSupportInterface (const Sample_LookupTransform_SendGoal_Response_TypeSupportInterface &);
                Sample_LookupTransform_SendGoal_Response_TypeSupportInterface & operator = (const Sample_LookupTransform_SendGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Response_DataWriter_var _var_type;

                static Sample_LookupTransform_SendGoal_Response_DataWriter_ptr _duplicate (Sample_LookupTransform_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_LookupTransform_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_LookupTransform_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_LookupTransform_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_SendGoal_Response_& instance_data) = 0;

            protected:
                Sample_LookupTransform_SendGoal_Response_DataWriter () {};
                ~Sample_LookupTransform_SendGoal_Response_DataWriter () {};
            private:
                Sample_LookupTransform_SendGoal_Response_DataWriter (const Sample_LookupTransform_SendGoal_Response_DataWriter &);
                Sample_LookupTransform_SendGoal_Response_DataWriter & operator = (const Sample_LookupTransform_SendGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Response_DataReader_var _var_type;

                static Sample_LookupTransform_SendGoal_Response_DataReader_ptr _duplicate (Sample_LookupTransform_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_SendGoal_Response_& instance) = 0;

            protected:
                Sample_LookupTransform_SendGoal_Response_DataReader () {};
                ~Sample_LookupTransform_SendGoal_Response_DataReader () {};
            private:
                Sample_LookupTransform_SendGoal_Response_DataReader (const Sample_LookupTransform_SendGoal_Response_DataReader &);
                Sample_LookupTransform_SendGoal_Response_DataReader & operator = (const Sample_LookupTransform_SendGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_LookupTransform_SendGoal_Response_DataReaderView_var _var_type;

                static Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr _duplicate (Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_SendGoal_Response_& instance) = 0;

            protected:
                Sample_LookupTransform_SendGoal_Response_DataReaderView () {};
                ~Sample_LookupTransform_SendGoal_Response_DataReaderView () {};
            private:
                Sample_LookupTransform_SendGoal_Response_DataReaderView (const Sample_LookupTransform_SendGoal_Response_DataReaderView &);
                Sample_LookupTransform_SendGoal_Response_DataReaderView & operator = (const Sample_LookupTransform_SendGoal_Response_DataReaderView &);
            };
            class LookupTransform_Result_TypeSupportInterface;

            typedef LookupTransform_Result_TypeSupportInterface * LookupTransform_Result_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Result_TypeSupportInterface> LookupTransform_Result_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Result_TypeSupportInterface> LookupTransform_Result_TypeSupportInterface_out;


            class LookupTransform_Result_DataWriter;

            typedef LookupTransform_Result_DataWriter * LookupTransform_Result_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Result_DataWriter> LookupTransform_Result_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Result_DataWriter> LookupTransform_Result_DataWriter_out;


            class LookupTransform_Result_DataReader;

            typedef LookupTransform_Result_DataReader * LookupTransform_Result_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Result_DataReader> LookupTransform_Result_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Result_DataReader> LookupTransform_Result_DataReader_out;


            class LookupTransform_Result_DataReaderView;

            typedef LookupTransform_Result_DataReaderView * LookupTransform_Result_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Result_DataReaderView> LookupTransform_Result_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Result_DataReaderView> LookupTransform_Result_DataReaderView_out;

            struct LookupTransform_Result_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LookupTransform_Result_, struct LookupTransform_Result_Seq_uniq_> LookupTransform_Result_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_Result_Seq> LookupTransform_Result_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_Result_Seq> LookupTransform_Result_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Result_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_Result_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_Result_TypeSupportInterface_var _var_type;

                static LookupTransform_Result_TypeSupportInterface_ptr _duplicate (LookupTransform_Result_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Result_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Result_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_Result_TypeSupportInterface () {};
                ~LookupTransform_Result_TypeSupportInterface () {};
            private:
                LookupTransform_Result_TypeSupportInterface (const LookupTransform_Result_TypeSupportInterface &);
                LookupTransform_Result_TypeSupportInterface & operator = (const LookupTransform_Result_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Result_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_Result_DataWriter_ptr _ptr_type;
                typedef LookupTransform_Result_DataWriter_var _var_type;

                static LookupTransform_Result_DataWriter_ptr _duplicate (LookupTransform_Result_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Result_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Result_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_Result_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_Result_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Result_& instance_data) = 0;

            protected:
                LookupTransform_Result_DataWriter () {};
                ~LookupTransform_Result_DataWriter () {};
            private:
                LookupTransform_Result_DataWriter (const LookupTransform_Result_DataWriter &);
                LookupTransform_Result_DataWriter & operator = (const LookupTransform_Result_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Result_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_Result_DataReader_ptr _ptr_type;
                typedef LookupTransform_Result_DataReader_var _var_type;

                static LookupTransform_Result_DataReader_ptr _duplicate (LookupTransform_Result_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Result_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Result_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Result_& instance) = 0;

            protected:
                LookupTransform_Result_DataReader () {};
                ~LookupTransform_Result_DataReader () {};
            private:
                LookupTransform_Result_DataReader (const LookupTransform_Result_DataReader &);
                LookupTransform_Result_DataReader & operator = (const LookupTransform_Result_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Result_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_Result_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_Result_DataReaderView_var _var_type;

                static LookupTransform_Result_DataReaderView_ptr _duplicate (LookupTransform_Result_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Result_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Result_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Result_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Result_& instance) = 0;

            protected:
                LookupTransform_Result_DataReaderView () {};
                ~LookupTransform_Result_DataReaderView () {};
            private:
                LookupTransform_Result_DataReaderView (const LookupTransform_Result_DataReaderView &);
                LookupTransform_Result_DataReaderView & operator = (const LookupTransform_Result_DataReaderView &);
            };
            class LookupTransform_GetResult_Request_TypeSupportInterface;

            typedef LookupTransform_GetResult_Request_TypeSupportInterface * LookupTransform_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Request_TypeSupportInterface> LookupTransform_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Request_TypeSupportInterface> LookupTransform_GetResult_Request_TypeSupportInterface_out;


            class LookupTransform_GetResult_Request_DataWriter;

            typedef LookupTransform_GetResult_Request_DataWriter * LookupTransform_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Request_DataWriter> LookupTransform_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Request_DataWriter> LookupTransform_GetResult_Request_DataWriter_out;


            class LookupTransform_GetResult_Request_DataReader;

            typedef LookupTransform_GetResult_Request_DataReader * LookupTransform_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Request_DataReader> LookupTransform_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Request_DataReader> LookupTransform_GetResult_Request_DataReader_out;


            class LookupTransform_GetResult_Request_DataReaderView;

            typedef LookupTransform_GetResult_Request_DataReaderView * LookupTransform_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Request_DataReaderView> LookupTransform_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Request_DataReaderView> LookupTransform_GetResult_Request_DataReaderView_out;

            struct LookupTransform_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < LookupTransform_GetResult_Request_, struct LookupTransform_GetResult_Request_Seq_uniq_> LookupTransform_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_GetResult_Request_Seq> LookupTransform_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_GetResult_Request_Seq> LookupTransform_GetResult_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_GetResult_Request_TypeSupportInterface_var _var_type;

                static LookupTransform_GetResult_Request_TypeSupportInterface_ptr _duplicate (LookupTransform_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_GetResult_Request_TypeSupportInterface () {};
                ~LookupTransform_GetResult_Request_TypeSupportInterface () {};
            private:
                LookupTransform_GetResult_Request_TypeSupportInterface (const LookupTransform_GetResult_Request_TypeSupportInterface &);
                LookupTransform_GetResult_Request_TypeSupportInterface & operator = (const LookupTransform_GetResult_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef LookupTransform_GetResult_Request_DataWriter_var _var_type;

                static LookupTransform_GetResult_Request_DataWriter_ptr _duplicate (LookupTransform_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_GetResult_Request_& instance_data) = 0;

            protected:
                LookupTransform_GetResult_Request_DataWriter () {};
                ~LookupTransform_GetResult_Request_DataWriter () {};
            private:
                LookupTransform_GetResult_Request_DataWriter (const LookupTransform_GetResult_Request_DataWriter &);
                LookupTransform_GetResult_Request_DataWriter & operator = (const LookupTransform_GetResult_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_GetResult_Request_DataReader_ptr _ptr_type;
                typedef LookupTransform_GetResult_Request_DataReader_var _var_type;

                static LookupTransform_GetResult_Request_DataReader_ptr _duplicate (LookupTransform_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_GetResult_Request_& instance) = 0;

            protected:
                LookupTransform_GetResult_Request_DataReader () {};
                ~LookupTransform_GetResult_Request_DataReader () {};
            private:
                LookupTransform_GetResult_Request_DataReader (const LookupTransform_GetResult_Request_DataReader &);
                LookupTransform_GetResult_Request_DataReader & operator = (const LookupTransform_GetResult_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_GetResult_Request_DataReaderView_var _var_type;

                static LookupTransform_GetResult_Request_DataReaderView_ptr _duplicate (LookupTransform_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_GetResult_Request_& instance) = 0;

            protected:
                LookupTransform_GetResult_Request_DataReaderView () {};
                ~LookupTransform_GetResult_Request_DataReaderView () {};
            private:
                LookupTransform_GetResult_Request_DataReaderView (const LookupTransform_GetResult_Request_DataReaderView &);
                LookupTransform_GetResult_Request_DataReaderView & operator = (const LookupTransform_GetResult_Request_DataReaderView &);
            };
            class LookupTransform_GetResult_Response_TypeSupportInterface;

            typedef LookupTransform_GetResult_Response_TypeSupportInterface * LookupTransform_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Response_TypeSupportInterface> LookupTransform_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Response_TypeSupportInterface> LookupTransform_GetResult_Response_TypeSupportInterface_out;


            class LookupTransform_GetResult_Response_DataWriter;

            typedef LookupTransform_GetResult_Response_DataWriter * LookupTransform_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Response_DataWriter> LookupTransform_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Response_DataWriter> LookupTransform_GetResult_Response_DataWriter_out;


            class LookupTransform_GetResult_Response_DataReader;

            typedef LookupTransform_GetResult_Response_DataReader * LookupTransform_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Response_DataReader> LookupTransform_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Response_DataReader> LookupTransform_GetResult_Response_DataReader_out;


            class LookupTransform_GetResult_Response_DataReaderView;

            typedef LookupTransform_GetResult_Response_DataReaderView * LookupTransform_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_GetResult_Response_DataReaderView> LookupTransform_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_GetResult_Response_DataReaderView> LookupTransform_GetResult_Response_DataReaderView_out;

            struct LookupTransform_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LookupTransform_GetResult_Response_, struct LookupTransform_GetResult_Response_Seq_uniq_> LookupTransform_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_GetResult_Response_Seq> LookupTransform_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_GetResult_Response_Seq> LookupTransform_GetResult_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_GetResult_Response_TypeSupportInterface_var _var_type;

                static LookupTransform_GetResult_Response_TypeSupportInterface_ptr _duplicate (LookupTransform_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_GetResult_Response_TypeSupportInterface () {};
                ~LookupTransform_GetResult_Response_TypeSupportInterface () {};
            private:
                LookupTransform_GetResult_Response_TypeSupportInterface (const LookupTransform_GetResult_Response_TypeSupportInterface &);
                LookupTransform_GetResult_Response_TypeSupportInterface & operator = (const LookupTransform_GetResult_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef LookupTransform_GetResult_Response_DataWriter_var _var_type;

                static LookupTransform_GetResult_Response_DataWriter_ptr _duplicate (LookupTransform_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_GetResult_Response_& instance_data) = 0;

            protected:
                LookupTransform_GetResult_Response_DataWriter () {};
                ~LookupTransform_GetResult_Response_DataWriter () {};
            private:
                LookupTransform_GetResult_Response_DataWriter (const LookupTransform_GetResult_Response_DataWriter &);
                LookupTransform_GetResult_Response_DataWriter & operator = (const LookupTransform_GetResult_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_GetResult_Response_DataReader_ptr _ptr_type;
                typedef LookupTransform_GetResult_Response_DataReader_var _var_type;

                static LookupTransform_GetResult_Response_DataReader_ptr _duplicate (LookupTransform_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_GetResult_Response_& instance) = 0;

            protected:
                LookupTransform_GetResult_Response_DataReader () {};
                ~LookupTransform_GetResult_Response_DataReader () {};
            private:
                LookupTransform_GetResult_Response_DataReader (const LookupTransform_GetResult_Response_DataReader &);
                LookupTransform_GetResult_Response_DataReader & operator = (const LookupTransform_GetResult_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_GetResult_Response_DataReaderView_var _var_type;

                static LookupTransform_GetResult_Response_DataReaderView_ptr _duplicate (LookupTransform_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_GetResult_Response_& instance) = 0;

            protected:
                LookupTransform_GetResult_Response_DataReaderView () {};
                ~LookupTransform_GetResult_Response_DataReaderView () {};
            private:
                LookupTransform_GetResult_Response_DataReaderView (const LookupTransform_GetResult_Response_DataReaderView &);
                LookupTransform_GetResult_Response_DataReaderView & operator = (const LookupTransform_GetResult_Response_DataReaderView &);
            };
            class Sample_LookupTransform_GetResult_Request_TypeSupportInterface;

            typedef Sample_LookupTransform_GetResult_Request_TypeSupportInterface * Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Request_TypeSupportInterface> Sample_LookupTransform_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Request_TypeSupportInterface> Sample_LookupTransform_GetResult_Request_TypeSupportInterface_out;


            class Sample_LookupTransform_GetResult_Request_DataWriter;

            typedef Sample_LookupTransform_GetResult_Request_DataWriter * Sample_LookupTransform_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Request_DataWriter> Sample_LookupTransform_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Request_DataWriter> Sample_LookupTransform_GetResult_Request_DataWriter_out;


            class Sample_LookupTransform_GetResult_Request_DataReader;

            typedef Sample_LookupTransform_GetResult_Request_DataReader * Sample_LookupTransform_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Request_DataReader> Sample_LookupTransform_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Request_DataReader> Sample_LookupTransform_GetResult_Request_DataReader_out;


            class Sample_LookupTransform_GetResult_Request_DataReaderView;

            typedef Sample_LookupTransform_GetResult_Request_DataReaderView * Sample_LookupTransform_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Request_DataReaderView> Sample_LookupTransform_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Request_DataReaderView> Sample_LookupTransform_GetResult_Request_DataReaderView_out;

            struct Sample_LookupTransform_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_LookupTransform_GetResult_Request_, struct Sample_LookupTransform_GetResult_Request_Seq_uniq_> Sample_LookupTransform_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_LookupTransform_GetResult_Request_Seq> Sample_LookupTransform_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_LookupTransform_GetResult_Request_Seq> Sample_LookupTransform_GetResult_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Request_TypeSupportInterface_var _var_type;

                static Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr _duplicate (Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_LookupTransform_GetResult_Request_TypeSupportInterface () {};
                ~Sample_LookupTransform_GetResult_Request_TypeSupportInterface () {};
            private:
                Sample_LookupTransform_GetResult_Request_TypeSupportInterface (const Sample_LookupTransform_GetResult_Request_TypeSupportInterface &);
                Sample_LookupTransform_GetResult_Request_TypeSupportInterface & operator = (const Sample_LookupTransform_GetResult_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Request_DataWriter_var _var_type;

                static Sample_LookupTransform_GetResult_Request_DataWriter_ptr _duplicate (Sample_LookupTransform_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_LookupTransform_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_LookupTransform_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_LookupTransform_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_GetResult_Request_& instance_data) = 0;

            protected:
                Sample_LookupTransform_GetResult_Request_DataWriter () {};
                ~Sample_LookupTransform_GetResult_Request_DataWriter () {};
            private:
                Sample_LookupTransform_GetResult_Request_DataWriter (const Sample_LookupTransform_GetResult_Request_DataWriter &);
                Sample_LookupTransform_GetResult_Request_DataWriter & operator = (const Sample_LookupTransform_GetResult_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Request_DataReader_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Request_DataReader_var _var_type;

                static Sample_LookupTransform_GetResult_Request_DataReader_ptr _duplicate (Sample_LookupTransform_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_GetResult_Request_& instance) = 0;

            protected:
                Sample_LookupTransform_GetResult_Request_DataReader () {};
                ~Sample_LookupTransform_GetResult_Request_DataReader () {};
            private:
                Sample_LookupTransform_GetResult_Request_DataReader (const Sample_LookupTransform_GetResult_Request_DataReader &);
                Sample_LookupTransform_GetResult_Request_DataReader & operator = (const Sample_LookupTransform_GetResult_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Request_DataReaderView_var _var_type;

                static Sample_LookupTransform_GetResult_Request_DataReaderView_ptr _duplicate (Sample_LookupTransform_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_GetResult_Request_& instance) = 0;

            protected:
                Sample_LookupTransform_GetResult_Request_DataReaderView () {};
                ~Sample_LookupTransform_GetResult_Request_DataReaderView () {};
            private:
                Sample_LookupTransform_GetResult_Request_DataReaderView (const Sample_LookupTransform_GetResult_Request_DataReaderView &);
                Sample_LookupTransform_GetResult_Request_DataReaderView & operator = (const Sample_LookupTransform_GetResult_Request_DataReaderView &);
            };
            class Sample_LookupTransform_GetResult_Response_TypeSupportInterface;

            typedef Sample_LookupTransform_GetResult_Response_TypeSupportInterface * Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Response_TypeSupportInterface> Sample_LookupTransform_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Response_TypeSupportInterface> Sample_LookupTransform_GetResult_Response_TypeSupportInterface_out;


            class Sample_LookupTransform_GetResult_Response_DataWriter;

            typedef Sample_LookupTransform_GetResult_Response_DataWriter * Sample_LookupTransform_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Response_DataWriter> Sample_LookupTransform_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Response_DataWriter> Sample_LookupTransform_GetResult_Response_DataWriter_out;


            class Sample_LookupTransform_GetResult_Response_DataReader;

            typedef Sample_LookupTransform_GetResult_Response_DataReader * Sample_LookupTransform_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Response_DataReader> Sample_LookupTransform_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Response_DataReader> Sample_LookupTransform_GetResult_Response_DataReader_out;


            class Sample_LookupTransform_GetResult_Response_DataReaderView;

            typedef Sample_LookupTransform_GetResult_Response_DataReaderView * Sample_LookupTransform_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_LookupTransform_GetResult_Response_DataReaderView> Sample_LookupTransform_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_LookupTransform_GetResult_Response_DataReaderView> Sample_LookupTransform_GetResult_Response_DataReaderView_out;

            struct Sample_LookupTransform_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_LookupTransform_GetResult_Response_, struct Sample_LookupTransform_GetResult_Response_Seq_uniq_> Sample_LookupTransform_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_LookupTransform_GetResult_Response_Seq> Sample_LookupTransform_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_LookupTransform_GetResult_Response_Seq> Sample_LookupTransform_GetResult_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Response_TypeSupportInterface_var _var_type;

                static Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr _duplicate (Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_LookupTransform_GetResult_Response_TypeSupportInterface () {};
                ~Sample_LookupTransform_GetResult_Response_TypeSupportInterface () {};
            private:
                Sample_LookupTransform_GetResult_Response_TypeSupportInterface (const Sample_LookupTransform_GetResult_Response_TypeSupportInterface &);
                Sample_LookupTransform_GetResult_Response_TypeSupportInterface & operator = (const Sample_LookupTransform_GetResult_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Response_DataWriter_var _var_type;

                static Sample_LookupTransform_GetResult_Response_DataWriter_ptr _duplicate (Sample_LookupTransform_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_LookupTransform_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_LookupTransform_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_LookupTransform_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_GetResult_Response_& instance_data) = 0;

            protected:
                Sample_LookupTransform_GetResult_Response_DataWriter () {};
                ~Sample_LookupTransform_GetResult_Response_DataWriter () {};
            private:
                Sample_LookupTransform_GetResult_Response_DataWriter (const Sample_LookupTransform_GetResult_Response_DataWriter &);
                Sample_LookupTransform_GetResult_Response_DataWriter & operator = (const Sample_LookupTransform_GetResult_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Response_DataReader_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Response_DataReader_var _var_type;

                static Sample_LookupTransform_GetResult_Response_DataReader_ptr _duplicate (Sample_LookupTransform_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_GetResult_Response_& instance) = 0;

            protected:
                Sample_LookupTransform_GetResult_Response_DataReader () {};
                ~Sample_LookupTransform_GetResult_Response_DataReader () {};
            private:
                Sample_LookupTransform_GetResult_Response_DataReader (const Sample_LookupTransform_GetResult_Response_DataReader &);
                Sample_LookupTransform_GetResult_Response_DataReader & operator = (const Sample_LookupTransform_GetResult_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_LookupTransform_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_LookupTransform_GetResult_Response_DataReaderView_var _var_type;

                static Sample_LookupTransform_GetResult_Response_DataReaderView_ptr _duplicate (Sample_LookupTransform_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_LookupTransform_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_LookupTransform_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_LookupTransform_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_LookupTransform_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_LookupTransform_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_LookupTransform_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_LookupTransform_GetResult_Response_& instance) = 0;

            protected:
                Sample_LookupTransform_GetResult_Response_DataReaderView () {};
                ~Sample_LookupTransform_GetResult_Response_DataReaderView () {};
            private:
                Sample_LookupTransform_GetResult_Response_DataReaderView (const Sample_LookupTransform_GetResult_Response_DataReaderView &);
                Sample_LookupTransform_GetResult_Response_DataReaderView & operator = (const Sample_LookupTransform_GetResult_Response_DataReaderView &);
            };
            class LookupTransform_Feedback_TypeSupportInterface;

            typedef LookupTransform_Feedback_TypeSupportInterface * LookupTransform_Feedback_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Feedback_TypeSupportInterface> LookupTransform_Feedback_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Feedback_TypeSupportInterface> LookupTransform_Feedback_TypeSupportInterface_out;


            class LookupTransform_Feedback_DataWriter;

            typedef LookupTransform_Feedback_DataWriter * LookupTransform_Feedback_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Feedback_DataWriter> LookupTransform_Feedback_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Feedback_DataWriter> LookupTransform_Feedback_DataWriter_out;


            class LookupTransform_Feedback_DataReader;

            typedef LookupTransform_Feedback_DataReader * LookupTransform_Feedback_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Feedback_DataReader> LookupTransform_Feedback_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Feedback_DataReader> LookupTransform_Feedback_DataReader_out;


            class LookupTransform_Feedback_DataReaderView;

            typedef LookupTransform_Feedback_DataReaderView * LookupTransform_Feedback_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_Feedback_DataReaderView> LookupTransform_Feedback_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_Feedback_DataReaderView> LookupTransform_Feedback_DataReaderView_out;

            struct LookupTransform_Feedback_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < LookupTransform_Feedback_, struct LookupTransform_Feedback_Seq_uniq_> LookupTransform_Feedback_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_Feedback_Seq> LookupTransform_Feedback_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_Feedback_Seq> LookupTransform_Feedback_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Feedback_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_Feedback_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_Feedback_TypeSupportInterface_var _var_type;

                static LookupTransform_Feedback_TypeSupportInterface_ptr _duplicate (LookupTransform_Feedback_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Feedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Feedback_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_Feedback_TypeSupportInterface () {};
                ~LookupTransform_Feedback_TypeSupportInterface () {};
            private:
                LookupTransform_Feedback_TypeSupportInterface (const LookupTransform_Feedback_TypeSupportInterface &);
                LookupTransform_Feedback_TypeSupportInterface & operator = (const LookupTransform_Feedback_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Feedback_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_Feedback_DataWriter_ptr _ptr_type;
                typedef LookupTransform_Feedback_DataWriter_var _var_type;

                static LookupTransform_Feedback_DataWriter_ptr _duplicate (LookupTransform_Feedback_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Feedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Feedback_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_Feedback_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_Feedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Feedback_& instance_data) = 0;

            protected:
                LookupTransform_Feedback_DataWriter () {};
                ~LookupTransform_Feedback_DataWriter () {};
            private:
                LookupTransform_Feedback_DataWriter (const LookupTransform_Feedback_DataWriter &);
                LookupTransform_Feedback_DataWriter & operator = (const LookupTransform_Feedback_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Feedback_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_Feedback_DataReader_ptr _ptr_type;
                typedef LookupTransform_Feedback_DataReader_var _var_type;

                static LookupTransform_Feedback_DataReader_ptr _duplicate (LookupTransform_Feedback_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Feedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Feedback_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Feedback_& instance) = 0;

            protected:
                LookupTransform_Feedback_DataReader () {};
                ~LookupTransform_Feedback_DataReader () {};
            private:
                LookupTransform_Feedback_DataReader (const LookupTransform_Feedback_DataReader &);
                LookupTransform_Feedback_DataReader & operator = (const LookupTransform_Feedback_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Feedback_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_Feedback_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_Feedback_DataReaderView_var _var_type;

                static LookupTransform_Feedback_DataReaderView_ptr _duplicate (LookupTransform_Feedback_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_Feedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_Feedback_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_Feedback_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_Feedback_& instance) = 0;

            protected:
                LookupTransform_Feedback_DataReaderView () {};
                ~LookupTransform_Feedback_DataReaderView () {};
            private:
                LookupTransform_Feedback_DataReaderView (const LookupTransform_Feedback_DataReaderView &);
                LookupTransform_Feedback_DataReaderView & operator = (const LookupTransform_Feedback_DataReaderView &);
            };
            class LookupTransform_FeedbackMessage_TypeSupportInterface;

            typedef LookupTransform_FeedbackMessage_TypeSupportInterface * LookupTransform_FeedbackMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_FeedbackMessage_TypeSupportInterface> LookupTransform_FeedbackMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LookupTransform_FeedbackMessage_TypeSupportInterface> LookupTransform_FeedbackMessage_TypeSupportInterface_out;


            class LookupTransform_FeedbackMessage_DataWriter;

            typedef LookupTransform_FeedbackMessage_DataWriter * LookupTransform_FeedbackMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_FeedbackMessage_DataWriter> LookupTransform_FeedbackMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < LookupTransform_FeedbackMessage_DataWriter> LookupTransform_FeedbackMessage_DataWriter_out;


            class LookupTransform_FeedbackMessage_DataReader;

            typedef LookupTransform_FeedbackMessage_DataReader * LookupTransform_FeedbackMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_FeedbackMessage_DataReader> LookupTransform_FeedbackMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < LookupTransform_FeedbackMessage_DataReader> LookupTransform_FeedbackMessage_DataReader_out;


            class LookupTransform_FeedbackMessage_DataReaderView;

            typedef LookupTransform_FeedbackMessage_DataReaderView * LookupTransform_FeedbackMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LookupTransform_FeedbackMessage_DataReaderView> LookupTransform_FeedbackMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LookupTransform_FeedbackMessage_DataReaderView> LookupTransform_FeedbackMessage_DataReaderView_out;

            struct LookupTransform_FeedbackMessage_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < LookupTransform_FeedbackMessage_, struct LookupTransform_FeedbackMessage_Seq_uniq_> LookupTransform_FeedbackMessage_Seq;
            typedef DDS_DCPSSequence_var < LookupTransform_FeedbackMessage_Seq> LookupTransform_FeedbackMessage_Seq_var;
            typedef DDS_DCPSSequence_out < LookupTransform_FeedbackMessage_Seq> LookupTransform_FeedbackMessage_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_FeedbackMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LookupTransform_FeedbackMessage_TypeSupportInterface_ptr _ptr_type;
                typedef LookupTransform_FeedbackMessage_TypeSupportInterface_var _var_type;

                static LookupTransform_FeedbackMessage_TypeSupportInterface_ptr _duplicate (LookupTransform_FeedbackMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_FeedbackMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_FeedbackMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LookupTransform_FeedbackMessage_TypeSupportInterface () {};
                ~LookupTransform_FeedbackMessage_TypeSupportInterface () {};
            private:
                LookupTransform_FeedbackMessage_TypeSupportInterface (const LookupTransform_FeedbackMessage_TypeSupportInterface &);
                LookupTransform_FeedbackMessage_TypeSupportInterface & operator = (const LookupTransform_FeedbackMessage_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_FeedbackMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LookupTransform_FeedbackMessage_DataWriter_ptr _ptr_type;
                typedef LookupTransform_FeedbackMessage_DataWriter_var _var_type;

                static LookupTransform_FeedbackMessage_DataWriter_ptr _duplicate (LookupTransform_FeedbackMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_FeedbackMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_FeedbackMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LookupTransform_FeedbackMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LookupTransform_FeedbackMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LookupTransform_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LookupTransform_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_FeedbackMessage_& instance_data) = 0;

            protected:
                LookupTransform_FeedbackMessage_DataWriter () {};
                ~LookupTransform_FeedbackMessage_DataWriter () {};
            private:
                LookupTransform_FeedbackMessage_DataWriter (const LookupTransform_FeedbackMessage_DataWriter &);
                LookupTransform_FeedbackMessage_DataWriter & operator = (const LookupTransform_FeedbackMessage_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_FeedbackMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LookupTransform_FeedbackMessage_DataReader_ptr _ptr_type;
                typedef LookupTransform_FeedbackMessage_DataReader_var _var_type;

                static LookupTransform_FeedbackMessage_DataReader_ptr _duplicate (LookupTransform_FeedbackMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_FeedbackMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_FeedbackMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_FeedbackMessage_& instance) = 0;

            protected:
                LookupTransform_FeedbackMessage_DataReader () {};
                ~LookupTransform_FeedbackMessage_DataReader () {};
            private:
                LookupTransform_FeedbackMessage_DataReader (const LookupTransform_FeedbackMessage_DataReader &);
                LookupTransform_FeedbackMessage_DataReader & operator = (const LookupTransform_FeedbackMessage_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_FeedbackMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LookupTransform_FeedbackMessage_DataReaderView_ptr _ptr_type;
                typedef LookupTransform_FeedbackMessage_DataReaderView_var _var_type;

                static LookupTransform_FeedbackMessage_DataReaderView_ptr _duplicate (LookupTransform_FeedbackMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LookupTransform_FeedbackMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LookupTransform_FeedbackMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LookupTransform_FeedbackMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LookupTransform_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LookupTransform_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LookupTransform_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LookupTransform_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LookupTransform_FeedbackMessage_& instance) = 0;

            protected:
                LookupTransform_FeedbackMessage_DataReaderView () {};
                ~LookupTransform_FeedbackMessage_DataReaderView () {};
            private:
                LookupTransform_FeedbackMessage_DataReaderView (const LookupTransform_FeedbackMessage_DataReaderView &);
                LookupTransform_FeedbackMessage_DataReaderView & operator = (const LookupTransform_FeedbackMessage_DataReaderView &);
            };
        }

    }

}

#endif
