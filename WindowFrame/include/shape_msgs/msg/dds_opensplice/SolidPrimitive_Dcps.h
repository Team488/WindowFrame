#ifndef _H_73365A2678F9DD61DB72CB55E455F4BB_SolidPrimitive_DCPS_H_
#define _H_73365A2678F9DD61DB72CB55E455F4BB_SolidPrimitive_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SolidPrimitive_.h"

#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class SolidPrimitive_TypeSupportInterface;

            typedef SolidPrimitive_TypeSupportInterface * SolidPrimitive_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SolidPrimitive_TypeSupportInterface> SolidPrimitive_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SolidPrimitive_TypeSupportInterface> SolidPrimitive_TypeSupportInterface_out;


            class SolidPrimitive_DataWriter;

            typedef SolidPrimitive_DataWriter * SolidPrimitive_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SolidPrimitive_DataWriter> SolidPrimitive_DataWriter_var;
            typedef DDS_DCPSInterface_out < SolidPrimitive_DataWriter> SolidPrimitive_DataWriter_out;


            class SolidPrimitive_DataReader;

            typedef SolidPrimitive_DataReader * SolidPrimitive_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SolidPrimitive_DataReader> SolidPrimitive_DataReader_var;
            typedef DDS_DCPSInterface_out < SolidPrimitive_DataReader> SolidPrimitive_DataReader_out;


            class SolidPrimitive_DataReaderView;

            typedef SolidPrimitive_DataReaderView * SolidPrimitive_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SolidPrimitive_DataReaderView> SolidPrimitive_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SolidPrimitive_DataReaderView> SolidPrimitive_DataReaderView_out;

            struct SolidPrimitive_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SolidPrimitive_, struct SolidPrimitive_Seq_uniq_> SolidPrimitive_Seq;
            typedef DDS_DCPSSequence_var < SolidPrimitive_Seq> SolidPrimitive_Seq_var;
            typedef DDS_DCPSSequence_out < SolidPrimitive_Seq> SolidPrimitive_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs SolidPrimitive_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SolidPrimitive_TypeSupportInterface_ptr _ptr_type;
                typedef SolidPrimitive_TypeSupportInterface_var _var_type;

                static SolidPrimitive_TypeSupportInterface_ptr _duplicate (SolidPrimitive_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SolidPrimitive_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SolidPrimitive_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SolidPrimitive_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SolidPrimitive_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SolidPrimitive_TypeSupportInterface () {};
                ~SolidPrimitive_TypeSupportInterface () {};
            private:
                SolidPrimitive_TypeSupportInterface (const SolidPrimitive_TypeSupportInterface &);
                SolidPrimitive_TypeSupportInterface & operator = (const SolidPrimitive_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs SolidPrimitive_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SolidPrimitive_DataWriter_ptr _ptr_type;
                typedef SolidPrimitive_DataWriter_var _var_type;

                static SolidPrimitive_DataWriter_ptr _duplicate (SolidPrimitive_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SolidPrimitive_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SolidPrimitive_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SolidPrimitive_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SolidPrimitive_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SolidPrimitive_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SolidPrimitive_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SolidPrimitive_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SolidPrimitive_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SolidPrimitive_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SolidPrimitive_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SolidPrimitive_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SolidPrimitive_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SolidPrimitive_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SolidPrimitive_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SolidPrimitive_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SolidPrimitive_& instance_data) = 0;

            protected:
                SolidPrimitive_DataWriter () {};
                ~SolidPrimitive_DataWriter () {};
            private:
                SolidPrimitive_DataWriter (const SolidPrimitive_DataWriter &);
                SolidPrimitive_DataWriter & operator = (const SolidPrimitive_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs SolidPrimitive_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SolidPrimitive_DataReader_ptr _ptr_type;
                typedef SolidPrimitive_DataReader_var _var_type;

                static SolidPrimitive_DataReader_ptr _duplicate (SolidPrimitive_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SolidPrimitive_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SolidPrimitive_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SolidPrimitive_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SolidPrimitive_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SolidPrimitive_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SolidPrimitive_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SolidPrimitive_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SolidPrimitive_& instance) = 0;

            protected:
                SolidPrimitive_DataReader () {};
                ~SolidPrimitive_DataReader () {};
            private:
                SolidPrimitive_DataReader (const SolidPrimitive_DataReader &);
                SolidPrimitive_DataReader & operator = (const SolidPrimitive_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs SolidPrimitive_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SolidPrimitive_DataReaderView_ptr _ptr_type;
                typedef SolidPrimitive_DataReaderView_var _var_type;

                static SolidPrimitive_DataReaderView_ptr _duplicate (SolidPrimitive_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SolidPrimitive_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SolidPrimitive_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SolidPrimitive_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SolidPrimitive_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SolidPrimitive_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SolidPrimitive_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SolidPrimitive_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SolidPrimitive_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SolidPrimitive_& instance) = 0;

            protected:
                SolidPrimitive_DataReaderView () {};
                ~SolidPrimitive_DataReaderView () {};
            private:
                SolidPrimitive_DataReaderView (const SolidPrimitive_DataReaderView &);
                SolidPrimitive_DataReaderView & operator = (const SolidPrimitive_DataReaderView &);
            };
        }

    }

}

#endif
