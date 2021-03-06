// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_model_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "joint.pb.h"
#include "link.pb.h"
#include "plugin.pb.h"
#include "pose.pb.h"
#include "visual.pb.h"
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_model_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_model_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_2eproto;
namespace gazebo {
namespace msgs {
class Model;
class ModelDefaultTypeInternal;
GZ_MSGS_VISIBLE extern ModelDefaultTypeInternal _Model_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Model* Arena::CreateMaybeMessage<::gazebo::msgs::Model>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Model :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Model) */ {
 public:
  Model();
  virtual ~Model();

  Model(const Model& from);
  Model(Model&& from) noexcept
    : Model() {
    *this = ::std::move(from);
  }

  inline Model& operator=(const Model& from) {
    CopyFrom(from);
    return *this;
  }
  inline Model& operator=(Model&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Model& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Model* internal_default_instance() {
    return reinterpret_cast<const Model*>(
               &_Model_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Model& a, Model& b) {
    a.Swap(&b);
  }
  inline void Swap(Model* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Model* New() const final {
    return CreateMaybeMessage<Model>(nullptr);
  }

  Model* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Model>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Model& from);
  void MergeFrom(const Model& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Model* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Model";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_model_2eproto);
    return ::descriptor_table_model_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kJointFieldNumber = 5,
    kLinkFieldNumber = 6,
    kVisualFieldNumber = 8,
    kModelFieldNumber = 12,
    kPluginFieldNumber = 13,
    kNameFieldNumber = 1,
    kPoseFieldNumber = 4,
    kScaleFieldNumber = 9,
    kIdFieldNumber = 2,
    kIsStaticFieldNumber = 3,
    kDeletedFieldNumber = 7,
    kSelfCollideFieldNumber = 10,
    kEnableWindFieldNumber = 11,
  };
  // repeated .gazebo.msgs.Joint joint = 5;
  int joint_size() const;
  void clear_joint();
  ::gazebo::msgs::Joint* mutable_joint(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >*
      mutable_joint();
  const ::gazebo::msgs::Joint& joint(int index) const;
  ::gazebo::msgs::Joint* add_joint();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >&
      joint() const;

  // repeated .gazebo.msgs.Link link = 6;
  int link_size() const;
  void clear_link();
  ::gazebo::msgs::Link* mutable_link(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Link >*
      mutable_link();
  const ::gazebo::msgs::Link& link(int index) const;
  ::gazebo::msgs::Link* add_link();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Link >&
      link() const;

  // repeated .gazebo.msgs.Visual visual = 8;
  int visual_size() const;
  void clear_visual();
  ::gazebo::msgs::Visual* mutable_visual(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual >*
      mutable_visual();
  const ::gazebo::msgs::Visual& visual(int index) const;
  ::gazebo::msgs::Visual* add_visual();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual >&
      visual() const;

  // repeated .gazebo.msgs.Model model = 12;
  int model_size() const;
  void clear_model();
  ::gazebo::msgs::Model* mutable_model(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >*
      mutable_model();
  const ::gazebo::msgs::Model& model(int index) const;
  ::gazebo::msgs::Model* add_model();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >&
      model() const;

  // repeated .gazebo.msgs.Plugin plugin = 13;
  int plugin_size() const;
  void clear_plugin();
  ::gazebo::msgs::Plugin* mutable_plugin(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Plugin >*
      mutable_plugin();
  const ::gazebo::msgs::Plugin& plugin(int index) const;
  ::gazebo::msgs::Plugin* add_plugin();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Plugin >&
      plugin() const;

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // optional .gazebo.msgs.Pose pose = 4;
  bool has_pose() const;
  void clear_pose();
  const ::gazebo::msgs::Pose& pose() const;
  ::gazebo::msgs::Pose* release_pose();
  ::gazebo::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gazebo::msgs::Pose* pose);

  // optional .gazebo.msgs.Vector3d scale = 9;
  bool has_scale() const;
  void clear_scale();
  const ::gazebo::msgs::Vector3d& scale() const;
  ::gazebo::msgs::Vector3d* release_scale();
  ::gazebo::msgs::Vector3d* mutable_scale();
  void set_allocated_scale(::gazebo::msgs::Vector3d* scale);

  // optional uint32 id = 2;
  bool has_id() const;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional bool is_static = 3;
  bool has_is_static() const;
  void clear_is_static();
  bool is_static() const;
  void set_is_static(bool value);

  // optional bool deleted = 7;
  bool has_deleted() const;
  void clear_deleted();
  bool deleted() const;
  void set_deleted(bool value);

  // optional bool self_collide = 10;
  bool has_self_collide() const;
  void clear_self_collide();
  bool self_collide() const;
  void set_self_collide(bool value);

  // optional bool enable_wind = 11;
  bool has_enable_wind() const;
  void clear_enable_wind();
  bool enable_wind() const;
  void set_enable_wind(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Model)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint > joint_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Link > link_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual > visual_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model > model_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Plugin > plugin_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Pose* pose_;
  ::gazebo::msgs::Vector3d* scale_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool is_static_;
  bool deleted_;
  bool self_collide_;
  bool enable_wind_;
  friend struct ::TableStruct_model_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Model

// required string name = 1;
inline bool Model::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Model::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Model::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.name)
  return name_.GetNoArena();
}
inline void Model::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Model.name)
}
inline void Model::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Model.name)
}
inline void Model::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Model.name)
}
inline void Model::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Model.name)
}
inline std::string* Model::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Model::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Model.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Model::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Model.name)
}

// optional uint32 id = 2;
inline bool Model::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Model::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Model::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.id)
  return id_;
}
inline void Model::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  id_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Model.id)
}

// optional bool is_static = 3;
inline bool Model::has_is_static() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Model::clear_is_static() {
  is_static_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Model::is_static() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.is_static)
  return is_static_;
}
inline void Model::set_is_static(bool value) {
  _has_bits_[0] |= 0x00000010u;
  is_static_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Model.is_static)
}

// optional .gazebo.msgs.Pose pose = 4;
inline bool Model::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::gazebo::msgs::Pose& Model::pose() const {
  const ::gazebo::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.pose)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline ::gazebo::msgs::Pose* Model::release_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Model.pose)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Model::mutable_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.pose)
  return pose_;
}
inline void Model::set_allocated_pose(::gazebo::msgs::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Model.pose)
}

// repeated .gazebo.msgs.Joint joint = 5;
inline int Model::joint_size() const {
  return joint_.size();
}
inline ::gazebo::msgs::Joint* Model::mutable_joint(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.joint)
  return joint_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >*
Model::mutable_joint() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Model.joint)
  return &joint_;
}
inline const ::gazebo::msgs::Joint& Model::joint(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.joint)
  return joint_.Get(index);
}
inline ::gazebo::msgs::Joint* Model::add_joint() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Model.joint)
  return joint_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >&
Model::joint() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Model.joint)
  return joint_;
}

// repeated .gazebo.msgs.Link link = 6;
inline int Model::link_size() const {
  return link_.size();
}
inline ::gazebo::msgs::Link* Model::mutable_link(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.link)
  return link_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Link >*
Model::mutable_link() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Model.link)
  return &link_;
}
inline const ::gazebo::msgs::Link& Model::link(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.link)
  return link_.Get(index);
}
inline ::gazebo::msgs::Link* Model::add_link() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Model.link)
  return link_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Link >&
Model::link() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Model.link)
  return link_;
}

// optional bool deleted = 7;
inline bool Model::has_deleted() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Model::clear_deleted() {
  deleted_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool Model::deleted() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.deleted)
  return deleted_;
}
inline void Model::set_deleted(bool value) {
  _has_bits_[0] |= 0x00000020u;
  deleted_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Model.deleted)
}

// repeated .gazebo.msgs.Visual visual = 8;
inline int Model::visual_size() const {
  return visual_.size();
}
inline ::gazebo::msgs::Visual* Model::mutable_visual(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.visual)
  return visual_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual >*
Model::mutable_visual() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Model.visual)
  return &visual_;
}
inline const ::gazebo::msgs::Visual& Model::visual(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.visual)
  return visual_.Get(index);
}
inline ::gazebo::msgs::Visual* Model::add_visual() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Model.visual)
  return visual_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual >&
Model::visual() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Model.visual)
  return visual_;
}

// optional .gazebo.msgs.Vector3d scale = 9;
inline bool Model::has_scale() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::gazebo::msgs::Vector3d& Model::scale() const {
  const ::gazebo::msgs::Vector3d* p = scale_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.scale)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline ::gazebo::msgs::Vector3d* Model::release_scale() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Model.scale)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Vector3d* temp = scale_;
  scale_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Model::mutable_scale() {
  _has_bits_[0] |= 0x00000004u;
  if (scale_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    scale_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.scale)
  return scale_;
}
inline void Model::set_allocated_scale(::gazebo::msgs::Vector3d* scale) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(scale_);
  }
  if (scale) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      scale = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, scale, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  scale_ = scale;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Model.scale)
}

// optional bool self_collide = 10;
inline bool Model::has_self_collide() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Model::clear_self_collide() {
  self_collide_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Model::self_collide() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.self_collide)
  return self_collide_;
}
inline void Model::set_self_collide(bool value) {
  _has_bits_[0] |= 0x00000040u;
  self_collide_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Model.self_collide)
}

// optional bool enable_wind = 11;
inline bool Model::has_enable_wind() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Model::clear_enable_wind() {
  enable_wind_ = false;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool Model::enable_wind() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.enable_wind)
  return enable_wind_;
}
inline void Model::set_enable_wind(bool value) {
  _has_bits_[0] |= 0x00000080u;
  enable_wind_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Model.enable_wind)
}

// repeated .gazebo.msgs.Model model = 12;
inline int Model::model_size() const {
  return model_.size();
}
inline void Model::clear_model() {
  model_.Clear();
}
inline ::gazebo::msgs::Model* Model::mutable_model(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.model)
  return model_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >*
Model::mutable_model() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Model.model)
  return &model_;
}
inline const ::gazebo::msgs::Model& Model::model(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.model)
  return model_.Get(index);
}
inline ::gazebo::msgs::Model* Model::add_model() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Model.model)
  return model_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >&
Model::model() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Model.model)
  return model_;
}

// repeated .gazebo.msgs.Plugin plugin = 13;
inline int Model::plugin_size() const {
  return plugin_.size();
}
inline ::gazebo::msgs::Plugin* Model::mutable_plugin(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Model.plugin)
  return plugin_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Plugin >*
Model::mutable_plugin() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Model.plugin)
  return &plugin_;
}
inline const ::gazebo::msgs::Plugin& Model::plugin(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Model.plugin)
  return plugin_.Get(index);
}
inline ::gazebo::msgs::Plugin* Model::add_plugin() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Model.plugin)
  return plugin_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Plugin >&
Model::plugin() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Model.plugin)
  return plugin_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Model> ModelPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Model const> ConstModelPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_model_2eproto
