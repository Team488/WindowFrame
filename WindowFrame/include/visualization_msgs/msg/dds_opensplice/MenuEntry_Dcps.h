#ifndef _H_AB27C677EFF0B700A03D1FE3EC381831_MenuEntry_DCPS_H_
#define _H_AB27C677EFF0B700A03D1FE3EC381831_MenuEntry_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MenuEntry_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MenuEntry_TypeSupportInterface;

            typedef MenuEntry_TypeSupportInterface * MenuEntry_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MenuEntry_TypeSupportInterface> MenuEntry_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MenuEntry_TypeSupportInterface> MenuEntry_TypeSupportInterface_out;


            class MenuEntry_DataWriter;

            typedef MenuEntry_DataWriter * MenuEntry_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MenuEntry_DataWriter> MenuEntry_DataWriter_var;
            typedef DDS_DCPSInterface_out < MenuEntry_DataWriter> MenuEntry_DataWriter_out;


            class MenuEntry_DataReader;

            typedef MenuEntry_DataReader * MenuEntry_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MenuEntry_DataReader> MenuEntry_DataReader_var;
            typedef DDS_DCPSInterface_out < MenuEntry_DataReader> MenuEntry_DataReader_out;


            class MenuEntry_DataReaderView;

            typedef MenuEntry_DataReaderView * MenuEntry_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MenuEntry_DataReaderView> MenuEntry_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MenuEntry_DataReaderView> MenuEntry_DataReaderView_out;

            struct MenuEntry_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MenuEntry_, struct MenuEntry_Seq_uniq_> MenuEntry_Seq;
            typedef DDS_DCPSSequence_var < MenuEntry_Seq> MenuEntry_Seq_var;
            typedef DDS_DCPSSequence_out < MenuEntry_Seq> MenuEntry_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MenuEntry_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MenuEntry_TypeSupportInterface_ptr _ptr_type;
                typedef MenuEntry_TypeSupportInterface_var _var_type;

                static MenuEntry_TypeSupportInterface_ptr _duplicate (MenuEntry_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MenuEntry_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MenuEntry_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MenuEntry_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MenuEntry_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MenuEntry_TypeSupportInterface () {};
                ~MenuEntry_TypeSupportInterface () {};
            private:
                MenuEntry_TypeSupportInterface (const MenuEntry_TypeSupportInterface &);
                MenuEntry_TypeSupportInterface & operator = (const MenuEntry_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MenuEntry_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MenuEntry_DataWriter_ptr _ptr_type;
                typedef MenuEntry_DataWriter_var _var_type;

                static MenuEntry_DataWriter_ptr _duplicate (MenuEntry_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MenuEntry_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MenuEntry_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MenuEntry_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MenuEntry_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MenuEntry_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MenuEntry_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MenuEntry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MenuEntry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MenuEntry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MenuEntry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MenuEntry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MenuEntry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MenuEntry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MenuEntry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MenuEntry_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MenuEntry_& instance_data) = 0;

            protected:
                MenuEntry_DataWriter () {};
                ~MenuEntry_DataWriter () {};
            private:
                MenuEntry_DataWriter (const MenuEntry_DataWriter &);
                MenuEntry_DataWriter & operator = (const MenuEntry_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MenuEntry_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MenuEntry_DataReader_ptr _ptr_type;
                typedef MenuEntry_DataReader_var _var_type;

                static MenuEntry_DataReader_ptr _duplicate (MenuEntry_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MenuEntry_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MenuEntry_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MenuEntry_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MenuEntry_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MenuEntry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MenuEntry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MenuEntry_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MenuEntry_& instance) = 0;

            protected:
                MenuEntry_DataReader () {};
                ~MenuEntry_DataReader () {};
            private:
                MenuEntry_DataReader (const MenuEntry_DataReader &);
                MenuEntry_DataReader & operator = (const MenuEntry_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MenuEntry_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MenuEntry_DataReaderView_ptr _ptr_type;
                typedef MenuEntry_DataReaderView_var _var_type;

                static MenuEntry_DataReaderView_ptr _duplicate (MenuEntry_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MenuEntry_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MenuEntry_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MenuEntry_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MenuEntry_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MenuEntry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MenuEntry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MenuEntry_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MenuEntry_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MenuEntry_& instance) = 0;

            protected:
                MenuEntry_DataReaderView () {};
                ~MenuEntry_DataReaderView () {};
            private:
                MenuEntry_DataReaderView (const MenuEntry_DataReaderView &);
                MenuEntry_DataReaderView & operator = (const MenuEntry_DataReaderView &);
            };
        }

    }

}

#endif
