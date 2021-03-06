#ifndef _H_0C37EA39CC2F2298D3804E8F8F9ACD7B_InteractiveMarker_DCPS_H_
#define _H_0C37EA39CC2F2298D3804E8F8F9ACD7B_InteractiveMarker_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InteractiveMarker_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InteractiveMarker_TypeSupportInterface;

            typedef InteractiveMarker_TypeSupportInterface * InteractiveMarker_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarker_TypeSupportInterface> InteractiveMarker_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InteractiveMarker_TypeSupportInterface> InteractiveMarker_TypeSupportInterface_out;


            class InteractiveMarker_DataWriter;

            typedef InteractiveMarker_DataWriter * InteractiveMarker_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarker_DataWriter> InteractiveMarker_DataWriter_var;
            typedef DDS_DCPSInterface_out < InteractiveMarker_DataWriter> InteractiveMarker_DataWriter_out;


            class InteractiveMarker_DataReader;

            typedef InteractiveMarker_DataReader * InteractiveMarker_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarker_DataReader> InteractiveMarker_DataReader_var;
            typedef DDS_DCPSInterface_out < InteractiveMarker_DataReader> InteractiveMarker_DataReader_out;


            class InteractiveMarker_DataReaderView;

            typedef InteractiveMarker_DataReaderView * InteractiveMarker_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarker_DataReaderView> InteractiveMarker_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InteractiveMarker_DataReaderView> InteractiveMarker_DataReaderView_out;

            struct InteractiveMarker_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InteractiveMarker_, struct InteractiveMarker_Seq_uniq_> InteractiveMarker_Seq;
            typedef DDS_DCPSSequence_var < InteractiveMarker_Seq> InteractiveMarker_Seq_var;
            typedef DDS_DCPSSequence_out < InteractiveMarker_Seq> InteractiveMarker_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarker_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InteractiveMarker_TypeSupportInterface_ptr _ptr_type;
                typedef InteractiveMarker_TypeSupportInterface_var _var_type;

                static InteractiveMarker_TypeSupportInterface_ptr _duplicate (InteractiveMarker_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarker_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarker_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarker_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarker_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InteractiveMarker_TypeSupportInterface () {};
                ~InteractiveMarker_TypeSupportInterface () {};
            private:
                InteractiveMarker_TypeSupportInterface (const InteractiveMarker_TypeSupportInterface &);
                InteractiveMarker_TypeSupportInterface & operator = (const InteractiveMarker_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarker_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InteractiveMarker_DataWriter_ptr _ptr_type;
                typedef InteractiveMarker_DataWriter_var _var_type;

                static InteractiveMarker_DataWriter_ptr _duplicate (InteractiveMarker_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarker_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarker_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarker_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarker_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InteractiveMarker_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InteractiveMarker_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InteractiveMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InteractiveMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InteractiveMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InteractiveMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InteractiveMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InteractiveMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InteractiveMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InteractiveMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InteractiveMarker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarker_& instance_data) = 0;

            protected:
                InteractiveMarker_DataWriter () {};
                ~InteractiveMarker_DataWriter () {};
            private:
                InteractiveMarker_DataWriter (const InteractiveMarker_DataWriter &);
                InteractiveMarker_DataWriter & operator = (const InteractiveMarker_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarker_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InteractiveMarker_DataReader_ptr _ptr_type;
                typedef InteractiveMarker_DataReader_var _var_type;

                static InteractiveMarker_DataReader_ptr _duplicate (InteractiveMarker_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarker_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarker_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarker_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarker_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarker_& instance) = 0;

            protected:
                InteractiveMarker_DataReader () {};
                ~InteractiveMarker_DataReader () {};
            private:
                InteractiveMarker_DataReader (const InteractiveMarker_DataReader &);
                InteractiveMarker_DataReader & operator = (const InteractiveMarker_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarker_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InteractiveMarker_DataReaderView_ptr _ptr_type;
                typedef InteractiveMarker_DataReaderView_var _var_type;

                static InteractiveMarker_DataReaderView_ptr _duplicate (InteractiveMarker_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarker_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarker_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarker_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarker_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarker_& instance) = 0;

            protected:
                InteractiveMarker_DataReaderView () {};
                ~InteractiveMarker_DataReaderView () {};
            private:
                InteractiveMarker_DataReaderView (const InteractiveMarker_DataReaderView &);
                InteractiveMarker_DataReaderView & operator = (const InteractiveMarker_DataReaderView &);
            };
        }

    }

}

#endif
