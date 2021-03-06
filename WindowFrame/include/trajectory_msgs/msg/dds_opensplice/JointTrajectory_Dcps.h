#ifndef _H_EFD393BA96B0DA08F54B95D5F2BDEE15_JointTrajectory_DCPS_H_
#define _H_EFD393BA96B0DA08F54B95D5F2BDEE15_JointTrajectory_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "JointTrajectory_.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class JointTrajectory_TypeSupportInterface;

            typedef JointTrajectory_TypeSupportInterface * JointTrajectory_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectory_TypeSupportInterface> JointTrajectory_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < JointTrajectory_TypeSupportInterface> JointTrajectory_TypeSupportInterface_out;


            class JointTrajectory_DataWriter;

            typedef JointTrajectory_DataWriter * JointTrajectory_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectory_DataWriter> JointTrajectory_DataWriter_var;
            typedef DDS_DCPSInterface_out < JointTrajectory_DataWriter> JointTrajectory_DataWriter_out;


            class JointTrajectory_DataReader;

            typedef JointTrajectory_DataReader * JointTrajectory_DataReader_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectory_DataReader> JointTrajectory_DataReader_var;
            typedef DDS_DCPSInterface_out < JointTrajectory_DataReader> JointTrajectory_DataReader_out;


            class JointTrajectory_DataReaderView;

            typedef JointTrajectory_DataReaderView * JointTrajectory_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectory_DataReaderView> JointTrajectory_DataReaderView_var;
            typedef DDS_DCPSInterface_out < JointTrajectory_DataReaderView> JointTrajectory_DataReaderView_out;

            struct JointTrajectory_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < JointTrajectory_, struct JointTrajectory_Seq_uniq_> JointTrajectory_Seq;
            typedef DDS_DCPSSequence_var < JointTrajectory_Seq> JointTrajectory_Seq_var;
            typedef DDS_DCPSSequence_out < JointTrajectory_Seq> JointTrajectory_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectory_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef JointTrajectory_TypeSupportInterface_ptr _ptr_type;
                typedef JointTrajectory_TypeSupportInterface_var _var_type;

                static JointTrajectory_TypeSupportInterface_ptr _duplicate (JointTrajectory_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectory_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectory_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectory_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectory_TypeSupportInterface_ptr _this () { return this; }


            protected:
                JointTrajectory_TypeSupportInterface () {};
                ~JointTrajectory_TypeSupportInterface () {};
            private:
                JointTrajectory_TypeSupportInterface (const JointTrajectory_TypeSupportInterface &);
                JointTrajectory_TypeSupportInterface & operator = (const JointTrajectory_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectory_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef JointTrajectory_DataWriter_ptr _ptr_type;
                typedef JointTrajectory_DataWriter_var _var_type;

                static JointTrajectory_DataWriter_ptr _duplicate (JointTrajectory_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectory_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectory_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectory_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectory_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const JointTrajectory_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const JointTrajectory_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const JointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const JointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const JointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const JointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const JointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const JointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const JointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const JointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (JointTrajectory_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointTrajectory_& instance_data) = 0;

            protected:
                JointTrajectory_DataWriter () {};
                ~JointTrajectory_DataWriter () {};
            private:
                JointTrajectory_DataWriter (const JointTrajectory_DataWriter &);
                JointTrajectory_DataWriter & operator = (const JointTrajectory_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectory_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef JointTrajectory_DataReader_ptr _ptr_type;
                typedef JointTrajectory_DataReader_var _var_type;

                static JointTrajectory_DataReader_ptr _duplicate (JointTrajectory_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectory_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectory_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectory_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectory_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointTrajectory_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointTrajectory_& instance) = 0;

            protected:
                JointTrajectory_DataReader () {};
                ~JointTrajectory_DataReader () {};
            private:
                JointTrajectory_DataReader (const JointTrajectory_DataReader &);
                JointTrajectory_DataReader & operator = (const JointTrajectory_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectory_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef JointTrajectory_DataReaderView_ptr _ptr_type;
                typedef JointTrajectory_DataReaderView_var _var_type;

                static JointTrajectory_DataReaderView_ptr _duplicate (JointTrajectory_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectory_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectory_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectory_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectory_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointTrajectory_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointTrajectory_& instance) = 0;

            protected:
                JointTrajectory_DataReaderView () {};
                ~JointTrajectory_DataReaderView () {};
            private:
                JointTrajectory_DataReaderView (const JointTrajectory_DataReaderView &);
                JointTrajectory_DataReaderView & operator = (const JointTrajectory_DataReaderView &);
            };
        }

    }

}

#endif
