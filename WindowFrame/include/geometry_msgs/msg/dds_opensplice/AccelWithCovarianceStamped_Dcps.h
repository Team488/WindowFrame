#ifndef _H_91A6205CE793069D50AB4529DED0A97A_AccelWithCovarianceStamped_DCPS_H_
#define _H_91A6205CE793069D50AB4529DED0A97A_AccelWithCovarianceStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AccelWithCovarianceStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class AccelWithCovarianceStamped_TypeSupportInterface;

            typedef AccelWithCovarianceStamped_TypeSupportInterface * AccelWithCovarianceStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovarianceStamped_TypeSupportInterface> AccelWithCovarianceStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AccelWithCovarianceStamped_TypeSupportInterface> AccelWithCovarianceStamped_TypeSupportInterface_out;


            class AccelWithCovarianceStamped_DataWriter;

            typedef AccelWithCovarianceStamped_DataWriter * AccelWithCovarianceStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovarianceStamped_DataWriter> AccelWithCovarianceStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < AccelWithCovarianceStamped_DataWriter> AccelWithCovarianceStamped_DataWriter_out;


            class AccelWithCovarianceStamped_DataReader;

            typedef AccelWithCovarianceStamped_DataReader * AccelWithCovarianceStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovarianceStamped_DataReader> AccelWithCovarianceStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < AccelWithCovarianceStamped_DataReader> AccelWithCovarianceStamped_DataReader_out;


            class AccelWithCovarianceStamped_DataReaderView;

            typedef AccelWithCovarianceStamped_DataReaderView * AccelWithCovarianceStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AccelWithCovarianceStamped_DataReaderView> AccelWithCovarianceStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AccelWithCovarianceStamped_DataReaderView> AccelWithCovarianceStamped_DataReaderView_out;

            struct AccelWithCovarianceStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < AccelWithCovarianceStamped_, struct AccelWithCovarianceStamped_Seq_uniq_> AccelWithCovarianceStamped_Seq;
            typedef DDS_DCPSSequence_var < AccelWithCovarianceStamped_Seq> AccelWithCovarianceStamped_Seq_var;
            typedef DDS_DCPSSequence_out < AccelWithCovarianceStamped_Seq> AccelWithCovarianceStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovarianceStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AccelWithCovarianceStamped_TypeSupportInterface_ptr _ptr_type;
                typedef AccelWithCovarianceStamped_TypeSupportInterface_var _var_type;

                static AccelWithCovarianceStamped_TypeSupportInterface_ptr _duplicate (AccelWithCovarianceStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovarianceStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovarianceStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AccelWithCovarianceStamped_TypeSupportInterface () {};
                ~AccelWithCovarianceStamped_TypeSupportInterface () {};
            private:
                AccelWithCovarianceStamped_TypeSupportInterface (const AccelWithCovarianceStamped_TypeSupportInterface &);
                AccelWithCovarianceStamped_TypeSupportInterface & operator = (const AccelWithCovarianceStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovarianceStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AccelWithCovarianceStamped_DataWriter_ptr _ptr_type;
                typedef AccelWithCovarianceStamped_DataWriter_var _var_type;

                static AccelWithCovarianceStamped_DataWriter_ptr _duplicate (AccelWithCovarianceStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovarianceStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovarianceStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AccelWithCovarianceStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AccelWithCovarianceStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AccelWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AccelWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelWithCovarianceStamped_& instance_data) = 0;

            protected:
                AccelWithCovarianceStamped_DataWriter () {};
                ~AccelWithCovarianceStamped_DataWriter () {};
            private:
                AccelWithCovarianceStamped_DataWriter (const AccelWithCovarianceStamped_DataWriter &);
                AccelWithCovarianceStamped_DataWriter & operator = (const AccelWithCovarianceStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovarianceStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AccelWithCovarianceStamped_DataReader_ptr _ptr_type;
                typedef AccelWithCovarianceStamped_DataReader_var _var_type;

                static AccelWithCovarianceStamped_DataReader_ptr _duplicate (AccelWithCovarianceStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovarianceStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovarianceStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AccelWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AccelWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AccelWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelWithCovarianceStamped_& instance) = 0;

            protected:
                AccelWithCovarianceStamped_DataReader () {};
                ~AccelWithCovarianceStamped_DataReader () {};
            private:
                AccelWithCovarianceStamped_DataReader (const AccelWithCovarianceStamped_DataReader &);
                AccelWithCovarianceStamped_DataReader & operator = (const AccelWithCovarianceStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelWithCovarianceStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AccelWithCovarianceStamped_DataReaderView_ptr _ptr_type;
                typedef AccelWithCovarianceStamped_DataReaderView_var _var_type;

                static AccelWithCovarianceStamped_DataReaderView_ptr _duplicate (AccelWithCovarianceStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AccelWithCovarianceStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AccelWithCovarianceStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AccelWithCovarianceStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AccelWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AccelWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AccelWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AccelWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AccelWithCovarianceStamped_& instance) = 0;

            protected:
                AccelWithCovarianceStamped_DataReaderView () {};
                ~AccelWithCovarianceStamped_DataReaderView () {};
            private:
                AccelWithCovarianceStamped_DataReaderView (const AccelWithCovarianceStamped_DataReaderView &);
                AccelWithCovarianceStamped_DataReaderView & operator = (const AccelWithCovarianceStamped_DataReaderView &);
            };
        }

    }

}

#endif
