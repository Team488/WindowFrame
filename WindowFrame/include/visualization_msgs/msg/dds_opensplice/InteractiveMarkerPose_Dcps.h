#ifndef _H_9F13AF5E2CABA34C6E5985A069A1BD9C_InteractiveMarkerPose_DCPS_H_
#define _H_9F13AF5E2CABA34C6E5985A069A1BD9C_InteractiveMarkerPose_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InteractiveMarkerPose_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InteractiveMarkerPose_TypeSupportInterface;

            typedef InteractiveMarkerPose_TypeSupportInterface * InteractiveMarkerPose_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerPose_TypeSupportInterface> InteractiveMarkerPose_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerPose_TypeSupportInterface> InteractiveMarkerPose_TypeSupportInterface_out;


            class InteractiveMarkerPose_DataWriter;

            typedef InteractiveMarkerPose_DataWriter * InteractiveMarkerPose_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerPose_DataWriter> InteractiveMarkerPose_DataWriter_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerPose_DataWriter> InteractiveMarkerPose_DataWriter_out;


            class InteractiveMarkerPose_DataReader;

            typedef InteractiveMarkerPose_DataReader * InteractiveMarkerPose_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerPose_DataReader> InteractiveMarkerPose_DataReader_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerPose_DataReader> InteractiveMarkerPose_DataReader_out;


            class InteractiveMarkerPose_DataReaderView;

            typedef InteractiveMarkerPose_DataReaderView * InteractiveMarkerPose_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InteractiveMarkerPose_DataReaderView> InteractiveMarkerPose_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InteractiveMarkerPose_DataReaderView> InteractiveMarkerPose_DataReaderView_out;

            struct InteractiveMarkerPose_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InteractiveMarkerPose_, struct InteractiveMarkerPose_Seq_uniq_> InteractiveMarkerPose_Seq;
            typedef DDS_DCPSSequence_var < InteractiveMarkerPose_Seq> InteractiveMarkerPose_Seq_var;
            typedef DDS_DCPSSequence_out < InteractiveMarkerPose_Seq> InteractiveMarkerPose_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerPose_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InteractiveMarkerPose_TypeSupportInterface_ptr _ptr_type;
                typedef InteractiveMarkerPose_TypeSupportInterface_var _var_type;

                static InteractiveMarkerPose_TypeSupportInterface_ptr _duplicate (InteractiveMarkerPose_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerPose_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerPose_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InteractiveMarkerPose_TypeSupportInterface () {};
                ~InteractiveMarkerPose_TypeSupportInterface () {};
            private:
                InteractiveMarkerPose_TypeSupportInterface (const InteractiveMarkerPose_TypeSupportInterface &);
                InteractiveMarkerPose_TypeSupportInterface & operator = (const InteractiveMarkerPose_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerPose_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InteractiveMarkerPose_DataWriter_ptr _ptr_type;
                typedef InteractiveMarkerPose_DataWriter_var _var_type;

                static InteractiveMarkerPose_DataWriter_ptr _duplicate (InteractiveMarkerPose_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerPose_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerPose_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InteractiveMarkerPose_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InteractiveMarkerPose_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InteractiveMarkerPose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerPose_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerPose_& instance_data) = 0;

            protected:
                InteractiveMarkerPose_DataWriter () {};
                ~InteractiveMarkerPose_DataWriter () {};
            private:
                InteractiveMarkerPose_DataWriter (const InteractiveMarkerPose_DataWriter &);
                InteractiveMarkerPose_DataWriter & operator = (const InteractiveMarkerPose_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerPose_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InteractiveMarkerPose_DataReader_ptr _ptr_type;
                typedef InteractiveMarkerPose_DataReader_var _var_type;

                static InteractiveMarkerPose_DataReader_ptr _duplicate (InteractiveMarkerPose_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerPose_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerPose_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerPose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerPose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerPose_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerPose_& instance) = 0;

            protected:
                InteractiveMarkerPose_DataReader () {};
                ~InteractiveMarkerPose_DataReader () {};
            private:
                InteractiveMarkerPose_DataReader (const InteractiveMarkerPose_DataReader &);
                InteractiveMarkerPose_DataReader & operator = (const InteractiveMarkerPose_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerPose_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InteractiveMarkerPose_DataReaderView_ptr _ptr_type;
                typedef InteractiveMarkerPose_DataReaderView_var _var_type;

                static InteractiveMarkerPose_DataReaderView_ptr _duplicate (InteractiveMarkerPose_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InteractiveMarkerPose_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InteractiveMarkerPose_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InteractiveMarkerPose_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InteractiveMarkerPose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InteractiveMarkerPose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InteractiveMarkerPose_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InteractiveMarkerPose_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InteractiveMarkerPose_& instance) = 0;

            protected:
                InteractiveMarkerPose_DataReaderView () {};
                ~InteractiveMarkerPose_DataReaderView () {};
            private:
                InteractiveMarkerPose_DataReaderView (const InteractiveMarkerPose_DataReaderView &);
                InteractiveMarkerPose_DataReaderView & operator = (const InteractiveMarkerPose_DataReaderView &);
            };
        }

    }

}

#endif
