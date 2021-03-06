#ifndef _H_C7AD12915264B131C649F6A66822CE46_Marker_DCPS_H_
#define _H_C7AD12915264B131C649F6A66822CE46_Marker_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Marker_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Marker_TypeSupportInterface;

            typedef Marker_TypeSupportInterface * Marker_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Marker_TypeSupportInterface> Marker_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Marker_TypeSupportInterface> Marker_TypeSupportInterface_out;


            class Marker_DataWriter;

            typedef Marker_DataWriter * Marker_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Marker_DataWriter> Marker_DataWriter_var;
            typedef DDS_DCPSInterface_out < Marker_DataWriter> Marker_DataWriter_out;


            class Marker_DataReader;

            typedef Marker_DataReader * Marker_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Marker_DataReader> Marker_DataReader_var;
            typedef DDS_DCPSInterface_out < Marker_DataReader> Marker_DataReader_out;


            class Marker_DataReaderView;

            typedef Marker_DataReaderView * Marker_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Marker_DataReaderView> Marker_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Marker_DataReaderView> Marker_DataReaderView_out;

            struct Marker_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Marker_, struct Marker_Seq_uniq_> Marker_Seq;
            typedef DDS_DCPSSequence_var < Marker_Seq> Marker_Seq_var;
            typedef DDS_DCPSSequence_out < Marker_Seq> Marker_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Marker_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Marker_TypeSupportInterface_ptr _ptr_type;
                typedef Marker_TypeSupportInterface_var _var_type;

                static Marker_TypeSupportInterface_ptr _duplicate (Marker_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Marker_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Marker_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Marker_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Marker_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Marker_TypeSupportInterface () {};
                ~Marker_TypeSupportInterface () {};
            private:
                Marker_TypeSupportInterface (const Marker_TypeSupportInterface &);
                Marker_TypeSupportInterface & operator = (const Marker_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Marker_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Marker_DataWriter_ptr _ptr_type;
                typedef Marker_DataWriter_var _var_type;

                static Marker_DataWriter_ptr _duplicate (Marker_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Marker_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Marker_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Marker_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Marker_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Marker_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Marker_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Marker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Marker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Marker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Marker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Marker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Marker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Marker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Marker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Marker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Marker_& instance_data) = 0;

            protected:
                Marker_DataWriter () {};
                ~Marker_DataWriter () {};
            private:
                Marker_DataWriter (const Marker_DataWriter &);
                Marker_DataWriter & operator = (const Marker_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Marker_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Marker_DataReader_ptr _ptr_type;
                typedef Marker_DataReader_var _var_type;

                static Marker_DataReader_ptr _duplicate (Marker_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Marker_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Marker_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Marker_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Marker_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Marker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Marker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Marker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Marker_& instance) = 0;

            protected:
                Marker_DataReader () {};
                ~Marker_DataReader () {};
            private:
                Marker_DataReader (const Marker_DataReader &);
                Marker_DataReader & operator = (const Marker_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Marker_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Marker_DataReaderView_ptr _ptr_type;
                typedef Marker_DataReaderView_var _var_type;

                static Marker_DataReaderView_ptr _duplicate (Marker_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Marker_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Marker_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Marker_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Marker_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Marker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Marker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Marker_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Marker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Marker_& instance) = 0;

            protected:
                Marker_DataReaderView () {};
                ~Marker_DataReaderView () {};
            private:
                Marker_DataReaderView (const Marker_DataReaderView &);
                Marker_DataReaderView & operator = (const Marker_DataReaderView &);
            };
        }

    }

}

#endif
