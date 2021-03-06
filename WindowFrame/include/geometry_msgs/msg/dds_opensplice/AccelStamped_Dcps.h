#ifndef _H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped_DCPS_H_
#define _H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AccelStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class AccelStamped_TypeSupportInterface;

            typedef AccelStamped_TypeSupportInterface * AccelStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AccelStamped_TypeSupportInterface> AccelStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AccelStamped_TypeSupportInterface> AccelStamped_TypeSupportInterface_out;


            class AccelStamped_DataWriter;

            typedef AccelStamped_DataWriter * AccelStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AccelStamped_DataWriter> AccelStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < AccelStamped_DataWriter> AccelStamped_DataWriter_out;


            class AccelStamped_DataReader;

            typedef AccelStamped_DataReader * AccelStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AccelStamped_DataReader> AccelStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < AccelStamped_DataReader> AccelStamped_DataReader_out;


            class AccelStamped_DataReaderView;

            typedef AccelStamped_DataReaderView * AccelStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AccelStamped_DataReaderView> AccelStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AccelStamped_DataReaderView> AccelStamped_DataReaderView_out;

            struct AccelStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < AccelStamped_, struct AccelStamped_Seq_uniq_> AccelStamped_Seq;
            typedef DDS_DCPSSequence_var < AccelStamped_Seq> AccelStamped_Seq_var;
            typedef DDS_DCPSSequence_out < AccelStamped_Seq> AccelStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AccelStamped_TypeSupportInterface_ptr _ptr_type;
                typedef AccelStamped_TypeSupportInterface_var _var_type;

                static AccelStamped_TypeSupportInterface_ptr _duplicate (AccelStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AccelStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AccelStamped_TypeSupportInterface () {};
                ~AccelStamped_TypeSupportInterface () {};
            private:
                AccelStamped_TypeSupportInterface (const AccelStamped_TypeSupportInterface &);
                AccelStamped_TypeSupportInterface & operator = (const AccelStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AccelStamped_DataWriter_ptr _ptr_type;
                typedef AccelStamped_DataWriter_var _var_type;

                static AccelStamped_DataWriter_ptr _duplicate (AccelStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AccelStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AccelStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AccelStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AccelStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AccelStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AccelStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AccelStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AccelStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AccelStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AccelStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AccelStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AccelStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelStamped_& instance_data) = 0;

            protected:
                AccelStamped_DataWriter () {};
                ~AccelStamped_DataWriter () {};
            private:
                AccelStamped_DataWriter (const AccelStamped_DataWriter &);
                AccelStamped_DataWriter & operator = (const AccelStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AccelStamped_DataReader_ptr _ptr_type;
                typedef AccelStamped_DataReader_var _var_type;

                static AccelStamped_DataReader_ptr _duplicate (AccelStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AccelStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AccelStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AccelStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AccelStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelStamped_& instance) = 0;

            protected:
                AccelStamped_DataReader () {};
                ~AccelStamped_DataReader () {};
            private:
                AccelStamped_DataReader (const AccelStamped_DataReader &);
                AccelStamped_DataReader & operator = (const AccelStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AccelStamped_DataReaderView_ptr _ptr_type;
                typedef AccelStamped_DataReaderView_var _var_type;

                static AccelStamped_DataReaderView_ptr _duplicate (AccelStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AccelStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AccelStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AccelStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AccelStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AccelStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelStamped_& instance) = 0;

            protected:
                AccelStamped_DataReaderView () {};
                ~AccelStamped_DataReaderView () {};
            private:
                AccelStamped_DataReaderView (const AccelStamped_DataReaderView &);
                AccelStamped_DataReaderView & operator = (const AccelStamped_DataReaderView &);
            };
        }

    }

}

#endif
