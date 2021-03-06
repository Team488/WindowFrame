#ifndef _H_DAB16650FE126AF02A6AC83532021C79_MultiDOFJointTrajectoryPoint_DCPS_H_
#define _H_DAB16650FE126AF02A6AC83532021C79_MultiDOFJointTrajectoryPoint_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MultiDOFJointTrajectoryPoint_.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace trajectory_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MultiDOFJointTrajectoryPoint_TypeSupportInterface;

            typedef MultiDOFJointTrajectoryPoint_TypeSupportInterface * MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectoryPoint_TypeSupportInterface> MultiDOFJointTrajectoryPoint_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectoryPoint_TypeSupportInterface> MultiDOFJointTrajectoryPoint_TypeSupportInterface_out;


            class MultiDOFJointTrajectoryPoint_DataWriter;

            typedef MultiDOFJointTrajectoryPoint_DataWriter * MultiDOFJointTrajectoryPoint_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectoryPoint_DataWriter> MultiDOFJointTrajectoryPoint_DataWriter_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectoryPoint_DataWriter> MultiDOFJointTrajectoryPoint_DataWriter_out;


            class MultiDOFJointTrajectoryPoint_DataReader;

            typedef MultiDOFJointTrajectoryPoint_DataReader * MultiDOFJointTrajectoryPoint_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectoryPoint_DataReader> MultiDOFJointTrajectoryPoint_DataReader_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectoryPoint_DataReader> MultiDOFJointTrajectoryPoint_DataReader_out;


            class MultiDOFJointTrajectoryPoint_DataReaderView;

            typedef MultiDOFJointTrajectoryPoint_DataReaderView * MultiDOFJointTrajectoryPoint_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointTrajectoryPoint_DataReaderView> MultiDOFJointTrajectoryPoint_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointTrajectoryPoint_DataReaderView> MultiDOFJointTrajectoryPoint_DataReaderView_out;

            struct MultiDOFJointTrajectoryPoint_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MultiDOFJointTrajectoryPoint_, struct MultiDOFJointTrajectoryPoint_Seq_uniq_> MultiDOFJointTrajectoryPoint_Seq;
            typedef DDS_DCPSSequence_var < MultiDOFJointTrajectoryPoint_Seq> MultiDOFJointTrajectoryPoint_Seq_var;
            typedef DDS_DCPSSequence_out < MultiDOFJointTrajectoryPoint_Seq> MultiDOFJointTrajectoryPoint_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectoryPoint_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr _ptr_type;
                typedef MultiDOFJointTrajectoryPoint_TypeSupportInterface_var _var_type;

                static MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr _duplicate (MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectoryPoint_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MultiDOFJointTrajectoryPoint_TypeSupportInterface () {};
                ~MultiDOFJointTrajectoryPoint_TypeSupportInterface () {};
            private:
                MultiDOFJointTrajectoryPoint_TypeSupportInterface (const MultiDOFJointTrajectoryPoint_TypeSupportInterface &);
                MultiDOFJointTrajectoryPoint_TypeSupportInterface & operator = (const MultiDOFJointTrajectoryPoint_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectoryPoint_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MultiDOFJointTrajectoryPoint_DataWriter_ptr _ptr_type;
                typedef MultiDOFJointTrajectoryPoint_DataWriter_var _var_type;

                static MultiDOFJointTrajectoryPoint_DataWriter_ptr _duplicate (MultiDOFJointTrajectoryPoint_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectoryPoint_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectoryPoint_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MultiDOFJointTrajectoryPoint_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MultiDOFJointTrajectoryPoint_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MultiDOFJointTrajectoryPoint_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointTrajectoryPoint_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointTrajectoryPoint_& instance_data) = 0;

            protected:
                MultiDOFJointTrajectoryPoint_DataWriter () {};
                ~MultiDOFJointTrajectoryPoint_DataWriter () {};
            private:
                MultiDOFJointTrajectoryPoint_DataWriter (const MultiDOFJointTrajectoryPoint_DataWriter &);
                MultiDOFJointTrajectoryPoint_DataWriter & operator = (const MultiDOFJointTrajectoryPoint_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectoryPoint_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MultiDOFJointTrajectoryPoint_DataReader_ptr _ptr_type;
                typedef MultiDOFJointTrajectoryPoint_DataReader_var _var_type;

                static MultiDOFJointTrajectoryPoint_DataReader_ptr _duplicate (MultiDOFJointTrajectoryPoint_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectoryPoint_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectoryPoint_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiDOFJointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiDOFJointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointTrajectoryPoint_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointTrajectoryPoint_& instance) = 0;

            protected:
                MultiDOFJointTrajectoryPoint_DataReader () {};
                ~MultiDOFJointTrajectoryPoint_DataReader () {};
            private:
                MultiDOFJointTrajectoryPoint_DataReader (const MultiDOFJointTrajectoryPoint_DataReader &);
                MultiDOFJointTrajectoryPoint_DataReader & operator = (const MultiDOFJointTrajectoryPoint_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs MultiDOFJointTrajectoryPoint_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MultiDOFJointTrajectoryPoint_DataReaderView_ptr _ptr_type;
                typedef MultiDOFJointTrajectoryPoint_DataReaderView_var _var_type;

                static MultiDOFJointTrajectoryPoint_DataReaderView_ptr _duplicate (MultiDOFJointTrajectoryPoint_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointTrajectoryPoint_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointTrajectoryPoint_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointTrajectoryPoint_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiDOFJointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiDOFJointTrajectoryPoint_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiDOFJointTrajectoryPoint_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointTrajectoryPoint_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointTrajectoryPoint_& instance) = 0;

            protected:
                MultiDOFJointTrajectoryPoint_DataReaderView () {};
                ~MultiDOFJointTrajectoryPoint_DataReaderView () {};
            private:
                MultiDOFJointTrajectoryPoint_DataReaderView (const MultiDOFJointTrajectoryPoint_DataReaderView &);
                MultiDOFJointTrajectoryPoint_DataReaderView & operator = (const MultiDOFJointTrajectoryPoint_DataReaderView &);
            };
        }

    }

}

#endif
