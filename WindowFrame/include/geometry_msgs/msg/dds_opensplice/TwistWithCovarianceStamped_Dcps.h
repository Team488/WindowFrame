#ifndef _H_69056535A8A162F204F26EEAB77FE0AD_TwistWithCovarianceStamped_DCPS_H_
#define _H_69056535A8A162F204F26EEAB77FE0AD_TwistWithCovarianceStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TwistWithCovarianceStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TwistWithCovarianceStamped_TypeSupportInterface;

            typedef TwistWithCovarianceStamped_TypeSupportInterface * TwistWithCovarianceStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovarianceStamped_TypeSupportInterface> TwistWithCovarianceStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TwistWithCovarianceStamped_TypeSupportInterface> TwistWithCovarianceStamped_TypeSupportInterface_out;


            class TwistWithCovarianceStamped_DataWriter;

            typedef TwistWithCovarianceStamped_DataWriter * TwistWithCovarianceStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovarianceStamped_DataWriter> TwistWithCovarianceStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < TwistWithCovarianceStamped_DataWriter> TwistWithCovarianceStamped_DataWriter_out;


            class TwistWithCovarianceStamped_DataReader;

            typedef TwistWithCovarianceStamped_DataReader * TwistWithCovarianceStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovarianceStamped_DataReader> TwistWithCovarianceStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < TwistWithCovarianceStamped_DataReader> TwistWithCovarianceStamped_DataReader_out;


            class TwistWithCovarianceStamped_DataReaderView;

            typedef TwistWithCovarianceStamped_DataReaderView * TwistWithCovarianceStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TwistWithCovarianceStamped_DataReaderView> TwistWithCovarianceStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TwistWithCovarianceStamped_DataReaderView> TwistWithCovarianceStamped_DataReaderView_out;

            struct TwistWithCovarianceStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TwistWithCovarianceStamped_, struct TwistWithCovarianceStamped_Seq_uniq_> TwistWithCovarianceStamped_Seq;
            typedef DDS_DCPSSequence_var < TwistWithCovarianceStamped_Seq> TwistWithCovarianceStamped_Seq_var;
            typedef DDS_DCPSSequence_out < TwistWithCovarianceStamped_Seq> TwistWithCovarianceStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovarianceStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TwistWithCovarianceStamped_TypeSupportInterface_ptr _ptr_type;
                typedef TwistWithCovarianceStamped_TypeSupportInterface_var _var_type;

                static TwistWithCovarianceStamped_TypeSupportInterface_ptr _duplicate (TwistWithCovarianceStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovarianceStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovarianceStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TwistWithCovarianceStamped_TypeSupportInterface () {};
                ~TwistWithCovarianceStamped_TypeSupportInterface () {};
            private:
                TwistWithCovarianceStamped_TypeSupportInterface (const TwistWithCovarianceStamped_TypeSupportInterface &);
                TwistWithCovarianceStamped_TypeSupportInterface & operator = (const TwistWithCovarianceStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovarianceStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TwistWithCovarianceStamped_DataWriter_ptr _ptr_type;
                typedef TwistWithCovarianceStamped_DataWriter_var _var_type;

                static TwistWithCovarianceStamped_DataWriter_ptr _duplicate (TwistWithCovarianceStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovarianceStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovarianceStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TwistWithCovarianceStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TwistWithCovarianceStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TwistWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TwistWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistWithCovarianceStamped_& instance_data) = 0;

            protected:
                TwistWithCovarianceStamped_DataWriter () {};
                ~TwistWithCovarianceStamped_DataWriter () {};
            private:
                TwistWithCovarianceStamped_DataWriter (const TwistWithCovarianceStamped_DataWriter &);
                TwistWithCovarianceStamped_DataWriter & operator = (const TwistWithCovarianceStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovarianceStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TwistWithCovarianceStamped_DataReader_ptr _ptr_type;
                typedef TwistWithCovarianceStamped_DataReader_var _var_type;

                static TwistWithCovarianceStamped_DataReader_ptr _duplicate (TwistWithCovarianceStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovarianceStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovarianceStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TwistWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TwistWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TwistWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistWithCovarianceStamped_& instance) = 0;

            protected:
                TwistWithCovarianceStamped_DataReader () {};
                ~TwistWithCovarianceStamped_DataReader () {};
            private:
                TwistWithCovarianceStamped_DataReader (const TwistWithCovarianceStamped_DataReader &);
                TwistWithCovarianceStamped_DataReader & operator = (const TwistWithCovarianceStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistWithCovarianceStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TwistWithCovarianceStamped_DataReaderView_ptr _ptr_type;
                typedef TwistWithCovarianceStamped_DataReaderView_var _var_type;

                static TwistWithCovarianceStamped_DataReaderView_ptr _duplicate (TwistWithCovarianceStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistWithCovarianceStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistWithCovarianceStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistWithCovarianceStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TwistWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TwistWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TwistWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TwistWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistWithCovarianceStamped_& instance) = 0;

            protected:
                TwistWithCovarianceStamped_DataReaderView () {};
                ~TwistWithCovarianceStamped_DataReaderView () {};
            private:
                TwistWithCovarianceStamped_DataReaderView (const TwistWithCovarianceStamped_DataReaderView &);
                TwistWithCovarianceStamped_DataReaderView & operator = (const TwistWithCovarianceStamped_DataReaderView &);
            };
        }

    }

}

#endif
