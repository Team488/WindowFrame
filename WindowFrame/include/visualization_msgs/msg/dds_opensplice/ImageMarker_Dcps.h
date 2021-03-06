#ifndef _H_1337FE43C1652C80096E8F278BB8B8EA_ImageMarker_DCPS_H_
#define _H_1337FE43C1652C80096E8F278BB8B8EA_ImageMarker_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ImageMarker_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ImageMarker_TypeSupportInterface;

            typedef ImageMarker_TypeSupportInterface * ImageMarker_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ImageMarker_TypeSupportInterface> ImageMarker_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ImageMarker_TypeSupportInterface> ImageMarker_TypeSupportInterface_out;


            class ImageMarker_DataWriter;

            typedef ImageMarker_DataWriter * ImageMarker_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ImageMarker_DataWriter> ImageMarker_DataWriter_var;
            typedef DDS_DCPSInterface_out < ImageMarker_DataWriter> ImageMarker_DataWriter_out;


            class ImageMarker_DataReader;

            typedef ImageMarker_DataReader * ImageMarker_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ImageMarker_DataReader> ImageMarker_DataReader_var;
            typedef DDS_DCPSInterface_out < ImageMarker_DataReader> ImageMarker_DataReader_out;


            class ImageMarker_DataReaderView;

            typedef ImageMarker_DataReaderView * ImageMarker_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ImageMarker_DataReaderView> ImageMarker_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ImageMarker_DataReaderView> ImageMarker_DataReaderView_out;

            struct ImageMarker_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ImageMarker_, struct ImageMarker_Seq_uniq_> ImageMarker_Seq;
            typedef DDS_DCPSSequence_var < ImageMarker_Seq> ImageMarker_Seq_var;
            typedef DDS_DCPSSequence_out < ImageMarker_Seq> ImageMarker_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs ImageMarker_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ImageMarker_TypeSupportInterface_ptr _ptr_type;
                typedef ImageMarker_TypeSupportInterface_var _var_type;

                static ImageMarker_TypeSupportInterface_ptr _duplicate (ImageMarker_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageMarker_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ImageMarker_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageMarker_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageMarker_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ImageMarker_TypeSupportInterface () {};
                ~ImageMarker_TypeSupportInterface () {};
            private:
                ImageMarker_TypeSupportInterface (const ImageMarker_TypeSupportInterface &);
                ImageMarker_TypeSupportInterface & operator = (const ImageMarker_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs ImageMarker_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ImageMarker_DataWriter_ptr _ptr_type;
                typedef ImageMarker_DataWriter_var _var_type;

                static ImageMarker_DataWriter_ptr _duplicate (ImageMarker_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageMarker_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ImageMarker_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageMarker_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageMarker_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ImageMarker_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ImageMarker_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ImageMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ImageMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ImageMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ImageMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ImageMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ImageMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ImageMarker_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ImageMarker_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ImageMarker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ImageMarker_& instance_data) = 0;

            protected:
                ImageMarker_DataWriter () {};
                ~ImageMarker_DataWriter () {};
            private:
                ImageMarker_DataWriter (const ImageMarker_DataWriter &);
                ImageMarker_DataWriter & operator = (const ImageMarker_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs ImageMarker_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ImageMarker_DataReader_ptr _ptr_type;
                typedef ImageMarker_DataReader_var _var_type;

                static ImageMarker_DataReader_ptr _duplicate (ImageMarker_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageMarker_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ImageMarker_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageMarker_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageMarker_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ImageMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ImageMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ImageMarker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ImageMarker_& instance) = 0;

            protected:
                ImageMarker_DataReader () {};
                ~ImageMarker_DataReader () {};
            private:
                ImageMarker_DataReader (const ImageMarker_DataReader &);
                ImageMarker_DataReader & operator = (const ImageMarker_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs ImageMarker_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ImageMarker_DataReaderView_ptr _ptr_type;
                typedef ImageMarker_DataReaderView_var _var_type;

                static ImageMarker_DataReaderView_ptr _duplicate (ImageMarker_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageMarker_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ImageMarker_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageMarker_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageMarker_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ImageMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ImageMarker_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ImageMarker_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ImageMarker_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ImageMarker_& instance) = 0;

            protected:
                ImageMarker_DataReaderView () {};
                ~ImageMarker_DataReaderView () {};
            private:
                ImageMarker_DataReaderView (const ImageMarker_DataReaderView &);
                ImageMarker_DataReaderView & operator = (const ImageMarker_DataReaderView &);
            };
        }

    }

}

#endif
