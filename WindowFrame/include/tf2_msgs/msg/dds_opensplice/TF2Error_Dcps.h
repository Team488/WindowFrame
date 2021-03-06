#ifndef _H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error_DCPS_H_
#define _H_AAABEDB71930EF5BD68FAAD9E4845CD0_TF2Error_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TF2Error_.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace tf2_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TF2Error_TypeSupportInterface;

            typedef TF2Error_TypeSupportInterface * TF2Error_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TF2Error_TypeSupportInterface> TF2Error_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TF2Error_TypeSupportInterface> TF2Error_TypeSupportInterface_out;


            class TF2Error_DataWriter;

            typedef TF2Error_DataWriter * TF2Error_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TF2Error_DataWriter> TF2Error_DataWriter_var;
            typedef DDS_DCPSInterface_out < TF2Error_DataWriter> TF2Error_DataWriter_out;


            class TF2Error_DataReader;

            typedef TF2Error_DataReader * TF2Error_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TF2Error_DataReader> TF2Error_DataReader_var;
            typedef DDS_DCPSInterface_out < TF2Error_DataReader> TF2Error_DataReader_out;


            class TF2Error_DataReaderView;

            typedef TF2Error_DataReaderView * TF2Error_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TF2Error_DataReaderView> TF2Error_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TF2Error_DataReaderView> TF2Error_DataReaderView_out;

            struct TF2Error_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TF2Error_, struct TF2Error_Seq_uniq_> TF2Error_Seq;
            typedef DDS_DCPSSequence_var < TF2Error_Seq> TF2Error_Seq_var;
            typedef DDS_DCPSSequence_out < TF2Error_Seq> TF2Error_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TF2Error_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TF2Error_TypeSupportInterface_ptr _ptr_type;
                typedef TF2Error_TypeSupportInterface_var _var_type;

                static TF2Error_TypeSupportInterface_ptr _duplicate (TF2Error_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TF2Error_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TF2Error_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TF2Error_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TF2Error_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TF2Error_TypeSupportInterface () {};
                ~TF2Error_TypeSupportInterface () {};
            private:
                TF2Error_TypeSupportInterface (const TF2Error_TypeSupportInterface &);
                TF2Error_TypeSupportInterface & operator = (const TF2Error_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TF2Error_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TF2Error_DataWriter_ptr _ptr_type;
                typedef TF2Error_DataWriter_var _var_type;

                static TF2Error_DataWriter_ptr _duplicate (TF2Error_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TF2Error_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TF2Error_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TF2Error_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TF2Error_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TF2Error_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TF2Error_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TF2Error_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TF2Error_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TF2Error_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TF2Error_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TF2Error_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TF2Error_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TF2Error_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TF2Error_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TF2Error_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TF2Error_& instance_data) = 0;

            protected:
                TF2Error_DataWriter () {};
                ~TF2Error_DataWriter () {};
            private:
                TF2Error_DataWriter (const TF2Error_DataWriter &);
                TF2Error_DataWriter & operator = (const TF2Error_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TF2Error_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TF2Error_DataReader_ptr _ptr_type;
                typedef TF2Error_DataReader_var _var_type;

                static TF2Error_DataReader_ptr _duplicate (TF2Error_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TF2Error_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TF2Error_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TF2Error_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TF2Error_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TF2Error_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TF2Error_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TF2Error_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TF2Error_& instance) = 0;

            protected:
                TF2Error_DataReader () {};
                ~TF2Error_DataReader () {};
            private:
                TF2Error_DataReader (const TF2Error_DataReader &);
                TF2Error_DataReader & operator = (const TF2Error_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TF2Error_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TF2Error_DataReaderView_ptr _ptr_type;
                typedef TF2Error_DataReaderView_var _var_type;

                static TF2Error_DataReaderView_ptr _duplicate (TF2Error_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TF2Error_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TF2Error_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TF2Error_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TF2Error_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TF2Error_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TF2Error_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TF2Error_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TF2Error_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TF2Error_& instance) = 0;

            protected:
                TF2Error_DataReaderView () {};
                ~TF2Error_DataReaderView () {};
            private:
                TF2Error_DataReaderView (const TF2Error_DataReaderView &);
                TF2Error_DataReaderView & operator = (const TF2Error_DataReaderView &);
            };
        }

    }

}

#endif
