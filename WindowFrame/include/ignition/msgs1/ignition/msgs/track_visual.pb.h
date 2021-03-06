// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/track_visual.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2ftrack_5fvisual_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2ftrack_5fvisual_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2ftrack_5fvisual_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2ftrack_5fvisual_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2ftrack_5fvisual_2eproto;
namespace ignition {
namespace msgs {
class TrackVisual;
class TrackVisualDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern TrackVisualDefaultTypeInternal _TrackVisual_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::TrackVisual* Arena::CreateMaybeMessage<::ignition::msgs::TrackVisual>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE TrackVisual :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.TrackVisual) */ {
 public:
  TrackVisual();
  virtual ~TrackVisual();

  TrackVisual(const TrackVisual& from);
  TrackVisual(TrackVisual&& from) noexcept
    : TrackVisual() {
    *this = ::std::move(from);
  }

  inline TrackVisual& operator=(const TrackVisual& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrackVisual& operator=(TrackVisual&& from) noexcept {
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
  static const TrackVisual& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TrackVisual* internal_default_instance() {
    return reinterpret_cast<const TrackVisual*>(
               &_TrackVisual_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrackVisual& a, TrackVisual& b) {
    a.Swap(&b);
  }
  inline void Swap(TrackVisual* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TrackVisual* New() const final {
    return CreateMaybeMessage<TrackVisual>(nullptr);
  }

  TrackVisual* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TrackVisual>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TrackVisual& from);
  void MergeFrom(const TrackVisual& from);
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
  void InternalSwap(TrackVisual* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.TrackVisual";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2ftrack_5fvisual_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2ftrack_5fvisual_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kHeaderFieldNumber = 1,
    kXyzFieldNumber = 9,
    kMinDistFieldNumber = 5,
    kMaxDistFieldNumber = 6,
    kIdFieldNumber = 3,
    kInheritOrientationFieldNumber = 4,
    kStaticFieldNumber = 7,
    kUseModelFrameFieldNumber = 8,
    kInheritYawFieldNumber = 10,
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

  // optional .ignition.msgs.Vector3d xyz = 9;
  bool has_xyz() const;
  void clear_xyz();
  const ::ignition::msgs::Vector3d& xyz() const;
  ::ignition::msgs::Vector3d* release_xyz();
  ::ignition::msgs::Vector3d* mutable_xyz();
  void set_allocated_xyz(::ignition::msgs::Vector3d* xyz);

  // optional double min_dist = 5;
  bool has_min_dist() const;
  void clear_min_dist();
  double min_dist() const;
  void set_min_dist(double value);

  // optional double max_dist = 6;
  bool has_max_dist() const;
  void clear_max_dist();
  double max_dist() const;
  void set_max_dist(double value);

  // optional uint32 id = 3;
  bool has_id() const;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional bool inherit_orientation = 4;
  bool has_inherit_orientation() const;
  void clear_inherit_orientation();
  bool inherit_orientation() const;
  void set_inherit_orientation(bool value);

  // optional bool static = 7;
  bool has_static_() const;
  void clear_static_();
  bool static_() const;
  void set_static_(bool value);

  // optional bool use_model_frame = 8;
  bool has_use_model_frame() const;
  void clear_use_model_frame();
  bool use_model_frame() const;
  void set_use_model_frame(bool value);

  // optional bool inherit_yaw = 10;
  bool has_inherit_yaw() const;
  void clear_inherit_yaw();
  bool inherit_yaw() const;
  void set_inherit_yaw(bool value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.TrackVisual)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Vector3d* xyz_;
  double min_dist_;
  double max_dist_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool inherit_orientation_;
  bool static__;
  bool use_model_frame_;
  bool inherit_yaw_;
  friend struct ::TableStruct_ignition_2fmsgs_2ftrack_5fvisual_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrackVisual

// optional .ignition.msgs.Header header = 1;
inline bool TrackVisual::has_header() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Header& TrackVisual::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* TrackVisual::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.TrackVisual.header)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* TrackVisual::mutable_header() {
  _has_bits_[0] |= 0x00000002u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.TrackVisual.header)
  return header_;
}
inline void TrackVisual::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.TrackVisual.header)
}

// optional string name = 2;
inline bool TrackVisual::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrackVisual::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TrackVisual::name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.name)
  return name_.GetNoArena();
}
inline void TrackVisual::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.name)
}
inline void TrackVisual::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.TrackVisual.name)
}
inline void TrackVisual::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.TrackVisual.name)
}
inline void TrackVisual::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.TrackVisual.name)
}
inline std::string* TrackVisual::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.TrackVisual.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TrackVisual::release_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.TrackVisual.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TrackVisual::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.TrackVisual.name)
}

// optional uint32 id = 3;
inline bool TrackVisual::has_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TrackVisual::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TrackVisual::id() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.id)
  return id_;
}
inline void TrackVisual::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  id_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.id)
}

// optional bool inherit_orientation = 4;
inline bool TrackVisual::has_inherit_orientation() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TrackVisual::clear_inherit_orientation() {
  inherit_orientation_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool TrackVisual::inherit_orientation() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.inherit_orientation)
  return inherit_orientation_;
}
inline void TrackVisual::set_inherit_orientation(bool value) {
  _has_bits_[0] |= 0x00000040u;
  inherit_orientation_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.inherit_orientation)
}

// optional double min_dist = 5;
inline bool TrackVisual::has_min_dist() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TrackVisual::clear_min_dist() {
  min_dist_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double TrackVisual::min_dist() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.min_dist)
  return min_dist_;
}
inline void TrackVisual::set_min_dist(double value) {
  _has_bits_[0] |= 0x00000008u;
  min_dist_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.min_dist)
}

// optional double max_dist = 6;
inline bool TrackVisual::has_max_dist() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TrackVisual::clear_max_dist() {
  max_dist_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double TrackVisual::max_dist() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.max_dist)
  return max_dist_;
}
inline void TrackVisual::set_max_dist(double value) {
  _has_bits_[0] |= 0x00000010u;
  max_dist_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.max_dist)
}

// optional bool static = 7;
inline bool TrackVisual::has_static_() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TrackVisual::clear_static_() {
  static__ = false;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool TrackVisual::static_() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.static)
  return static__;
}
inline void TrackVisual::set_static_(bool value) {
  _has_bits_[0] |= 0x00000080u;
  static__ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.static)
}

// optional bool use_model_frame = 8;
inline bool TrackVisual::has_use_model_frame() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void TrackVisual::clear_use_model_frame() {
  use_model_frame_ = false;
  _has_bits_[0] &= ~0x00000100u;
}
inline bool TrackVisual::use_model_frame() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.use_model_frame)
  return use_model_frame_;
}
inline void TrackVisual::set_use_model_frame(bool value) {
  _has_bits_[0] |= 0x00000100u;
  use_model_frame_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.use_model_frame)
}

// optional .ignition.msgs.Vector3d xyz = 9;
inline bool TrackVisual::has_xyz() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Vector3d& TrackVisual::xyz() const {
  const ::ignition::msgs::Vector3d* p = xyz_;
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.xyz)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* TrackVisual::release_xyz() {
  // @@protoc_insertion_point(field_release:ignition.msgs.TrackVisual.xyz)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Vector3d* temp = xyz_;
  xyz_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* TrackVisual::mutable_xyz() {
  _has_bits_[0] |= 0x00000004u;
  if (xyz_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    xyz_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.TrackVisual.xyz)
  return xyz_;
}
inline void TrackVisual::set_allocated_xyz(::ignition::msgs::Vector3d* xyz) {
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
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  xyz_ = xyz;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.TrackVisual.xyz)
}

// optional bool inherit_yaw = 10;
inline bool TrackVisual::has_inherit_yaw() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void TrackVisual::clear_inherit_yaw() {
  inherit_yaw_ = false;
  _has_bits_[0] &= ~0x00000200u;
}
inline bool TrackVisual::inherit_yaw() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.TrackVisual.inherit_yaw)
  return inherit_yaw_;
}
inline void TrackVisual::set_inherit_yaw(bool value) {
  _has_bits_[0] |= 0x00000200u;
  inherit_yaw_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.TrackVisual.inherit_yaw)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<TrackVisual> TrackVisualUniquePtr;
typedef std::unique_ptr<const TrackVisual> ConstTrackVisualUniquePtr;
typedef std::shared_ptr<TrackVisual> TrackVisualSharedPtr;
typedef std::shared_ptr<const TrackVisual> ConstTrackVisualSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2ftrack_5fvisual_2eproto
