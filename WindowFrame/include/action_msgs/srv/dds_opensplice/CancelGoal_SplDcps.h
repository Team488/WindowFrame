#ifndef H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal_SPLTYPES_H
#define H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_CancelGoal_.h"
#include "action_msgs/msg/dds_opensplice/GoalInfo_SplDcps.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __CancelGoal__action_msgs__load (c_base base);

extern c_metaObject __CancelGoal__action_msgs_srv__load (c_base base);

extern c_metaObject __CancelGoal__action_msgs_srv_dds___load (c_base base);

extern const char *action_msgs_srv_dds__CancelGoal_Request__metaDescriptor[];
extern const int action_msgs_srv_dds__CancelGoal_Request__metaDescriptorArrLength;
extern const int action_msgs_srv_dds__CancelGoal_Request__metaDescriptorLength;
extern c_metaObject __action_msgs_srv_dds__CancelGoal_Request___load (c_base base);
struct _action_msgs_srv_dds__CancelGoal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_srv_dds__CancelGoal_Request___copyIn(c_base base, const struct action_msgs::srv::dds_::CancelGoal_Request_ *from, struct _action_msgs_srv_dds__CancelGoal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_srv_dds__CancelGoal_Request___copyOut(const void *_from, void *_to);
struct _action_msgs_srv_dds__CancelGoal_Request_ {
    struct _action_msgs_msg_dds__GoalInfo_ goal_info_;
};

extern c_metaObject __CancelGoal__action_msgs_srv_dds__CancelGoal_Response_Constants__load (c_base base);

extern const char *action_msgs_srv_dds__CancelGoal_Response__metaDescriptor[];
extern const int action_msgs_srv_dds__CancelGoal_Response__metaDescriptorArrLength;
extern const int action_msgs_srv_dds__CancelGoal_Response__metaDescriptorLength;
extern c_metaObject __action_msgs_srv_dds__CancelGoal_Response___load (c_base base);
struct _action_msgs_srv_dds__CancelGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_srv_dds__CancelGoal_Response___copyIn(c_base base, const struct action_msgs::srv::dds_::CancelGoal_Response_ *from, struct _action_msgs_srv_dds__CancelGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_srv_dds__CancelGoal_Response___copyOut(const void *_from, void *_to);
struct _action_msgs_srv_dds__CancelGoal_Response_ {
    c_octet return_code_;
    c_sequence goals_canceling_;
};

extern const char *action_msgs_srv_dds__Sample_CancelGoal_Request__metaDescriptor[];
extern const int action_msgs_srv_dds__Sample_CancelGoal_Request__metaDescriptorArrLength;
extern const int action_msgs_srv_dds__Sample_CancelGoal_Request__metaDescriptorLength;
extern c_metaObject __action_msgs_srv_dds__Sample_CancelGoal_Request___load (c_base base);
struct _action_msgs_srv_dds__Sample_CancelGoal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_srv_dds__Sample_CancelGoal_Request___copyIn(c_base base, const struct action_msgs::srv::dds_::Sample_CancelGoal_Request_ *from, struct _action_msgs_srv_dds__Sample_CancelGoal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_srv_dds__Sample_CancelGoal_Request___copyOut(const void *_from, void *_to);
struct _action_msgs_srv_dds__Sample_CancelGoal_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _action_msgs_srv_dds__CancelGoal_Request_ request_;
};

extern const char *action_msgs_srv_dds__Sample_CancelGoal_Response__metaDescriptor[];
extern const int action_msgs_srv_dds__Sample_CancelGoal_Response__metaDescriptorArrLength;
extern const int action_msgs_srv_dds__Sample_CancelGoal_Response__metaDescriptorLength;
extern c_metaObject __action_msgs_srv_dds__Sample_CancelGoal_Response___load (c_base base);
struct _action_msgs_srv_dds__Sample_CancelGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs v_copyin_result __action_msgs_srv_dds__Sample_CancelGoal_Response___copyIn(c_base base, const struct action_msgs::srv::dds_::Sample_CancelGoal_Response_ *from, struct _action_msgs_srv_dds__Sample_CancelGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs void __action_msgs_srv_dds__Sample_CancelGoal_Response___copyOut(const void *_from, void *_to);
struct _action_msgs_srv_dds__Sample_CancelGoal_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _action_msgs_srv_dds__CancelGoal_Response_ response_;
};

#undef OS_API
#endif
