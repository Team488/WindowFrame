#ifndef _H_E31D87DB2DF79C2CFBF9F29110A189AE_DisparityImage_DCPS_H_
#define _H_E31D87DB2DF79C2CFBF9F29110A189AE_DisparityImage_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "DisparityImage_.h"

#include "stereo_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace stereo_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class DisparityImage_TypeSupportInterface;

            typedef DisparityImage_TypeSupportInterface * DisparityImage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < DisparityImage_TypeSupportInterface> DisparityImage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < DisparityImage_TypeSupportInterface> DisparityImage_TypeSupportInterface_out;


            class DisparityImage_DataWriter;

            typedef DisparityImage_DataWriter * DisparityImage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < DisparityImage_DataWriter> DisparityImage_DataWriter_var;
            typedef DDS_DCPSInterface_out < DisparityImage_DataWriter> DisparityImage_DataWriter_out;


            class DisparityImage_DataReader;

            typedef DisparityImage_DataReader * DisparityImage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < DisparityImage_DataReader> DisparityImage_DataReader_var;
            typedef DDS_DCPSInterface_out < DisparityImage_DataReader> DisparityImage_DataReader_out;


            class DisparityImage_DataReaderView;

            typedef DisparityImage_DataReaderView * DisparityImage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < DisparityImage_DataReaderView> DisparityImage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < DisparityImage_DataReaderView> DisparityImage_DataReaderView_out;

            struct DisparityImage_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < DisparityImage_, struct DisparityImage_Seq_uniq_> DisparityImage_Seq;
            typedef DDS_DCPSSequence_var < DisparityImage_Seq> DisparityImage_Seq_var;
            typedef DDS_DCPSSequence_out < DisparityImage_Seq> DisparityImage_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs DisparityImage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef DisparityImage_TypeSupportInterface_ptr _ptr_type;
                typedef DisparityImage_TypeSupportInterface_var _var_type;

                static DisparityImage_TypeSupportInterface_ptr _duplicate (DisparityImage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DisparityImage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static DisparityImage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DisparityImage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                DisparityImage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                DisparityImage_TypeSupportInterface () {};
                ~DisparityImage_TypeSupportInterface () {};
            private:
                DisparityImage_TypeSupportInterface (const DisparityImage_TypeSupportInterface &);
                DisparityImage_TypeSupportInterface & operator = (const DisparityImage_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs DisparityImage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef DisparityImage_DataWriter_ptr _ptr_type;
                typedef DisparityImage_DataWriter_var _var_type;

                static DisparityImage_DataWriter_ptr _duplicate (DisparityImage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DisparityImage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static DisparityImage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DisparityImage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                DisparityImage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const DisparityImage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const DisparityImage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const DisparityImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const DisparityImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const DisparityImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const DisparityImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const DisparityImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const DisparityImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const DisparityImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const DisparityImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (DisparityImage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DisparityImage_& instance_data) = 0;

            protected:
                DisparityImage_DataWriter () {};
                ~DisparityImage_DataWriter () {};
            private:
                DisparityImage_DataWriter (const DisparityImage_DataWriter &);
                DisparityImage_DataWriter & operator = (const DisparityImage_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs DisparityImage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef DisparityImage_DataReader_ptr _ptr_type;
                typedef DisparityImage_DataReader_var _var_type;

                static DisparityImage_DataReader_ptr _duplicate (DisparityImage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DisparityImage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static DisparityImage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DisparityImage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                DisparityImage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DisparityImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DisparityImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DisparityImage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DisparityImage_& instance) = 0;

            protected:
                DisparityImage_DataReader () {};
                ~DisparityImage_DataReader () {};
            private:
                DisparityImage_DataReader (const DisparityImage_DataReader &);
                DisparityImage_DataReader & operator = (const DisparityImage_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs DisparityImage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef DisparityImage_DataReaderView_ptr _ptr_type;
                typedef DisparityImage_DataReaderView_var _var_type;

                static DisparityImage_DataReaderView_ptr _duplicate (DisparityImage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DisparityImage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static DisparityImage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DisparityImage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                DisparityImage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DisparityImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DisparityImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DisparityImage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DisparityImage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DisparityImage_& instance) = 0;

            protected:
                DisparityImage_DataReaderView () {};
                ~DisparityImage_DataReaderView () {};
            private:
                DisparityImage_DataReaderView (const DisparityImage_DataReaderView &);
                DisparityImage_DataReaderView & operator = (const DisparityImage_DataReaderView &);
            };
        }

    }

}

#endif
