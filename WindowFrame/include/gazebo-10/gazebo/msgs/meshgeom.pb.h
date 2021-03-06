// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: meshgeom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_meshgeom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_meshgeom_2eproto

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
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_meshgeom_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_meshgeom_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_meshgeom_2eproto;
namespace gazebo {
namespace msgs {
class MeshGeom;
class MeshGeomDefaultTypeInternal;
GZ_MSGS_VISIBLE extern MeshGeomDefaultTypeInternal _MeshGeom_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::MeshGeom* Arena::CreateMaybeMessage<::gazebo::msgs::MeshGeom>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE MeshGeom :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.MeshGeom) */ {
 public:
  MeshGeom();
  virtual ~MeshGeom();

  MeshGeom(const MeshGeom& from);
  MeshGeom(MeshGeom&& from) noexcept
    : MeshGeom() {
    *this = ::std::move(from);
  }

  inline MeshGeom& operator=(const MeshGeom& from) {
    CopyFrom(from);
    return *this;
  }
  inline MeshGeom& operator=(MeshGeom&& from) noexcept {
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
  static const MeshGeom& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MeshGeom* internal_default_instance() {
    return reinterpret_cast<const MeshGeom*>(
               &_MeshGeom_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MeshGeom& a, MeshGeom& b) {
    a.Swap(&b);
  }
  inline void Swap(MeshGeom* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MeshGeom* New() const final {
    return CreateMaybeMessage<MeshGeom>(nullptr);
  }

  MeshGeom* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MeshGeom>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MeshGeom& from);
  void MergeFrom(const MeshGeom& from);
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
  void InternalSwap(MeshGeom* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.MeshGeom";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_meshgeom_2eproto);
    return ::descriptor_table_meshgeom_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFilenameFieldNumber = 1,
    kSubmeshFieldNumber = 3,
    kScaleFieldNumber = 2,
    kCenterSubmeshFieldNumber = 4,
  };
  // required string filename = 1;
  bool has_filename() const;
  void clear_filename();
  const std::string& filename() const;
  void set_filename(const std::string& value);
  void set_filename(std::string&& value);
  void set_filename(const char* value);
  void set_filename(const char* value, size_t size);
  std::string* mutable_filename();
  std::string* release_filename();
  void set_allocated_filename(std::string* filename);

  // optional string submesh = 3;
  bool has_submesh() const;
  void clear_submesh();
  const std::string& submesh() const;
  void set_submesh(const std::string& value);
  void set_submesh(std::string&& value);
  void set_submesh(const char* value);
  void set_submesh(const char* value, size_t size);
  std::string* mutable_submesh();
  std::string* release_submesh();
  void set_allocated_submesh(std::string* submesh);

  // optional .gazebo.msgs.Vector3d scale = 2;
  bool has_scale() const;
  void clear_scale();
  const ::gazebo::msgs::Vector3d& scale() const;
  ::gazebo::msgs::Vector3d* release_scale();
  ::gazebo::msgs::Vector3d* mutable_scale();
  void set_allocated_scale(::gazebo::msgs::Vector3d* scale);

  // optional bool center_submesh = 4;
  bool has_center_submesh() const;
  void clear_center_submesh();
  bool center_submesh() const;
  void set_center_submesh(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.MeshGeom)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr filename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr submesh_;
  ::gazebo::msgs::Vector3d* scale_;
  bool center_submesh_;
  friend struct ::TableStruct_meshgeom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MeshGeom

// required string filename = 1;
inline bool MeshGeom::has_filename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MeshGeom::clear_filename() {
  filename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& MeshGeom::filename() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.MeshGeom.filename)
  return filename_.GetNoArena();
}
inline void MeshGeom::set_filename(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.MeshGeom.filename)
}
inline void MeshGeom::set_filename(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  filename_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.MeshGeom.filename)
}
inline void MeshGeom::set_filename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.MeshGeom.filename)
}
inline void MeshGeom::set_filename(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.MeshGeom.filename)
}
inline std::string* MeshGeom::mutable_filename() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.MeshGeom.filename)
  return filename_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MeshGeom::release_filename() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.MeshGeom.filename)
  if (!has_filename()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return filename_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MeshGeom::set_allocated_filename(std::string* filename) {
  if (filename != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  filename_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), filename);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.MeshGeom.filename)
}

// optional .gazebo.msgs.Vector3d scale = 2;
inline bool MeshGeom::has_scale() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::gazebo::msgs::Vector3d& MeshGeom::scale() const {
  const ::gazebo::msgs::Vector3d* p = scale_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.MeshGeom.scale)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline ::gazebo::msgs::Vector3d* MeshGeom::release_scale() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.MeshGeom.scale)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Vector3d* temp = scale_;
  scale_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* MeshGeom::mutable_scale() {
  _has_bits_[0] |= 0x00000004u;
  if (scale_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    scale_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.MeshGeom.scale)
  return scale_;
}
inline void MeshGeom::set_allocated_scale(::gazebo::msgs::Vector3d* scale) {
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
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.MeshGeom.scale)
}

// optional string submesh = 3;
inline bool MeshGeom::has_submesh() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MeshGeom::clear_submesh() {
  submesh_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& MeshGeom::submesh() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.MeshGeom.submesh)
  return submesh_.GetNoArena();
}
inline void MeshGeom::set_submesh(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  submesh_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.MeshGeom.submesh)
}
inline void MeshGeom::set_submesh(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  submesh_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.MeshGeom.submesh)
}
inline void MeshGeom::set_submesh(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  submesh_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.MeshGeom.submesh)
}
inline void MeshGeom::set_submesh(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  submesh_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.MeshGeom.submesh)
}
inline std::string* MeshGeom::mutable_submesh() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.MeshGeom.submesh)
  return submesh_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MeshGeom::release_submesh() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.MeshGeom.submesh)
  if (!has_submesh()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return submesh_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MeshGeom::set_allocated_submesh(std::string* submesh) {
  if (submesh != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  submesh_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), submesh);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.MeshGeom.submesh)
}

// optional bool center_submesh = 4;
inline bool MeshGeom::has_center_submesh() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MeshGeom::clear_center_submesh() {
  center_submesh_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool MeshGeom::center_submesh() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.MeshGeom.center_submesh)
  return center_submesh_;
}
inline void MeshGeom::set_center_submesh(bool value) {
  _has_bits_[0] |= 0x00000008u;
  center_submesh_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.MeshGeom.center_submesh)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::MeshGeom> MeshGeomPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::MeshGeom const> ConstMeshGeomPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_meshgeom_2eproto
