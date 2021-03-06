#ifndef _H_8C84AEF4771E9077060496A030363CBC_TFMessage_DCPS_H_
#define _H_8C84AEF4771E9077060496A030363CBC_TFMessage_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TFMessage_.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace tf2_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TFMessage_TypeSupportInterface;

            typedef TFMessage_TypeSupportInterface * TFMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TFMessage_TypeSupportInterface> TFMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TFMessage_TypeSupportInterface> TFMessage_TypeSupportInterface_out;


            class TFMessage_DataWriter;

            typedef TFMessage_DataWriter * TFMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TFMessage_DataWriter> TFMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < TFMessage_DataWriter> TFMessage_DataWriter_out;


            class TFMessage_DataReader;

            typedef TFMessage_DataReader * TFMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TFMessage_DataReader> TFMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < TFMessage_DataReader> TFMessage_DataReader_out;


            class TFMessage_DataReaderView;

            typedef TFMessage_DataReaderView * TFMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TFMessage_DataReaderView> TFMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TFMessage_DataReaderView> TFMessage_DataReaderView_out;

            struct TFMessage_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TFMessage_, struct TFMessage_Seq_uniq_> TFMessage_Seq;
            typedef DDS_DCPSSequence_var < TFMessage_Seq> TFMessage_Seq_var;
            typedef DDS_DCPSSequence_out < TFMessage_Seq> TFMessage_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TFMessage_TypeSupportInterface_ptr _ptr_type;
                typedef TFMessage_TypeSupportInterface_var _var_type;

                static TFMessage_TypeSupportInterface_ptr _duplicate (TFMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TFMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TFMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TFMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TFMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TFMessage_TypeSupportInterface () {};
                ~TFMessage_TypeSupportInterface () {};
            private:
                TFMessage_TypeSupportInterface (const TFMessage_TypeSupportInterface &);
                TFMessage_TypeSupportInterface & operator = (const TFMessage_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TFMessage_DataWriter_ptr _ptr_type;
                typedef TFMessage_DataWriter_var _var_type;

                static TFMessage_DataWriter_ptr _duplicate (TFMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TFMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TFMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TFMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TFMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TFMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TFMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TFMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TFMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TFMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TFMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TFMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TFMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TFMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TFMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TFMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TFMessage_& instance_data) = 0;

            protected:
                TFMessage_DataWriter () {};
                ~TFMessage_DataWriter () {};
            private:
                TFMessage_DataWriter (const TFMessage_DataWriter &);
                TFMessage_DataWriter & operator = (const TFMessage_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TFMessage_DataReader_ptr _ptr_type;
                typedef TFMessage_DataReader_var _var_type;

                static TFMessage_DataReader_ptr _duplicate (TFMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TFMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TFMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TFMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TFMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TFMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TFMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TFMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TFMessage_& instance) = 0;

            protected:
                TFMessage_DataReader () {};
                ~TFMessage_DataReader () {};
            private:
                TFMessage_DataReader (const TFMessage_DataReader &);
                TFMessage_DataReader & operator = (const TFMessage_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TFMessage_DataReaderView_ptr _ptr_type;
                typedef TFMessage_DataReaderView_var _var_type;

                static TFMessage_DataReaderView_ptr _duplicate (TFMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TFMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TFMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TFMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TFMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TFMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TFMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TFMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TFMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TFMessage_& instance) = 0;

            protected:
                TFMessage_DataReaderView () {};
                ~TFMessage_DataReaderView () {};
            private:
                TFMessage_DataReaderView (const TFMessage_DataReaderView &);
                TFMessage_DataReaderView & operator = (const TFMessage_DataReaderView &);
            };
        }

    }

}

#endif
