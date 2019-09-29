#ifndef _H_13CE6CE8B53C0C28A443E4AA62DA2C27_JointCommand_DCPS_H_
#define _H_13CE6CE8B53C0C28A443E4AA62DA2C27_JointCommand_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "JointCommand_.h"

#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace pendulum_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class JointCommand_TypeSupportInterface;

            typedef JointCommand_TypeSupportInterface * JointCommand_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < JointCommand_TypeSupportInterface> JointCommand_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < JointCommand_TypeSupportInterface> JointCommand_TypeSupportInterface_out;


            class JointCommand_DataWriter;

            typedef JointCommand_DataWriter * JointCommand_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < JointCommand_DataWriter> JointCommand_DataWriter_var;
            typedef DDS_DCPSInterface_out < JointCommand_DataWriter> JointCommand_DataWriter_out;


            class JointCommand_DataReader;

            typedef JointCommand_DataReader * JointCommand_DataReader_ptr;
            typedef DDS_DCPSInterface_var < JointCommand_DataReader> JointCommand_DataReader_var;
            typedef DDS_DCPSInterface_out < JointCommand_DataReader> JointCommand_DataReader_out;


            class JointCommand_DataReaderView;

            typedef JointCommand_DataReaderView * JointCommand_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < JointCommand_DataReaderView> JointCommand_DataReaderView_var;
            typedef DDS_DCPSInterface_out < JointCommand_DataReaderView> JointCommand_DataReaderView_out;

            struct JointCommand_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < JointCommand_, struct JointCommand_Seq_uniq_> JointCommand_Seq;
            typedef DDS_DCPSSequence_var < JointCommand_Seq> JointCommand_Seq_var;
            typedef DDS_DCPSSequence_out < JointCommand_Seq> JointCommand_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointCommand_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef JointCommand_TypeSupportInterface_ptr _ptr_type;
                typedef JointCommand_TypeSupportInterface_var _var_type;

                static JointCommand_TypeSupportInterface_ptr _duplicate (JointCommand_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointCommand_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static JointCommand_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointCommand_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                JointCommand_TypeSupportInterface_ptr _this () { return this; }


            protected:
                JointCommand_TypeSupportInterface () {};
                ~JointCommand_TypeSupportInterface () {};
            private:
                JointCommand_TypeSupportInterface (const JointCommand_TypeSupportInterface &);
                JointCommand_TypeSupportInterface & operator = (const JointCommand_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointCommand_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef JointCommand_DataWriter_ptr _ptr_type;
                typedef JointCommand_DataWriter_var _var_type;

                static JointCommand_DataWriter_ptr _duplicate (JointCommand_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointCommand_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static JointCommand_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointCommand_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                JointCommand_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const JointCommand_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const JointCommand_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const JointCommand_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const JointCommand_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const JointCommand_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const JointCommand_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const JointCommand_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const JointCommand_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const JointCommand_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const JointCommand_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (JointCommand_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointCommand_& instance_data) = 0;

            protected:
                JointCommand_DataWriter () {};
                ~JointCommand_DataWriter () {};
            private:
                JointCommand_DataWriter (const JointCommand_DataWriter &);
                JointCommand_DataWriter & operator = (const JointCommand_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointCommand_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef JointCommand_DataReader_ptr _ptr_type;
                typedef JointCommand_DataReader_var _var_type;

                static JointCommand_DataReader_ptr _duplicate (JointCommand_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointCommand_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static JointCommand_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointCommand_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                JointCommand_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointCommand_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointCommand_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointCommand_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointCommand_& instance) = 0;

            protected:
                JointCommand_DataReader () {};
                ~JointCommand_DataReader () {};
            private:
                JointCommand_DataReader (const JointCommand_DataReader &);
                JointCommand_DataReader & operator = (const JointCommand_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointCommand_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef JointCommand_DataReaderView_ptr _ptr_type;
                typedef JointCommand_DataReaderView_var _var_type;

                static JointCommand_DataReaderView_ptr _duplicate (JointCommand_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointCommand_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static JointCommand_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointCommand_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                JointCommand_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointCommand_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointCommand_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointCommand_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointCommand_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointCommand_& instance) = 0;

            protected:
                JointCommand_DataReaderView () {};
                ~JointCommand_DataReaderView () {};
            private:
                JointCommand_DataReaderView (const JointCommand_DataReaderView &);
                JointCommand_DataReaderView & operator = (const JointCommand_DataReaderView &);
            };
        }

    }

}

#endif
