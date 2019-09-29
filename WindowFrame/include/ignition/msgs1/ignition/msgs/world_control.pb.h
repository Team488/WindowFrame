// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/world_control.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fworld_5fcontrol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fworld_5fcontrol_2eproto

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
#include "ignition/msgs/world_reset.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fworld_5fcontrol_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fworld_5fcontrol_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fworld_5fcontrol_2eproto;
namespace ignition {
namespace msgs {
class WorldControl;
class WorldControlDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern WorldControlDefaultTypeInternal _WorldControl_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::WorldControl* Arena::CreateMaybeMessage<::ignition::msgs::WorldControl>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE WorldControl :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.WorldControl) */ {
 public:
  WorldControl();
  virtual ~WorldControl();

  WorldControl(const WorldControl& from);
  WorldControl(WorldControl&& from) noexcept
    : WorldControl() {
    *this = ::std::move(from);
  }

  inline WorldControl& operator=(const WorldControl& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorldControl& operator=(WorldControl&& from) noexcept {
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
  static const WorldControl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorldControl* internal_default_instance() {
    return reinterpret_cast<const WorldControl*>(
               &_WorldControl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WorldControl& a, WorldControl& b) {
    a.Swap(&b);
  }
  inline void Swap(WorldControl* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorldControl* New() const final {
    return CreateMaybeMessage<WorldControl>(nullptr);
  }

  WorldControl* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorldControl>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WorldControl& from);
  void MergeFrom(const WorldControl& from);
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
  void InternalSwap(WorldControl* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.WorldControl";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fworld_5fcontrol_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fworld_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kResetFieldNumber = 5,
    kPauseFieldNumber = 2,
    kStepFieldNumber = 3,
    kMultiStepFieldNumber = 4,
    kSeedFieldNumber = 6,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.WorldReset reset = 5;
  bool has_reset() const;
  void clear_reset();
  const ::ignition::msgs::WorldReset& reset() const;
  ::ignition::msgs::WorldReset* release_reset();
  ::ignition::msgs::WorldReset* mutable_reset();
  void set_allocated_reset(::ignition::msgs::WorldReset* reset);

  // optional bool pause = 2;
  bool has_pause() const;
  void clear_pause();
  bool pause() const;
  void set_pause(bool value);

  // optional bool step = 3;
  bool has_step() const;
  void clear_step();
  bool step() const;
  void set_step(bool value);

  // optional uint32 multi_step = 4;
  bool has_multi_step() const;
  void clear_multi_step();
  ::PROTOBUF_NAMESPACE_ID::uint32 multi_step() const;
  void set_multi_step(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional uint32 seed = 6;
  bool has_seed() const;
  void clear_seed();
  ::PROTOBUF_NAMESPACE_ID::uint32 seed() const;
  void set_seed(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.WorldControl)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::WorldReset* reset_;
  bool pause_;
  bool step_;
  ::PROTOBUF_NAMESPACE_ID::uint32 multi_step_;
  ::PROTOBUF_NAMESPACE_ID::uint32 seed_;
  friend struct ::TableStruct_ignition_2fmsgs_2fworld_5fcontrol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorldControl

// optional .ignition.msgs.Header header = 1;
inline bool WorldControl::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& WorldControl::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldControl.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* WorldControl::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldControl.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* WorldControl::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldControl.header)
  return header_;
}
inline void WorldControl::set_allocated_header(::ignition::msgs::Header* header) {
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
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldControl.header)
}

// optional bool pause = 2;
inline bool WorldControl::has_pause() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldControl::clear_pause() {
  pause_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool WorldControl::pause() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldControl.pause)
  return pause_;
}
inline void WorldControl::set_pause(bool value) {
  _has_bits_[0] |= 0x00000004u;
  pause_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldControl.pause)
}

// optional bool step = 3;
inline bool WorldControl::has_step() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WorldControl::clear_step() {
  step_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool WorldControl::step() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldControl.step)
  return step_;
}
inline void WorldControl::set_step(bool value) {
  _has_bits_[0] |= 0x00000008u;
  step_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldControl.step)
}

// optional uint32 multi_step = 4;
inline bool WorldControl::has_multi_step() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WorldControl::clear_multi_step() {
  multi_step_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WorldControl::multi_step() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldControl.multi_step)
  return multi_step_;
}
inline void WorldControl::set_multi_step(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  multi_step_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldControl.multi_step)
}

// optional .ignition.msgs.WorldReset reset = 5;
inline bool WorldControl::has_reset() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::WorldReset& WorldControl::reset() const {
  const ::ignition::msgs::WorldReset* p = reset_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldControl.reset)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::WorldReset*>(
      &::ignition::msgs::_WorldReset_default_instance_);
}
inline ::ignition::msgs::WorldReset* WorldControl::release_reset() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldControl.reset)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::WorldReset* temp = reset_;
  reset_ = nullptr;
  return temp;
}
inline ::ignition::msgs::WorldReset* WorldControl::mutable_reset() {
  _has_bits_[0] |= 0x00000002u;
  if (reset_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::WorldReset>(GetArenaNoVirtual());
    reset_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldControl.reset)
  return reset_;
}
inline void WorldControl::set_allocated_reset(::ignition::msgs::WorldReset* reset) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(reset_);
  }
  if (reset) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      reset = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, reset, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  reset_ = reset;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldControl.reset)
}

// optional uint32 seed = 6;
inline bool WorldControl::has_seed() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void WorldControl::clear_seed() {
  seed_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WorldControl::seed() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldControl.seed)
  return seed_;
}
inline void WorldControl::set_seed(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  seed_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldControl.seed)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<WorldControl> WorldControlUniquePtr;
typedef std::unique_ptr<const WorldControl> ConstWorldControlUniquePtr;
typedef std::shared_ptr<WorldControl> WorldControlSharedPtr;
typedef std::shared_ptr<const WorldControl> ConstWorldControlSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fworld_5fcontrol_2eproto
