

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiArrayLayout_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MultiArrayLayout_.h"

#include <new>

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MultiArrayLayout_TYPENAME = "std_msgs::msg::dds_::MultiArrayLayout_";

            DDS_TypeCode* MultiArrayLayout__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MultiArrayLayout__g_tc_dim__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MultiArrayLayout__g_tc_members[2]=
                {

                    {
                        (char *)"dim_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"data_offset_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode MultiArrayLayout__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"std_msgs::msg::dds_::MultiArrayLayout_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MultiArrayLayout__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MultiArrayLayout_*/

                if (is_initialized) {
                    return &MultiArrayLayout__g_tc;
                }

                MultiArrayLayout__g_tc_dim__sequence._data._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::MultiArrayDimension__get_typecode();

                MultiArrayLayout__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MultiArrayLayout__g_tc_dim__sequence;
                MultiArrayLayout__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                is_initialized = RTI_TRUE;

                return &MultiArrayLayout__g_tc;
            }

            RTIBool MultiArrayLayout__initialize(
                MultiArrayLayout_* sample) {
                return std_msgs::msg::dds_::MultiArrayLayout__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MultiArrayLayout__initialize_ex(
                MultiArrayLayout_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return std_msgs::msg::dds_::MultiArrayLayout__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MultiArrayLayout__initialize_w_params(
                MultiArrayLayout_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    std_msgs::msg::dds_::MultiArrayDimension_Seq_initialize(&sample->dim_ );
                    std_msgs::msg::dds_::MultiArrayDimension_Seq_set_element_allocation_params(&sample->dim_ ,allocParams);
                    std_msgs::msg::dds_::MultiArrayDimension_Seq_set_absolute_maximum(&sample->dim_ , RTI_INT32_MAX);
                    if (!std_msgs::msg::dds_::MultiArrayDimension_Seq_set_maximum(&sample->dim_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    std_msgs::msg::dds_::MultiArrayDimension_Seq_set_length(&sample->dim_, 0);
                }

                if (!RTICdrType_initUnsignedLong(&sample->data_offset_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void MultiArrayLayout__finalize(
                MultiArrayLayout_* sample)
            {

                std_msgs::msg::dds_::MultiArrayLayout__finalize_ex(sample,RTI_TRUE);
            }

            void MultiArrayLayout__finalize_ex(
                MultiArrayLayout_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                std_msgs::msg::dds_::MultiArrayLayout__finalize_w_params(
                    sample,&deallocParams);
            }

            void MultiArrayLayout__finalize_w_params(
                MultiArrayLayout_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::MultiArrayDimension_Seq_set_element_deallocation_params(
                    &sample->dim_,deallocParams);
                std_msgs::msg::dds_::MultiArrayDimension_Seq_finalize(&sample->dim_);

            }

            void MultiArrayLayout__finalize_optional_members(
                MultiArrayLayout_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                {
                    DDS_UnsignedLong i, length;
                    length = std_msgs::msg::dds_::MultiArrayDimension_Seq_get_length(
                        &sample->dim_);

                    for (i = 0; i < length; i++) {
                        std_msgs::msg::dds_::MultiArrayDimension__finalize_optional_members(
                            std_msgs::msg::dds_::MultiArrayDimension_Seq_get_reference(
                                &sample->dim_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MultiArrayLayout__copy(
                MultiArrayLayout_* dst,
                const MultiArrayLayout_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::MultiArrayDimension_Seq_copy(&dst->dim_ ,
                    &src->dim_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->data_offset_, &src->data_offset_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'MultiArrayLayout_' sequence class.
            */
            #define T MultiArrayLayout_
            #define TSeq MultiArrayLayout_Seq

            #define T_initialize_w_params std_msgs::msg::dds_::MultiArrayLayout__initialize_w_params

            #define T_finalize_w_params   std_msgs::msg::dds_::MultiArrayLayout__finalize_w_params
            #define T_copy       std_msgs::msg::dds_::MultiArrayLayout__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */
