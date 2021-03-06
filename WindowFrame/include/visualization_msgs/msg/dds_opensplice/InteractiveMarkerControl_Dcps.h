#ifndef _H_3FE5282260966708675F248EA8E44082_InteractiveMarkerControl_DCPS_H_
#define _H_3FE5282260966708675F248EA8E44082_InteractiveMarkerControl_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InteractiveMarkerControl_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InteractiveMarkerControl_TypeSupportInterface;

            typedef InteractiveMarkerControl_TypeSupportInterface * InteractiveMarkerControl_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerControl_TypeSupportInterface> InteractiveMarkerControl_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerControl_TypeSupportInterface> InteractiveMarkerControl_TypeSupportInterface_out;


            class InteractiveMarkerControl_DataWriter;

            typedef InteractiveMarkerControl_DataWriter * InteractiveMarkerControl_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerControl_DataWriter> InteractiveMarkerControl_DataWriter_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerControl_DataWriter> InteractiveMarkerControl_DataWriter_out;


            class InteractiveMarkerControl_DataReader;

            typedef InteractiveMarkerControl_DataReader * InteractiveMarkerControl_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerControl_DataReader> InteractiveMarkerControl_DataReader_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerControl_DataReader> InteractiveMarkerControl_DataReader_out;


            class InteractiveMarkerControl_DataReaderView;

            typedef InteractiveMarkerControl_DataReaderView * InteractiveMarkerControl_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerControl_DataReaderView> InteractiveMarkerControl_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerControl_DataReaderView> InteractiveMarkerControl_DataReaderView_out;

            struct InteractiveMarkerControl_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InteractiveMarkerControl_, struct InteractiveMarkerControl_Seq_uniq_> InteractiveMarkerControl_Seq;
            typedef DDS_DCPSSequence_var < InteractiveMarkerControl_Seq> InteractiveMarkerControl_Seq_var;
            typedef DDS_DCPSSequence_out < InteractiveMarkerControl_Seq> InteractiveMarkerControl_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerControl_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InteractiveMarkerControl_TypeSupportInterface_ptr _ptr_type;
                typedef InteractiveMarkerControl_TypeSupportInterface_var _var_type;

                static InteractiveMarkerControl_TypeSupportInterface_ptr _duplicate (InteractiveMarkerControl_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerControl_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerControl_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InteractiveMarkerControl_TypeSupportInterface () {};
                ~InteractiveMarkerControl_TypeSupportInterface () {};
            private:
                InteractiveMarkerControl_TypeSupportInterface (const InteractiveMarkerControl_TypeSupportInterface &);
                InteractiveMarkerControl_TypeSupportInterface & operator = (const InteractiveMarkerControl_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerControl_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InteractiveMarkerControl_DataWriter_ptr _ptr_type;
                typedef InteractiveMarkerControl_DataWriter_var _var_type;

                static InteractiveMarkerControl_DataWriter_ptr _duplicate (InteractiveMarkerControl_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerControl_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerControl_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InteractiveMarkerControl_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InteractiveMarkerControl_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InteractiveMarkerControl_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerControl_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerControl_& instance_data) = 0;

            protected:
                InteractiveMarkerControl_DataWriter () {};
                ~InteractiveMarkerControl_DataWriter () {};
            private:
                InteractiveMarkerControl_DataWriter (const InteractiveMarkerControl_DataWriter &);
                InteractiveMarkerControl_DataWriter & operator = (const InteractiveMarkerControl_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerControl_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InteractiveMarkerControl_DataReader_ptr _ptr_type;
                typedef InteractiveMarkerControl_DataReader_var _var_type;

                static InteractiveMarkerControl_DataReader_ptr _duplicate (InteractiveMarkerControl_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerControl_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerControl_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerControl_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerControl_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerControl_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerControl_& instance) = 0;

            protected:
                InteractiveMarkerControl_DataReader () {};
                ~InteractiveMarkerControl_DataReader () {};
            private:
                InteractiveMarkerControl_DataReader (const InteractiveMarkerControl_DataReader &);
                InteractiveMarkerControl_DataReader & operator = (const InteractiveMarkerControl_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerControl_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InteractiveMarkerControl_DataReaderView_ptr _ptr_type;
                typedef InteractiveMarkerControl_DataReaderView_var _var_type;

                static InteractiveMarkerControl_DataReaderView_ptr _duplicate (InteractiveMarkerControl_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerControl_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerControl_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerControl_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerControl_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerControl_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerControl_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerControl_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerControl_& instance) = 0;

            protected:
                InteractiveMarkerControl_DataReaderView () {};
                ~InteractiveMarkerControl_DataReaderView () {};
            private:
                InteractiveMarkerControl_DataReaderView (const InteractiveMarkerControl_DataReaderView &);
                InteractiveMarkerControl_DataReaderView & operator = (const InteractiveMarkerControl_DataReaderView &);
            };
        }

    }

}

#endif
