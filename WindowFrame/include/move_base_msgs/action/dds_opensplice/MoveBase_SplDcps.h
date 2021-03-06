#ifndef H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase_SPLTYPES_H
#define H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MoveBase_.h"
#include "geometry_msgs/msg/dds_opensplice/PoseStamped_SplDcps.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MoveBase__move_base_msgs__load (c_base base);

extern c_metaObject __MoveBase__move_base_msgs_action__load (c_base base);

extern c_metaObject __MoveBase__move_base_msgs_action_dds___load (c_base base);

extern const char *move_base_msgs_action_dds__MoveBase_Goal__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_Goal__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_Goal__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_Goal___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_Goal_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_Goal___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_Goal_ *from, struct _move_base_msgs_action_dds__MoveBase_Goal_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_Goal___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_Goal_ {
    struct _geometry_msgs_msg_dds__PoseStamped_ target_pose_;
};

extern const char *move_base_msgs_action_dds__MoveBase_SendGoal_Request__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_SendGoal_Request__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_SendGoal_Request__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_SendGoal_Request___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_SendGoal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_SendGoal_Request___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_SendGoal_Request_ *from, struct _move_base_msgs_action_dds__MoveBase_SendGoal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_SendGoal_Request___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_SendGoal_Request_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
    struct _move_base_msgs_action_dds__MoveBase_Goal_ goal_;
};

extern const char *move_base_msgs_action_dds__MoveBase_SendGoal_Response__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_SendGoal_Response__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_SendGoal_Response__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_SendGoal_Response___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_SendGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_SendGoal_Response___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_SendGoal_Response_ *from, struct _move_base_msgs_action_dds__MoveBase_SendGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_SendGoal_Response___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_SendGoal_Response_ {
    c_bool accepted_;
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
};

extern const char *move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request__metaDescriptor[];
extern const int move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request___load (c_base base);
struct _move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request___copyIn(c_base base, const struct move_base_msgs::action::dds_::Sample_MoveBase_SendGoal_Request_ *from, struct _move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _move_base_msgs_action_dds__MoveBase_SendGoal_Request_ request_;
};

extern const char *move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response__metaDescriptor[];
extern const int move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response___load (c_base base);
struct _move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response___copyIn(c_base base, const struct move_base_msgs::action::dds_::Sample_MoveBase_SendGoal_Response_ *from, struct _move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__Sample_MoveBase_SendGoal_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _move_base_msgs_action_dds__MoveBase_SendGoal_Response_ response_;
};

extern const char *move_base_msgs_action_dds__MoveBase_Result__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_Result__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_Result__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_Result___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_Result_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_Result___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_Result_ *from, struct _move_base_msgs_action_dds__MoveBase_Result_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_Result___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_Result_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *move_base_msgs_action_dds__MoveBase_GetResult_Request__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_GetResult_Request__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_GetResult_Request__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_GetResult_Request___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_GetResult_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_GetResult_Request___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_GetResult_Request_ *from, struct _move_base_msgs_action_dds__MoveBase_GetResult_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_GetResult_Request___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_GetResult_Request_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
};

extern const char *move_base_msgs_action_dds__MoveBase_GetResult_Response__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_GetResult_Response__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_GetResult_Response__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_GetResult_Response___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_GetResult_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_GetResult_Response___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_GetResult_Response_ *from, struct _move_base_msgs_action_dds__MoveBase_GetResult_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_GetResult_Response___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_GetResult_Response_ {
    c_octet status_;
    struct _move_base_msgs_action_dds__MoveBase_Result_ result_;
};

extern const char *move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request__metaDescriptor[];
extern const int move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request___load (c_base base);
struct _move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request___copyIn(c_base base, const struct move_base_msgs::action::dds_::Sample_MoveBase_GetResult_Request_ *from, struct _move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__Sample_MoveBase_GetResult_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _move_base_msgs_action_dds__MoveBase_GetResult_Request_ request_;
};

extern const char *move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response__metaDescriptor[];
extern const int move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response___load (c_base base);
struct _move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response___copyIn(c_base base, const struct move_base_msgs::action::dds_::Sample_MoveBase_GetResult_Response_ *from, struct _move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__Sample_MoveBase_GetResult_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _move_base_msgs_action_dds__MoveBase_GetResult_Response_ response_;
};

extern const char *move_base_msgs_action_dds__MoveBase_Feedback__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_Feedback__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_Feedback__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_Feedback___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_Feedback_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_Feedback___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_Feedback_ *from, struct _move_base_msgs_action_dds__MoveBase_Feedback_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_Feedback___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_Feedback_ {
    struct _geometry_msgs_msg_dds__PoseStamped_ base_position_;
};

extern const char *move_base_msgs_action_dds__MoveBase_FeedbackMessage__metaDescriptor[];
extern const int move_base_msgs_action_dds__MoveBase_FeedbackMessage__metaDescriptorArrLength;
extern const int move_base_msgs_action_dds__MoveBase_FeedbackMessage__metaDescriptorLength;
extern c_metaObject __move_base_msgs_action_dds__MoveBase_FeedbackMessage___load (c_base base);
struct _move_base_msgs_action_dds__MoveBase_FeedbackMessage_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs v_copyin_result __move_base_msgs_action_dds__MoveBase_FeedbackMessage___copyIn(c_base base, const struct move_base_msgs::action::dds_::MoveBase_FeedbackMessage_ *from, struct _move_base_msgs_action_dds__MoveBase_FeedbackMessage_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs void __move_base_msgs_action_dds__MoveBase_FeedbackMessage___copyOut(const void *_from, void *_to);
struct _move_base_msgs_action_dds__MoveBase_FeedbackMessage_ {
    struct _unique_identifier_msgs_msg_dds__UUID_ goal_id_;
    struct _move_base_msgs_action_dds__MoveBase_Feedback_ feedback_;
};

#undef OS_API
#endif
