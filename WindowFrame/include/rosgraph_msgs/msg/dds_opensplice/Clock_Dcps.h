#ifndef _H_BCBFA0D31094BEE12E75322E7CC147C5_Clock_DCPS_H_
#define _H_BCBFA0D31094BEE12E75322E7CC147C5_Clock_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Clock_.h"

#include "rosgraph_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace rosgraph_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Clock_TypeSupportInterface;

            typedef Clock_TypeSupportInterface * Clock_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Clock_TypeSupportInterface> Clock_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Clock_TypeSupportInterface> Clock_TypeSupportInterface_out;


            class Clock_DataWriter;

            typedef Clock_DataWriter * Clock_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Clock_DataWriter> Clock_DataWriter_var;
            typedef DDS_DCPSInterface_out < Clock_DataWriter> Clock_DataWriter_out;


            class Clock_DataReader;

            typedef Clock_DataReader * Clock_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Clock_DataReader> Clock_DataReader_var;
            typedef DDS_DCPSInterface_out < Clock_DataReader> Clock_DataReader_out;


            class Clock_DataReaderView;

            typedef Clock_DataReaderView * Clock_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Clock_DataReaderView> Clock_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Clock_DataReaderView> Clock_DataReaderView_out;

            struct Clock_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Clock_, struct Clock_Seq_uniq_> Clock_Seq;
            typedef DDS_DCPSSequence_var < Clock_Seq> Clock_Seq_var;
            typedef DDS_DCPSSequence_out < Clock_Seq> Clock_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs Clock_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Clock_TypeSupportInterface_ptr _ptr_type;
                typedef Clock_TypeSupportInterface_var _var_type;

                static Clock_TypeSupportInterface_ptr _duplicate (Clock_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Clock_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Clock_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Clock_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Clock_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Clock_TypeSupportInterface () {};
                ~Clock_TypeSupportInterface () {};
            private:
                Clock_TypeSupportInterface (const Clock_TypeSupportInterface &);
                Clock_TypeSupportInterface & operator = (const Clock_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs Clock_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Clock_DataWriter_ptr _ptr_type;
                typedef Clock_DataWriter_var _var_type;

                static Clock_DataWriter_ptr _duplicate (Clock_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Clock_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Clock_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Clock_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Clock_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Clock_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Clock_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Clock_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Clock_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Clock_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Clock_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Clock_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Clock_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Clock_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Clock_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Clock_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Clock_& instance_data) = 0;

            protected:
                Clock_DataWriter () {};
                ~Clock_DataWriter () {};
            private:
                Clock_DataWriter (const Clock_DataWriter &);
                Clock_DataWriter & operator = (const Clock_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs Clock_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Clock_DataReader_ptr _ptr_type;
                typedef Clock_DataReader_var _var_type;

                static Clock_DataReader_ptr _duplicate (Clock_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Clock_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Clock_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Clock_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Clock_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Clock_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Clock_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Clock_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Clock_& instance) = 0;

            protected:
                Clock_DataReader () {};
                ~Clock_DataReader () {};
            private:
                Clock_DataReader (const Clock_DataReader &);
                Clock_DataReader & operator = (const Clock_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs Clock_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Clock_DataReaderView_ptr _ptr_type;
                typedef Clock_DataReaderView_var _var_type;

                static Clock_DataReaderView_ptr _duplicate (Clock_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Clock_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Clock_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Clock_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Clock_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Clock_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Clock_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Clock_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Clock_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Clock_& instance) = 0;

            protected:
                Clock_DataReaderView () {};
                ~Clock_DataReaderView () {};
            private:
                Clock_DataReaderView (const Clock_DataReaderView &);
                Clock_DataReaderView & operator = (const Clock_DataReaderView &);
            };
        }

    }

}

#endif
