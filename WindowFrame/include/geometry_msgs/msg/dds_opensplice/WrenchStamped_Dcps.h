#ifndef _H_33BF45D3A8CCB68B5028E0C7F8594761_WrenchStamped_DCPS_H_
#define _H_33BF45D3A8CCB68B5028E0C7F8594761_WrenchStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "WrenchStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class WrenchStamped_TypeSupportInterface;

            typedef WrenchStamped_TypeSupportInterface * WrenchStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < WrenchStamped_TypeSupportInterface> WrenchStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < WrenchStamped_TypeSupportInterface> WrenchStamped_TypeSupportInterface_out;


            class WrenchStamped_DataWriter;

            typedef WrenchStamped_DataWriter * WrenchStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < WrenchStamped_DataWriter> WrenchStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < WrenchStamped_DataWriter> WrenchStamped_DataWriter_out;


            class WrenchStamped_DataReader;

            typedef WrenchStamped_DataReader * WrenchStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < WrenchStamped_DataReader> WrenchStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < WrenchStamped_DataReader> WrenchStamped_DataReader_out;


            class WrenchStamped_DataReaderView;

            typedef WrenchStamped_DataReaderView * WrenchStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < WrenchStamped_DataReaderView> WrenchStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < WrenchStamped_DataReaderView> WrenchStamped_DataReaderView_out;

            struct WrenchStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < WrenchStamped_, struct WrenchStamped_Seq_uniq_> WrenchStamped_Seq;
            typedef DDS_DCPSSequence_var < WrenchStamped_Seq> WrenchStamped_Seq_var;
            typedef DDS_DCPSSequence_out < WrenchStamped_Seq> WrenchStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs WrenchStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef WrenchStamped_TypeSupportInterface_ptr _ptr_type;
                typedef WrenchStamped_TypeSupportInterface_var _var_type;

                static WrenchStamped_TypeSupportInterface_ptr _duplicate (WrenchStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WrenchStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static WrenchStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WrenchStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                WrenchStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                WrenchStamped_TypeSupportInterface () {};
                ~WrenchStamped_TypeSupportInterface () {};
            private:
                WrenchStamped_TypeSupportInterface (const WrenchStamped_TypeSupportInterface &);
                WrenchStamped_TypeSupportInterface & operator = (const WrenchStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs WrenchStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef WrenchStamped_DataWriter_ptr _ptr_type;
                typedef WrenchStamped_DataWriter_var _var_type;

                static WrenchStamped_DataWriter_ptr _duplicate (WrenchStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WrenchStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static WrenchStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WrenchStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                WrenchStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const WrenchStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const WrenchStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const WrenchStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const WrenchStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const WrenchStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const WrenchStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const WrenchStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const WrenchStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const WrenchStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const WrenchStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (WrenchStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const WrenchStamped_& instance_data) = 0;

            protected:
                WrenchStamped_DataWriter () {};
                ~WrenchStamped_DataWriter () {};
            private:
                WrenchStamped_DataWriter (const WrenchStamped_DataWriter &);
                WrenchStamped_DataWriter & operator = (const WrenchStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs WrenchStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef WrenchStamped_DataReader_ptr _ptr_type;
                typedef WrenchStamped_DataReader_var _var_type;

                static WrenchStamped_DataReader_ptr _duplicate (WrenchStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WrenchStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static WrenchStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WrenchStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                WrenchStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (WrenchStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (WrenchStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (WrenchStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const WrenchStamped_& instance) = 0;

            protected:
                WrenchStamped_DataReader () {};
                ~WrenchStamped_DataReader () {};
            private:
                WrenchStamped_DataReader (const WrenchStamped_DataReader &);
                WrenchStamped_DataReader & operator = (const WrenchStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs WrenchStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef WrenchStamped_DataReaderView_ptr _ptr_type;
                typedef WrenchStamped_DataReaderView_var _var_type;

                static WrenchStamped_DataReaderView_ptr _duplicate (WrenchStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static WrenchStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static WrenchStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static WrenchStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                WrenchStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (WrenchStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (WrenchStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (WrenchStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (WrenchStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const WrenchStamped_& instance) = 0;

            protected:
                WrenchStamped_DataReaderView () {};
                ~WrenchStamped_DataReaderView () {};
            private:
                WrenchStamped_DataReaderView (const WrenchStamped_DataReaderView &);
                WrenchStamped_DataReaderView & operator = (const WrenchStamped_DataReaderView &);
            };
        }

    }

}

#endif
