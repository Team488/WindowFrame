#ifndef _H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase_DCPS_H_
#define _H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MoveBase_.h"

#include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace move_base_msgs
{
    namespace action
    {
        namespace dds_
        {
            class MoveBase_Goal_TypeSupportInterface;

            typedef MoveBase_Goal_TypeSupportInterface * MoveBase_Goal_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Goal_TypeSupportInterface> MoveBase_Goal_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_Goal_TypeSupportInterface> MoveBase_Goal_TypeSupportInterface_out;


            class MoveBase_Goal_DataWriter;

            typedef MoveBase_Goal_DataWriter * MoveBase_Goal_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Goal_DataWriter> MoveBase_Goal_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_Goal_DataWriter> MoveBase_Goal_DataWriter_out;


            class MoveBase_Goal_DataReader;

            typedef MoveBase_Goal_DataReader * MoveBase_Goal_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Goal_DataReader> MoveBase_Goal_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_Goal_DataReader> MoveBase_Goal_DataReader_out;


            class MoveBase_Goal_DataReaderView;

            typedef MoveBase_Goal_DataReaderView * MoveBase_Goal_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Goal_DataReaderView> MoveBase_Goal_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_Goal_DataReaderView> MoveBase_Goal_DataReaderView_out;

            struct MoveBase_Goal_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MoveBase_Goal_, struct MoveBase_Goal_Seq_uniq_> MoveBase_Goal_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_Goal_Seq> MoveBase_Goal_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_Goal_Seq> MoveBase_Goal_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Goal_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_Goal_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_Goal_TypeSupportInterface_var _var_type;

                static MoveBase_Goal_TypeSupportInterface_ptr _duplicate (MoveBase_Goal_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Goal_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Goal_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_Goal_TypeSupportInterface () {};
                ~MoveBase_Goal_TypeSupportInterface () {};
            private:
                MoveBase_Goal_TypeSupportInterface (const MoveBase_Goal_TypeSupportInterface &);
                MoveBase_Goal_TypeSupportInterface & operator = (const MoveBase_Goal_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Goal_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_Goal_DataWriter_ptr _ptr_type;
                typedef MoveBase_Goal_DataWriter_var _var_type;

                static MoveBase_Goal_DataWriter_ptr _duplicate (MoveBase_Goal_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Goal_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Goal_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_Goal_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_Goal_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Goal_& instance_data) = 0;

            protected:
                MoveBase_Goal_DataWriter () {};
                ~MoveBase_Goal_DataWriter () {};
            private:
                MoveBase_Goal_DataWriter (const MoveBase_Goal_DataWriter &);
                MoveBase_Goal_DataWriter & operator = (const MoveBase_Goal_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Goal_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_Goal_DataReader_ptr _ptr_type;
                typedef MoveBase_Goal_DataReader_var _var_type;

                static MoveBase_Goal_DataReader_ptr _duplicate (MoveBase_Goal_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Goal_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Goal_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Goal_& instance) = 0;

            protected:
                MoveBase_Goal_DataReader () {};
                ~MoveBase_Goal_DataReader () {};
            private:
                MoveBase_Goal_DataReader (const MoveBase_Goal_DataReader &);
                MoveBase_Goal_DataReader & operator = (const MoveBase_Goal_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Goal_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_Goal_DataReaderView_ptr _ptr_type;
                typedef MoveBase_Goal_DataReaderView_var _var_type;

                static MoveBase_Goal_DataReaderView_ptr _duplicate (MoveBase_Goal_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Goal_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Goal_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Goal_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Goal_& instance) = 0;

            protected:
                MoveBase_Goal_DataReaderView () {};
                ~MoveBase_Goal_DataReaderView () {};
            private:
                MoveBase_Goal_DataReaderView (const MoveBase_Goal_DataReaderView &);
                MoveBase_Goal_DataReaderView & operator = (const MoveBase_Goal_DataReaderView &);
            };
            class MoveBase_SendGoal_Request_TypeSupportInterface;

            typedef MoveBase_SendGoal_Request_TypeSupportInterface * MoveBase_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Request_TypeSupportInterface> MoveBase_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Request_TypeSupportInterface> MoveBase_SendGoal_Request_TypeSupportInterface_out;


            class MoveBase_SendGoal_Request_DataWriter;

            typedef MoveBase_SendGoal_Request_DataWriter * MoveBase_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Request_DataWriter> MoveBase_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Request_DataWriter> MoveBase_SendGoal_Request_DataWriter_out;


            class MoveBase_SendGoal_Request_DataReader;

            typedef MoveBase_SendGoal_Request_DataReader * MoveBase_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Request_DataReader> MoveBase_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Request_DataReader> MoveBase_SendGoal_Request_DataReader_out;


            class MoveBase_SendGoal_Request_DataReaderView;

            typedef MoveBase_SendGoal_Request_DataReaderView * MoveBase_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Request_DataReaderView> MoveBase_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Request_DataReaderView> MoveBase_SendGoal_Request_DataReaderView_out;

            struct MoveBase_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MoveBase_SendGoal_Request_, struct MoveBase_SendGoal_Request_Seq_uniq_> MoveBase_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_SendGoal_Request_Seq> MoveBase_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_SendGoal_Request_Seq> MoveBase_SendGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_SendGoal_Request_TypeSupportInterface_var _var_type;

                static MoveBase_SendGoal_Request_TypeSupportInterface_ptr _duplicate (MoveBase_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_SendGoal_Request_TypeSupportInterface () {};
                ~MoveBase_SendGoal_Request_TypeSupportInterface () {};
            private:
                MoveBase_SendGoal_Request_TypeSupportInterface (const MoveBase_SendGoal_Request_TypeSupportInterface &);
                MoveBase_SendGoal_Request_TypeSupportInterface & operator = (const MoveBase_SendGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef MoveBase_SendGoal_Request_DataWriter_var _var_type;

                static MoveBase_SendGoal_Request_DataWriter_ptr _duplicate (MoveBase_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_SendGoal_Request_& instance_data) = 0;

            protected:
                MoveBase_SendGoal_Request_DataWriter () {};
                ~MoveBase_SendGoal_Request_DataWriter () {};
            private:
                MoveBase_SendGoal_Request_DataWriter (const MoveBase_SendGoal_Request_DataWriter &);
                MoveBase_SendGoal_Request_DataWriter & operator = (const MoveBase_SendGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef MoveBase_SendGoal_Request_DataReader_var _var_type;

                static MoveBase_SendGoal_Request_DataReader_ptr _duplicate (MoveBase_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_SendGoal_Request_& instance) = 0;

            protected:
                MoveBase_SendGoal_Request_DataReader () {};
                ~MoveBase_SendGoal_Request_DataReader () {};
            private:
                MoveBase_SendGoal_Request_DataReader (const MoveBase_SendGoal_Request_DataReader &);
                MoveBase_SendGoal_Request_DataReader & operator = (const MoveBase_SendGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef MoveBase_SendGoal_Request_DataReaderView_var _var_type;

                static MoveBase_SendGoal_Request_DataReaderView_ptr _duplicate (MoveBase_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_SendGoal_Request_& instance) = 0;

            protected:
                MoveBase_SendGoal_Request_DataReaderView () {};
                ~MoveBase_SendGoal_Request_DataReaderView () {};
            private:
                MoveBase_SendGoal_Request_DataReaderView (const MoveBase_SendGoal_Request_DataReaderView &);
                MoveBase_SendGoal_Request_DataReaderView & operator = (const MoveBase_SendGoal_Request_DataReaderView &);
            };
            class MoveBase_SendGoal_Response_TypeSupportInterface;

            typedef MoveBase_SendGoal_Response_TypeSupportInterface * MoveBase_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Response_TypeSupportInterface> MoveBase_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Response_TypeSupportInterface> MoveBase_SendGoal_Response_TypeSupportInterface_out;


            class MoveBase_SendGoal_Response_DataWriter;

            typedef MoveBase_SendGoal_Response_DataWriter * MoveBase_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Response_DataWriter> MoveBase_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Response_DataWriter> MoveBase_SendGoal_Response_DataWriter_out;


            class MoveBase_SendGoal_Response_DataReader;

            typedef MoveBase_SendGoal_Response_DataReader * MoveBase_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Response_DataReader> MoveBase_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Response_DataReader> MoveBase_SendGoal_Response_DataReader_out;


            class MoveBase_SendGoal_Response_DataReaderView;

            typedef MoveBase_SendGoal_Response_DataReaderView * MoveBase_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_SendGoal_Response_DataReaderView> MoveBase_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_SendGoal_Response_DataReaderView> MoveBase_SendGoal_Response_DataReaderView_out;

            struct MoveBase_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MoveBase_SendGoal_Response_, struct MoveBase_SendGoal_Response_Seq_uniq_> MoveBase_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_SendGoal_Response_Seq> MoveBase_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_SendGoal_Response_Seq> MoveBase_SendGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_SendGoal_Response_TypeSupportInterface_var _var_type;

                static MoveBase_SendGoal_Response_TypeSupportInterface_ptr _duplicate (MoveBase_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_SendGoal_Response_TypeSupportInterface () {};
                ~MoveBase_SendGoal_Response_TypeSupportInterface () {};
            private:
                MoveBase_SendGoal_Response_TypeSupportInterface (const MoveBase_SendGoal_Response_TypeSupportInterface &);
                MoveBase_SendGoal_Response_TypeSupportInterface & operator = (const MoveBase_SendGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef MoveBase_SendGoal_Response_DataWriter_var _var_type;

                static MoveBase_SendGoal_Response_DataWriter_ptr _duplicate (MoveBase_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_SendGoal_Response_& instance_data) = 0;

            protected:
                MoveBase_SendGoal_Response_DataWriter () {};
                ~MoveBase_SendGoal_Response_DataWriter () {};
            private:
                MoveBase_SendGoal_Response_DataWriter (const MoveBase_SendGoal_Response_DataWriter &);
                MoveBase_SendGoal_Response_DataWriter & operator = (const MoveBase_SendGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef MoveBase_SendGoal_Response_DataReader_var _var_type;

                static MoveBase_SendGoal_Response_DataReader_ptr _duplicate (MoveBase_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_SendGoal_Response_& instance) = 0;

            protected:
                MoveBase_SendGoal_Response_DataReader () {};
                ~MoveBase_SendGoal_Response_DataReader () {};
            private:
                MoveBase_SendGoal_Response_DataReader (const MoveBase_SendGoal_Response_DataReader &);
                MoveBase_SendGoal_Response_DataReader & operator = (const MoveBase_SendGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef MoveBase_SendGoal_Response_DataReaderView_var _var_type;

                static MoveBase_SendGoal_Response_DataReaderView_ptr _duplicate (MoveBase_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_SendGoal_Response_& instance) = 0;

            protected:
                MoveBase_SendGoal_Response_DataReaderView () {};
                ~MoveBase_SendGoal_Response_DataReaderView () {};
            private:
                MoveBase_SendGoal_Response_DataReaderView (const MoveBase_SendGoal_Response_DataReaderView &);
                MoveBase_SendGoal_Response_DataReaderView & operator = (const MoveBase_SendGoal_Response_DataReaderView &);
            };
            class Sample_MoveBase_SendGoal_Request_TypeSupportInterface;

            typedef Sample_MoveBase_SendGoal_Request_TypeSupportInterface * Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Request_TypeSupportInterface> Sample_MoveBase_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Request_TypeSupportInterface> Sample_MoveBase_SendGoal_Request_TypeSupportInterface_out;


            class Sample_MoveBase_SendGoal_Request_DataWriter;

            typedef Sample_MoveBase_SendGoal_Request_DataWriter * Sample_MoveBase_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Request_DataWriter> Sample_MoveBase_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Request_DataWriter> Sample_MoveBase_SendGoal_Request_DataWriter_out;


            class Sample_MoveBase_SendGoal_Request_DataReader;

            typedef Sample_MoveBase_SendGoal_Request_DataReader * Sample_MoveBase_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Request_DataReader> Sample_MoveBase_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Request_DataReader> Sample_MoveBase_SendGoal_Request_DataReader_out;


            class Sample_MoveBase_SendGoal_Request_DataReaderView;

            typedef Sample_MoveBase_SendGoal_Request_DataReaderView * Sample_MoveBase_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Request_DataReaderView> Sample_MoveBase_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Request_DataReaderView> Sample_MoveBase_SendGoal_Request_DataReaderView_out;

            struct Sample_MoveBase_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_MoveBase_SendGoal_Request_, struct Sample_MoveBase_SendGoal_Request_Seq_uniq_> Sample_MoveBase_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_MoveBase_SendGoal_Request_Seq> Sample_MoveBase_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_MoveBase_SendGoal_Request_Seq> Sample_MoveBase_SendGoal_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Request_TypeSupportInterface_var _var_type;

                static Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr _duplicate (Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_MoveBase_SendGoal_Request_TypeSupportInterface () {};
                ~Sample_MoveBase_SendGoal_Request_TypeSupportInterface () {};
            private:
                Sample_MoveBase_SendGoal_Request_TypeSupportInterface (const Sample_MoveBase_SendGoal_Request_TypeSupportInterface &);
                Sample_MoveBase_SendGoal_Request_TypeSupportInterface & operator = (const Sample_MoveBase_SendGoal_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Request_DataWriter_var _var_type;

                static Sample_MoveBase_SendGoal_Request_DataWriter_ptr _duplicate (Sample_MoveBase_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_MoveBase_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_MoveBase_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_MoveBase_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_SendGoal_Request_& instance_data) = 0;

            protected:
                Sample_MoveBase_SendGoal_Request_DataWriter () {};
                ~Sample_MoveBase_SendGoal_Request_DataWriter () {};
            private:
                Sample_MoveBase_SendGoal_Request_DataWriter (const Sample_MoveBase_SendGoal_Request_DataWriter &);
                Sample_MoveBase_SendGoal_Request_DataWriter & operator = (const Sample_MoveBase_SendGoal_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Request_DataReader_var _var_type;

                static Sample_MoveBase_SendGoal_Request_DataReader_ptr _duplicate (Sample_MoveBase_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_SendGoal_Request_& instance) = 0;

            protected:
                Sample_MoveBase_SendGoal_Request_DataReader () {};
                ~Sample_MoveBase_SendGoal_Request_DataReader () {};
            private:
                Sample_MoveBase_SendGoal_Request_DataReader (const Sample_MoveBase_SendGoal_Request_DataReader &);
                Sample_MoveBase_SendGoal_Request_DataReader & operator = (const Sample_MoveBase_SendGoal_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Request_DataReaderView_var _var_type;

                static Sample_MoveBase_SendGoal_Request_DataReaderView_ptr _duplicate (Sample_MoveBase_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_SendGoal_Request_& instance) = 0;

            protected:
                Sample_MoveBase_SendGoal_Request_DataReaderView () {};
                ~Sample_MoveBase_SendGoal_Request_DataReaderView () {};
            private:
                Sample_MoveBase_SendGoal_Request_DataReaderView (const Sample_MoveBase_SendGoal_Request_DataReaderView &);
                Sample_MoveBase_SendGoal_Request_DataReaderView & operator = (const Sample_MoveBase_SendGoal_Request_DataReaderView &);
            };
            class Sample_MoveBase_SendGoal_Response_TypeSupportInterface;

            typedef Sample_MoveBase_SendGoal_Response_TypeSupportInterface * Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Response_TypeSupportInterface> Sample_MoveBase_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Response_TypeSupportInterface> Sample_MoveBase_SendGoal_Response_TypeSupportInterface_out;


            class Sample_MoveBase_SendGoal_Response_DataWriter;

            typedef Sample_MoveBase_SendGoal_Response_DataWriter * Sample_MoveBase_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Response_DataWriter> Sample_MoveBase_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Response_DataWriter> Sample_MoveBase_SendGoal_Response_DataWriter_out;


            class Sample_MoveBase_SendGoal_Response_DataReader;

            typedef Sample_MoveBase_SendGoal_Response_DataReader * Sample_MoveBase_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Response_DataReader> Sample_MoveBase_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Response_DataReader> Sample_MoveBase_SendGoal_Response_DataReader_out;


            class Sample_MoveBase_SendGoal_Response_DataReaderView;

            typedef Sample_MoveBase_SendGoal_Response_DataReaderView * Sample_MoveBase_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_SendGoal_Response_DataReaderView> Sample_MoveBase_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_SendGoal_Response_DataReaderView> Sample_MoveBase_SendGoal_Response_DataReaderView_out;

            struct Sample_MoveBase_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_MoveBase_SendGoal_Response_, struct Sample_MoveBase_SendGoal_Response_Seq_uniq_> Sample_MoveBase_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_MoveBase_SendGoal_Response_Seq> Sample_MoveBase_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_MoveBase_SendGoal_Response_Seq> Sample_MoveBase_SendGoal_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Response_TypeSupportInterface_var _var_type;

                static Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr _duplicate (Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_MoveBase_SendGoal_Response_TypeSupportInterface () {};
                ~Sample_MoveBase_SendGoal_Response_TypeSupportInterface () {};
            private:
                Sample_MoveBase_SendGoal_Response_TypeSupportInterface (const Sample_MoveBase_SendGoal_Response_TypeSupportInterface &);
                Sample_MoveBase_SendGoal_Response_TypeSupportInterface & operator = (const Sample_MoveBase_SendGoal_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Response_DataWriter_var _var_type;

                static Sample_MoveBase_SendGoal_Response_DataWriter_ptr _duplicate (Sample_MoveBase_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_MoveBase_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_MoveBase_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_MoveBase_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_SendGoal_Response_& instance_data) = 0;

            protected:
                Sample_MoveBase_SendGoal_Response_DataWriter () {};
                ~Sample_MoveBase_SendGoal_Response_DataWriter () {};
            private:
                Sample_MoveBase_SendGoal_Response_DataWriter (const Sample_MoveBase_SendGoal_Response_DataWriter &);
                Sample_MoveBase_SendGoal_Response_DataWriter & operator = (const Sample_MoveBase_SendGoal_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Response_DataReader_var _var_type;

                static Sample_MoveBase_SendGoal_Response_DataReader_ptr _duplicate (Sample_MoveBase_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_SendGoal_Response_& instance) = 0;

            protected:
                Sample_MoveBase_SendGoal_Response_DataReader () {};
                ~Sample_MoveBase_SendGoal_Response_DataReader () {};
            private:
                Sample_MoveBase_SendGoal_Response_DataReader (const Sample_MoveBase_SendGoal_Response_DataReader &);
                Sample_MoveBase_SendGoal_Response_DataReader & operator = (const Sample_MoveBase_SendGoal_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_MoveBase_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_MoveBase_SendGoal_Response_DataReaderView_var _var_type;

                static Sample_MoveBase_SendGoal_Response_DataReaderView_ptr _duplicate (Sample_MoveBase_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_SendGoal_Response_& instance) = 0;

            protected:
                Sample_MoveBase_SendGoal_Response_DataReaderView () {};
                ~Sample_MoveBase_SendGoal_Response_DataReaderView () {};
            private:
                Sample_MoveBase_SendGoal_Response_DataReaderView (const Sample_MoveBase_SendGoal_Response_DataReaderView &);
                Sample_MoveBase_SendGoal_Response_DataReaderView & operator = (const Sample_MoveBase_SendGoal_Response_DataReaderView &);
            };
            class MoveBase_Result_TypeSupportInterface;

            typedef MoveBase_Result_TypeSupportInterface * MoveBase_Result_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Result_TypeSupportInterface> MoveBase_Result_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_Result_TypeSupportInterface> MoveBase_Result_TypeSupportInterface_out;


            class MoveBase_Result_DataWriter;

            typedef MoveBase_Result_DataWriter * MoveBase_Result_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Result_DataWriter> MoveBase_Result_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_Result_DataWriter> MoveBase_Result_DataWriter_out;


            class MoveBase_Result_DataReader;

            typedef MoveBase_Result_DataReader * MoveBase_Result_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Result_DataReader> MoveBase_Result_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_Result_DataReader> MoveBase_Result_DataReader_out;


            class MoveBase_Result_DataReaderView;

            typedef MoveBase_Result_DataReaderView * MoveBase_Result_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Result_DataReaderView> MoveBase_Result_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_Result_DataReaderView> MoveBase_Result_DataReaderView_out;

            struct MoveBase_Result_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MoveBase_Result_, struct MoveBase_Result_Seq_uniq_> MoveBase_Result_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_Result_Seq> MoveBase_Result_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_Result_Seq> MoveBase_Result_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Result_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_Result_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_Result_TypeSupportInterface_var _var_type;

                static MoveBase_Result_TypeSupportInterface_ptr _duplicate (MoveBase_Result_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Result_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Result_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Result_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Result_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_Result_TypeSupportInterface () {};
                ~MoveBase_Result_TypeSupportInterface () {};
            private:
                MoveBase_Result_TypeSupportInterface (const MoveBase_Result_TypeSupportInterface &);
                MoveBase_Result_TypeSupportInterface & operator = (const MoveBase_Result_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Result_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_Result_DataWriter_ptr _ptr_type;
                typedef MoveBase_Result_DataWriter_var _var_type;

                static MoveBase_Result_DataWriter_ptr _duplicate (MoveBase_Result_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Result_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Result_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Result_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Result_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_Result_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_Result_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Result_& instance_data) = 0;

            protected:
                MoveBase_Result_DataWriter () {};
                ~MoveBase_Result_DataWriter () {};
            private:
                MoveBase_Result_DataWriter (const MoveBase_Result_DataWriter &);
                MoveBase_Result_DataWriter & operator = (const MoveBase_Result_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Result_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_Result_DataReader_ptr _ptr_type;
                typedef MoveBase_Result_DataReader_var _var_type;

                static MoveBase_Result_DataReader_ptr _duplicate (MoveBase_Result_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Result_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Result_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Result_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Result_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Result_& instance) = 0;

            protected:
                MoveBase_Result_DataReader () {};
                ~MoveBase_Result_DataReader () {};
            private:
                MoveBase_Result_DataReader (const MoveBase_Result_DataReader &);
                MoveBase_Result_DataReader & operator = (const MoveBase_Result_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Result_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_Result_DataReaderView_ptr _ptr_type;
                typedef MoveBase_Result_DataReaderView_var _var_type;

                static MoveBase_Result_DataReaderView_ptr _duplicate (MoveBase_Result_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Result_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Result_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Result_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Result_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Result_& instance) = 0;

            protected:
                MoveBase_Result_DataReaderView () {};
                ~MoveBase_Result_DataReaderView () {};
            private:
                MoveBase_Result_DataReaderView (const MoveBase_Result_DataReaderView &);
                MoveBase_Result_DataReaderView & operator = (const MoveBase_Result_DataReaderView &);
            };
            class MoveBase_GetResult_Request_TypeSupportInterface;

            typedef MoveBase_GetResult_Request_TypeSupportInterface * MoveBase_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Request_TypeSupportInterface> MoveBase_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Request_TypeSupportInterface> MoveBase_GetResult_Request_TypeSupportInterface_out;


            class MoveBase_GetResult_Request_DataWriter;

            typedef MoveBase_GetResult_Request_DataWriter * MoveBase_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Request_DataWriter> MoveBase_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Request_DataWriter> MoveBase_GetResult_Request_DataWriter_out;


            class MoveBase_GetResult_Request_DataReader;

            typedef MoveBase_GetResult_Request_DataReader * MoveBase_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Request_DataReader> MoveBase_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Request_DataReader> MoveBase_GetResult_Request_DataReader_out;


            class MoveBase_GetResult_Request_DataReaderView;

            typedef MoveBase_GetResult_Request_DataReaderView * MoveBase_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Request_DataReaderView> MoveBase_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Request_DataReaderView> MoveBase_GetResult_Request_DataReaderView_out;

            struct MoveBase_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MoveBase_GetResult_Request_, struct MoveBase_GetResult_Request_Seq_uniq_> MoveBase_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_GetResult_Request_Seq> MoveBase_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_GetResult_Request_Seq> MoveBase_GetResult_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_GetResult_Request_TypeSupportInterface_var _var_type;

                static MoveBase_GetResult_Request_TypeSupportInterface_ptr _duplicate (MoveBase_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_GetResult_Request_TypeSupportInterface () {};
                ~MoveBase_GetResult_Request_TypeSupportInterface () {};
            private:
                MoveBase_GetResult_Request_TypeSupportInterface (const MoveBase_GetResult_Request_TypeSupportInterface &);
                MoveBase_GetResult_Request_TypeSupportInterface & operator = (const MoveBase_GetResult_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef MoveBase_GetResult_Request_DataWriter_var _var_type;

                static MoveBase_GetResult_Request_DataWriter_ptr _duplicate (MoveBase_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_GetResult_Request_& instance_data) = 0;

            protected:
                MoveBase_GetResult_Request_DataWriter () {};
                ~MoveBase_GetResult_Request_DataWriter () {};
            private:
                MoveBase_GetResult_Request_DataWriter (const MoveBase_GetResult_Request_DataWriter &);
                MoveBase_GetResult_Request_DataWriter & operator = (const MoveBase_GetResult_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_GetResult_Request_DataReader_ptr _ptr_type;
                typedef MoveBase_GetResult_Request_DataReader_var _var_type;

                static MoveBase_GetResult_Request_DataReader_ptr _duplicate (MoveBase_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_GetResult_Request_& instance) = 0;

            protected:
                MoveBase_GetResult_Request_DataReader () {};
                ~MoveBase_GetResult_Request_DataReader () {};
            private:
                MoveBase_GetResult_Request_DataReader (const MoveBase_GetResult_Request_DataReader &);
                MoveBase_GetResult_Request_DataReader & operator = (const MoveBase_GetResult_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef MoveBase_GetResult_Request_DataReaderView_var _var_type;

                static MoveBase_GetResult_Request_DataReaderView_ptr _duplicate (MoveBase_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_GetResult_Request_& instance) = 0;

            protected:
                MoveBase_GetResult_Request_DataReaderView () {};
                ~MoveBase_GetResult_Request_DataReaderView () {};
            private:
                MoveBase_GetResult_Request_DataReaderView (const MoveBase_GetResult_Request_DataReaderView &);
                MoveBase_GetResult_Request_DataReaderView & operator = (const MoveBase_GetResult_Request_DataReaderView &);
            };
            class MoveBase_GetResult_Response_TypeSupportInterface;

            typedef MoveBase_GetResult_Response_TypeSupportInterface * MoveBase_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Response_TypeSupportInterface> MoveBase_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Response_TypeSupportInterface> MoveBase_GetResult_Response_TypeSupportInterface_out;


            class MoveBase_GetResult_Response_DataWriter;

            typedef MoveBase_GetResult_Response_DataWriter * MoveBase_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Response_DataWriter> MoveBase_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Response_DataWriter> MoveBase_GetResult_Response_DataWriter_out;


            class MoveBase_GetResult_Response_DataReader;

            typedef MoveBase_GetResult_Response_DataReader * MoveBase_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Response_DataReader> MoveBase_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Response_DataReader> MoveBase_GetResult_Response_DataReader_out;


            class MoveBase_GetResult_Response_DataReaderView;

            typedef MoveBase_GetResult_Response_DataReaderView * MoveBase_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_GetResult_Response_DataReaderView> MoveBase_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_GetResult_Response_DataReaderView> MoveBase_GetResult_Response_DataReaderView_out;

            struct MoveBase_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MoveBase_GetResult_Response_, struct MoveBase_GetResult_Response_Seq_uniq_> MoveBase_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_GetResult_Response_Seq> MoveBase_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_GetResult_Response_Seq> MoveBase_GetResult_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_GetResult_Response_TypeSupportInterface_var _var_type;

                static MoveBase_GetResult_Response_TypeSupportInterface_ptr _duplicate (MoveBase_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_GetResult_Response_TypeSupportInterface () {};
                ~MoveBase_GetResult_Response_TypeSupportInterface () {};
            private:
                MoveBase_GetResult_Response_TypeSupportInterface (const MoveBase_GetResult_Response_TypeSupportInterface &);
                MoveBase_GetResult_Response_TypeSupportInterface & operator = (const MoveBase_GetResult_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef MoveBase_GetResult_Response_DataWriter_var _var_type;

                static MoveBase_GetResult_Response_DataWriter_ptr _duplicate (MoveBase_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_GetResult_Response_& instance_data) = 0;

            protected:
                MoveBase_GetResult_Response_DataWriter () {};
                ~MoveBase_GetResult_Response_DataWriter () {};
            private:
                MoveBase_GetResult_Response_DataWriter (const MoveBase_GetResult_Response_DataWriter &);
                MoveBase_GetResult_Response_DataWriter & operator = (const MoveBase_GetResult_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_GetResult_Response_DataReader_ptr _ptr_type;
                typedef MoveBase_GetResult_Response_DataReader_var _var_type;

                static MoveBase_GetResult_Response_DataReader_ptr _duplicate (MoveBase_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_GetResult_Response_& instance) = 0;

            protected:
                MoveBase_GetResult_Response_DataReader () {};
                ~MoveBase_GetResult_Response_DataReader () {};
            private:
                MoveBase_GetResult_Response_DataReader (const MoveBase_GetResult_Response_DataReader &);
                MoveBase_GetResult_Response_DataReader & operator = (const MoveBase_GetResult_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef MoveBase_GetResult_Response_DataReaderView_var _var_type;

                static MoveBase_GetResult_Response_DataReaderView_ptr _duplicate (MoveBase_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_GetResult_Response_& instance) = 0;

            protected:
                MoveBase_GetResult_Response_DataReaderView () {};
                ~MoveBase_GetResult_Response_DataReaderView () {};
            private:
                MoveBase_GetResult_Response_DataReaderView (const MoveBase_GetResult_Response_DataReaderView &);
                MoveBase_GetResult_Response_DataReaderView & operator = (const MoveBase_GetResult_Response_DataReaderView &);
            };
            class Sample_MoveBase_GetResult_Request_TypeSupportInterface;

            typedef Sample_MoveBase_GetResult_Request_TypeSupportInterface * Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Request_TypeSupportInterface> Sample_MoveBase_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Request_TypeSupportInterface> Sample_MoveBase_GetResult_Request_TypeSupportInterface_out;


            class Sample_MoveBase_GetResult_Request_DataWriter;

            typedef Sample_MoveBase_GetResult_Request_DataWriter * Sample_MoveBase_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Request_DataWriter> Sample_MoveBase_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Request_DataWriter> Sample_MoveBase_GetResult_Request_DataWriter_out;


            class Sample_MoveBase_GetResult_Request_DataReader;

            typedef Sample_MoveBase_GetResult_Request_DataReader * Sample_MoveBase_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Request_DataReader> Sample_MoveBase_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Request_DataReader> Sample_MoveBase_GetResult_Request_DataReader_out;


            class Sample_MoveBase_GetResult_Request_DataReaderView;

            typedef Sample_MoveBase_GetResult_Request_DataReaderView * Sample_MoveBase_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Request_DataReaderView> Sample_MoveBase_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Request_DataReaderView> Sample_MoveBase_GetResult_Request_DataReaderView_out;

            struct Sample_MoveBase_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_MoveBase_GetResult_Request_, struct Sample_MoveBase_GetResult_Request_Seq_uniq_> Sample_MoveBase_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_MoveBase_GetResult_Request_Seq> Sample_MoveBase_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_MoveBase_GetResult_Request_Seq> Sample_MoveBase_GetResult_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Request_TypeSupportInterface_var _var_type;

                static Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr _duplicate (Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_MoveBase_GetResult_Request_TypeSupportInterface () {};
                ~Sample_MoveBase_GetResult_Request_TypeSupportInterface () {};
            private:
                Sample_MoveBase_GetResult_Request_TypeSupportInterface (const Sample_MoveBase_GetResult_Request_TypeSupportInterface &);
                Sample_MoveBase_GetResult_Request_TypeSupportInterface & operator = (const Sample_MoveBase_GetResult_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_MoveBase_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Request_DataWriter_var _var_type;

                static Sample_MoveBase_GetResult_Request_DataWriter_ptr _duplicate (Sample_MoveBase_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_MoveBase_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_MoveBase_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_MoveBase_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_GetResult_Request_& instance_data) = 0;

            protected:
                Sample_MoveBase_GetResult_Request_DataWriter () {};
                ~Sample_MoveBase_GetResult_Request_DataWriter () {};
            private:
                Sample_MoveBase_GetResult_Request_DataWriter (const Sample_MoveBase_GetResult_Request_DataWriter &);
                Sample_MoveBase_GetResult_Request_DataWriter & operator = (const Sample_MoveBase_GetResult_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_MoveBase_GetResult_Request_DataReader_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Request_DataReader_var _var_type;

                static Sample_MoveBase_GetResult_Request_DataReader_ptr _duplicate (Sample_MoveBase_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_GetResult_Request_& instance) = 0;

            protected:
                Sample_MoveBase_GetResult_Request_DataReader () {};
                ~Sample_MoveBase_GetResult_Request_DataReader () {};
            private:
                Sample_MoveBase_GetResult_Request_DataReader (const Sample_MoveBase_GetResult_Request_DataReader &);
                Sample_MoveBase_GetResult_Request_DataReader & operator = (const Sample_MoveBase_GetResult_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_MoveBase_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Request_DataReaderView_var _var_type;

                static Sample_MoveBase_GetResult_Request_DataReaderView_ptr _duplicate (Sample_MoveBase_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_GetResult_Request_& instance) = 0;

            protected:
                Sample_MoveBase_GetResult_Request_DataReaderView () {};
                ~Sample_MoveBase_GetResult_Request_DataReaderView () {};
            private:
                Sample_MoveBase_GetResult_Request_DataReaderView (const Sample_MoveBase_GetResult_Request_DataReaderView &);
                Sample_MoveBase_GetResult_Request_DataReaderView & operator = (const Sample_MoveBase_GetResult_Request_DataReaderView &);
            };
            class Sample_MoveBase_GetResult_Response_TypeSupportInterface;

            typedef Sample_MoveBase_GetResult_Response_TypeSupportInterface * Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Response_TypeSupportInterface> Sample_MoveBase_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Response_TypeSupportInterface> Sample_MoveBase_GetResult_Response_TypeSupportInterface_out;


            class Sample_MoveBase_GetResult_Response_DataWriter;

            typedef Sample_MoveBase_GetResult_Response_DataWriter * Sample_MoveBase_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Response_DataWriter> Sample_MoveBase_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Response_DataWriter> Sample_MoveBase_GetResult_Response_DataWriter_out;


            class Sample_MoveBase_GetResult_Response_DataReader;

            typedef Sample_MoveBase_GetResult_Response_DataReader * Sample_MoveBase_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Response_DataReader> Sample_MoveBase_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Response_DataReader> Sample_MoveBase_GetResult_Response_DataReader_out;


            class Sample_MoveBase_GetResult_Response_DataReaderView;

            typedef Sample_MoveBase_GetResult_Response_DataReaderView * Sample_MoveBase_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_MoveBase_GetResult_Response_DataReaderView> Sample_MoveBase_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_MoveBase_GetResult_Response_DataReaderView> Sample_MoveBase_GetResult_Response_DataReaderView_out;

            struct Sample_MoveBase_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_MoveBase_GetResult_Response_, struct Sample_MoveBase_GetResult_Response_Seq_uniq_> Sample_MoveBase_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_MoveBase_GetResult_Response_Seq> Sample_MoveBase_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_MoveBase_GetResult_Response_Seq> Sample_MoveBase_GetResult_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Response_TypeSupportInterface_var _var_type;

                static Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr _duplicate (Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_MoveBase_GetResult_Response_TypeSupportInterface () {};
                ~Sample_MoveBase_GetResult_Response_TypeSupportInterface () {};
            private:
                Sample_MoveBase_GetResult_Response_TypeSupportInterface (const Sample_MoveBase_GetResult_Response_TypeSupportInterface &);
                Sample_MoveBase_GetResult_Response_TypeSupportInterface & operator = (const Sample_MoveBase_GetResult_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_MoveBase_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Response_DataWriter_var _var_type;

                static Sample_MoveBase_GetResult_Response_DataWriter_ptr _duplicate (Sample_MoveBase_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_MoveBase_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_MoveBase_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_MoveBase_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_GetResult_Response_& instance_data) = 0;

            protected:
                Sample_MoveBase_GetResult_Response_DataWriter () {};
                ~Sample_MoveBase_GetResult_Response_DataWriter () {};
            private:
                Sample_MoveBase_GetResult_Response_DataWriter (const Sample_MoveBase_GetResult_Response_DataWriter &);
                Sample_MoveBase_GetResult_Response_DataWriter & operator = (const Sample_MoveBase_GetResult_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_MoveBase_GetResult_Response_DataReader_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Response_DataReader_var _var_type;

                static Sample_MoveBase_GetResult_Response_DataReader_ptr _duplicate (Sample_MoveBase_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_GetResult_Response_& instance) = 0;

            protected:
                Sample_MoveBase_GetResult_Response_DataReader () {};
                ~Sample_MoveBase_GetResult_Response_DataReader () {};
            private:
                Sample_MoveBase_GetResult_Response_DataReader (const Sample_MoveBase_GetResult_Response_DataReader &);
                Sample_MoveBase_GetResult_Response_DataReader & operator = (const Sample_MoveBase_GetResult_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_MoveBase_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_MoveBase_GetResult_Response_DataReaderView_var _var_type;

                static Sample_MoveBase_GetResult_Response_DataReaderView_ptr _duplicate (Sample_MoveBase_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_MoveBase_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_MoveBase_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_MoveBase_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_MoveBase_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_MoveBase_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_MoveBase_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_MoveBase_GetResult_Response_& instance) = 0;

            protected:
                Sample_MoveBase_GetResult_Response_DataReaderView () {};
                ~Sample_MoveBase_GetResult_Response_DataReaderView () {};
            private:
                Sample_MoveBase_GetResult_Response_DataReaderView (const Sample_MoveBase_GetResult_Response_DataReaderView &);
                Sample_MoveBase_GetResult_Response_DataReaderView & operator = (const Sample_MoveBase_GetResult_Response_DataReaderView &);
            };
            class MoveBase_Feedback_TypeSupportInterface;

            typedef MoveBase_Feedback_TypeSupportInterface * MoveBase_Feedback_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Feedback_TypeSupportInterface> MoveBase_Feedback_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_Feedback_TypeSupportInterface> MoveBase_Feedback_TypeSupportInterface_out;


            class MoveBase_Feedback_DataWriter;

            typedef MoveBase_Feedback_DataWriter * MoveBase_Feedback_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Feedback_DataWriter> MoveBase_Feedback_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_Feedback_DataWriter> MoveBase_Feedback_DataWriter_out;


            class MoveBase_Feedback_DataReader;

            typedef MoveBase_Feedback_DataReader * MoveBase_Feedback_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Feedback_DataReader> MoveBase_Feedback_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_Feedback_DataReader> MoveBase_Feedback_DataReader_out;


            class MoveBase_Feedback_DataReaderView;

            typedef MoveBase_Feedback_DataReaderView * MoveBase_Feedback_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_Feedback_DataReaderView> MoveBase_Feedback_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_Feedback_DataReaderView> MoveBase_Feedback_DataReaderView_out;

            struct MoveBase_Feedback_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MoveBase_Feedback_, struct MoveBase_Feedback_Seq_uniq_> MoveBase_Feedback_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_Feedback_Seq> MoveBase_Feedback_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_Feedback_Seq> MoveBase_Feedback_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Feedback_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_Feedback_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_Feedback_TypeSupportInterface_var _var_type;

                static MoveBase_Feedback_TypeSupportInterface_ptr _duplicate (MoveBase_Feedback_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Feedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Feedback_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_Feedback_TypeSupportInterface () {};
                ~MoveBase_Feedback_TypeSupportInterface () {};
            private:
                MoveBase_Feedback_TypeSupportInterface (const MoveBase_Feedback_TypeSupportInterface &);
                MoveBase_Feedback_TypeSupportInterface & operator = (const MoveBase_Feedback_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Feedback_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_Feedback_DataWriter_ptr _ptr_type;
                typedef MoveBase_Feedback_DataWriter_var _var_type;

                static MoveBase_Feedback_DataWriter_ptr _duplicate (MoveBase_Feedback_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Feedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Feedback_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_Feedback_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_Feedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Feedback_& instance_data) = 0;

            protected:
                MoveBase_Feedback_DataWriter () {};
                ~MoveBase_Feedback_DataWriter () {};
            private:
                MoveBase_Feedback_DataWriter (const MoveBase_Feedback_DataWriter &);
                MoveBase_Feedback_DataWriter & operator = (const MoveBase_Feedback_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Feedback_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_Feedback_DataReader_ptr _ptr_type;
                typedef MoveBase_Feedback_DataReader_var _var_type;

                static MoveBase_Feedback_DataReader_ptr _duplicate (MoveBase_Feedback_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Feedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Feedback_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Feedback_& instance) = 0;

            protected:
                MoveBase_Feedback_DataReader () {};
                ~MoveBase_Feedback_DataReader () {};
            private:
                MoveBase_Feedback_DataReader (const MoveBase_Feedback_DataReader &);
                MoveBase_Feedback_DataReader & operator = (const MoveBase_Feedback_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Feedback_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_Feedback_DataReaderView_ptr _ptr_type;
                typedef MoveBase_Feedback_DataReaderView_var _var_type;

                static MoveBase_Feedback_DataReaderView_ptr _duplicate (MoveBase_Feedback_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_Feedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_Feedback_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_Feedback_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_Feedback_& instance) = 0;

            protected:
                MoveBase_Feedback_DataReaderView () {};
                ~MoveBase_Feedback_DataReaderView () {};
            private:
                MoveBase_Feedback_DataReaderView (const MoveBase_Feedback_DataReaderView &);
                MoveBase_Feedback_DataReaderView & operator = (const MoveBase_Feedback_DataReaderView &);
            };
            class MoveBase_FeedbackMessage_TypeSupportInterface;

            typedef MoveBase_FeedbackMessage_TypeSupportInterface * MoveBase_FeedbackMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_FeedbackMessage_TypeSupportInterface> MoveBase_FeedbackMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MoveBase_FeedbackMessage_TypeSupportInterface> MoveBase_FeedbackMessage_TypeSupportInterface_out;


            class MoveBase_FeedbackMessage_DataWriter;

            typedef MoveBase_FeedbackMessage_DataWriter * MoveBase_FeedbackMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_FeedbackMessage_DataWriter> MoveBase_FeedbackMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < MoveBase_FeedbackMessage_DataWriter> MoveBase_FeedbackMessage_DataWriter_out;


            class MoveBase_FeedbackMessage_DataReader;

            typedef MoveBase_FeedbackMessage_DataReader * MoveBase_FeedbackMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_FeedbackMessage_DataReader> MoveBase_FeedbackMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < MoveBase_FeedbackMessage_DataReader> MoveBase_FeedbackMessage_DataReader_out;


            class MoveBase_FeedbackMessage_DataReaderView;

            typedef MoveBase_FeedbackMessage_DataReaderView * MoveBase_FeedbackMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MoveBase_FeedbackMessage_DataReaderView> MoveBase_FeedbackMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MoveBase_FeedbackMessage_DataReaderView> MoveBase_FeedbackMessage_DataReaderView_out;

            struct MoveBase_FeedbackMessage_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MoveBase_FeedbackMessage_, struct MoveBase_FeedbackMessage_Seq_uniq_> MoveBase_FeedbackMessage_Seq;
            typedef DDS_DCPSSequence_var < MoveBase_FeedbackMessage_Seq> MoveBase_FeedbackMessage_Seq_var;
            typedef DDS_DCPSSequence_out < MoveBase_FeedbackMessage_Seq> MoveBase_FeedbackMessage_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_FeedbackMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MoveBase_FeedbackMessage_TypeSupportInterface_ptr _ptr_type;
                typedef MoveBase_FeedbackMessage_TypeSupportInterface_var _var_type;

                static MoveBase_FeedbackMessage_TypeSupportInterface_ptr _duplicate (MoveBase_FeedbackMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_FeedbackMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_FeedbackMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MoveBase_FeedbackMessage_TypeSupportInterface () {};
                ~MoveBase_FeedbackMessage_TypeSupportInterface () {};
            private:
                MoveBase_FeedbackMessage_TypeSupportInterface (const MoveBase_FeedbackMessage_TypeSupportInterface &);
                MoveBase_FeedbackMessage_TypeSupportInterface & operator = (const MoveBase_FeedbackMessage_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_FeedbackMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MoveBase_FeedbackMessage_DataWriter_ptr _ptr_type;
                typedef MoveBase_FeedbackMessage_DataWriter_var _var_type;

                static MoveBase_FeedbackMessage_DataWriter_ptr _duplicate (MoveBase_FeedbackMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_FeedbackMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_FeedbackMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MoveBase_FeedbackMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MoveBase_FeedbackMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MoveBase_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MoveBase_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_FeedbackMessage_& instance_data) = 0;

            protected:
                MoveBase_FeedbackMessage_DataWriter () {};
                ~MoveBase_FeedbackMessage_DataWriter () {};
            private:
                MoveBase_FeedbackMessage_DataWriter (const MoveBase_FeedbackMessage_DataWriter &);
                MoveBase_FeedbackMessage_DataWriter & operator = (const MoveBase_FeedbackMessage_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_FeedbackMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MoveBase_FeedbackMessage_DataReader_ptr _ptr_type;
                typedef MoveBase_FeedbackMessage_DataReader_var _var_type;

                static MoveBase_FeedbackMessage_DataReader_ptr _duplicate (MoveBase_FeedbackMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_FeedbackMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_FeedbackMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_FeedbackMessage_& instance) = 0;

            protected:
                MoveBase_FeedbackMessage_DataReader () {};
                ~MoveBase_FeedbackMessage_DataReader () {};
            private:
                MoveBase_FeedbackMessage_DataReader (const MoveBase_FeedbackMessage_DataReader &);
                MoveBase_FeedbackMessage_DataReader & operator = (const MoveBase_FeedbackMessage_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_FeedbackMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MoveBase_FeedbackMessage_DataReaderView_ptr _ptr_type;
                typedef MoveBase_FeedbackMessage_DataReaderView_var _var_type;

                static MoveBase_FeedbackMessage_DataReaderView_ptr _duplicate (MoveBase_FeedbackMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MoveBase_FeedbackMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MoveBase_FeedbackMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MoveBase_FeedbackMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MoveBase_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MoveBase_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MoveBase_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MoveBase_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MoveBase_FeedbackMessage_& instance) = 0;

            protected:
                MoveBase_FeedbackMessage_DataReaderView () {};
                ~MoveBase_FeedbackMessage_DataReaderView () {};
            private:
                MoveBase_FeedbackMessage_DataReaderView (const MoveBase_FeedbackMessage_DataReaderView &);
                MoveBase_FeedbackMessage_DataReaderView & operator = (const MoveBase_FeedbackMessage_DataReaderView &);
            };
        }

    }

}

#endif
