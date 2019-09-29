#ifndef _H_220763046B33429D96FAB2CF7DC82818_RttestResults_DCPS_H_
#define _H_220763046B33429D96FAB2CF7DC82818_RttestResults_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "RttestResults_.h"

#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace pendulum_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class RttestResults_TypeSupportInterface;

            typedef RttestResults_TypeSupportInterface * RttestResults_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RttestResults_TypeSupportInterface> RttestResults_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RttestResults_TypeSupportInterface> RttestResults_TypeSupportInterface_out;


            class RttestResults_DataWriter;

            typedef RttestResults_DataWriter * RttestResults_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RttestResults_DataWriter> RttestResults_DataWriter_var;
            typedef DDS_DCPSInterface_out < RttestResults_DataWriter> RttestResults_DataWriter_out;


            class RttestResults_DataReader;

            typedef RttestResults_DataReader * RttestResults_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RttestResults_DataReader> RttestResults_DataReader_var;
            typedef DDS_DCPSInterface_out < RttestResults_DataReader> RttestResults_DataReader_out;


            class RttestResults_DataReaderView;

            typedef RttestResults_DataReaderView * RttestResults_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RttestResults_DataReaderView> RttestResults_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RttestResults_DataReaderView> RttestResults_DataReaderView_out;

            struct RttestResults_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RttestResults_, struct RttestResults_Seq_uniq_> RttestResults_Seq;
            typedef DDS_DCPSSequence_var < RttestResults_Seq> RttestResults_Seq_var;
            typedef DDS_DCPSSequence_out < RttestResults_Seq> RttestResults_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs RttestResults_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RttestResults_TypeSupportInterface_ptr _ptr_type;
                typedef RttestResults_TypeSupportInterface_var _var_type;

                static RttestResults_TypeSupportInterface_ptr _duplicate (RttestResults_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RttestResults_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RttestResults_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RttestResults_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RttestResults_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RttestResults_TypeSupportInterface () {};
                ~RttestResults_TypeSupportInterface () {};
            private:
                RttestResults_TypeSupportInterface (const RttestResults_TypeSupportInterface &);
                RttestResults_TypeSupportInterface & operator = (const RttestResults_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs RttestResults_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RttestResults_DataWriter_ptr _ptr_type;
                typedef RttestResults_DataWriter_var _var_type;

                static RttestResults_DataWriter_ptr _duplicate (RttestResults_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RttestResults_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RttestResults_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RttestResults_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RttestResults_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RttestResults_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RttestResults_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RttestResults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RttestResults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RttestResults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RttestResults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RttestResults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RttestResults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RttestResults_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RttestResults_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RttestResults_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RttestResults_& instance_data) = 0;

            protected:
                RttestResults_DataWriter () {};
                ~RttestResults_DataWriter () {};
            private:
                RttestResults_DataWriter (const RttestResults_DataWriter &);
                RttestResults_DataWriter & operator = (const RttestResults_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs RttestResults_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RttestResults_DataReader_ptr _ptr_type;
                typedef RttestResults_DataReader_var _var_type;

                static RttestResults_DataReader_ptr _duplicate (RttestResults_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RttestResults_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RttestResults_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RttestResults_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RttestResults_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RttestResults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RttestResults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RttestResults_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RttestResults_& instance) = 0;

            protected:
                RttestResults_DataReader () {};
                ~RttestResults_DataReader () {};
            private:
                RttestResults_DataReader (const RttestResults_DataReader &);
                RttestResults_DataReader & operator = (const RttestResults_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs RttestResults_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RttestResults_DataReaderView_ptr _ptr_type;
                typedef RttestResults_DataReaderView_var _var_type;

                static RttestResults_DataReaderView_ptr _duplicate (RttestResults_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RttestResults_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RttestResults_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RttestResults_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RttestResults_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RttestResults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RttestResults_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RttestResults_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RttestResults_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RttestResults_& instance) = 0;

            protected:
                RttestResults_DataReaderView () {};
                ~RttestResults_DataReaderView () {};
            private:
                RttestResults_DataReaderView (const RttestResults_DataReaderView &);
                RttestResults_DataReaderView & operator = (const RttestResults_DataReaderView &);
            };
        }

    }

}

#endif
