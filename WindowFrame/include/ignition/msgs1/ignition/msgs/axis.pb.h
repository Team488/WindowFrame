// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/axis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2faxis_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2faxis_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2faxis_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2faxis_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2faxis_2eproto;
namespace ignition {
namespace msgs {
class Axis;
class AxisDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern AxisDefaultTypeInternal _Axis_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Axis* Arena::CreateMaybeMessage<::ignition::msgs::Axis>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Axis :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Axis) */ {
 public:
  Axis();
  virtual ~Axis();

  Axis(const Axis& from);
  Axis(Axis&& from) noexcept
    : Axis() {
    *this = ::std::move(from);
  }

  inline Axis& operator=(const Axis& from) {
    CopyFrom(from);
    return *this;
  }
  inline Axis& operator=(Axis&& from) noexcept {
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
  static const Axis& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Axis* internal_default_instance() {
    return reinterpret_cast<const Axis*>(
               &_Axis_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Axis& a, Axis& b) {
    a.Swap(&b);
  }
  inline void Swap(Axis* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Axis* New() const final {
    return CreateMaybeMessage<Axis>(nullptr);
  }

  Axis* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Axis>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Axis& from);
  void MergeFrom(const Axis& from);
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
  void InternalSwap(Axis* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Axis";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2faxis_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2faxis_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kXyzFieldNumber = 2,
    kLimitLowerFieldNumber = 3,
    kLimitUpperFieldNumber = 4,
    kLimitEffortFieldNumber = 5,
    kLimitVelocityFieldNumber = 6,
    kDampingFieldNumber = 7,
    kFrictionFieldNumber = 8,
    kUseParentModelFrameFieldNumber = 9,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Vector3d xyz = 2;
  bool has_xyz() const;
  void clear_xyz();
  const ::ignition::msgs::Vector3d& xyz() const;
  ::ignition::msgs::Vector3d* release_xyz();
  ::ignition::msgs::Vector3d* mutable_xyz();
  void set_allocated_xyz(::ignition::msgs::Vector3d* xyz);

  // optional double limit_lower = 3 [default = 0];
  bool has_limit_lower() const;
  void clear_limit_lower();
  double limit_lower() const;
  void set_limit_lower(double value);

  // optional double limit_upper = 4 [default = 0];
  bool has_limit_upper() const;
  void clear_limit_upper();
  double limit_upper() const;
  void set_limit_upper(double value);

  // optional double limit_effort = 5 [default = 0];
  bool has_limit_effort() const;
  void clear_limit_effort();
  double limit_effort() const;
  void set_limit_effort(double value);

  // optional double limit_velocity = 6 [default = 0];
  bool has_limit_velocity() const;
  void clear_limit_velocity();
  double limit_velocity() const;
  void set_limit_velocity(double value);

  // optional double damping = 7 [default = 0];
  bool has_damping() const;
  void clear_damping();
  double damping() const;
  void set_damping(double value);

  // optional double friction = 8 [default = 0];
  bool has_friction() const;
  void clear_friction();
  double friction() const;
  void set_friction(double value);

  // optional bool use_parent_model_frame = 9 [default = false];
  bool has_use_parent_model_frame() const;
  void clear_use_parent_model_frame();
  bool use_parent_model_frame() const;
  void set_use_parent_model_frame(bool value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Axis)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Vector3d* xyz_;
  double limit_lower_;
  double limit_upper_;
  double limit_effort_;
  double limit_velocity_;
  double damping_;
  double friction_;
  bool use_parent_model_frame_;
  friend struct ::TableStruct_ignition_2fmsgs_2faxis_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Axis

// optional .ignition.msgs.Header header = 1;
inline bool Axis::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& Axis::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Axis::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Axis.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Axis::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Axis.header)
  return header_;
}
inline void Axis::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Axis.header)
}

// optional .ignition.msgs.Vector3d xyz = 2;
inline bool Axis::has_xyz() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Vector3d& Axis::xyz() const {
  const ::ignition::msgs::Vector3d* p = xyz_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.xyz)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* Axis::release_xyz() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Axis.xyz)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Vector3d* temp = xyz_;
  xyz_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* Axis::mutable_xyz() {
  _has_bits_[0] |= 0x00000002u;
  if (xyz_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    xyz_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Axis.xyz)
  return xyz_;
}
inline void Axis::set_allocated_xyz(::ignition::msgs::Vector3d* xyz) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(xyz_);
  }
  if (xyz) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      xyz = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, xyz, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  xyz_ = xyz;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Axis.xyz)
}

// optional double limit_lower = 3 [default = 0];
inline bool Axis::has_limit_lower() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Axis::clear_limit_lower() {
  limit_lower_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Axis::limit_lower() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.limit_lower)
  return limit_lower_;
}
inline void Axis::set_limit_lower(double value) {
  _has_bits_[0] |= 0x00000004u;
  limit_lower_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.limit_lower)
}

// optional double limit_upper = 4 [default = 0];
inline bool Axis::has_limit_upper() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Axis::clear_limit_upper() {
  limit_upper_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Axis::limit_upper() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.limit_upper)
  return limit_upper_;
}
inline void Axis::set_limit_upper(double value) {
  _has_bits_[0] |= 0x00000008u;
  limit_upper_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.limit_upper)
}

// optional double limit_effort = 5 [default = 0];
inline bool Axis::has_limit_effort() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Axis::clear_limit_effort() {
  limit_effort_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Axis::limit_effort() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.limit_effort)
  return limit_effort_;
}
inline void Axis::set_limit_effort(double value) {
  _has_bits_[0] |= 0x00000010u;
  limit_effort_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.limit_effort)
}

// optional double limit_velocity = 6 [default = 0];
inline bool Axis::has_limit_velocity() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Axis::clear_limit_velocity() {
  limit_velocity_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Axis::limit_velocity() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.limit_velocity)
  return limit_velocity_;
}
inline void Axis::set_limit_velocity(double value) {
  _has_bits_[0] |= 0x00000020u;
  limit_velocity_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.limit_velocity)
}

// optional double damping = 7 [default = 0];
inline bool Axis::has_damping() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Axis::clear_damping() {
  damping_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double Axis::damping() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.damping)
  return damping_;
}
inline void Axis::set_damping(double value) {
  _has_bits_[0] |= 0x00000040u;
  damping_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.damping)
}

// optional double friction = 8 [default = 0];
inline bool Axis::has_friction() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Axis::clear_friction() {
  friction_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double Axis::friction() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.friction)
  return friction_;
}
inline void Axis::set_friction(double value) {
  _has_bits_[0] |= 0x00000080u;
  friction_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.friction)
}

// optional bool use_parent_model_frame = 9 [default = false];
inline bool Axis::has_use_parent_model_frame() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Axis::clear_use_parent_model_frame() {
  use_parent_model_frame_ = false;
  _has_bits_[0] &= ~0x00000100u;
}
inline bool Axis::use_parent_model_frame() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Axis.use_parent_model_frame)
  return use_parent_model_frame_;
}
inline void Axis::set_use_parent_model_frame(bool value) {
  _has_bits_[0] |= 0x00000100u;
  use_parent_model_frame_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Axis.use_parent_model_frame)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Axis> AxisUniquePtr;
typedef std::unique_ptr<const Axis> ConstAxisUniquePtr;
typedef std::shared_ptr<Axis> AxisSharedPtr;
typedef std::shared_ptr<const Axis> ConstAxisSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2faxis_2eproto
