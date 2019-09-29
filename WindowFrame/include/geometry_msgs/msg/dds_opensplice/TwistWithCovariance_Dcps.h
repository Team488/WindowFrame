#ifndef _H_F641A1B9402EDAEC8307A9C189D3A4AA_TwistWithCovariance_DCPS_H_
#define _H_F641A1B9402EDAEC8307A9C189D3A4AA_TwistWithCovariance_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TwistWithCovariance_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TwistWithCovariance_TypeSupportInterface;

            typedef TwistWithCovariance_TypeSupportInterface * TwistWithCovariance_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovariance_TypeSupportInterface> TwistWithCovariance_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TwistWithCovariance_TypeSupportInterface> TwistWithCovariance_TypeSupportInterface_out;


            class TwistWithCovariance_DataWriter;

            typedef TwistWithCovariance_DataWriter * TwistWithCovariance_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovariance_DataWriter> TwistWithCovariance_DataWriter_var;
            typedef DDS_DCPSInterface_out < TwistWithCovariance_DataWriter> TwistWithCovariance_DataWriter_out;


            class TwistWithCovariance_DataReader;

            typedef TwistWithCovariance_DataReader * TwistWithCovariance_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovariance_DataReader> TwistWithCovariance_DataReader_var;
            typedef DDS_DCPSInterface_out < TwistWithCovariance_DataReader> TwistWithCovariance_DataReader_out;


            class TwistWithCovariance_DataReaderView;

            typedef TwistWithCovariance_DataReaderView * TwistWithCovariance_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovariance_DataReaderView> TwistWithCovariance_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TwistWithCovariance_DataReaderView> TwistWithCovariance_DataReaderView_out;

            struct TwistWithCovariance_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < TwistWithCovariance_, struct TwistWithCovariance_Seq_uniq_> TwistWithCovariance_Seq;
            typedef DDS_DCPSSequence_var < TwistWithCovariance_Seq> TwistWithCovariance_Seq_var;
            typedef DDS_DCPSSequence_out < TwistWithCovariance_Seq> TwistWithCovariance_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovariance_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TwistWithCovariance_TypeSupportInterface_ptr _ptr_type;
                typedef TwistWithCovariance_TypeSupportInterface_var _var_type;

                static TwistWithCovariance_TypeSupportInterface_ptr _duplicate (TwistWithCovariance_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovariance_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovariance_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TwistWithCovariance_TypeSupportInterface () {};
                ~TwistWithCovariance_TypeSupportInterface () {};
            private:
                TwistWithCovariance_TypeSupportInterface (const TwistWithCovariance_TypeSupportInterface &);
                TwistWithCovariance_TypeSupportInterface & operator = (const TwistWithCovariance_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovariance_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TwistWithCovariance_DataWriter_ptr _ptr_type;
                typedef TwistWithCovariance_DataWriter_var _var_type;

                static TwistWithCovariance_DataWriter_ptr _duplicate (TwistWithCovariance_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovariance_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovariance_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TwistWithCovariance_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TwistWithCovariance_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TwistWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TwistWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TwistWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TwistWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TwistWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TwistWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TwistWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TwistWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TwistWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistWithCovariance_& instance_data) = 0;

            protected:
                TwistWithCovariance_DataWriter () {};
                ~TwistWithCovariance_DataWriter () {};
            private:
                TwistWithCovariance_DataWriter (const TwistWithCovariance_DataWriter &);
                TwistWithCovariance_DataWriter & operator = (const TwistWithCovariance_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovariance_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TwistWithCovariance_DataReader_ptr _ptr_type;
                typedef TwistWithCovariance_DataReader_var _var_type;

                static TwistWithCovariance_DataReader_ptr _duplicate (TwistWithCovariance_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovariance_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovariance_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TwistWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TwistWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TwistWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistWithCovariance_& instance) = 0;

            protected:
                TwistWithCovariance_DataReader () {};
                ~TwistWithCovariance_DataReader () {};
            private:
                TwistWithCovariance_DataReader (const TwistWithCovariance_DataReader &);
                TwistWithCovariance_DataReader & operator = (const TwistWithCovariance_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovariance_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TwistWithCovariance_DataReaderView_ptr _ptr_type;
                typedef TwistWithCovariance_DataReaderView_var _var_type;

                static TwistWithCovariance_DataReaderView_ptr _duplicate (TwistWithCovariance_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovariance_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovariance_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovariance_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TwistWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TwistWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TwistWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TwistWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistWithCovariance_& instance) = 0;

            protected:
                TwistWithCovariance_DataReaderView () {};
                ~TwistWithCovariance_DataReaderView () {};
            private:
                TwistWithCovariance_DataReaderView (const TwistWithCovariance_DataReaderView &);
                TwistWithCovariance_DataReaderView & operator = (const TwistWithCovariance_DataReaderView &);
            };
        }

    }

}

#endif
