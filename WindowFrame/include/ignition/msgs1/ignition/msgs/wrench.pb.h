// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/wrench.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fwrench_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fwrench_2eproto

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
#include "ignition/msgs/vector3d.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fwrench_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fwrench_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fwrench_2eproto;
namespace ignition {
namespace msgs {
class Wrench;
class WrenchDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern WrenchDefaultTypeInternal _Wrench_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Wrench* Arena::CreateMaybeMessage<::ignition::msgs::Wrench>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Wrench :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Wrench) */ {
 public:
  Wrench();
  virtual ~Wrench();

  Wrench(const Wrench& from);
  Wrench(Wrench&& from) noexcept
    : Wrench() {
    *this = ::std::move(from);
  }

  inline Wrench& operator=(const Wrench& from) {
    CopyFrom(from);
    return *this;
  }
  inline Wrench& operator=(Wrench&& from) noexcept {
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
  static const Wrench& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Wrench* internal_default_instance() {
    return reinterpret_cast<const Wrench*>(
               &_Wrench_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Wrench& a, Wrench& b) {
    a.Swap(&b);
  }
  inline void Swap(Wrench* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Wrench* New() const final {
    return CreateMaybeMessage<Wrench>(nullptr);
  }

  Wrench* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Wrench>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Wrench& from);
  void MergeFrom(const Wrench& from);
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
  void InternalSwap(Wrench* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Wrench";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fwrench_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fwrench_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kForceFieldNumber = 2,
    kTorqueFieldNumber = 3,
    kForceOffsetFieldNumber = 4,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Vector3d force = 2;
  bool has_force() const;
  void clear_force();
  const ::ignition::msgs::Vector3d& force() const;
  ::ignition::msgs::Vector3d* release_force();
  ::ignition::msgs::Vector3d* mutable_force();
  void set_allocated_force(::ignition::msgs::Vector3d* force);

  // optional .ignition.msgs.Vector3d torque = 3;
  bool has_torque() const;
  void clear_torque();
  const ::ignition::msgs::Vector3d& torque() const;
  ::ignition::msgs::Vector3d* release_torque();
  ::ignition::msgs::Vector3d* mutable_torque();
  void set_allocated_torque(::ignition::msgs::Vector3d* torque);

  // optional .ignition.msgs.Vector3d force_offset = 4;
  bool has_force_offset() const;
  void clear_force_offset();
  const ::ignition::msgs::Vector3d& force_offset() const;
  ::ignition::msgs::Vector3d* release_force_offset();
  ::ignition::msgs::Vector3d* mutable_force_offset();
  void set_allocated_force_offset(::ignition::msgs::Vector3d* force_offset);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Wrench)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Vector3d* force_;
  ::ignition::msgs::Vector3d* torque_;
  ::ignition::msgs::Vector3d* force_offset_;
  friend struct ::TableStruct_ignition_2fmsgs_2fwrench_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Wrench

// optional .ignition.msgs.Header header = 1;
inline bool Wrench::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& Wrench::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Wrench.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Wrench::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Wrench.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Wrench::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Wrench.header)
  return header_;
}
inline void Wrench::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Wrench.header)
}

// optional .ignition.msgs.Vector3d force = 2;
inline bool Wrench::has_force() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Vector3d& Wrench::force() const {
  const ::ignition::msgs::Vector3d* p = force_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Wrench.force)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* Wrench::release_force() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Wrench.force)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Vector3d* temp = force_;
  force_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* Wrench::mutable_force() {
  _has_bits_[0] |= 0x00000002u;
  if (force_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    force_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Wrench.force)
  return force_;
}
inline void Wrench::set_allocated_force(::ignition::msgs::Vector3d* force) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(force_);
  }
  if (force) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      force = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, force, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  force_ = force;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Wrench.force)
}

// optional .ignition.msgs.Vector3d torque = 3;
inline bool Wrench::has_torque() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Vector3d& Wrench::torque() const {
  const ::ignition::msgs::Vector3d* p = torque_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Wrench.torque)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* Wrench::release_torque() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Wrench.torque)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Vector3d* temp = torque_;
  torque_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* Wrench::mutable_torque() {
  _has_bits_[0] |= 0x00000004u;
  if (torque_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    torque_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Wrench.torque)
  return torque_;
}
inline void Wrench::set_allocated_torque(::ignition::msgs::Vector3d* torque) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(torque_);
  }
  if (torque) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      torque = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, torque, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  torque_ = torque;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Wrench.torque)
}

// optional .ignition.msgs.Vector3d force_offset = 4;
inline bool Wrench::has_force_offset() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::Vector3d& Wrench::force_offset() const {
  const ::ignition::msgs::Vector3d* p = force_offset_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Wrench.force_offset)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* Wrench::release_force_offset() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Wrench.force_offset)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::Vector3d* temp = force_offset_;
  force_offset_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* Wrench::mutable_force_offset() {
  _has_bits_[0] |= 0x00000008u;
  if (force_offset_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    force_offset_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Wrench.force_offset)
  return force_offset_;
}
inline void Wrench::set_allocated_force_offset(::ignition::msgs::Vector3d* force_offset) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(force_offset_);
  }
  if (force_offset) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      force_offset = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, force_offset, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  force_offset_ = force_offset;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Wrench.force_offset)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Wrench> WrenchUniquePtr;
typedef std::unique_ptr<const Wrench> ConstWrenchUniquePtr;
typedef std::shared_ptr<Wrench> WrenchSharedPtr;
typedef std::shared_ptr<const Wrench> ConstWrenchSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fwrench_2eproto
