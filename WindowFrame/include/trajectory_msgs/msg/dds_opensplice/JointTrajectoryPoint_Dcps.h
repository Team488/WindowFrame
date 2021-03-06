#ifndef _H_864A3EE91455100E5C0ACD1F5BA61F94_JointTrajectoryPoint_DCPS_H_
#define _H_864A3EE91455100E5C0ACD1F5BA61F94_JointTrajectoryPoint_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "JointTrajectoryPoint_.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class JointTrajectoryPoint_TypeSupportInterface;

            typedef JointTrajectoryPoint_TypeSupportInterface * JointTrajectoryPoint_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectoryPoint_TypeSupportInterface> JointTrajectoryPoint_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < JointTrajectoryPoint_TypeSupportInterface> JointTrajectoryPoint_TypeSupportInterface_out;


            class JointTrajectoryPoint_DataWriter;

            typedef JointTrajectoryPoint_DataWriter * JointTrajectoryPoint_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectoryPoint_DataWriter> JointTrajectoryPoint_DataWriter_var;
            typedef DDS_DCPSInterface_out < JointTrajectoryPoint_DataWriter> JointTrajectoryPoint_DataWriter_out;


            class JointTrajectoryPoint_DataReader;

            typedef JointTrajectoryPoint_DataReader * JointTrajectoryPoint_DataReader_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectoryPoint_DataReader> JointTrajectoryPoint_DataReader_var;
            typedef DDS_DCPSInterface_out < JointTrajectoryPoint_DataReader> JointTrajectoryPoint_DataReader_out;


            class JointTrajectoryPoint_DataReaderView;

            typedef JointTrajectoryPoint_DataReaderView * JointTrajectoryPoint_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < JointTrajectoryPoint_DataReaderView> JointTrajectoryPoint_DataReaderView_var;
            typedef DDS_DCPSInterface_out < JointTrajectoryPoint_DataReaderView> JointTrajectoryPoint_DataReaderView_out;

            struct JointTrajectoryPoint_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < JointTrajectoryPoint_, struct JointTrajectoryPoint_Seq_uniq_> JointTrajectoryPoint_Seq;
            typedef DDS_DCPSSequence_var < JointTrajectoryPoint_Seq> JointTrajectoryPoint_Seq_var;
            typedef DDS_DCPSSequence_out < JointTrajectoryPoint_Seq> JointTrajectoryPoint_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectoryPoint_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef JointTrajectoryPoint_TypeSupportInterface_ptr _ptr_type;
                typedef JointTrajectoryPoint_TypeSupportInterface_var _var_type;

                static JointTrajectoryPoint_TypeSupportInterface_ptr _duplicate (JointTrajectoryPoint_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectoryPoint_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectoryPoint_TypeSupportInterface_ptr _this () { return this; }


            protected:
                JointTrajectoryPoint_TypeSupportInterface () {};
                ~JointTrajectoryPoint_TypeSupportInterface () {};
            private:
                JointTrajectoryPoint_TypeSupportInterface (const JointTrajectoryPoint_TypeSupportInterface &);
                JointTrajectoryPoint_TypeSupportInterface & operator = (const JointTrajectoryPoint_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectoryPoint_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef JointTrajectoryPoint_DataWriter_ptr _ptr_type;
                typedef JointTrajectoryPoint_DataWriter_var _var_type;

                static JointTrajectoryPoint_DataWriter_ptr _duplicate (JointTrajectoryPoint_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectoryPoint_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectoryPoint_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const JointTrajectoryPoint_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const JointTrajectoryPoint_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const JointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (JointTrajectoryPoint_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointTrajectoryPoint_& instance_data) = 0;

            protected:
                JointTrajectoryPoint_DataWriter () {};
                ~JointTrajectoryPoint_DataWriter () {};
            private:
                JointTrajectoryPoint_DataWriter (const JointTrajectoryPoint_DataWriter &);
                JointTrajectoryPoint_DataWriter & operator = (const JointTrajectoryPoint_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectoryPoint_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef JointTrajectoryPoint_DataReader_ptr _ptr_type;
                typedef JointTrajectoryPoint_DataReader_var _var_type;

                static JointTrajectoryPoint_DataReader_ptr _duplicate (JointTrajectoryPoint_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectoryPoint_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectoryPoint_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointTrajectoryPoint_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointTrajectoryPoint_& instance) = 0;

            protected:
                JointTrajectoryPoint_DataReader () {};
                ~JointTrajectoryPoint_DataReader () {};
            private:
                JointTrajectoryPoint_DataReader (const JointTrajectoryPoint_DataReader &);
                JointTrajectoryPoint_DataReader & operator = (const JointTrajectoryPoint_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs JointTrajectoryPoint_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef JointTrajectoryPoint_DataReaderView_ptr _ptr_type;
                typedef JointTrajectoryPoint_DataReaderView_var _var_type;

                static JointTrajectoryPoint_DataReaderView_ptr _duplicate (JointTrajectoryPoint_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static JointTrajectoryPoint_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static JointTrajectoryPoint_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                JointTrajectoryPoint_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (JointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (JointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (JointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (JointTrajectoryPoint_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const JointTrajectoryPoint_& instance) = 0;

            protected:
                JointTrajectoryPoint_DataReaderView () {};
                ~JointTrajectoryPoint_DataReaderView () {};
            private:
                JointTrajectoryPoint_DataReaderView (const JointTrajectoryPoint_DataReaderView &);
                JointTrajectoryPoint_DataReaderView & operator = (const JointTrajectoryPoint_DataReaderView &);
            };
        }

    }

}

#endif
