#ifndef _H_1517DF66AF1A37CB0B37263CC32E6CFE_OccupancyGrid_DCPS_H_
#define _H_1517DF66AF1A37CB0B37263CC32E6CFE_OccupancyGrid_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "OccupancyGrid_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class OccupancyGrid_TypeSupportInterface;

            typedef OccupancyGrid_TypeSupportInterface * OccupancyGrid_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGrid_TypeSupportInterface> OccupancyGrid_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < OccupancyGrid_TypeSupportInterface> OccupancyGrid_TypeSupportInterface_out;


            class OccupancyGrid_DataWriter;

            typedef OccupancyGrid_DataWriter * OccupancyGrid_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGrid_DataWriter> OccupancyGrid_DataWriter_var;
            typedef DDS_DCPSInterface_out < OccupancyGrid_DataWriter> OccupancyGrid_DataWriter_out;


            class OccupancyGrid_DataReader;

            typedef OccupancyGrid_DataReader * OccupancyGrid_DataReader_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGrid_DataReader> OccupancyGrid_DataReader_var;
            typedef DDS_DCPSInterface_out < OccupancyGrid_DataReader> OccupancyGrid_DataReader_out;


            class OccupancyGrid_DataReaderView;

            typedef OccupancyGrid_DataReaderView * OccupancyGrid_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGrid_DataReaderView> OccupancyGrid_DataReaderView_var;
            typedef DDS_DCPSInterface_out < OccupancyGrid_DataReaderView> OccupancyGrid_DataReaderView_out;

            struct OccupancyGrid_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < OccupancyGrid_, struct OccupancyGrid_Seq_uniq_> OccupancyGrid_Seq;
            typedef DDS_DCPSSequence_var < OccupancyGrid_Seq> OccupancyGrid_Seq_var;
            typedef DDS_DCPSSequence_out < OccupancyGrid_Seq> OccupancyGrid_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs OccupancyGrid_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef OccupancyGrid_TypeSupportInterface_ptr _ptr_type;
                typedef OccupancyGrid_TypeSupportInterface_var _var_type;

                static OccupancyGrid_TypeSupportInterface_ptr _duplicate (OccupancyGrid_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGrid_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGrid_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGrid_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGrid_TypeSupportInterface_ptr _this () { return this; }


            protected:
                OccupancyGrid_TypeSupportInterface () {};
                ~OccupancyGrid_TypeSupportInterface () {};
            private:
                OccupancyGrid_TypeSupportInterface (const OccupancyGrid_TypeSupportInterface &);
                OccupancyGrid_TypeSupportInterface & operator = (const OccupancyGrid_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs OccupancyGrid_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef OccupancyGrid_DataWriter_ptr _ptr_type;
                typedef OccupancyGrid_DataWriter_var _var_type;

                static OccupancyGrid_DataWriter_ptr _duplicate (OccupancyGrid_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGrid_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGrid_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGrid_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGrid_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const OccupancyGrid_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const OccupancyGrid_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const OccupancyGrid_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const OccupancyGrid_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const OccupancyGrid_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const OccupancyGrid_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const OccupancyGrid_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const OccupancyGrid_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const OccupancyGrid_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const OccupancyGrid_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (OccupancyGrid_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OccupancyGrid_& instance_data) = 0;

            protected:
                OccupancyGrid_DataWriter () {};
                ~OccupancyGrid_DataWriter () {};
            private:
                OccupancyGrid_DataWriter (const OccupancyGrid_DataWriter &);
                OccupancyGrid_DataWriter & operator = (const OccupancyGrid_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs OccupancyGrid_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef OccupancyGrid_DataReader_ptr _ptr_type;
                typedef OccupancyGrid_DataReader_var _var_type;

                static OccupancyGrid_DataReader_ptr _duplicate (OccupancyGrid_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGrid_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGrid_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGrid_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGrid_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OccupancyGrid_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OccupancyGrid_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OccupancyGrid_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OccupancyGrid_& instance) = 0;

            protected:
                OccupancyGrid_DataReader () {};
                ~OccupancyGrid_DataReader () {};
            private:
                OccupancyGrid_DataReader (const OccupancyGrid_DataReader &);
                OccupancyGrid_DataReader & operator = (const OccupancyGrid_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs OccupancyGrid_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef OccupancyGrid_DataReaderView_ptr _ptr_type;
                typedef OccupancyGrid_DataReaderView_var _var_type;

                static OccupancyGrid_DataReaderView_ptr _duplicate (OccupancyGrid_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGrid_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGrid_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGrid_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGrid_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OccupancyGrid_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OccupancyGrid_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OccupancyGrid_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OccupancyGrid_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OccupancyGrid_& instance) = 0;

            protected:
                OccupancyGrid_DataReaderView () {};
                ~OccupancyGrid_DataReaderView () {};
            private:
                OccupancyGrid_DataReaderView (const OccupancyGrid_DataReaderView &);
                OccupancyGrid_DataReaderView & operator = (const OccupancyGrid_DataReaderView &);
            };
        }

    }

}

#endif