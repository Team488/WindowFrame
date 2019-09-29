// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/planegeom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fplanegeom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fplanegeom_2eproto

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
#include "ignition/msgs/vector2d.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fplanegeom_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fplanegeom_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fplanegeom_2eproto;
namespace ignition {
namespace msgs {
class PlaneGeom;
class PlaneGeomDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern PlaneGeomDefaultTypeInternal _PlaneGeom_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::PlaneGeom* Arena::CreateMaybeMessage<::ignition::msgs::PlaneGeom>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE PlaneGeom :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.PlaneGeom) */ {
 public:
  PlaneGeom();
  virtual ~PlaneGeom();

  PlaneGeom(const PlaneGeom& from);
  PlaneGeom(PlaneGeom&& from) noexcept
    : PlaneGeom() {
    *this = ::std::move(from);
  }

  inline PlaneGeom& operator=(const PlaneGeom& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlaneGeom& operator=(PlaneGeom&& from) noexcept {
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
  static const PlaneGeom& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlaneGeom* internal_default_instance() {
    return reinterpret_cast<const PlaneGeom*>(
               &_PlaneGeom_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PlaneGeom& a, PlaneGeom& b) {
    a.Swap(&b);
  }
  inline void Swap(PlaneGeom* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlaneGeom* New() const final {
    return CreateMaybeMessage<PlaneGeom>(nullptr);
  }

  PlaneGeom* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlaneGeom>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlaneGeom& from);
  void MergeFrom(const PlaneGeom& from);
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
  void InternalSwap(PlaneGeom* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.PlaneGeom";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fplanegeom_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fplanegeom_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kNormalFieldNumber = 2,
    kSizeFieldNumber = 3,
    kDFieldNumber = 4,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Vector3d normal = 2;
  bool has_normal() const;
  void clear_normal();
  const ::ignition::msgs::Vector3d& normal() const;
  ::ignition::msgs::Vector3d* release_normal();
  ::ignition::msgs::Vector3d* mutable_normal();
  void set_allocated_normal(::ignition::msgs::Vector3d* normal);

  // optional .ignition.msgs.Vector2d size = 3;
  bool has_size() const;
  void clear_size();
  const ::ignition::msgs::Vector2d& size() const;
  ::ignition::msgs::Vector2d* release_size();
  ::ignition::msgs::Vector2d* mutable_size();
  void set_allocated_size(::ignition::msgs::Vector2d* size);

  // optional double d = 4 [default = 0];
  bool has_d() const;
  void clear_d();
  double d() const;
  void set_d(double value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.PlaneGeom)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Vector3d* normal_;
  ::ignition::msgs::Vector2d* size_;
  double d_;
  friend struct ::TableStruct_ignition_2fmsgs_2fplanegeom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlaneGeom

// optional .ignition.msgs.Header header = 1;
inline bool PlaneGeom::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& PlaneGeom::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.PlaneGeom.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* PlaneGeom::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.PlaneGeom.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* PlaneGeom::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.PlaneGeom.header)
  return header_;
}
inline void PlaneGeom::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.PlaneGeom.header)
}

// optional .ignition.msgs.Vector3d normal = 2;
inline bool PlaneGeom::has_normal() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Vector3d& PlaneGeom::normal() const {
  const ::ignition::msgs::Vector3d* p = normal_;
  // @@protoc_insertion_point(field_get:ignition.msgs.PlaneGeom.normal)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* PlaneGeom::release_normal() {
  // @@protoc_insertion_point(field_release:ignition.msgs.PlaneGeom.normal)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Vector3d* temp = normal_;
  normal_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* PlaneGeom::mutable_normal() {
  _has_bits_[0] |= 0x00000002u;
  if (normal_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    normal_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.PlaneGeom.normal)
  return normal_;
}
inline void PlaneGeom::set_allocated_normal(::ignition::msgs::Vector3d* normal) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(normal_);
  }
  if (normal) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      normal = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, normal, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  normal_ = normal;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.PlaneGeom.normal)
}

// optional .ignition.msgs.Vector2d size = 3;
inline bool PlaneGeom::has_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Vector2d& PlaneGeom::size() const {
  const ::ignition::msgs::Vector2d* p = size_;
  // @@protoc_insertion_point(field_get:ignition.msgs.PlaneGeom.size)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector2d*>(
      &::ignition::msgs::_Vector2d_default_instance_);
}
inline ::ignition::msgs::Vector2d* PlaneGeom::release_size() {
  // @@protoc_insertion_point(field_release:ignition.msgs.PlaneGeom.size)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Vector2d* temp = size_;
  size_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector2d* PlaneGeom::mutable_size() {
  _has_bits_[0] |= 0x00000004u;
  if (size_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector2d>(GetArenaNoVirtual());
    size_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.PlaneGeom.size)
  return size_;
}
inline void PlaneGeom::set_allocated_size(::ignition::msgs::Vector2d* size) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(size_);
  }
  if (size) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      size = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, size, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  size_ = size;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.PlaneGeom.size)
}

// optional double d = 4 [default = 0];
inline bool PlaneGeom::has_d() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlaneGeom::clear_d() {
  d_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double PlaneGeom::d() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.PlaneGeom.d)
  return d_;
}
inline void PlaneGeom::set_d(double value) {
  _has_bits_[0] |= 0x00000008u;
  d_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.PlaneGeom.d)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<PlaneGeom> PlaneGeomUniquePtr;
typedef std::unique_ptr<const PlaneGeom> ConstPlaneGeomUniquePtr;
typedef std::shared_ptr<PlaneGeom> PlaneGeomSharedPtr;
typedef std::shared_ptr<const PlaneGeom> ConstPlaneGeomSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fplanegeom_2eproto