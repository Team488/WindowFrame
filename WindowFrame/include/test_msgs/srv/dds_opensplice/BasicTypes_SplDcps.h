#ifndef H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes_SPLTYPES_H
#define H_2DED557BD96F2D716C63607446D6CEB9_BasicTypes_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_BasicTypes_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __BasicTypes__test_msgs__load (c_base base);

extern c_metaObject __BasicTypes__test_msgs_srv__load (c_base base);

extern c_metaObject __BasicTypes__test_msgs_srv_dds___load (c_base base);

extern const char *test_msgs_srv_dds__BasicTypes_Request__metaDescriptor[];
extern const int test_msgs_srv_dds__BasicTypes_Request__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__BasicTypes_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__BasicTypes_Request___load (c_base base);
struct _test_msgs_srv_dds__BasicTypes_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__BasicTypes_Request___copyIn(c_base base, const struct test_msgs::srv::dds_::BasicTypes_Request_ *from, struct _test_msgs_srv_dds__BasicTypes_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__BasicTypes_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__BasicTypes_Request_ {
    c_bool bool_value_;
    c_octet byte_value_;
    c_octet char_value_;
    c_float float32_value_;
    c_double float64_value_;
    c_octet int8_value_;
    c_octet uint8_value_;
    c_short int16_value_;
    c_ushort uint16_value_;
    c_long int32_value_;
    c_ulong uint32_value_;
    c_longlong int64_value_;
    c_ulonglong uint64_value_;
    c_string string_value_;
};

extern const char *test_msgs_srv_dds__BasicTypes_Response__metaDescriptor[];
extern const int test_msgs_srv_dds__BasicTypes_Response__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__BasicTypes_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__BasicTypes_Response___load (c_base base);
struct _test_msgs_srv_dds__BasicTypes_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__BasicTypes_Response___copyIn(c_base base, const struct test_msgs::srv::dds_::BasicTypes_Response_ *from, struct _test_msgs_srv_dds__BasicTypes_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__BasicTypes_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__BasicTypes_Response_ {
    c_bool bool_value_;
    c_octet byte_value_;
    c_octet char_value_;
    c_float float32_value_;
    c_double float64_value_;
    c_octet int8_value_;
    c_octet uint8_value_;
    c_short int16_value_;
    c_ushort uint16_value_;
    c_long int32_value_;
    c_ulong uint32_value_;
    c_longlong int64_value_;
    c_ulonglong uint64_value_;
    c_string string_value_;
};

extern const char *test_msgs_srv_dds__Sample_BasicTypes_Request__metaDescriptor[];
extern const int test_msgs_srv_dds__Sample_BasicTypes_Request__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Sample_BasicTypes_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Sample_BasicTypes_Request___load (c_base base);
struct _test_msgs_srv_dds__Sample_BasicTypes_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Sample_BasicTypes_Request___copyIn(c_base base, const struct test_msgs::srv::dds_::Sample_BasicTypes_Request_ *from, struct _test_msgs_srv_dds__Sample_BasicTypes_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Sample_BasicTypes_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Sample_BasicTypes_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_srv_dds__BasicTypes_Request_ request_;
};

extern const char *test_msgs_srv_dds__Sample_BasicTypes_Response__metaDescriptor[];
extern const int test_msgs_srv_dds__Sample_BasicTypes_Response__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Sample_BasicTypes_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Sample_BasicTypes_Response___load (c_base base);
struct _test_msgs_srv_dds__Sample_BasicTypes_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Sample_BasicTypes_Response___copyIn(c_base base, const struct test_msgs::srv::dds_::Sample_BasicTypes_Response_ *from, struct _test_msgs_srv_dds__Sample_BasicTypes_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Sample_BasicTypes_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Sample_BasicTypes_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_srv_dds__BasicTypes_Response_ response_;
};

#undef OS_API
#endif
