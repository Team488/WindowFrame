#ifndef _H_E86A33C026A34F6CF83721C2350DE748_AccelWithCovariance_DCPS_H_
#define _H_E86A33C026A34F6CF83721C2350DE748_AccelWithCovariance_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AccelWithCovariance_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class AccelWithCovariance_TypeSupportInterface;

            typedef AccelWithCovariance_TypeSupportInterface * AccelWithCovariance_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovariance_TypeSupportInterface> AccelWithCovariance_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AccelWithCovariance_TypeSupportInterface> AccelWithCovariance_TypeSupportInterface_out;


            class AccelWithCovariance_DataWriter;

            typedef AccelWithCovariance_DataWriter * AccelWithCovariance_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovariance_DataWriter> AccelWithCovariance_DataWriter_var;
            typedef DDS_DCPSInterface_out < AccelWithCovariance_DataWriter> AccelWithCovariance_DataWriter_out;


            class AccelWithCovariance_DataReader;

            typedef AccelWithCovariance_DataReader * AccelWithCovariance_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovariance_DataReader> AccelWithCovariance_DataReader_var;
            typedef DDS_DCPSInterface_out < AccelWithCovariance_DataReader> AccelWithCovariance_DataReader_out;


            class AccelWithCovariance_DataReaderView;

            typedef AccelWithCovariance_DataReaderView * AccelWithCovariance_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovariance_DataReaderView> AccelWithCovariance_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AccelWithCovariance_DataReaderView> AccelWithCovariance_DataReaderView_out;

            struct AccelWithCovariance_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < AccelWithCovariance_, struct AccelWithCovariance_Seq_uniq_> AccelWithCovariance_Seq;
            typedef DDS_DCPSSequence_var < AccelWithCovariance_Seq> AccelWithCovariance_Seq_var;
            typedef DDS_DCPSSequence_out < AccelWithCovariance_Seq> AccelWithCovariance_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovariance_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AccelWithCovariance_TypeSupportInterface_ptr _ptr_type;
                typedef AccelWithCovariance_TypeSupportInterface_var _var_type;

                static AccelWithCovariance_TypeSupportInterface_ptr _duplicate (AccelWithCovariance_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovariance_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovariance_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AccelWithCovariance_TypeSupportInterface () {};
                ~AccelWithCovariance_TypeSupportInterface () {};
            private:
                AccelWithCovariance_TypeSupportInterface (const AccelWithCovariance_TypeSupportInterface &);
                AccelWithCovariance_TypeSupportInterface & operator = (const AccelWithCovariance_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovariance_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AccelWithCovariance_DataWriter_ptr _ptr_type;
                typedef AccelWithCovariance_DataWriter_var _var_type;

                static AccelWithCovariance_DataWriter_ptr _duplicate (AccelWithCovariance_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovariance_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovariance_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AccelWithCovariance_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AccelWithCovariance_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AccelWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AccelWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AccelWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AccelWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AccelWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AccelWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AccelWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AccelWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AccelWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelWithCovariance_& instance_data) = 0;

            protected:
                AccelWithCovariance_DataWriter () {};
                ~AccelWithCovariance_DataWriter () {};
            private:
                AccelWithCovariance_DataWriter (const AccelWithCovariance_DataWriter &);
                AccelWithCovariance_DataWriter & operator = (const AccelWithCovariance_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovariance_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AccelWithCovariance_DataReader_ptr _ptr_type;
                typedef AccelWithCovariance_DataReader_var _var_type;

                static AccelWithCovariance_DataReader_ptr _duplicate (AccelWithCovariance_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovariance_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovariance_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AccelWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AccelWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AccelWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelWithCovariance_& instance) = 0;

            protected:
                AccelWithCovariance_DataReader () {};
                ~AccelWithCovariance_DataReader () {};
            private:
                AccelWithCovariance_DataReader (const AccelWithCovariance_DataReader &);
                AccelWithCovariance_DataReader & operator = (const AccelWithCovariance_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovariance_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AccelWithCovariance_DataReaderView_ptr _ptr_type;
                typedef AccelWithCovariance_DataReaderView_var _var_type;

                static AccelWithCovariance_DataReaderView_ptr _duplicate (AccelWithCovariance_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovariance_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovariance_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovariance_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AccelWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AccelWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AccelWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AccelWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelWithCovariance_& instance) = 0;

            protected:
                AccelWithCovariance_DataReaderView () {};
                ~AccelWithCovariance_DataReaderView () {};
            private:
                AccelWithCovariance_DataReaderView (const AccelWithCovariance_DataReaderView &);
                AccelWithCovariance_DataReaderView & operator = (const AccelWithCovariance_DataReaderView &);
            };
        }

    }

}

#endif
