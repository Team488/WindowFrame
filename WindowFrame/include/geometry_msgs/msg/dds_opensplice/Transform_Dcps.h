#ifndef _H_850FE1700AEFDDDB32504357F7BC6210_Transform_DCPS_H_
#define _H_850FE1700AEFDDDB32504357F7BC6210_Transform_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Transform_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Transform_TypeSupportInterface;

            typedef Transform_TypeSupportInterface * Transform_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Transform_TypeSupportInterface> Transform_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Transform_TypeSupportInterface> Transform_TypeSupportInterface_out;


            class Transform_DataWriter;

            typedef Transform_DataWriter * Transform_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Transform_DataWriter> Transform_DataWriter_var;
            typedef DDS_DCPSInterface_out < Transform_DataWriter> Transform_DataWriter_out;


            class Transform_DataReader;

            typedef Transform_DataReader * Transform_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Transform_DataReader> Transform_DataReader_var;
            typedef DDS_DCPSInterface_out < Transform_DataReader> Transform_DataReader_out;


            class Transform_DataReaderView;

            typedef Transform_DataReaderView * Transform_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Transform_DataReaderView> Transform_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Transform_DataReaderView> Transform_DataReaderView_out;

            struct Transform_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Transform_, struct Transform_Seq_uniq_> Transform_Seq;
            typedef DDS_DCPSSequence_var < Transform_Seq> Transform_Seq_var;
            typedef DDS_DCPSSequence_out < Transform_Seq> Transform_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Transform_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Transform_TypeSupportInterface_ptr _ptr_type;
                typedef Transform_TypeSupportInterface_var _var_type;

                static Transform_TypeSupportInterface_ptr _duplicate (Transform_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transform_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Transform_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transform_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Transform_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Transform_TypeSupportInterface () {};
                ~Transform_TypeSupportInterface () {};
            private:
                Transform_TypeSupportInterface (const Transform_TypeSupportInterface &);
                Transform_TypeSupportInterface & operator = (const Transform_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Transform_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Transform_DataWriter_ptr _ptr_type;
                typedef Transform_DataWriter_var _var_type;

                static Transform_DataWriter_ptr _duplicate (Transform_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transform_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Transform_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transform_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Transform_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Transform_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Transform_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Transform_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Transform_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Transform_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Transform_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Transform_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Transform_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Transform_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Transform_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Transform_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Transform_& instance_data) = 0;

            protected:
                Transform_DataWriter () {};
                ~Transform_DataWriter () {};
            private:
                Transform_DataWriter (const Transform_DataWriter &);
                Transform_DataWriter & operator = (const Transform_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Transform_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Transform_DataReader_ptr _ptr_type;
                typedef Transform_DataReader_var _var_type;

                static Transform_DataReader_ptr _duplicate (Transform_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transform_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Transform_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transform_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Transform_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Transform_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Transform_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Transform_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Transform_& instance) = 0;

            protected:
                Transform_DataReader () {};
                ~Transform_DataReader () {};
            private:
                Transform_DataReader (const Transform_DataReader &);
                Transform_DataReader & operator = (const Transform_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Transform_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Transform_DataReaderView_ptr _ptr_type;
                typedef Transform_DataReaderView_var _var_type;

                static Transform_DataReaderView_ptr _duplicate (Transform_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transform_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Transform_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transform_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Transform_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Transform_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Transform_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Transform_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Transform_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Transform_& instance) = 0;

            protected:
                Transform_DataReaderView () {};
                ~Transform_DataReaderView () {};
            private:
                Transform_DataReaderView (const Transform_DataReaderView &);
                Transform_DataReaderView & operator = (const Transform_DataReaderView &);
            };
        }

    }

}

#endif
