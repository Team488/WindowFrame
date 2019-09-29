// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: material.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_material_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_material_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "color.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_material_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_material_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_material_2eproto;
namespace gazebo {
namespace msgs {
class Material;
class MaterialDefaultTypeInternal;
GZ_MSGS_VISIBLE extern MaterialDefaultTypeInternal _Material_default_instance_;
class Material_Script;
class Material_ScriptDefaultTypeInternal;
GZ_MSGS_VISIBLE extern Material_ScriptDefaultTypeInternal _Material_Script_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Material* Arena::CreateMaybeMessage<::gazebo::msgs::Material>(Arena*);
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Material_Script* Arena::CreateMaybeMessage<::gazebo::msgs::Material_Script>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum Material_ShaderType : int {
  Material_ShaderType_VERTEX = 1,
  Material_ShaderType_PIXEL = 2,
  Material_ShaderType_NORMAL_MAP_OBJECT_SPACE = 3,
  Material_ShaderType_NORMAL_MAP_TANGENT_SPACE = 4
};
GZ_MSGS_VISIBLE bool Material_ShaderType_IsValid(int value);
constexpr Material_ShaderType Material_ShaderType_ShaderType_MIN = Material_ShaderType_VERTEX;
constexpr Material_ShaderType Material_ShaderType_ShaderType_MAX = Material_ShaderType_NORMAL_MAP_TANGENT_SPACE;
constexpr int Material_ShaderType_ShaderType_ARRAYSIZE = Material_ShaderType_ShaderType_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Material_ShaderType_descriptor();
template<typename T>
inline const std::string& Material_ShaderType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Material_ShaderType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Material_ShaderType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Material_ShaderType_descriptor(), enum_t_value);
}
inline bool Material_ShaderType_Parse(
    const std::string& name, Material_ShaderType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Material_ShaderType>(
    Material_ShaderType_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Material_Script :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Material.Script) */ {
 public:
  Material_Script();
  virtual ~Material_Script();

  Material_Script(const Material_Script& from);
  Material_Script(Material_Script&& from) noexcept
    : Material_Script() {
    *this = ::std::move(from);
  }

  inline Material_Script& operator=(const Material_Script& from) {
    CopyFrom(from);
    return *this;
  }
  inline Material_Script& operator=(Material_Script&& from) noexcept {
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
  static const Material_Script& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Material_Script* internal_default_instance() {
    return reinterpret_cast<const Material_Script*>(
               &_Material_Script_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Material_Script& a, Material_Script& b) {
    a.Swap(&b);
  }
  inline void Swap(Material_Script* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Material_Script* New() const final {
    return CreateMaybeMessage<Material_Script>(nullptr);
  }

  Material_Script* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Material_Script>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Material_Script& from);
  void MergeFrom(const Material_Script& from);
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
  void InternalSwap(Material_Script* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Material.Script";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_material_2eproto);
    return ::descriptor_table_material_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUriFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  // repeated string uri = 1;
  int uri_size() const;
  void clear_uri();
  const std::string& uri(int index) const;
  std::string* mutable_uri(int index);
  void set_uri(int index, const std::string& value);
  void set_uri(int index, std::string&& value);
  void set_uri(int index, const char* value);
  void set_uri(int index, const char* value, size_t size);
  std::string* add_uri();
  void add_uri(const std::string& value);
  void add_uri(std::string&& value);
  void add_uri(const char* value);
  void add_uri(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& uri() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_uri();

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

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Material.Script)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> uri_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  friend struct ::TableStruct_material_2eproto;
};
// -------------------------------------------------------------------

class GZ_MSGS_VISIBLE Material :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Material) */ {
 public:
  Material();
  virtual ~Material();

  Material(const Material& from);
  Material(Material&& from) noexcept
    : Material() {
    *this = ::std::move(from);
  }

  inline Material& operator=(const Material& from) {
    CopyFrom(from);
    return *this;
  }
  inline Material& operator=(Material&& from) noexcept {
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
  static const Material& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Material* internal_default_instance() {
    return reinterpret_cast<const Material*>(
               &_Material_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Material& a, Material& b) {
    a.Swap(&b);
  }
  inline void Swap(Material* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Material* New() const final {
    return CreateMaybeMessage<Material>(nullptr);
  }

  Material* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Material>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Material& from);
  void MergeFrom(const Material& from);
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
  void InternalSwap(Material* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Material";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_material_2eproto);
    return ::descriptor_table_material_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Material_Script Script;

  typedef Material_ShaderType ShaderType;
  static constexpr ShaderType VERTEX =
    Material_ShaderType_VERTEX;
  static constexpr ShaderType PIXEL =
    Material_ShaderType_PIXEL;
  static constexpr ShaderType NORMAL_MAP_OBJECT_SPACE =
    Material_ShaderType_NORMAL_MAP_OBJECT_SPACE;
  static constexpr ShaderType NORMAL_MAP_TANGENT_SPACE =
    Material_ShaderType_NORMAL_MAP_TANGENT_SPACE;
  static inline bool ShaderType_IsValid(int value) {
    return Material_ShaderType_IsValid(value);
  }
  static constexpr ShaderType ShaderType_MIN =
    Material_ShaderType_ShaderType_MIN;
  static constexpr ShaderType ShaderType_MAX =
    Material_ShaderType_ShaderType_MAX;
  static constexpr int ShaderType_ARRAYSIZE =
    Material_ShaderType_ShaderType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ShaderType_descriptor() {
    return Material_ShaderType_descriptor();
  }
  template<typename T>
  static inline const std::string& ShaderType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ShaderType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ShaderType_Name.");
    return Material_ShaderType_Name(enum_t_value);
  }
  static inline bool ShaderType_Parse(const std::string& name,
      ShaderType* value) {
    return Material_ShaderType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNormalMapFieldNumber = 3,
    kScriptFieldNumber = 1,
    kAmbientFieldNumber = 4,
    kDiffuseFieldNumber = 5,
    kSpecularFieldNumber = 6,
    kEmissiveFieldNumber = 7,
    kLightingFieldNumber = 8,
    kShaderTypeFieldNumber = 2,
  };
  // optional string normal_map = 3;
  bool has_normal_map() const;
  void clear_normal_map();
  const std::string& normal_map() const;
  void set_normal_map(const std::string& value);
  void set_normal_map(std::string&& value);
  void set_normal_map(const char* value);
  void set_normal_map(const char* value, size_t size);
  std::string* mutable_normal_map();
  std::string* release_normal_map();
  void set_allocated_normal_map(std::string* normal_map);

  // optional .gazebo.msgs.Material.Script script = 1;
  bool has_script() const;
  void clear_script();
  const ::gazebo::msgs::Material_Script& script() const;
  ::gazebo::msgs::Material_Script* release_script();
  ::gazebo::msgs::Material_Script* mutable_script();
  void set_allocated_script(::gazebo::msgs::Material_Script* script);

  // optional .gazebo.msgs.Color ambient = 4;
  bool has_ambient() const;
  void clear_ambient();
  const ::gazebo::msgs::Color& ambient() const;
  ::gazebo::msgs::Color* release_ambient();
  ::gazebo::msgs::Color* mutable_ambient();
  void set_allocated_ambient(::gazebo::msgs::Color* ambient);

  // optional .gazebo.msgs.Color diffuse = 5;
  bool has_diffuse() const;
  void clear_diffuse();
  const ::gazebo::msgs::Color& diffuse() const;
  ::gazebo::msgs::Color* release_diffuse();
  ::gazebo::msgs::Color* mutable_diffuse();
  void set_allocated_diffuse(::gazebo::msgs::Color* diffuse);

  // optional .gazebo.msgs.Color specular = 6;
  bool has_specular() const;
  void clear_specular();
  const ::gazebo::msgs::Color& specular() const;
  ::gazebo::msgs::Color* release_specular();
  ::gazebo::msgs::Color* mutable_specular();
  void set_allocated_specular(::gazebo::msgs::Color* specular);

  // optional .gazebo.msgs.Color emissive = 7;
  bool has_emissive() const;
  void clear_emissive();
  const ::gazebo::msgs::Color& emissive() const;
  ::gazebo::msgs::Color* release_emissive();
  ::gazebo::msgs::Color* mutable_emissive();
  void set_allocated_emissive(::gazebo::msgs::Color* emissive);

  // optional bool lighting = 8;
  bool has_lighting() const;
  void clear_lighting();
  bool lighting() const;
  void set_lighting(bool value);

  // optional .gazebo.msgs.Material.ShaderType shader_type = 2;
  bool has_shader_type() const;
  void clear_shader_type();
  ::gazebo::msgs::Material_ShaderType shader_type() const;
  void set_shader_type(::gazebo::msgs::Material_ShaderType value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Material)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr normal_map_;
  ::gazebo::msgs::Material_Script* script_;
  ::gazebo::msgs::Color* ambient_;
  ::gazebo::msgs::Color* diffuse_;
  ::gazebo::msgs::Color* specular_;
  ::gazebo::msgs::Color* emissive_;
  bool lighting_;
  int shader_type_;
  friend struct ::TableStruct_material_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Material_Script

// repeated string uri = 1;
inline int Material_Script::uri_size() const {
  return uri_.size();
}
inline void Material_Script::clear_uri() {
  uri_.Clear();
}
inline const std::string& Material_Script::uri(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.Script.uri)
  return uri_.Get(index);
}
inline std::string* Material_Script::mutable_uri(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.Script.uri)
  return uri_.Mutable(index);
}
inline void Material_Script::set_uri(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.Material.Script.uri)
  uri_.Mutable(index)->assign(value);
}
inline void Material_Script::set_uri(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.Material.Script.uri)
  uri_.Mutable(index)->assign(std::move(value));
}
inline void Material_Script::set_uri(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  uri_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Material.Script.uri)
}
inline void Material_Script::set_uri(int index, const char* value, size_t size) {
  uri_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Material.Script.uri)
}
inline std::string* Material_Script::add_uri() {
  // @@protoc_insertion_point(field_add_mutable:gazebo.msgs.Material.Script.uri)
  return uri_.Add();
}
inline void Material_Script::add_uri(const std::string& value) {
  uri_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Material.Script.uri)
}
inline void Material_Script::add_uri(std::string&& value) {
  uri_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:gazebo.msgs.Material.Script.uri)
}
inline void Material_Script::add_uri(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  uri_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gazebo.msgs.Material.Script.uri)
}
inline void Material_Script::add_uri(const char* value, size_t size) {
  uri_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gazebo.msgs.Material.Script.uri)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Material_Script::uri() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Material.Script.uri)
  return uri_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Material_Script::mutable_uri() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Material.Script.uri)
  return &uri_;
}

// required string name = 2;
inline bool Material_Script::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Material_Script::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Material_Script::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.Script.name)
  return name_.GetNoArena();
}
inline void Material_Script::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Material.Script.name)
}
inline void Material_Script::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Material.Script.name)
}
inline void Material_Script::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Material.Script.name)
}
inline void Material_Script::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Material.Script.name)
}
inline std::string* Material_Script::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.Script.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Material_Script::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.Script.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Material_Script::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.Script.name)
}

// -------------------------------------------------------------------

// Material

// optional .gazebo.msgs.Material.Script script = 1;
inline bool Material::has_script() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Material::clear_script() {
  if (script_ != nullptr) script_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::gazebo::msgs::Material_Script& Material::script() const {
  const ::gazebo::msgs::Material_Script* p = script_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.script)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Material_Script*>(
      &::gazebo::msgs::_Material_Script_default_instance_);
}
inline ::gazebo::msgs::Material_Script* Material::release_script() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.script)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Material_Script* temp = script_;
  script_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Material_Script* Material::mutable_script() {
  _has_bits_[0] |= 0x00000002u;
  if (script_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Material_Script>(GetArenaNoVirtual());
    script_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.script)
  return script_;
}
inline void Material::set_allocated_script(::gazebo::msgs::Material_Script* script) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete script_;
  }
  if (script) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      script = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, script, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  script_ = script;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.script)
}

// optional .gazebo.msgs.Material.ShaderType shader_type = 2;
inline bool Material::has_shader_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Material::clear_shader_type() {
  shader_type_ = 1;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::gazebo::msgs::Material_ShaderType Material::shader_type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.shader_type)
  return static_cast< ::gazebo::msgs::Material_ShaderType >(shader_type_);
}
inline void Material::set_shader_type(::gazebo::msgs::Material_ShaderType value) {
  assert(::gazebo::msgs::Material_ShaderType_IsValid(value));
  _has_bits_[0] |= 0x00000080u;
  shader_type_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Material.shader_type)
}

// optional string normal_map = 3;
inline bool Material::has_normal_map() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Material::clear_normal_map() {
  normal_map_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Material::normal_map() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.normal_map)
  return normal_map_.GetNoArena();
}
inline void Material::set_normal_map(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  normal_map_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Material.normal_map)
}
inline void Material::set_normal_map(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  normal_map_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Material.normal_map)
}
inline void Material::set_normal_map(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  normal_map_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Material.normal_map)
}
inline void Material::set_normal_map(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  normal_map_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Material.normal_map)
}
inline std::string* Material::mutable_normal_map() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.normal_map)
  return normal_map_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Material::release_normal_map() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.normal_map)
  if (!has_normal_map()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return normal_map_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Material::set_allocated_normal_map(std::string* normal_map) {
  if (normal_map != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  normal_map_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), normal_map);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.normal_map)
}

// optional .gazebo.msgs.Color ambient = 4;
inline bool Material::has_ambient() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::gazebo::msgs::Color& Material::ambient() const {
  const ::gazebo::msgs::Color* p = ambient_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.ambient)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline ::gazebo::msgs::Color* Material::release_ambient() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.ambient)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Color* temp = ambient_;
  ambient_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Material::mutable_ambient() {
  _has_bits_[0] |= 0x00000004u;
  if (ambient_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    ambient_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.ambient)
  return ambient_;
}
inline void Material::set_allocated_ambient(::gazebo::msgs::Color* ambient) {
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
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.ambient)
}

// optional .gazebo.msgs.Color diffuse = 5;
inline bool Material::has_diffuse() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::gazebo::msgs::Color& Material::diffuse() const {
  const ::gazebo::msgs::Color* p = diffuse_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.diffuse)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline ::gazebo::msgs::Color* Material::release_diffuse() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.diffuse)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Color* temp = diffuse_;
  diffuse_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Material::mutable_diffuse() {
  _has_bits_[0] |= 0x00000008u;
  if (diffuse_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    diffuse_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.diffuse)
  return diffuse_;
}
inline void Material::set_allocated_diffuse(::gazebo::msgs::Color* diffuse) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(diffuse_);
  }
  if (diffuse) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      diffuse = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, diffuse, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  diffuse_ = diffuse;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.diffuse)
}

// optional .gazebo.msgs.Color specular = 6;
inline bool Material::has_specular() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline const ::gazebo::msgs::Color& Material::specular() const {
  const ::gazebo::msgs::Color* p = specular_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.specular)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline ::gazebo::msgs::Color* Material::release_specular() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.specular)
  _has_bits_[0] &= ~0x00000010u;
  ::gazebo::msgs::Color* temp = specular_;
  specular_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Material::mutable_specular() {
  _has_bits_[0] |= 0x00000010u;
  if (specular_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    specular_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.specular)
  return specular_;
}
inline void Material::set_allocated_specular(::gazebo::msgs::Color* specular) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(specular_);
  }
  if (specular) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      specular = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, specular, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  specular_ = specular;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.specular)
}

// optional .gazebo.msgs.Color emissive = 7;
inline bool Material::has_emissive() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline const ::gazebo::msgs::Color& Material::emissive() const {
  const ::gazebo::msgs::Color* p = emissive_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.emissive)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline ::gazebo::msgs::Color* Material::release_emissive() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Material.emissive)
  _has_bits_[0] &= ~0x00000020u;
  ::gazebo::msgs::Color* temp = emissive_;
  emissive_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Material::mutable_emissive() {
  _has_bits_[0] |= 0x00000020u;
  if (emissive_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    emissive_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Material.emissive)
  return emissive_;
}
inline void Material::set_allocated_emissive(::gazebo::msgs::Color* emissive) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(emissive_);
  }
  if (emissive) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      emissive = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, emissive, submessage_arena);
    }
    _has_bits_[0] |= 0x00000020u;
  } else {
    _has_bits_[0] &= ~0x00000020u;
  }
  emissive_ = emissive;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Material.emissive)
}

// optional bool lighting = 8;
inline bool Material::has_lighting() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Material::clear_lighting() {
  lighting_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Material::lighting() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Material.lighting)
  return lighting_;
}
inline void Material::set_lighting(bool value) {
  _has_bits_[0] |= 0x00000040u;
  lighting_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Material.lighting)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


typedef boost::shared_ptr<gazebo::msgs::Material> MaterialPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::Material_ShaderType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Material_ShaderType>() {
  return ::gazebo::msgs::Material_ShaderType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::Material const> ConstMaterialPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_material_2eproto
