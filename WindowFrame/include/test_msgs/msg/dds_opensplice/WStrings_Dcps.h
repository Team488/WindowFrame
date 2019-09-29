#ifndef _H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings_DCPS_H_
#define _H_22C1092D5FA1D83CBD5A8806DE42E0B3_WStrings_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "WStrings_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class WStrings_TypeSupportInterface;

            typedef WStrings_TypeSupportInterface * WStrings_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < WStrings_TypeSupportInterface> WStrings_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < WStrings_TypeSupportInterface> WStrings_TypeSupportInterface_out;


            class WStrings_DataWriter;

            typedef WStrings_DataWriter * WStrings_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < WStrings_DataWriter> WStrings_DataWriter_var;
            typedef DDS_DCPSInterface_out < WStrings_DataWriter> WStrings_DataWriter_out;


            class WStrings_DataReader;

            typedef WStrings_DataReader * WStrings_DataReader_ptr;
            typedef DDS_DCPSInterface_var < WStrings_DataReader> WStrings_DataReader_var;
            typedef DDS_DCPSInterface_out < WStrings_DataReader> WStrings_DataReader_out;


            class WStrings_DataReaderView;

            typedef WStrings_DataReaderView * WStrings_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < WStrings_DataReaderView> WStrings_DataReaderView_var;
            typedef DDS_DCPSInterface_out < WStrings_DataReaderView> WStrings_DataReaderView_out;

            struct WStrings_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < WStrings_, struct WStrings_Seq_uniq_> WStrings_Seq;
            typedef DDS_DCPSSequence_var < WStrings_Seq> WStrings_Seq_var;
            typedef DDS_DCPSSequence_out < WStrings_Seq> WStrings_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs WStrings_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef WStrings_TypeSupportInterface_ptr _ptr_type;
                typedef WStrings_TypeSupportInterface_var _var_type;

                static WStrings_TypeSupportInterface_ptr _duplicate (WStrings_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WStrings_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static WStrings_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WStrings_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                WStrings_TypeSupportInterface_ptr _this () { return this; }


            protected:
                WStrings_TypeSupportInterface () {};
                ~WStrings_TypeSupportInterface () {};
            private:
                WStrings_TypeSupportInterface (const WStrings_TypeSupportInterface &);
                WStrings_TypeSupportInterface & operator = (const WStrings_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs WStrings_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef WStrings_DataWriter_ptr _ptr_type;
                typedef WStrings_DataWriter_var _var_type;

                static WStrings_DataWriter_ptr _duplicate (WStrings_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WStrings_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static WStrings_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WStrings_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                WStrings_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const WStrings_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const WStrings_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const WStrings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const WStrings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const WStrings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const WStrings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const WStrings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const WStrings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const WStrings_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const WStrings_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (WStrings_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const WStrings_& instance_data) = 0;

            protected:
                WStrings_DataWriter () {};
                ~WStrings_DataWriter () {};
            private:
                WStrings_DataWriter (const WStrings_DataWriter &);
                WStrings_DataWriter & operator = (const WStrings_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs WStrings_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef WStrings_DataReader_ptr _ptr_type;
                typedef WStrings_DataReader_var _var_type;

                static WStrings_DataReader_ptr _duplicate (WStrings_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WStrings_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static WStrings_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WStrings_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                WStrings_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (WStrings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (WStrings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (WStrings_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const WStrings_& instance) = 0;

            protected:
                WStrings_DataReader () {};
                ~WStrings_DataReader () {};
            private:
                WStrings_DataReader (const WStrings_DataReader &);
                WStrings_DataReader & operator = (const WStrings_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs WStrings_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef WStrings_DataReaderView_ptr _ptr_type;
                typedef WStrings_DataReaderView_var _var_type;

                static WStrings_DataReaderView_ptr _duplicate (WStrings_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WStrings_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static WStrings_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WStrings_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                WStrings_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (WStrings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (WStrings_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (WStrings_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (WStrings_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const WStrings_& instance) = 0;

            protected:
                WStrings_DataReaderView () {};
                ~WStrings_DataReaderView () {};
            private:
                WStrings_DataReaderView (const WStrings_DataReaderView &);
                WStrings_DataReaderView & operator = (const WStrings_DataReaderView &);
            };
        }

    }

}

#endif
