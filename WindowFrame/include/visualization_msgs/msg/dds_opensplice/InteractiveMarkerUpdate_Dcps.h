#ifndef _H_5958D35B947A10D5ED17F975A1C71C5B_InteractiveMarkerUpdate_DCPS_H_
#define _H_5958D35B947A10D5ED17F975A1C71C5B_InteractiveMarkerUpdate_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InteractiveMarkerUpdate_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InteractiveMarkerUpdate_TypeSupportInterface;

            typedef InteractiveMarkerUpdate_TypeSupportInterface * InteractiveMarkerUpdate_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerUpdate_TypeSupportInterface> InteractiveMarkerUpdate_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerUpdate_TypeSupportInterface> InteractiveMarkerUpdate_TypeSupportInterface_out;


            class InteractiveMarkerUpdate_DataWriter;

            typedef InteractiveMarkerUpdate_DataWriter * InteractiveMarkerUpdate_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerUpdate_DataWriter> InteractiveMarkerUpdate_DataWriter_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerUpdate_DataWriter> InteractiveMarkerUpdate_DataWriter_out;


            class InteractiveMarkerUpdate_DataReader;

            typedef InteractiveMarkerUpdate_DataReader * InteractiveMarkerUpdate_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerUpdate_DataReader> InteractiveMarkerUpdate_DataReader_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerUpdate_DataReader> InteractiveMarkerUpdate_DataReader_out;


            class InteractiveMarkerUpdate_DataReaderView;

            typedef InteractiveMarkerUpdate_DataReaderView * InteractiveMarkerUpdate_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerUpdate_DataReaderView> InteractiveMarkerUpdate_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerUpdate_DataReaderView> InteractiveMarkerUpdate_DataReaderView_out;

            struct InteractiveMarkerUpdate_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InteractiveMarkerUpdate_, struct InteractiveMarkerUpdate_Seq_uniq_> InteractiveMarkerUpdate_Seq;
            typedef DDS_DCPSSequence_var < InteractiveMarkerUpdate_Seq> InteractiveMarkerUpdate_Seq_var;
            typedef DDS_DCPSSequence_out < InteractiveMarkerUpdate_Seq> InteractiveMarkerUpdate_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerUpdate_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InteractiveMarkerUpdate_TypeSupportInterface_ptr _ptr_type;
                typedef InteractiveMarkerUpdate_TypeSupportInterface_var _var_type;

                static InteractiveMarkerUpdate_TypeSupportInterface_ptr _duplicate (InteractiveMarkerUpdate_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerUpdate_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerUpdate_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InteractiveMarkerUpdate_TypeSupportInterface () {};
                ~InteractiveMarkerUpdate_TypeSupportInterface () {};
            private:
                InteractiveMarkerUpdate_TypeSupportInterface (const InteractiveMarkerUpdate_TypeSupportInterface &);
                InteractiveMarkerUpdate_TypeSupportInterface & operator = (const InteractiveMarkerUpdate_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerUpdate_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InteractiveMarkerUpdate_DataWriter_ptr _ptr_type;
                typedef InteractiveMarkerUpdate_DataWriter_var _var_type;

                static InteractiveMarkerUpdate_DataWriter_ptr _duplicate (InteractiveMarkerUpdate_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerUpdate_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerUpdate_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InteractiveMarkerUpdate_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InteractiveMarkerUpdate_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InteractiveMarkerUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerUpdate_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerUpdate_& instance_data) = 0;

            protected:
                InteractiveMarkerUpdate_DataWriter () {};
                ~InteractiveMarkerUpdate_DataWriter () {};
            private:
                InteractiveMarkerUpdate_DataWriter (const InteractiveMarkerUpdate_DataWriter &);
                InteractiveMarkerUpdate_DataWriter & operator = (const InteractiveMarkerUpdate_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerUpdate_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InteractiveMarkerUpdate_DataReader_ptr _ptr_type;
                typedef InteractiveMarkerUpdate_DataReader_var _var_type;

                static InteractiveMarkerUpdate_DataReader_ptr _duplicate (InteractiveMarkerUpdate_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerUpdate_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerUpdate_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerUpdate_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerUpdate_& instance) = 0;

            protected:
                InteractiveMarkerUpdate_DataReader () {};
                ~InteractiveMarkerUpdate_DataReader () {};
            private:
                InteractiveMarkerUpdate_DataReader (const InteractiveMarkerUpdate_DataReader &);
                InteractiveMarkerUpdate_DataReader & operator = (const InteractiveMarkerUpdate_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerUpdate_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InteractiveMarkerUpdate_DataReaderView_ptr _ptr_type;
                typedef InteractiveMarkerUpdate_DataReaderView_var _var_type;

                static InteractiveMarkerUpdate_DataReaderView_ptr _duplicate (InteractiveMarkerUpdate_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerUpdate_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerUpdate_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerUpdate_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerUpdate_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerUpdate_& instance) = 0;

            protected:
                InteractiveMarkerUpdate_DataReaderView () {};
                ~InteractiveMarkerUpdate_DataReaderView () {};
            private:
                InteractiveMarkerUpdate_DataReaderView (const InteractiveMarkerUpdate_DataReaderView &);
                InteractiveMarkerUpdate_DataReaderView & operator = (const InteractiveMarkerUpdate_DataReaderView &);
            };
        }

    }

}

#endif
