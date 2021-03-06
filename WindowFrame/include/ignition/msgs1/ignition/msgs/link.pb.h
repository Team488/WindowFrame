// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/link.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flink_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flink_2eproto

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
#include "ignition/msgs/inertial.pb.h"
#include "ignition/msgs/collision.pb.h"
#include "ignition/msgs/visual.pb.h"
#include "ignition/msgs/sensor.pb.h"
#include "ignition/msgs/projector.pb.h"
#include "ignition/msgs/pose.pb.h"
#include "ignition/msgs/battery.pb.h"
#include "ignition/msgs/density.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2flink_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2flink_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2flink_2eproto;
namespace ignition {
namespace msgs {
class Link;
class LinkDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LinkDefaultTypeInternal _Link_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Link* Arena::CreateMaybeMessage<::ignition::msgs::Link>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Link :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Link) */ {
 public:
  Link();
  virtual ~Link();

  Link(const Link& from);
  Link(Link&& from) noexcept
    : Link() {
    *this = ::std::move(from);
  }

  inline Link& operator=(const Link& from) {
    CopyFrom(from);
    return *this;
  }
  inline Link& operator=(Link&& from) noexcept {
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
  static const Link& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Link* internal_default_instance() {
    return reinterpret_cast<const Link*>(
               &_Link_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Link& a, Link& b) {
    a.Swap(&b);
  }
  inline void Swap(Link* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Link* New() const final {
    return CreateMaybeMessage<Link>(nullptr);
  }

  Link* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Link>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Link& from);
  void MergeFrom(const Link& from);
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
  void InternalSwap(Link* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Link";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2flink_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2flink_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVisualFieldNumber = 11,
    kCollisionFieldNumber = 12,
    kSensorFieldNumber = 13,
    kProjectorFieldNumber = 14,
    kBatteryFieldNumber = 16,
    kNameFieldNumber = 3,
    kHeaderFieldNumber = 1,
    kDensityFieldNumber = 8,
    kInertialFieldNumber = 9,
    kPoseFieldNumber = 10,
    kIdFieldNumber = 2,
    kSelfCollideFieldNumber = 4,
    kGravityFieldNumber = 5,
    kKinematicFieldNumber = 6,
    kEnabledFieldNumber = 7,
    kCanonicalFieldNumber = 15,
  };
  // repeated .ignition.msgs.Visual visual = 11;
  int visual_size() const;
  void clear_visual();
  ::ignition::msgs::Visual* mutable_visual(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Visual >*
      mutable_visual();
  const ::ignition::msgs::Visual& visual(int index) const;
  ::ignition::msgs::Visual* add_visual();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Visual >&
      visual() const;

  // repeated .ignition.msgs.Collision collision = 12;
  int collision_size() const;
  void clear_collision();
  ::ignition::msgs::Collision* mutable_collision(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Collision >*
      mutable_collision();
  const ::ignition::msgs::Collision& collision(int index) const;
  ::ignition::msgs::Collision* add_collision();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Collision >&
      collision() const;

  // repeated .ignition.msgs.Sensor sensor = 13;
  int sensor_size() const;
  void clear_sensor();
  ::ignition::msgs::Sensor* mutable_sensor(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >*
      mutable_sensor();
  const ::ignition::msgs::Sensor& sensor(int index) const;
  ::ignition::msgs::Sensor* add_sensor();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >&
      sensor() const;

  // repeated .ignition.msgs.Projector projector = 14;
  int projector_size() const;
  void clear_projector();
  ::ignition::msgs::Projector* mutable_projector(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Projector >*
      mutable_projector();
  const ::ignition::msgs::Projector& projector(int index) const;
  ::ignition::msgs::Projector* add_projector();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Projector >&
      projector() const;

  // repeated .ignition.msgs.Battery battery = 16;
  int battery_size() const;
  void clear_battery();
  ::ignition::msgs::Battery* mutable_battery(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Battery >*
      mutable_battery();
  const ::ignition::msgs::Battery& battery(int index) const;
  ::ignition::msgs::Battery* add_battery();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Battery >&
      battery() const;

  // optional string name = 3;
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

  // optional .ignition.msgs.Density density = 8;
  bool has_density() const;
  void clear_density();
  const ::ignition::msgs::Density& density() const;
  ::ignition::msgs::Density* release_density();
  ::ignition::msgs::Density* mutable_density();
  void set_allocated_density(::ignition::msgs::Density* density);

  // optional .ignition.msgs.Inertial inertial = 9;
  bool has_inertial() const;
  void clear_inertial();
  const ::ignition::msgs::Inertial& inertial() const;
  ::ignition::msgs::Inertial* release_inertial();
  ::ignition::msgs::Inertial* mutable_inertial();
  void set_allocated_inertial(::ignition::msgs::Inertial* inertial);

  // optional .ignition.msgs.Pose pose = 10;
  bool has_pose() const;
  void clear_pose();
  const ::ignition::msgs::Pose& pose() const;
  ::ignition::msgs::Pose* release_pose();
  ::ignition::msgs::Pose* mutable_pose();
  void set_allocated_pose(::ignition::msgs::Pose* pose);

  // optional uint32 id = 2;
  bool has_id() const;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional bool self_collide = 4;
  bool has_self_collide() const;
  void clear_self_collide();
  bool self_collide() const;
  void set_self_collide(bool value);

  // optional bool gravity = 5;
  bool has_gravity() const;
  void clear_gravity();
  bool gravity() const;
  void set_gravity(bool value);

  // optional bool kinematic = 6;
  bool has_kinematic() const;
  void clear_kinematic();
  bool kinematic() const;
  void set_kinematic(bool value);

  // optional bool enabled = 7;
  bool has_enabled() const;
  void clear_enabled();
  bool enabled() const;
  void set_enabled(bool value);

  // optional bool canonical = 15;
  bool has_canonical() const;
  void clear_canonical();
  bool canonical() const;
  void set_canonical(bool value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Link)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Visual > visual_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Collision > collision_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor > sensor_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Projector > projector_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Battery > battery_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Density* density_;
  ::ignition::msgs::Inertial* inertial_;
  ::ignition::msgs::Pose* pose_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool self_collide_;
  bool gravity_;
  bool kinematic_;
  bool enabled_;
  bool canonical_;
  friend struct ::TableStruct_ignition_2fmsgs_2flink_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Link

// optional .ignition.msgs.Header header = 1;
inline bool Link::has_header() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Header& Link::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Link::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Link.header)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Link::mutable_header() {
  _has_bits_[0] |= 0x00000002u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.header)
  return header_;
}
inline void Link::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Link.header)
}

// optional uint32 id = 2;
inline bool Link::has_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Link::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Link::id() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.id)
  return id_;
}
inline void Link::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  id_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.id)
}

// optional string name = 3;
inline bool Link::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Link::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Link::name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.name)
  return name_.GetNoArena();
}
inline void Link::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.name)
}
inline void Link::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.Link.name)
}
inline void Link::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.Link.name)
}
inline void Link::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.Link.name)
}
inline std::string* Link::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Link::release_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Link.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Link::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Link.name)
}

// optional bool self_collide = 4;
inline bool Link::has_self_collide() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Link::clear_self_collide() {
  self_collide_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Link::self_collide() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.self_collide)
  return self_collide_;
}
inline void Link::set_self_collide(bool value) {
  _has_bits_[0] |= 0x00000040u;
  self_collide_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.self_collide)
}

// optional bool gravity = 5;
inline bool Link::has_gravity() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Link::clear_gravity() {
  gravity_ = false;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool Link::gravity() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.gravity)
  return gravity_;
}
inline void Link::set_gravity(bool value) {
  _has_bits_[0] |= 0x00000080u;
  gravity_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.gravity)
}

// optional bool kinematic = 6;
inline bool Link::has_kinematic() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Link::clear_kinematic() {
  kinematic_ = false;
  _has_bits_[0] &= ~0x00000100u;
}
inline bool Link::kinematic() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.kinematic)
  return kinematic_;
}
inline void Link::set_kinematic(bool value) {
  _has_bits_[0] |= 0x00000100u;
  kinematic_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.kinematic)
}

// optional bool enabled = 7;
inline bool Link::has_enabled() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Link::clear_enabled() {
  enabled_ = false;
  _has_bits_[0] &= ~0x00000200u;
}
inline bool Link::enabled() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.enabled)
  return enabled_;
}
inline void Link::set_enabled(bool value) {
  _has_bits_[0] |= 0x00000200u;
  enabled_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.enabled)
}

// optional .ignition.msgs.Density density = 8;
inline bool Link::has_density() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Density& Link::density() const {
  const ::ignition::msgs::Density* p = density_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.density)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Density*>(
      &::ignition::msgs::_Density_default_instance_);
}
inline ::ignition::msgs::Density* Link::release_density() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Link.density)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Density* temp = density_;
  density_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Density* Link::mutable_density() {
  _has_bits_[0] |= 0x00000004u;
  if (density_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Density>(GetArenaNoVirtual());
    density_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.density)
  return density_;
}
inline void Link::set_allocated_density(::ignition::msgs::Density* density) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(density_);
  }
  if (density) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      density = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, density, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  density_ = density;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Link.density)
}

// optional .ignition.msgs.Inertial inertial = 9;
inline bool Link::has_inertial() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::Inertial& Link::inertial() const {
  const ::ignition::msgs::Inertial* p = inertial_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.inertial)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Inertial*>(
      &::ignition::msgs::_Inertial_default_instance_);
}
inline ::ignition::msgs::Inertial* Link::release_inertial() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Link.inertial)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::Inertial* temp = inertial_;
  inertial_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Inertial* Link::mutable_inertial() {
  _has_bits_[0] |= 0x00000008u;
  if (inertial_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Inertial>(GetArenaNoVirtual());
    inertial_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.inertial)
  return inertial_;
}
inline void Link::set_allocated_inertial(::ignition::msgs::Inertial* inertial) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(inertial_);
  }
  if (inertial) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      inertial = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, inertial, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  inertial_ = inertial;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Link.inertial)
}

// optional .ignition.msgs.Pose pose = 10;
inline bool Link::has_pose() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline const ::ignition::msgs::Pose& Link::pose() const {
  const ::ignition::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.pose)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Pose*>(
      &::ignition::msgs::_Pose_default_instance_);
}
inline ::ignition::msgs::Pose* Link::release_pose() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Link.pose)
  _has_bits_[0] &= ~0x00000010u;
  ::ignition::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Pose* Link::mutable_pose() {
  _has_bits_[0] |= 0x00000010u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.pose)
  return pose_;
}
inline void Link::set_allocated_pose(::ignition::msgs::Pose* pose) {
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
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Link.pose)
}

// repeated .ignition.msgs.Visual visual = 11;
inline int Link::visual_size() const {
  return visual_.size();
}
inline ::ignition::msgs::Visual* Link::mutable_visual(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.visual)
  return visual_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Visual >*
Link::mutable_visual() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Link.visual)
  return &visual_;
}
inline const ::ignition::msgs::Visual& Link::visual(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.visual)
  return visual_.Get(index);
}
inline ::ignition::msgs::Visual* Link::add_visual() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Link.visual)
  return visual_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Visual >&
Link::visual() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Link.visual)
  return visual_;
}

// repeated .ignition.msgs.Collision collision = 12;
inline int Link::collision_size() const {
  return collision_.size();
}
inline ::ignition::msgs::Collision* Link::mutable_collision(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.collision)
  return collision_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Collision >*
Link::mutable_collision() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Link.collision)
  return &collision_;
}
inline const ::ignition::msgs::Collision& Link::collision(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.collision)
  return collision_.Get(index);
}
inline ::ignition::msgs::Collision* Link::add_collision() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Link.collision)
  return collision_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Collision >&
Link::collision() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Link.collision)
  return collision_;
}

// repeated .ignition.msgs.Sensor sensor = 13;
inline int Link::sensor_size() const {
  return sensor_.size();
}
inline ::ignition::msgs::Sensor* Link::mutable_sensor(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.sensor)
  return sensor_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >*
Link::mutable_sensor() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Link.sensor)
  return &sensor_;
}
inline const ::ignition::msgs::Sensor& Link::sensor(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.sensor)
  return sensor_.Get(index);
}
inline ::ignition::msgs::Sensor* Link::add_sensor() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Link.sensor)
  return sensor_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >&
Link::sensor() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Link.sensor)
  return sensor_;
}

// repeated .ignition.msgs.Projector projector = 14;
inline int Link::projector_size() const {
  return projector_.size();
}
inline ::ignition::msgs::Projector* Link::mutable_projector(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.projector)
  return projector_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Projector >*
Link::mutable_projector() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Link.projector)
  return &projector_;
}
inline const ::ignition::msgs::Projector& Link::projector(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.projector)
  return projector_.Get(index);
}
inline ::ignition::msgs::Projector* Link::add_projector() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Link.projector)
  return projector_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Projector >&
Link::projector() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Link.projector)
  return projector_;
}

// optional bool canonical = 15;
inline bool Link::has_canonical() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Link::clear_canonical() {
  canonical_ = false;
  _has_bits_[0] &= ~0x00000400u;
}
inline bool Link::canonical() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.canonical)
  return canonical_;
}
inline void Link::set_canonical(bool value) {
  _has_bits_[0] |= 0x00000400u;
  canonical_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Link.canonical)
}

// repeated .ignition.msgs.Battery battery = 16;
inline int Link::battery_size() const {
  return battery_.size();
}
inline ::ignition::msgs::Battery* Link::mutable_battery(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Link.battery)
  return battery_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Battery >*
Link::mutable_battery() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Link.battery)
  return &battery_;
}
inline const ::ignition::msgs::Battery& Link::battery(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Link.battery)
  return battery_.Get(index);
}
inline ::ignition::msgs::Battery* Link::add_battery() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Link.battery)
  return battery_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Battery >&
Link::battery() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Link.battery)
  return battery_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Link> LinkUniquePtr;
typedef std::unique_ptr<const Link> ConstLinkUniquePtr;
typedef std::shared_ptr<Link> LinkSharedPtr;
typedef std::shared_ptr<const Link> ConstLinkSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flink_2eproto
