#ifndef H_3AC072275B70EDD9E2E0C8B563DCCB79_Arrays_SPLTYPES_H
#define H_3AC072275B70EDD9E2E0C8B563DCCB79_Arrays_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Arrays_.h"
#include "test_msgs/msg/dds_opensplice/BasicTypes_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Constants_SplDcps.h"
#include "test_msgs/msg/dds_opensplice/Defaults_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Arrays__test_msgs__load (c_base base);

extern c_metaObject __Arrays__test_msgs_srv__load (c_base base);

extern c_metaObject __Arrays__test_msgs_srv_dds___load (c_base base);

extern const char *test_msgs_srv_dds__Arrays_Request__metaDescriptor[];
extern const int test_msgs_srv_dds__Arrays_Request__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Arrays_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Arrays_Request___load (c_base base);
struct _test_msgs_srv_dds__Arrays_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Arrays_Request___copyIn(c_base base, const struct test_msgs::srv::dds_::Arrays_Request_ *from, struct _test_msgs_srv_dds__Arrays_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Arrays_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Arrays_Request_ {
    c_bool bool_values_[3];
    c_octet byte_values_[3];
    c_octet char_values_[3];
    c_float float32_values_[3];
    c_double float64_values_[3];
    c_octet int8_values_[3];
    c_octet uint8_values_[3];
    c_short int16_values_[3];
    c_ushort uint16_values_[3];
    c_long int32_values_[3];
    c_ulong uint32_values_[3];
    c_longlong int64_values_[3];
    c_ulonglong uint64_values_[3];
    c_string string_values_[3];
    struct _test_msgs_msg_dds__BasicTypes_ basic_types_values_[3];
    struct _test_msgs_msg_dds__Constants_ constants_values_[3];
    struct _test_msgs_msg_dds__Defaults_ defaults_values_[3];
    c_bool bool_values_default_[3];
    c_octet byte_values_default_[3];
    c_octet char_values_default_[3];
    c_float float32_values_default_[3];
    c_double float64_values_default_[3];
    c_octet int8_values_default_[3];
    c_octet uint8_values_default_[3];
    c_short int16_values_default_[3];
    c_ushort uint16_values_default_[3];
    c_long int32_values_default_[3];
    c_ulong uint32_values_default_[3];
    c_longlong int64_values_default_[3];
    c_ulonglong uint64_values_default_[3];
    c_string string_values_default_[3];
};

extern const char *test_msgs_srv_dds__Arrays_Response__metaDescriptor[];
extern const int test_msgs_srv_dds__Arrays_Response__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Arrays_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Arrays_Response___load (c_base base);
struct _test_msgs_srv_dds__Arrays_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Arrays_Response___copyIn(c_base base, const struct test_msgs::srv::dds_::Arrays_Response_ *from, struct _test_msgs_srv_dds__Arrays_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Arrays_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Arrays_Response_ {
    c_bool bool_values_[3];
    c_octet byte_values_[3];
    c_octet char_values_[3];
    c_float float32_values_[3];
    c_double float64_values_[3];
    c_octet int8_values_[3];
    c_octet uint8_values_[3];
    c_short int16_values_[3];
    c_ushort uint16_values_[3];
    c_long int32_values_[3];
    c_ulong uint32_values_[3];
    c_longlong int64_values_[3];
    c_ulonglong uint64_values_[3];
    c_string string_values_[3];
    struct _test_msgs_msg_dds__BasicTypes_ basic_types_values_[3];
    struct _test_msgs_msg_dds__Constants_ constants_values_[3];
    struct _test_msgs_msg_dds__Defaults_ defaults_values_[3];
    c_bool bool_values_default_[3];
    c_octet byte_values_default_[3];
    c_octet char_values_default_[3];
    c_float float32_values_default_[3];
    c_double float64_values_default_[3];
    c_octet int8_values_default_[3];
    c_octet uint8_values_default_[3];
    c_short int16_values_default_[3];
    c_ushort uint16_values_default_[3];
    c_long int32_values_default_[3];
    c_ulong uint32_values_default_[3];
    c_longlong int64_values_default_[3];
    c_ulonglong uint64_values_default_[3];
    c_string string_values_default_[3];
};

extern const char *test_msgs_srv_dds__Sample_Arrays_Request__metaDescriptor[];
extern const int test_msgs_srv_dds__Sample_Arrays_Request__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Sample_Arrays_Request__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Sample_Arrays_Request___load (c_base base);
struct _test_msgs_srv_dds__Sample_Arrays_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Sample_Arrays_Request___copyIn(c_base base, const struct test_msgs::srv::dds_::Sample_Arrays_Request_ *from, struct _test_msgs_srv_dds__Sample_Arrays_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Sample_Arrays_Request___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Sample_Arrays_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_srv_dds__Arrays_Request_ request_;
};

extern const char *test_msgs_srv_dds__Sample_Arrays_Response__metaDescriptor[];
extern const int test_msgs_srv_dds__Sample_Arrays_Response__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Sample_Arrays_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Sample_Arrays_Response___load (c_base base);
struct _test_msgs_srv_dds__Sample_Arrays_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Sample_Arrays_Response___copyIn(c_base base, const struct test_msgs::srv::dds_::Sample_Arrays_Response_ *from, struct _test_msgs_srv_dds__Sample_Arrays_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Sample_Arrays_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Sample_Arrays_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_srv_dds__Arrays_Response_ response_;
};

#undef OS_API
#endif
