#ifndef _H_8B580ADF699999A626036F8E85341BD2_JointState_DCPS_H_
#define _H_8B580ADF699999A626036F8E85341BD2_JointState_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "JointState_.h"

#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace pendulum_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class JointState_TypeSupportInterface;

            typedef JointState_TypeSupportInterface * JointState_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < JointState_TypeSupportInterface> JointState_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < JointState_TypeSupportInterface> JointState_TypeSupportInterface_out;


            class JointState_DataWriter;

            typedef JointState_DataWriter * JointState_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < JointState_DataWriter> JointState_DataWriter_var;
            typedef DDS_DCPSInterface_out < JointState_DataWriter> JointState_DataWriter_out;


            class JointState_DataReader;

            typedef JointState_DataReader * JointState_DataReader_ptr;
            typedef DDS_DCPSInterface_var < JointState_DataReader> JointState_DataReader_var;
            typedef DDS_DCPSInterface_out < JointState_DataReader> JointState_DataReader_out;


            class JointState_DataReaderView;

            typedef JointState_DataReaderView * JointState_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < JointState_DataReaderView> JointState_DataReaderView_var;
            typedef DDS_DCPSInterface_out < JointState_DataReaderView> JointState_DataReaderView_out;

            struct JointState_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < JointState_, struct JointState_Seq_uniq_> JointState_Seq;
            typedef DDS_DCPSSequence_var < JointState_Seq> JointState_Seq_var;
            typedef DDS_DCPSSequence_out < JointState_Seq> JointState_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointState_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef JointState_TypeSupportInterface_ptr _ptr_type;
                typedef JointState_TypeSupportInterface_var _var_type;

                static JointState_TypeSupportInterface_ptr _duplicate (JointState_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointState_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static JointState_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointState_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                JointState_TypeSupportInterface_ptr _this () { return this; }


            protected:
                JointState_TypeSupportInterface () {};
                ~JointState_TypeSupportInterface () {};
            private:
                JointState_TypeSupportInterface (const JointState_TypeSupportInterface &);
                JointState_TypeSupportInterface & operator = (const JointState_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointState_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef JointState_DataWriter_ptr _ptr_type;
                typedef JointState_DataWriter_var _var_type;

                static JointState_DataWriter_ptr _duplicate (JointState_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointState_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static JointState_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointState_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                JointState_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const JointState_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const JointState_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const JointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const JointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const JointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const JointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const JointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const JointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const JointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const JointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (JointState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointState_& instance_data) = 0;

            protected:
                JointState_DataWriter () {};
                ~JointState_DataWriter () {};
            private:
                JointState_DataWriter (const JointState_DataWriter &);
                JointState_DataWriter & operator = (const JointState_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointState_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef JointState_DataReader_ptr _ptr_type;
                typedef JointState_DataReader_var _var_type;

                static JointState_DataReader_ptr _duplicate (JointState_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointState_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static JointState_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointState_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                JointState_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointState_& instance) = 0;

            protected:
                JointState_DataReader () {};
                ~JointState_DataReader () {};
            private:
                JointState_DataReader (const JointState_DataReader &);
                JointState_DataReader & operator = (const JointState_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointState_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef JointState_DataReaderView_ptr _ptr_type;
                typedef JointState_DataReaderView_var _var_type;

                static JointState_DataReaderView_ptr _duplicate (JointState_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointState_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static JointState_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointState_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                JointState_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointState_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointState_& instance) = 0;

            protected:
                JointState_DataReaderView () {};
                ~JointState_DataReaderView () {};
            private:
                JointState_DataReaderView (const JointState_DataReaderView &);
                JointState_DataReaderView & operator = (const JointState_DataReaderView &);
            };
        }

    }

}

#endif
