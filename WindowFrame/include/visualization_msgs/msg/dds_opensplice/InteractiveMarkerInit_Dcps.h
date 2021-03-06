#ifndef _H_C566BB3A91177314AD31483B6029CDE4_InteractiveMarkerInit_DCPS_H_
#define _H_C566BB3A91177314AD31483B6029CDE4_InteractiveMarkerInit_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InteractiveMarkerInit_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InteractiveMarkerInit_TypeSupportInterface;

            typedef InteractiveMarkerInit_TypeSupportInterface * InteractiveMarkerInit_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerInit_TypeSupportInterface> InteractiveMarkerInit_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerInit_TypeSupportInterface> InteractiveMarkerInit_TypeSupportInterface_out;


            class InteractiveMarkerInit_DataWriter;

            typedef InteractiveMarkerInit_DataWriter * InteractiveMarkerInit_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerInit_DataWriter> InteractiveMarkerInit_DataWriter_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerInit_DataWriter> InteractiveMarkerInit_DataWriter_out;


            class InteractiveMarkerInit_DataReader;

            typedef InteractiveMarkerInit_DataReader * InteractiveMarkerInit_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerInit_DataReader> InteractiveMarkerInit_DataReader_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerInit_DataReader> InteractiveMarkerInit_DataReader_out;


            class InteractiveMarkerInit_DataReaderView;

            typedef InteractiveMarkerInit_DataReaderView * InteractiveMarkerInit_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerInit_DataReaderView> InteractiveMarkerInit_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerInit_DataReaderView> InteractiveMarkerInit_DataReaderView_out;

            struct InteractiveMarkerInit_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InteractiveMarkerInit_, struct InteractiveMarkerInit_Seq_uniq_> InteractiveMarkerInit_Seq;
            typedef DDS_DCPSSequence_var < InteractiveMarkerInit_Seq> InteractiveMarkerInit_Seq_var;
            typedef DDS_DCPSSequence_out < InteractiveMarkerInit_Seq> InteractiveMarkerInit_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerInit_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InteractiveMarkerInit_TypeSupportInterface_ptr _ptr_type;
                typedef InteractiveMarkerInit_TypeSupportInterface_var _var_type;

                static InteractiveMarkerInit_TypeSupportInterface_ptr _duplicate (InteractiveMarkerInit_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerInit_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerInit_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InteractiveMarkerInit_TypeSupportInterface () {};
                ~InteractiveMarkerInit_TypeSupportInterface () {};
            private:
                InteractiveMarkerInit_TypeSupportInterface (const InteractiveMarkerInit_TypeSupportInterface &);
                InteractiveMarkerInit_TypeSupportInterface & operator = (const InteractiveMarkerInit_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerInit_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InteractiveMarkerInit_DataWriter_ptr _ptr_type;
                typedef InteractiveMarkerInit_DataWriter_var _var_type;

                static InteractiveMarkerInit_DataWriter_ptr _duplicate (InteractiveMarkerInit_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerInit_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerInit_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InteractiveMarkerInit_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InteractiveMarkerInit_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InteractiveMarkerInit_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerInit_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerInit_& instance_data) = 0;

            protected:
                InteractiveMarkerInit_DataWriter () {};
                ~InteractiveMarkerInit_DataWriter () {};
            private:
                InteractiveMarkerInit_DataWriter (const InteractiveMarkerInit_DataWriter &);
                InteractiveMarkerInit_DataWriter & operator = (const InteractiveMarkerInit_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerInit_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InteractiveMarkerInit_DataReader_ptr _ptr_type;
                typedef InteractiveMarkerInit_DataReader_var _var_type;

                static InteractiveMarkerInit_DataReader_ptr _duplicate (InteractiveMarkerInit_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerInit_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerInit_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerInit_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerInit_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerInit_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerInit_& instance) = 0;

            protected:
                InteractiveMarkerInit_DataReader () {};
                ~InteractiveMarkerInit_DataReader () {};
            private:
                InteractiveMarkerInit_DataReader (const InteractiveMarkerInit_DataReader &);
                InteractiveMarkerInit_DataReader & operator = (const InteractiveMarkerInit_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerInit_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InteractiveMarkerInit_DataReaderView_ptr _ptr_type;
                typedef InteractiveMarkerInit_DataReaderView_var _var_type;

                static InteractiveMarkerInit_DataReaderView_ptr _duplicate (InteractiveMarkerInit_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerInit_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerInit_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerInit_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerInit_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerInit_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerInit_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerInit_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerInit_& instance) = 0;

            protected:
                InteractiveMarkerInit_DataReaderView () {};
                ~InteractiveMarkerInit_DataReaderView () {};
            private:
                InteractiveMarkerInit_DataReaderView (const InteractiveMarkerInit_DataReaderView &);
                InteractiveMarkerInit_DataReaderView & operator = (const InteractiveMarkerInit_DataReaderView &);
            };
        }

    }

}

#endif
