#ifndef _H_4477BE25728510F4B26CF8EF92880E22_BatteryState_DCPS_H_
#define _H_4477BE25728510F4B26CF8EF92880E22_BatteryState_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "BatteryState_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class BatteryState_TypeSupportInterface;

            typedef BatteryState_TypeSupportInterface * BatteryState_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < BatteryState_TypeSupportInterface> BatteryState_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < BatteryState_TypeSupportInterface> BatteryState_TypeSupportInterface_out;


            class BatteryState_DataWriter;

            typedef BatteryState_DataWriter * BatteryState_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < BatteryState_DataWriter> BatteryState_DataWriter_var;
            typedef DDS_DCPSInterface_out < BatteryState_DataWriter> BatteryState_DataWriter_out;


            class BatteryState_DataReader;

            typedef BatteryState_DataReader * BatteryState_DataReader_ptr;
            typedef DDS_DCPSInterface_var < BatteryState_DataReader> BatteryState_DataReader_var;
            typedef DDS_DCPSInterface_out < BatteryState_DataReader> BatteryState_DataReader_out;


            class BatteryState_DataReaderView;

            typedef BatteryState_DataReaderView * BatteryState_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < BatteryState_DataReaderView> BatteryState_DataReaderView_var;
            typedef DDS_DCPSInterface_out < BatteryState_DataReaderView> BatteryState_DataReaderView_out;

            struct BatteryState_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < BatteryState_, struct BatteryState_Seq_uniq_> BatteryState_Seq;
            typedef DDS_DCPSSequence_var < BatteryState_Seq> BatteryState_Seq_var;
            typedef DDS_DCPSSequence_out < BatteryState_Seq> BatteryState_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs BatteryState_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef BatteryState_TypeSupportInterface_ptr _ptr_type;
                typedef BatteryState_TypeSupportInterface_var _var_type;

                static BatteryState_TypeSupportInterface_ptr _duplicate (BatteryState_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BatteryState_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static BatteryState_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BatteryState_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                BatteryState_TypeSupportInterface_ptr _this () { return this; }


            protected:
                BatteryState_TypeSupportInterface () {};
                ~BatteryState_TypeSupportInterface () {};
            private:
                BatteryState_TypeSupportInterface (const BatteryState_TypeSupportInterface &);
                BatteryState_TypeSupportInterface & operator = (const BatteryState_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs BatteryState_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef BatteryState_DataWriter_ptr _ptr_type;
                typedef BatteryState_DataWriter_var _var_type;

                static BatteryState_DataWriter_ptr _duplicate (BatteryState_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BatteryState_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static BatteryState_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BatteryState_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                BatteryState_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const BatteryState_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const BatteryState_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const BatteryState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const BatteryState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const BatteryState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const BatteryState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const BatteryState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const BatteryState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const BatteryState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const BatteryState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (BatteryState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BatteryState_& instance_data) = 0;

            protected:
                BatteryState_DataWriter () {};
                ~BatteryState_DataWriter () {};
            private:
                BatteryState_DataWriter (const BatteryState_DataWriter &);
                BatteryState_DataWriter & operator = (const BatteryState_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs BatteryState_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef BatteryState_DataReader_ptr _ptr_type;
                typedef BatteryState_DataReader_var _var_type;

                static BatteryState_DataReader_ptr _duplicate (BatteryState_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BatteryState_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static BatteryState_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BatteryState_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                BatteryState_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BatteryState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BatteryState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BatteryState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BatteryState_& instance) = 0;

            protected:
                BatteryState_DataReader () {};
                ~BatteryState_DataReader () {};
            private:
                BatteryState_DataReader (const BatteryState_DataReader &);
                BatteryState_DataReader & operator = (const BatteryState_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs BatteryState_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef BatteryState_DataReaderView_ptr _ptr_type;
                typedef BatteryState_DataReaderView_var _var_type;

                static BatteryState_DataReaderView_ptr _duplicate (BatteryState_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BatteryState_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static BatteryState_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BatteryState_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                BatteryState_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BatteryState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BatteryState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BatteryState_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BatteryState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BatteryState_& instance) = 0;

            protected:
                BatteryState_DataReaderView () {};
                ~BatteryState_DataReaderView () {};
            private:
                BatteryState_DataReaderView (const BatteryState_DataReaderView &);
                BatteryState_DataReaderView & operator = (const BatteryState_DataReaderView &);
            };
        }

    }

}

#endif
