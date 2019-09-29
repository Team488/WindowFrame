// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/scene.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fscene_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fscene_2eproto

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
#include "ignition/msgs/color.pb.h"
#include "ignition/msgs/fog.pb.h"
#include "ignition/msgs/sky.pb.h"
#include "ignition/msgs/light.pb.h"
#include "ignition/msgs/joint.pb.h"
#include "ignition/msgs/model.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fscene_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fscene_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fscene_2eproto;
namespace ignition {
namespace msgs {
class Scene;
class SceneDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern SceneDefaultTypeInternal _Scene_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Scene* Arena::CreateMaybeMessage<::ignition::msgs::Scene>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Scene :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Scene) */ {
 public:
  Scene();
  virtual ~Scene();

  Scene(const Scene& from);
  Scene(Scene&& from) noexcept
    : Scene() {
    *this = ::std::move(from);
  }

  inline Scene& operator=(const Scene& from) {
    CopyFrom(from);
    return *this;
  }
  inline Scene& operator=(Scene&& from) noexcept {
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
  static const Scene& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Scene* internal_default_instance() {
    return reinterpret_cast<const Scene*>(
               &_Scene_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Scene& a, Scene& b) {
    a.Swap(&b);
  }
  inline void Swap(Scene* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Scene* New() const final {
    return CreateMaybeMessage<Scene>(nullptr);
  }

  Scene* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Scene>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Scene& from);
  void MergeFrom(const Scene& from);
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
  void InternalSwap(Scene* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Scene";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fscene_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fscene_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kModelFieldNumber = 9,
    kLightFieldNumber = 10,
    kJointFieldNumber = 11,
    kNameFieldNumber = 2,
    kHeaderFieldNumber = 1,
    kAmbientFieldNumber = 3,
    kBackgroundFieldNumber = 4,
    kSkyFieldNumber = 5,
    kFogFieldNumber = 7,
    kGridFieldNumber = 8,
    kOriginVisualFieldNumber = 12,
    kShadowsFieldNumber = 6,
  };
  // repeated .ignition.msgs.Model model = 9;
  int model_size() const;
  void clear_model();
  ::ignition::msgs::Model* mutable_model(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Model >*
      mutable_model();
  const ::ignition::msgs::Model& model(int index) const;
  ::ignition::msgs::Model* add_model();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Model >&
      model() const;

  // repeated .ignition.msgs.Light light = 10;
  int light_size() const;
  void clear_light();
  ::ignition::msgs::Light* mutable_light(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Light >*
      mutable_light();
  const ::ignition::msgs::Light& light(int index) const;
  ::ignition::msgs::Light* add_light();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Light >&
      light() const;

  // repeated .ignition.msgs.Joint joint = 11;
  int joint_size() const;
  void clear_joint();
  ::ignition::msgs::Joint* mutable_joint(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Joint >*
      mutable_joint();
  const ::ignition::msgs::Joint& joint(int index) const;
  ::ignition::msgs::Joint* add_joint();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Joint >&
      joint() const;

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

  // optional .ignition.msgs.Color ambient = 3;
  bool has_ambient() const;
  void clear_ambient();
  const ::ignition::msgs::Color& ambient() const;
  ::ignition::msgs::Color* release_ambient();
  ::ignition::msgs::Color* mutable_ambient();
  void set_allocated_ambient(::ignition::msgs::Color* ambient);

  // optional .ignition.msgs.Color background = 4;
  bool has_background() const;
  void clear_background();
  const ::ignition::msgs::Color& background() const;
  ::ignition::msgs::Color* release_background();
  ::ignition::msgs::Color* mutable_background();
  void set_allocated_background(::ignition::msgs::Color* background);

  // optional .ignition.msgs.Sky sky = 5;
  bool has_sky() const;
  void clear_sky();
  const ::ignition::msgs::Sky& sky() const;
  ::ignition::msgs::Sky* release_sky();
  ::ignition::msgs::Sky* mutable_sky();
  void set_allocated_sky(::ignition::msgs::Sky* sky);

  // optional .ignition.msgs.Fog fog = 7;
  bool has_fog() const;
  void clear_fog();
  const ::ignition::msgs::Fog& fog() const;
  ::ignition::msgs::Fog* release_fog();
  ::ignition::msgs::Fog* mutable_fog();
  void set_allocated_fog(::ignition::msgs::Fog* fog);

  // optional bool grid = 8;
  bool has_grid() const;
  void clear_grid();
  bool grid() const;
  void set_grid(bool value);

  // optional bool origin_visual = 12;
  bool has_origin_visual() const;
  void clear_origin_visual();
  bool origin_visual() const;
  void set_origin_visual(bool value);

  // optional bool shadows = 6 [default = true];
  bool has_shadows() const;
  void clear_shadows();
  bool shadows() const;
  void set_shadows(bool value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Scene)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Model > model_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Light > light_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Joint > joint_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Color* ambient_;
  ::ignition::msgs::Color* background_;
  ::ignition::msgs::Sky* sky_;
  ::ignition::msgs::Fog* fog_;
  bool grid_;
  bool origin_visual_;
  bool shadows_;
  friend struct ::TableStruct_ignition_2fmsgs_2fscene_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Scene

// optional .ignition.msgs.Header header = 1;
inline bool Scene::has_header() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Header& Scene::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Scene::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Scene.header)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Scene::mutable_header() {
  _has_bits_[0] |= 0x00000002u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.header)
  return header_;
}
inline void Scene::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Scene.header)
}

// optional string name = 2;
inline bool Scene::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Scene::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Scene::name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.name)
  return name_.GetNoArena();
}
inline void Scene::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.Scene.name)
}
inline void Scene::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.Scene.name)
}
inline void Scene::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.Scene.name)
}
inline void Scene::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.Scene.name)
}
inline std::string* Scene::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Scene::release_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Scene.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Scene::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Scene.name)
}

// optional .ignition.msgs.Color ambient = 3;
inline bool Scene::has_ambient() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Color& Scene::ambient() const {
  const ::ignition::msgs::Color* p = ambient_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.ambient)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Color*>(
      &::ignition::msgs::_Color_default_instance_);
}
inline ::ignition::msgs::Color* Scene::release_ambient() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Scene.ambient)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Color* temp = ambient_;
  ambient_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Color* Scene::mutable_ambient() {
  _has_bits_[0] |= 0x00000004u;
  if (ambient_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Color>(GetArenaNoVirtual());
    ambient_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.ambient)
  return ambient_;
}
inline void Scene::set_allocated_ambient(::ignition::msgs::Color* ambient) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ambient_);
  }
  if (ambient) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ambient = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ambient, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  ambient_ = ambient;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Scene.ambient)
}

// optional .ignition.msgs.Color background = 4;
inline bool Scene::has_background() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::Color& Scene::background() const {
  const ::ignition::msgs::Color* p = background_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.background)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Color*>(
      &::ignition::msgs::_Color_default_instance_);
}
inline ::ignition::msgs::Color* Scene::release_background() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Scene.background)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::Color* temp = background_;
  background_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Color* Scene::mutable_background() {
  _has_bits_[0] |= 0x00000008u;
  if (background_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Color>(GetArenaNoVirtual());
    background_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.background)
  return background_;
}
inline void Scene::set_allocated_background(::ignition::msgs::Color* background) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(background_);
  }
  if (background) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      background = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, background, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  background_ = background;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Scene.background)
}

// optional .ignition.msgs.Sky sky = 5;
inline bool Scene::has_sky() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline const ::ignition::msgs::Sky& Scene::sky() const {
  const ::ignition::msgs::Sky* p = sky_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.sky)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Sky*>(
      &::ignition::msgs::_Sky_default_instance_);
}
inline ::ignition::msgs::Sky* Scene::release_sky() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Scene.sky)
  _has_bits_[0] &= ~0x00000010u;
  ::ignition::msgs::Sky* temp = sky_;
  sky_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Sky* Scene::mutable_sky() {
  _has_bits_[0] |= 0x00000010u;
  if (sky_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Sky>(GetArenaNoVirtual());
    sky_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.sky)
  return sky_;
}
inline void Scene::set_allocated_sky(::ignition::msgs::Sky* sky) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sky_);
  }
  if (sky) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      sky = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sky, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  sky_ = sky;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Scene.sky)
}

// optional bool shadows = 6 [default = true];
inline bool Scene::has_shadows() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Scene::clear_shadows() {
  shadows_ = true;
  _has_bits_[0] &= ~0x00000100u;
}
inline bool Scene::shadows() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.shadows)
  return shadows_;
}
inline void Scene::set_shadows(bool value) {
  _has_bits_[0] |= 0x00000100u;
  shadows_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Scene.shadows)
}

// optional .ignition.msgs.Fog fog = 7;
inline bool Scene::has_fog() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline const ::ignition::msgs::Fog& Scene::fog() const {
  const ::ignition::msgs::Fog* p = fog_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.fog)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Fog*>(
      &::ignition::msgs::_Fog_default_instance_);
}
inline ::ignition::msgs::Fog* Scene::release_fog() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Scene.fog)
  _has_bits_[0] &= ~0x00000020u;
  ::ignition::msgs::Fog* temp = fog_;
  fog_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Fog* Scene::mutable_fog() {
  _has_bits_[0] |= 0x00000020u;
  if (fog_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Fog>(GetArenaNoVirtual());
    fog_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.fog)
  return fog_;
}
inline void Scene::set_allocated_fog(::ignition::msgs::Fog* fog) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(fog_);
  }
  if (fog) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      fog = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fog, submessage_arena);
    }
    _has_bits_[0] |= 0x00000020u;
  } else {
    _has_bits_[0] &= ~0x00000020u;
  }
  fog_ = fog;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Scene.fog)
}

// optional bool grid = 8;
inline bool Scene::has_grid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Scene::clear_grid() {
  grid_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Scene::grid() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.grid)
  return grid_;
}
inline void Scene::set_grid(bool value) {
  _has_bits_[0] |= 0x00000040u;
  grid_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Scene.grid)
}

// repeated .ignition.msgs.Model model = 9;
inline int Scene::model_size() const {
  return model_.size();
}
inline ::ignition::msgs::Model* Scene::mutable_model(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.model)
  return model_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Model >*
Scene::mutable_model() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Scene.model)
  return &model_;
}
inline const ::ignition::msgs::Model& Scene::model(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.model)
  return model_.Get(index);
}
inline ::ignition::msgs::Model* Scene::add_model() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Scene.model)
  return model_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Model >&
Scene::model() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Scene.model)
  return model_;
}

// repeated .ignition.msgs.Light light = 10;
inline int Scene::light_size() const {
  return light_.size();
}
inline ::ignition::msgs::Light* Scene::mutable_light(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.light)
  return light_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Light >*
Scene::mutable_light() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Scene.light)
  return &light_;
}
inline const ::ignition::msgs::Light& Scene::light(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.light)
  return light_.Get(index);
}
inline ::ignition::msgs::Light* Scene::add_light() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Scene.light)
  return light_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Light >&
Scene::light() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Scene.light)
  return light_;
}

// repeated .ignition.msgs.Joint joint = 11;
inline int Scene::joint_size() const {
  return joint_.size();
}
inline ::ignition::msgs::Joint* Scene::mutable_joint(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Scene.joint)
  return joint_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Joint >*
Scene::mutable_joint() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Scene.joint)
  return &joint_;
}
inline const ::ignition::msgs::Joint& Scene::joint(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.joint)
  return joint_.Get(index);
}
inline ::ignition::msgs::Joint* Scene::add_joint() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Scene.joint)
  return joint_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Joint >&
Scene::joint() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Scene.joint)
  return joint_;
}

// optional bool origin_visual = 12;
inline bool Scene::has_origin_visual() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Scene::clear_origin_visual() {
  origin_visual_ = false;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool Scene::origin_visual() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Scene.origin_visual)
  return origin_visual_;
}
inline void Scene::set_origin_visual(bool value) {
  _has_bits_[0] |= 0x00000080u;
  origin_visual_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Scene.origin_visual)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Scene> SceneUniquePtr;
typedef std::unique_ptr<const Scene> ConstSceneUniquePtr;
typedef std::shared_ptr<Scene> SceneSharedPtr;
typedef std::shared_ptr<const Scene> ConstSceneSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fscene_2eproto