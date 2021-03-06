#ifndef _H_3F45F0B57795FE7D6ADE2D51B782756E_TransformStamped_DCPS_H_
#define _H_3F45F0B57795FE7D6ADE2D51B782756E_TransformStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TransformStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TransformStamped_TypeSupportInterface;

            typedef TransformStamped_TypeSupportInterface * TransformStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TransformStamped_TypeSupportInterface> TransformStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TransformStamped_TypeSupportInterface> TransformStamped_TypeSupportInterface_out;


            class TransformStamped_DataWriter;

            typedef TransformStamped_DataWriter * TransformStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TransformStamped_DataWriter> TransformStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < TransformStamped_DataWriter> TransformStamped_DataWriter_out;


            class TransformStamped_DataReader;

            typedef TransformStamped_DataReader * TransformStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TransformStamped_DataReader> TransformStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < TransformStamped_DataReader> TransformStamped_DataReader_out;


            class TransformStamped_DataReaderView;

            typedef TransformStamped_DataReaderView * TransformStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TransformStamped_DataReaderView> TransformStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TransformStamped_DataReaderView> TransformStamped_DataReaderView_out;

            struct TransformStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TransformStamped_, struct TransformStamped_Seq_uniq_> TransformStamped_Seq;
            typedef DDS_DCPSSequence_var < TransformStamped_Seq> TransformStamped_Seq_var;
            typedef DDS_DCPSSequence_out < TransformStamped_Seq> TransformStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TransformStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TransformStamped_TypeSupportInterface_ptr _ptr_type;
                typedef TransformStamped_TypeSupportInterface_var _var_type;

                static TransformStamped_TypeSupportInterface_ptr _duplicate (TransformStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransformStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TransformStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransformStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TransformStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TransformStamped_TypeSupportInterface () {};
                ~TransformStamped_TypeSupportInterface () {};
            private:
                TransformStamped_TypeSupportInterface (const TransformStamped_TypeSupportInterface &);
                TransformStamped_TypeSupportInterface & operator = (const TransformStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TransformStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TransformStamped_DataWriter_ptr _ptr_type;
                typedef TransformStamped_DataWriter_var _var_type;

                static TransformStamped_DataWriter_ptr _duplicate (TransformStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransformStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TransformStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransformStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TransformStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TransformStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TransformStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TransformStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TransformStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TransformStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TransformStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TransformStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TransformStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TransformStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TransformStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TransformStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransformStamped_& instance_data) = 0;

            protected:
                TransformStamped_DataWriter () {};
                ~TransformStamped_DataWriter () {};
            private:
                TransformStamped_DataWriter (const TransformStamped_DataWriter &);
                TransformStamped_DataWriter & operator = (const TransformStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TransformStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TransformStamped_DataReader_ptr _ptr_type;
                typedef TransformStamped_DataReader_var _var_type;

                static TransformStamped_DataReader_ptr _duplicate (TransformStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransformStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TransformStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransformStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TransformStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TransformStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TransformStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TransformStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransformStamped_& instance) = 0;

            protected:
                TransformStamped_DataReader () {};
                ~TransformStamped_DataReader () {};
            private:
                TransformStamped_DataReader (const TransformStamped_DataReader &);
                TransformStamped_DataReader & operator = (const TransformStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TransformStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TransformStamped_DataReaderView_ptr _ptr_type;
                typedef TransformStamped_DataReaderView_var _var_type;

                static TransformStamped_DataReaderView_ptr _duplicate (TransformStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransformStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TransformStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransformStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TransformStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TransformStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TransformStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TransformStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TransformStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransformStamped_& instance) = 0;

            protected:
                TransformStamped_DataReaderView () {};
                ~TransformStamped_DataReaderView () {};
            private:
                TransformStamped_DataReaderView (const TransformStamped_DataReaderView &);
                TransformStamped_DataReaderView & operator = (const TransformStamped_DataReaderView &);
            };
        }

    }

}

#endif
