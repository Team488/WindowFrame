#ifndef _H_99BB8005795B030BB1BAAC4E343080B0_MarkerArray_DCPS_H_
#define _H_99BB8005795B030BB1BAAC4E343080B0_MarkerArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MarkerArray_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MarkerArray_TypeSupportInterface;

            typedef MarkerArray_TypeSupportInterface * MarkerArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MarkerArray_TypeSupportInterface> MarkerArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MarkerArray_TypeSupportInterface> MarkerArray_TypeSupportInterface_out;


            class MarkerArray_DataWriter;

            typedef MarkerArray_DataWriter * MarkerArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MarkerArray_DataWriter> MarkerArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < MarkerArray_DataWriter> MarkerArray_DataWriter_out;


            class MarkerArray_DataReader;

            typedef MarkerArray_DataReader * MarkerArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MarkerArray_DataReader> MarkerArray_DataReader_var;
            typedef DDS_DCPSInterface_out < MarkerArray_DataReader> MarkerArray_DataReader_out;


            class MarkerArray_DataReaderView;

            typedef MarkerArray_DataReaderView * MarkerArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MarkerArray_DataReaderView> MarkerArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MarkerArray_DataReaderView> MarkerArray_DataReaderView_out;

            struct MarkerArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MarkerArray_, struct MarkerArray_Seq_uniq_> MarkerArray_Seq;
            typedef DDS_DCPSSequence_var < MarkerArray_Seq> MarkerArray_Seq_var;
            typedef DDS_DCPSSequence_out < MarkerArray_Seq> MarkerArray_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MarkerArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MarkerArray_TypeSupportInterface_ptr _ptr_type;
                typedef MarkerArray_TypeSupportInterface_var _var_type;

                static MarkerArray_TypeSupportInterface_ptr _duplicate (MarkerArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MarkerArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MarkerArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MarkerArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MarkerArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MarkerArray_TypeSupportInterface () {};
                ~MarkerArray_TypeSupportInterface () {};
            private:
                MarkerArray_TypeSupportInterface (const MarkerArray_TypeSupportInterface &);
                MarkerArray_TypeSupportInterface & operator = (const MarkerArray_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MarkerArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MarkerArray_DataWriter_ptr _ptr_type;
                typedef MarkerArray_DataWriter_var _var_type;

                static MarkerArray_DataWriter_ptr _duplicate (MarkerArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MarkerArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MarkerArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MarkerArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MarkerArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MarkerArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MarkerArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MarkerArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MarkerArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MarkerArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MarkerArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MarkerArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MarkerArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MarkerArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MarkerArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MarkerArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MarkerArray_& instance_data) = 0;

            protected:
                MarkerArray_DataWriter () {};
                ~MarkerArray_DataWriter () {};
            private:
                MarkerArray_DataWriter (const MarkerArray_DataWriter &);
                MarkerArray_DataWriter & operator = (const MarkerArray_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MarkerArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MarkerArray_DataReader_ptr _ptr_type;
                typedef MarkerArray_DataReader_var _var_type;

                static MarkerArray_DataReader_ptr _duplicate (MarkerArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MarkerArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MarkerArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MarkerArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MarkerArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MarkerArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MarkerArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MarkerArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MarkerArray_& instance) = 0;

            protected:
                MarkerArray_DataReader () {};
                ~MarkerArray_DataReader () {};
            private:
                MarkerArray_DataReader (const MarkerArray_DataReader &);
                MarkerArray_DataReader & operator = (const MarkerArray_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MarkerArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MarkerArray_DataReaderView_ptr _ptr_type;
                typedef MarkerArray_DataReaderView_var _var_type;

                static MarkerArray_DataReaderView_ptr _duplicate (MarkerArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MarkerArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MarkerArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MarkerArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MarkerArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MarkerArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MarkerArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MarkerArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MarkerArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MarkerArray_& instance) = 0;

            protected:
                MarkerArray_DataReaderView () {};
                ~MarkerArray_DataReaderView () {};
            private:
                MarkerArray_DataReaderView (const MarkerArray_DataReaderView &);
                MarkerArray_DataReaderView & operator = (const MarkerArray_DataReaderView &);
            };
        }

    }

}

#endif
