// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: collision.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_collision_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_collision_2eproto

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
#include "pose.pb.h"
#include "geometry.pb.h"
#include "surface.pb.h"
#include "visual.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_collision_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_collision_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_collision_2eproto;
namespace gazebo {
namespace msgs {
class Collision;
class CollisionDefaultTypeInternal;
GZ_MSGS_VISIBLE extern CollisionDefaultTypeInternal _Collision_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Collision* Arena::CreateMaybeMessage<::gazebo::msgs::Collision>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Collision :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Collision) */ {
 public:
  Collision();
  virtual ~Collision();

  Collision(const Collision& from);
  Collision(Collision&& from) noexcept
    : Collision() {
    *this = ::std::move(from);
  }

  inline Collision& operator=(const Collision& from) {
    CopyFrom(from);
    return *this;
  }
  inline Collision& operator=(Collision&& from) noexcept {
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
  static const Collision& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Collision* internal_default_instance() {
    return reinterpret_cast<const Collision*>(
               &_Collision_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Collision& a, Collision& b) {
    a.Swap(&b);
  }
  inline void Swap(Collision* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Collision* New() const final {
    return CreateMaybeMessage<Collision>(nullptr);
  }

  Collision* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Collision>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Collision& from);
  void MergeFrom(const Collision& from);
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
  void InternalSwap(Collision* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Collision";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_collision_2eproto);
    return ::descriptor_table_collision_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVisualFieldNumber = 8,
    kNameFieldNumber = 2,
    kPoseFieldNumber = 5,
    kGeometryFieldNumber = 6,
    kSurfaceFieldNumber = 7,
    kLaserRetroFieldNumber = 3,
    kMaxContactsFieldNumber = 4,
    kIdFieldNumber = 1,
  };
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

  // required string name = 2;
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

  // optional .gazebo.msgs.Pose pose = 5;
  bool has_pose() const;
  void clear_pose();
  const ::gazebo::msgs::Pose& pose() const;
  ::gazebo::msgs::Pose* release_pose();
  ::gazebo::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gazebo::msgs::Pose* pose);

  // optional .gazebo.msgs.Geometry geometry = 6;
  bool has_geometry() const;
  void clear_geometry();
  const ::gazebo::msgs::Geometry& geometry() const;
  ::gazebo::msgs::Geometry* release_geometry();
  ::gazebo::msgs::Geometry* mutable_geometry();
  void set_allocated_geometry(::gazebo::msgs::Geometry* geometry);

  // optional .gazebo.msgs.Surface surface = 7;
  bool has_surface() const;
  void clear_surface();
  const ::gazebo::msgs::Surface& surface() const;
  ::gazebo::msgs::Surface* release_surface();
  ::gazebo::msgs::Surface* mutable_surface();
  void set_allocated_surface(::gazebo::msgs::Surface* surface);

  // optional double laser_retro = 3;
  bool has_laser_retro() const;
  void clear_laser_retro();
  double laser_retro() const;
  void set_laser_retro(double value);

  // optional double max_contacts = 4;
  bool has_max_contacts() const;
  void clear_max_contacts();
  double max_contacts() const;
  void set_max_contacts(double value);

  // required uint32 id = 1;
  bool has_id() const;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Collision)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual > visual_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Pose* pose_;
  ::gazebo::msgs::Geometry* geometry_;
  ::gazebo::msgs::Surface* surface_;
  double laser_retro_;
  double max_contacts_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  friend struct ::TableStruct_collision_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Collision

// required uint32 id = 1;
inline bool Collision::has_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Collision::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Collision::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.id)
  return id_;
}
inline void Collision::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  id_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Collision.id)
}

// required string name = 2;
inline bool Collision::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Collision::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Collision::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.name)
  return name_.GetNoArena();
}
inline void Collision::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Collision.name)
}
inline void Collision::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Collision.name)
}
inline void Collision::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Collision.name)
}
inline void Collision::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Collision.name)
}
inline std::string* Collision::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Collision.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Collision::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Collision.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Collision::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Collision.name)
}

// optional double laser_retro = 3;
inline bool Collision::has_laser_retro() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Collision::clear_laser_retro() {
  laser_retro_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Collision::laser_retro() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.laser_retro)
  return laser_retro_;
}
inline void Collision::set_laser_retro(double value) {
  _has_bits_[0] |= 0x00000010u;
  laser_retro_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Collision.laser_retro)
}

// optional double max_contacts = 4;
inline bool Collision::has_max_contacts() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Collision::clear_max_contacts() {
  max_contacts_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Collision::max_contacts() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.max_contacts)
  return max_contacts_;
}
inline void Collision::set_max_contacts(double value) {
  _has_bits_[0] |= 0x00000020u;
  max_contacts_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Collision.max_contacts)
}

// optional .gazebo.msgs.Pose pose = 5;
inline bool Collision::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::gazebo::msgs::Pose& Collision::pose() const {
  const ::gazebo::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.pose)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline ::gazebo::msgs::Pose* Collision::release_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Collision.pose)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Collision::mutable_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Collision.pose)
  return pose_;
}
inline void Collision::set_allocated_pose(::gazebo::msgs::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Collision.pose)
}

// optional .gazebo.msgs.Geometry geometry = 6;
inline bool Collision::has_geometry() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::gazebo::msgs::Geometry& Collision::geometry() const {
  const ::gazebo::msgs::Geometry* p = geometry_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.geometry)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Geometry*>(
      &::gazebo::msgs::_Geometry_default_instance_);
}
inline ::gazebo::msgs::Geometry* Collision::release_geometry() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Collision.geometry)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Geometry* temp = geometry_;
  geometry_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Geometry* Collision::mutable_geometry() {
  _has_bits_[0] |= 0x00000004u;
  if (geometry_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Geometry>(GetArenaNoVirtual());
    geometry_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Collision.geometry)
  return geometry_;
}
inline void Collision::set_allocated_geometry(::gazebo::msgs::Geometry* geometry) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry_);
  }
  if (geometry) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      geometry = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, geometry, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  geometry_ = geometry;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Collision.geometry)
}

// optional .gazebo.msgs.Surface surface = 7;
inline bool Collision::has_surface() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::gazebo::msgs::Surface& Collision::surface() const {
  const ::gazebo::msgs::Surface* p = surface_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.surface)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Surface*>(
      &::gazebo::msgs::_Surface_default_instance_);
}
inline ::gazebo::msgs::Surface* Collision::release_surface() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Collision.surface)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Surface* temp = surface_;
  surface_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Surface* Collision::mutable_surface() {
  _has_bits_[0] |= 0x00000008u;
  if (surface_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Surface>(GetArenaNoVirtual());
    surface_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Collision.surface)
  return surface_;
}
inline void Collision::set_allocated_surface(::gazebo::msgs::Surface* surface) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(surface_);
  }
  if (surface) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      surface = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, surface, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  surface_ = surface;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Collision.surface)
}

// repeated .gazebo.msgs.Visual visual = 8;
inline int Collision::visual_size() const {
  return visual_.size();
}
inline ::gazebo::msgs::Visual* Collision::mutable_visual(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Collision.visual)
  return visual_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual >*
Collision::mutable_visual() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Collision.visual)
  return &visual_;
}
inline const ::gazebo::msgs::Visual& Collision::visual(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Collision.visual)
  return visual_.Get(index);
}
inline ::gazebo::msgs::Visual* Collision::add_visual() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Collision.visual)
  return visual_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Visual >&
Collision::visual() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Collision.visual)
  return visual_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Collision> CollisionPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Collision const> ConstCollisionPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_collision_2eproto
