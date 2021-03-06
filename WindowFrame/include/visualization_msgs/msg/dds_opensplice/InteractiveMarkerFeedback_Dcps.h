#ifndef _H_91C4C85E0A888E2015DDB9F9725DC26F_InteractiveMarkerFeedback_DCPS_H_
#define _H_91C4C85E0A888E2015DDB9F9725DC26F_InteractiveMarkerFeedback_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InteractiveMarkerFeedback_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InteractiveMarkerFeedback_TypeSupportInterface;

            typedef InteractiveMarkerFeedback_TypeSupportInterface * InteractiveMarkerFeedback_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerFeedback_TypeSupportInterface> InteractiveMarkerFeedback_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerFeedback_TypeSupportInterface> InteractiveMarkerFeedback_TypeSupportInterface_out;


            class InteractiveMarkerFeedback_DataWriter;

            typedef InteractiveMarkerFeedback_DataWriter * InteractiveMarkerFeedback_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerFeedback_DataWriter> InteractiveMarkerFeedback_DataWriter_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerFeedback_DataWriter> InteractiveMarkerFeedback_DataWriter_out;


            class InteractiveMarkerFeedback_DataReader;

            typedef InteractiveMarkerFeedback_DataReader * InteractiveMarkerFeedback_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerFeedback_DataReader> InteractiveMarkerFeedback_DataReader_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerFeedback_DataReader> InteractiveMarkerFeedback_DataReader_out;


            class InteractiveMarkerFeedback_DataReaderView;

            typedef InteractiveMarkerFeedback_DataReaderView * InteractiveMarkerFeedback_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerFeedback_DataReaderView> InteractiveMarkerFeedback_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerFeedback_DataReaderView> InteractiveMarkerFeedback_DataReaderView_out;

            struct InteractiveMarkerFeedback_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InteractiveMarkerFeedback_, struct InteractiveMarkerFeedback_Seq_uniq_> InteractiveMarkerFeedback_Seq;
            typedef DDS_DCPSSequence_var < InteractiveMarkerFeedback_Seq> InteractiveMarkerFeedback_Seq_var;
            typedef DDS_DCPSSequence_out < InteractiveMarkerFeedback_Seq> InteractiveMarkerFeedback_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerFeedback_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InteractiveMarkerFeedback_TypeSupportInterface_ptr _ptr_type;
                typedef InteractiveMarkerFeedback_TypeSupportInterface_var _var_type;

                static InteractiveMarkerFeedback_TypeSupportInterface_ptr _duplicate (InteractiveMarkerFeedback_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerFeedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerFeedback_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InteractiveMarkerFeedback_TypeSupportInterface () {};
                ~InteractiveMarkerFeedback_TypeSupportInterface () {};
            private:
                InteractiveMarkerFeedback_TypeSupportInterface (const InteractiveMarkerFeedback_TypeSupportInterface &);
                InteractiveMarkerFeedback_TypeSupportInterface & operator = (const InteractiveMarkerFeedback_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerFeedback_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InteractiveMarkerFeedback_DataWriter_ptr _ptr_type;
                typedef InteractiveMarkerFeedback_DataWriter_var _var_type;

                static InteractiveMarkerFeedback_DataWriter_ptr _duplicate (InteractiveMarkerFeedback_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerFeedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerFeedback_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InteractiveMarkerFeedback_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InteractiveMarkerFeedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InteractiveMarkerFeedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerFeedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerFeedback_& instance_data) = 0;

            protected:
                InteractiveMarkerFeedback_DataWriter () {};
                ~InteractiveMarkerFeedback_DataWriter () {};
            private:
                InteractiveMarkerFeedback_DataWriter (const InteractiveMarkerFeedback_DataWriter &);
                InteractiveMarkerFeedback_DataWriter & operator = (const InteractiveMarkerFeedback_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerFeedback_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InteractiveMarkerFeedback_DataReader_ptr _ptr_type;
                typedef InteractiveMarkerFeedback_DataReader_var _var_type;

                static InteractiveMarkerFeedback_DataReader_ptr _duplicate (InteractiveMarkerFeedback_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerFeedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerFeedback_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerFeedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerFeedback_& instance) = 0;

            protected:
                InteractiveMarkerFeedback_DataReader () {};
                ~InteractiveMarkerFeedback_DataReader () {};
            private:
                InteractiveMarkerFeedback_DataReader (const InteractiveMarkerFeedback_DataReader &);
                InteractiveMarkerFeedback_DataReader & operator = (const InteractiveMarkerFeedback_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerFeedback_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InteractiveMarkerFeedback_DataReaderView_ptr _ptr_type;
                typedef InteractiveMarkerFeedback_DataReaderView_var _var_type;

                static InteractiveMarkerFeedback_DataReaderView_ptr _duplicate (InteractiveMarkerFeedback_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerFeedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerFeedback_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerFeedback_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerFeedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerFeedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerFeedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerFeedback_& instance) = 0;

            protected:
                InteractiveMarkerFeedback_DataReaderView () {};
                ~InteractiveMarkerFeedback_DataReaderView () {};
            private:
                InteractiveMarkerFeedback_DataReaderView (const InteractiveMarkerFeedback_DataReaderView &);
                InteractiveMarkerFeedback_DataReaderView & operator = (const InteractiveMarkerFeedback_DataReaderView &);
            };
        }

    }

}

#endif
