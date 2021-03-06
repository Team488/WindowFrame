// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/joint_cmd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fjoint_5fcmd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fjoint_5fcmd_2eproto

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
#include "ignition/msgs/pid.pb.h"
#include "ignition/msgs/header.pb.h"
#ifndef _MSC_VER
#pragma GCC system_header
#else
#pragma warning(push)
#pragma warning(disable: 4244 4267 4100 4244 4512 4127 4068 4275 4251)
#endif
#include <memory>
#include <ignition/msgs/Export.hh>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fjoint_5fcmd_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fjoint_5fcmd_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fjoint_5fcmd_2eproto;
namespace ignition {
namespace msgs {
class JointCmd;
class JointCmdDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern JointCmdDefaultTypeInternal _JointCmd_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::JointCmd* Arena::CreateMaybeMessage<::ignition::msgs::JointCmd>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE JointCmd :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.JointCmd) */ {
 public:
  JointCmd();
  virtual ~JointCmd();

  JointCmd(const JointCmd& from);
  JointCmd(JointCmd&& from) noexcept
    : JointCmd() {
    *this = ::std::move(from);
  }

  inline JointCmd& operator=(const JointCmd& from) {
    CopyFrom(from);
    return *this;
  }
  inline JointCmd& operator=(JointCmd&& from) noexcept {
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
  static const JointCmd& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JointCmd* internal_default_instance() {
    return reinterpret_cast<const JointCmd*>(
               &_JointCmd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(JointCmd& a, JointCmd& b) {
    a.Swap(&b);
  }
  inline void Swap(JointCmd* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline JointCmd* New() const final {
    return CreateMaybeMessage<JointCmd>(nullptr);
  }

  JointCmd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<JointCmd>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const JointCmd& from);
  void MergeFrom(const JointCmd& from);
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
  void InternalSwap(JointCmd* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.JointCmd";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fjoint_5fcmd_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fjoint_5fcmd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kHeaderFieldNumber = 1,
    kPositionFieldNumber = 5,
    kVelocityFieldNumber = 6,
    kForceFieldNumber = 4,
    kAxisFieldNumber = 3,
    kResetFieldNumber = 7,
  };
  // optional string name = 2;
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

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.PID position = 5;
  bool has_position() const;
  void clear_position();
  const ::ignition::msgs::PID& position() const;
  ::ignition::msgs::PID* release_position();
  ::ignition::msgs::PID* mutable_position();
  void set_allocated_position(::ignition::msgs::PID* position);

  // optional .ignition.msgs.PID velocity = 6;
  bool has_velocity() const;
  void clear_velocity();
  const ::ignition::msgs::PID& velocity() const;
  ::ignition::msgs::PID* release_velocity();
  ::ignition::msgs::PID* mutable_velocity();
  void set_allocated_velocity(::ignition::msgs::PID* velocity);

  // optional double force = 4;
  bool has_force() const;
  void clear_force();
  double force() const;
  void set_force(double value);

  // optional int32 axis = 3 [default = 0];
  bool has_axis() const;
  void clear_axis();
  ::PROTOBUF_NAMESPACE_ID::int32 axis() const;
  void set_axis(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional bool reset = 7;
  bool has_reset() const;
  void clear_reset();
  bool reset() const;
  void set_reset(bool value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.JointCmd)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::PID* position_;
  ::ignition::msgs::PID* velocity_;
  double force_;
  ::PROTOBUF_NAMESPACE_ID::int32 axis_;
  bool reset_;
  friend struct ::TableStruct_ignition_2fmsgs_2fjoint_5fcmd_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// JointCmd

// optional .ignition.msgs.Header header = 1;
inline bool JointCmd::has_header() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Header& JointCmd::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* JointCmd::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.JointCmd.header)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* JointCmd::mutable_header() {
  _has_bits_[0] |= 0x00000002u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.JointCmd.header)
  return header_;
}
inline void JointCmd::set_allocated_header(::ignition::msgs::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.JointCmd.header)
}

// optional string name = 2;
inline bool JointCmd::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void JointCmd::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& JointCmd::name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.name)
  return name_.GetNoArena();
}
inline void JointCmd::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.JointCmd.name)
}
inline void JointCmd::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.JointCmd.name)
}
inline void JointCmd::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.JointCmd.name)
}
inline void JointCmd::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.JointCmd.name)
}
inline std::string* JointCmd::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.JointCmd.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* JointCmd::release_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.JointCmd.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void JointCmd::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.JointCmd.name)
}

// optional int32 axis = 3 [default = 0];
inline bool JointCmd::has_axis() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void JointCmd::clear_axis() {
  axis_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 JointCmd::axis() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.axis)
  return axis_;
}
inline void JointCmd::set_axis(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000020u;
  axis_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.JointCmd.axis)
}

// optional double force = 4;
inline bool JointCmd::has_force() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void JointCmd::clear_force() {
  force_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double JointCmd::force() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.force)
  return force_;
}
inline void JointCmd::set_force(double value) {
  _has_bits_[0] |= 0x00000010u;
  force_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.JointCmd.force)
}

// optional .ignition.msgs.PID position = 5;
inline bool JointCmd::has_position() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::PID& JointCmd::position() const {
  const ::ignition::msgs::PID* p = position_;
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.position)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::PID*>(
      &::ignition::msgs::_PID_default_instance_);
}
inline ::ignition::msgs::PID* JointCmd::release_position() {
  // @@protoc_insertion_point(field_release:ignition.msgs.JointCmd.position)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::PID* temp = position_;
  position_ = nullptr;
  return temp;
}
inline ::ignition::msgs::PID* JointCmd::mutable_position() {
  _has_bits_[0] |= 0x00000004u;
  if (position_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::PID>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.JointCmd.position)
  return position_;
}
inline void JointCmd::set_allocated_position(::ignition::msgs::PID* position) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_);
  }
  if (position) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      position = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.JointCmd.position)
}

// optional .ignition.msgs.PID velocity = 6;
inline bool JointCmd::has_velocity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::PID& JointCmd::velocity() const {
  const ::ignition::msgs::PID* p = velocity_;
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.velocity)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::PID*>(
      &::ignition::msgs::_PID_default_instance_);
}
inline ::ignition::msgs::PID* JointCmd::release_velocity() {
  // @@protoc_insertion_point(field_release:ignition.msgs.JointCmd.velocity)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::PID* temp = velocity_;
  velocity_ = nullptr;
  return temp;
}
inline ::ignition::msgs::PID* JointCmd::mutable_velocity() {
  _has_bits_[0] |= 0x00000008u;
  if (velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::PID>(GetArenaNoVirtual());
    velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.JointCmd.velocity)
  return velocity_;
}
inline void JointCmd::set_allocated_velocity(::ignition::msgs::PID* velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(velocity_);
  }
  if (velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, velocity, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  velocity_ = velocity;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.JointCmd.velocity)
}

// optional bool reset = 7;
inline bool JointCmd::has_reset() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void JointCmd::clear_reset() {
  reset_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool JointCmd::reset() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.JointCmd.reset)
  return reset_;
}
inline void JointCmd::set_reset(bool value) {
  _has_bits_[0] |= 0x00000040u;
  reset_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.JointCmd.reset)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<JointCmd> JointCmdUniquePtr;
typedef std::unique_ptr<const JointCmd> ConstJointCmdUniquePtr;
typedef std::shared_ptr<JointCmd> JointCmdSharedPtr;
typedef std::shared_ptr<const JointCmd> ConstJointCmdSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fjoint_5fcmd_2eproto
