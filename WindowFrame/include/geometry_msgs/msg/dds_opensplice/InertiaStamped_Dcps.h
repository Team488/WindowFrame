#ifndef _H_4A85AAA31427E617F07DA9B0187E03CF_InertiaStamped_DCPS_H_
#define _H_4A85AAA31427E617F07DA9B0187E03CF_InertiaStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InertiaStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class InertiaStamped_TypeSupportInterface;

            typedef InertiaStamped_TypeSupportInterface * InertiaStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InertiaStamped_TypeSupportInterface> InertiaStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InertiaStamped_TypeSupportInterface> InertiaStamped_TypeSupportInterface_out;


            class InertiaStamped_DataWriter;

            typedef InertiaStamped_DataWriter * InertiaStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InertiaStamped_DataWriter> InertiaStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < InertiaStamped_DataWriter> InertiaStamped_DataWriter_out;


            class InertiaStamped_DataReader;

            typedef InertiaStamped_DataReader * InertiaStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InertiaStamped_DataReader> InertiaStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < InertiaStamped_DataReader> InertiaStamped_DataReader_out;


            class InertiaStamped_DataReaderView;

            typedef InertiaStamped_DataReaderView * InertiaStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InertiaStamped_DataReaderView> InertiaStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InertiaStamped_DataReaderView> InertiaStamped_DataReaderView_out;

            struct InertiaStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < InertiaStamped_, struct InertiaStamped_Seq_uniq_> InertiaStamped_Seq;
            typedef DDS_DCPSSequence_var < InertiaStamped_Seq> InertiaStamped_Seq_var;
            typedef DDS_DCPSSequence_out < InertiaStamped_Seq> InertiaStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InertiaStamped_TypeSupportInterface_ptr _ptr_type;
                typedef InertiaStamped_TypeSupportInterface_var _var_type;

                static InertiaStamped_TypeSupportInterface_ptr _duplicate (InertiaStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InertiaStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InertiaStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InertiaStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InertiaStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InertiaStamped_TypeSupportInterface () {};
                ~InertiaStamped_TypeSupportInterface () {};
            private:
                InertiaStamped_TypeSupportInterface (const InertiaStamped_TypeSupportInterface &);
                InertiaStamped_TypeSupportInterface & operator = (const InertiaStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InertiaStamped_DataWriter_ptr _ptr_type;
                typedef InertiaStamped_DataWriter_var _var_type;

                static InertiaStamped_DataWriter_ptr _duplicate (InertiaStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InertiaStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InertiaStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InertiaStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InertiaStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InertiaStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InertiaStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InertiaStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InertiaStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InertiaStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InertiaStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InertiaStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InertiaStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InertiaStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InertiaStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InertiaStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InertiaStamped_& instance_data) = 0;

            protected:
                InertiaStamped_DataWriter () {};
                ~InertiaStamped_DataWriter () {};
            private:
                InertiaStamped_DataWriter (const InertiaStamped_DataWriter &);
                InertiaStamped_DataWriter & operator = (const InertiaStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InertiaStamped_DataReader_ptr _ptr_type;
                typedef InertiaStamped_DataReader_var _var_type;

                static InertiaStamped_DataReader_ptr _duplicate (InertiaStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InertiaStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InertiaStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InertiaStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InertiaStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InertiaStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InertiaStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InertiaStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InertiaStamped_& instance) = 0;

            protected:
                InertiaStamped_DataReader () {};
                ~InertiaStamped_DataReader () {};
            private:
                InertiaStamped_DataReader (const InertiaStamped_DataReader &);
                InertiaStamped_DataReader & operator = (const InertiaStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InertiaStamped_DataReaderView_ptr _ptr_type;
                typedef InertiaStamped_DataReaderView_var _var_type;

                static InertiaStamped_DataReaderView_ptr _duplicate (InertiaStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InertiaStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InertiaStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InertiaStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InertiaStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InertiaStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InertiaStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InertiaStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InertiaStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InertiaStamped_& instance) = 0;

            protected:
                InertiaStamped_DataReaderView () {};
                ~InertiaStamped_DataReaderView () {};
            private:
                InertiaStamped_DataReaderView (const InertiaStamped_DataReaderView &);
                InertiaStamped_DataReaderView & operator = (const InertiaStamped_DataReaderView &);
            };
        }

    }

}

#endif
