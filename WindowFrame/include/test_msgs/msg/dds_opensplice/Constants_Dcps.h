#ifndef _H_337D236FA6AB96840B887B6979F2A05F_Constants_DCPS_H_
#define _H_337D236FA6AB96840B887B6979F2A05F_Constants_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Constants_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Constants_TypeSupportInterface;

            typedef Constants_TypeSupportInterface * Constants_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Constants_TypeSupportInterface> Constants_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Constants_TypeSupportInterface> Constants_TypeSupportInterface_out;


            class Constants_DataWriter;

            typedef Constants_DataWriter * Constants_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Constants_DataWriter> Constants_DataWriter_var;
            typedef DDS_DCPSInterface_out < Constants_DataWriter> Constants_DataWriter_out;


            class Constants_DataReader;

            typedef Constants_DataReader * Constants_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Constants_DataReader> Constants_DataReader_var;
            typedef DDS_DCPSInterface_out < Constants_DataReader> Constants_DataReader_out;


            class Constants_DataReaderView;

            typedef Constants_DataReaderView * Constants_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Constants_DataReaderView> Constants_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Constants_DataReaderView> Constants_DataReaderView_out;

            struct Constants_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Constants_, struct Constants_Seq_uniq_> Constants_Seq;
            typedef DDS_DCPSSequence_var < Constants_Seq> Constants_Seq_var;
            typedef DDS_DCPSSequence_out < Constants_Seq> Constants_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Constants_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Constants_TypeSupportInterface_ptr _ptr_type;
                typedef Constants_TypeSupportInterface_var _var_type;

                static Constants_TypeSupportInterface_ptr _duplicate (Constants_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Constants_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Constants_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Constants_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Constants_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Constants_TypeSupportInterface () {};
                ~Constants_TypeSupportInterface () {};
            private:
                Constants_TypeSupportInterface (const Constants_TypeSupportInterface &);
                Constants_TypeSupportInterface & operator = (const Constants_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Constants_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Constants_DataWriter_ptr _ptr_type;
                typedef Constants_DataWriter_var _var_type;

                static Constants_DataWriter_ptr _duplicate (Constants_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Constants_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Constants_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Constants_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Constants_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Constants_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Constants_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Constants_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Constants_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Constants_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Constants_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Constants_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Constants_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Constants_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Constants_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Constants_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Constants_& instance_data) = 0;

            protected:
                Constants_DataWriter () {};
                ~Constants_DataWriter () {};
            private:
                Constants_DataWriter (const Constants_DataWriter &);
                Constants_DataWriter & operator = (const Constants_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Constants_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Constants_DataReader_ptr _ptr_type;
                typedef Constants_DataReader_var _var_type;

                static Constants_DataReader_ptr _duplicate (Constants_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Constants_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Constants_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Constants_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Constants_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Constants_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Constants_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Constants_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Constants_& instance) = 0;

            protected:
                Constants_DataReader () {};
                ~Constants_DataReader () {};
            private:
                Constants_DataReader (const Constants_DataReader &);
                Constants_DataReader & operator = (const Constants_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Constants_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Constants_DataReaderView_ptr _ptr_type;
                typedef Constants_DataReaderView_var _var_type;

                static Constants_DataReaderView_ptr _duplicate (Constants_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Constants_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Constants_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Constants_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Constants_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Constants_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Constants_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Constants_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Constants_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Constants_& instance) = 0;

            protected:
                Constants_DataReaderView () {};
                ~Constants_DataReaderView () {};
            private:
                Constants_DataReaderView (const Constants_DataReaderView &);
                Constants_DataReaderView & operator = (const Constants_DataReaderView &);
            };
        }

    }

}

#endif
