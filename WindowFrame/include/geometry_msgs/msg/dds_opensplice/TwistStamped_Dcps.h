#ifndef _H_0E7D02C250CD2E7D473AF8ECD96DC404_TwistStamped_DCPS_H_
#define _H_0E7D02C250CD2E7D473AF8ECD96DC404_TwistStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TwistStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TwistStamped_TypeSupportInterface;

            typedef TwistStamped_TypeSupportInterface * TwistStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TwistStamped_TypeSupportInterface> TwistStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TwistStamped_TypeSupportInterface> TwistStamped_TypeSupportInterface_out;


            class TwistStamped_DataWriter;

            typedef TwistStamped_DataWriter * TwistStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TwistStamped_DataWriter> TwistStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < TwistStamped_DataWriter> TwistStamped_DataWriter_out;


            class TwistStamped_DataReader;

            typedef TwistStamped_DataReader * TwistStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TwistStamped_DataReader> TwistStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < TwistStamped_DataReader> TwistStamped_DataReader_out;


            class TwistStamped_DataReaderView;

            typedef TwistStamped_DataReaderView * TwistStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TwistStamped_DataReaderView> TwistStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TwistStamped_DataReaderView> TwistStamped_DataReaderView_out;

            struct TwistStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TwistStamped_, struct TwistStamped_Seq_uniq_> TwistStamped_Seq;
            typedef DDS_DCPSSequence_var < TwistStamped_Seq> TwistStamped_Seq_var;
            typedef DDS_DCPSSequence_out < TwistStamped_Seq> TwistStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TwistStamped_TypeSupportInterface_ptr _ptr_type;
                typedef TwistStamped_TypeSupportInterface_var _var_type;

                static TwistStamped_TypeSupportInterface_ptr _duplicate (TwistStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TwistStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TwistStamped_TypeSupportInterface () {};
                ~TwistStamped_TypeSupportInterface () {};
            private:
                TwistStamped_TypeSupportInterface (const TwistStamped_TypeSupportInterface &);
                TwistStamped_TypeSupportInterface & operator = (const TwistStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TwistStamped_DataWriter_ptr _ptr_type;
                typedef TwistStamped_DataWriter_var _var_type;

                static TwistStamped_DataWriter_ptr _duplicate (TwistStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TwistStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TwistStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TwistStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TwistStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TwistStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TwistStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TwistStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TwistStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TwistStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TwistStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TwistStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TwistStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistStamped_& instance_data) = 0;

            protected:
                TwistStamped_DataWriter () {};
                ~TwistStamped_DataWriter () {};
            private:
                TwistStamped_DataWriter (const TwistStamped_DataWriter &);
                TwistStamped_DataWriter & operator = (const TwistStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TwistStamped_DataReader_ptr _ptr_type;
                typedef TwistStamped_DataReader_var _var_type;

                static TwistStamped_DataReader_ptr _duplicate (TwistStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TwistStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TwistStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TwistStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TwistStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistStamped_& instance) = 0;

            protected:
                TwistStamped_DataReader () {};
                ~TwistStamped_DataReader () {};
            private:
                TwistStamped_DataReader (const TwistStamped_DataReader &);
                TwistStamped_DataReader & operator = (const TwistStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TwistStamped_DataReaderView_ptr _ptr_type;
                typedef TwistStamped_DataReaderView_var _var_type;

                static TwistStamped_DataReaderView_ptr _duplicate (TwistStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TwistStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TwistStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TwistStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TwistStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TwistStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TwistStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TwistStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TwistStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TwistStamped_& instance) = 0;

            protected:
                TwistStamped_DataReaderView () {};
                ~TwistStamped_DataReaderView () {};
            private:
                TwistStamped_DataReaderView (const TwistStamped_DataReaderView &);
                TwistStamped_DataReaderView & operator = (const TwistStamped_DataReaderView &);
            };
        }

    }

}

#endif
