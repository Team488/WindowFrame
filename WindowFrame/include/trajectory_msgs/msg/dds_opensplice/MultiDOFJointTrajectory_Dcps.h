#ifndef _H_B152D2F2171A732D21098A2423314702_MultiDOFJointTrajectory_DCPS_H_
#define _H_B152D2F2171A732D21098A2423314702_MultiDOFJointTrajectory_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MultiDOFJointTrajectory_.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MultiDOFJointTrajectory_TypeSupportInterface;

            typedef MultiDOFJointTrajectory_TypeSupportInterface * MultiDOFJointTrajectory_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectory_TypeSupportInterface> MultiDOFJointTrajectory_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectory_TypeSupportInterface> MultiDOFJointTrajectory_TypeSupportInterface_out;


            class MultiDOFJointTrajectory_DataWriter;

            typedef MultiDOFJointTrajectory_DataWriter * MultiDOFJointTrajectory_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectory_DataWriter> MultiDOFJointTrajectory_DataWriter_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectory_DataWriter> MultiDOFJointTrajectory_DataWriter_out;


            class MultiDOFJointTrajectory_DataReader;

            typedef MultiDOFJointTrajectory_DataReader * MultiDOFJointTrajectory_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectory_DataReader> MultiDOFJointTrajectory_DataReader_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectory_DataReader> MultiDOFJointTrajectory_DataReader_out;


            class MultiDOFJointTrajectory_DataReaderView;

            typedef MultiDOFJointTrajectory_DataReaderView * MultiDOFJointTrajectory_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectory_DataReaderView> MultiDOFJointTrajectory_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectory_DataReaderView> MultiDOFJointTrajectory_DataReaderView_out;

            struct MultiDOFJointTrajectory_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MultiDOFJointTrajectory_, struct MultiDOFJointTrajectory_Seq_uniq_> MultiDOFJointTrajectory_Seq;
            typedef DDS_DCPSSequence_var < MultiDOFJointTrajectory_Seq> MultiDOFJointTrajectory_Seq_var;
            typedef DDS_DCPSSequence_out < MultiDOFJointTrajectory_Seq> MultiDOFJointTrajectory_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectory_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MultiDOFJointTrajectory_TypeSupportInterface_ptr _ptr_type;
                typedef MultiDOFJointTrajectory_TypeSupportInterface_var _var_type;

                static MultiDOFJointTrajectory_TypeSupportInterface_ptr _duplicate (MultiDOFJointTrajectory_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectory_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectory_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MultiDOFJointTrajectory_TypeSupportInterface () {};
                ~MultiDOFJointTrajectory_TypeSupportInterface () {};
            private:
                MultiDOFJointTrajectory_TypeSupportInterface (const MultiDOFJointTrajectory_TypeSupportInterface &);
                MultiDOFJointTrajectory_TypeSupportInterface & operator = (const MultiDOFJointTrajectory_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectory_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MultiDOFJointTrajectory_DataWriter_ptr _ptr_type;
                typedef MultiDOFJointTrajectory_DataWriter_var _var_type;

                static MultiDOFJointTrajectory_DataWriter_ptr _duplicate (MultiDOFJointTrajectory_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectory_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectory_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MultiDOFJointTrajectory_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MultiDOFJointTrajectory_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MultiDOFJointTrajectory_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointTrajectory_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointTrajectory_& instance_data) = 0;

            protected:
                MultiDOFJointTrajectory_DataWriter () {};
                ~MultiDOFJointTrajectory_DataWriter () {};
            private:
                MultiDOFJointTrajectory_DataWriter (const MultiDOFJointTrajectory_DataWriter &);
                MultiDOFJointTrajectory_DataWriter & operator = (const MultiDOFJointTrajectory_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectory_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MultiDOFJointTrajectory_DataReader_ptr _ptr_type;
                typedef MultiDOFJointTrajectory_DataReader_var _var_type;

                static MultiDOFJointTrajectory_DataReader_ptr _duplicate (MultiDOFJointTrajectory_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectory_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectory_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiDOFJointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiDOFJointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointTrajectory_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointTrajectory_& instance) = 0;

            protected:
                MultiDOFJointTrajectory_DataReader () {};
                ~MultiDOFJointTrajectory_DataReader () {};
            private:
                MultiDOFJointTrajectory_DataReader (const MultiDOFJointTrajectory_DataReader &);
                MultiDOFJointTrajectory_DataReader & operator = (const MultiDOFJointTrajectory_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectory_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MultiDOFJointTrajectory_DataReaderView_ptr _ptr_type;
                typedef MultiDOFJointTrajectory_DataReaderView_var _var_type;

                static MultiDOFJointTrajectory_DataReaderView_ptr _duplicate (MultiDOFJointTrajectory_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectory_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectory_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectory_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiDOFJointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiDOFJointTrajectory_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiDOFJointTrajectory_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointTrajectory_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointTrajectory_& instance) = 0;

            protected:
                MultiDOFJointTrajectory_DataReaderView () {};
                ~MultiDOFJointTrajectory_DataReaderView () {};
            private:
                MultiDOFJointTrajectory_DataReaderView (const MultiDOFJointTrajectory_DataReaderView &);
                MultiDOFJointTrajectory_DataReaderView & operator = (const MultiDOFJointTrajectory_DataReaderView &);
            };
        }

    }

}

#endif
