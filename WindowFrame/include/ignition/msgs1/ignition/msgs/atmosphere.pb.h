// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/atmosphere.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fatmosphere_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fatmosphere_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fatmosphere_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fatmosphere_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fatmosphere_2eproto;
namespace ignition {
namespace msgs {
class Atmosphere;
class AtmosphereDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern AtmosphereDefaultTypeInternal _Atmosphere_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Atmosphere* Arena::CreateMaybeMessage<::ignition::msgs::Atmosphere>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

enum Atmosphere_Type : int {
  Atmosphere_Type_ADIABATIC = 1
};
IGNITION_MSGS_VISIBLE bool Atmosphere_Type_IsValid(int value);
constexpr Atmosphere_Type Atmosphere_Type_Type_MIN = Atmosphere_Type_ADIABATIC;
constexpr Atmosphere_Type Atmosphere_Type_Type_MAX = Atmosphere_Type_ADIABATIC;
constexpr int Atmosphere_Type_Type_ARRAYSIZE = Atmosphere_Type_Type_MAX + 1;

IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Atmosphere_Type_descriptor();
template<typename T>
inline const std::string& Atmosphere_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Atmosphere_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Atmosphere_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Atmosphere_Type_descriptor(), enum_t_value);
}
inline bool Atmosphere_Type_Parse(
    const std::string& name, Atmosphere_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Atmosphere_Type>(
    Atmosphere_Type_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Atmosphere :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Atmosphere) */ {
 public:
  Atmosphere();
  virtual ~Atmosphere();

  Atmosphere(const Atmosphere& from);
  Atmosphere(Atmosphere&& from) noexcept
    : Atmosphere() {
    *this = ::std::move(from);
  }

  inline Atmosphere& operator=(const Atmosphere& from) {
    CopyFrom(from);
    return *this;
  }
  inline Atmosphere& operator=(Atmosphere&& from) noexcept {
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
  static const Atmosphere& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Atmosphere* internal_default_instance() {
    return reinterpret_cast<const Atmosphere*>(
               &_Atmosphere_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Atmosphere& a, Atmosphere& b) {
    a.Swap(&b);
  }
  inline void Swap(Atmosphere* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Atmosphere* New() const final {
    return CreateMaybeMessage<Atmosphere>(nullptr);
  }

  Atmosphere* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Atmosphere>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Atmosphere& from);
  void MergeFrom(const Atmosphere& from);
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
  void InternalSwap(Atmosphere* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Atmosphere";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fatmosphere_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fatmosphere_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Atmosphere_Type Type;
  static constexpr Type ADIABATIC =
    Atmosphere_Type_ADIABATIC;
  static inline bool Type_IsValid(int value) {
    return Atmosphere_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Atmosphere_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Atmosphere_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Atmosphere_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Atmosphere_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Atmosphere_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return Atmosphere_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kTemperatureFieldNumber = 3,
    kPressureFieldNumber = 4,
    kMassDensityFieldNumber = 5,
    kEnableAtmosphereFieldNumber = 6,
    kTypeFieldNumber = 2,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional double temperature = 3;
  bool has_temperature() const;
  void clear_temperature();
  double temperature() const;
  void set_temperature(double value);

  // optional double pressure = 4;
  bool has_pressure() const;
  void clear_pressure();
  double pressure() const;
  void set_pressure(double value);

  // optional double mass_density = 5;
  bool has_mass_density() const;
  void clear_mass_density();
  double mass_density() const;
  void set_mass_density(double value);

  // optional bool enable_atmosphere = 6;
  bool has_enable_atmosphere() const;
  void clear_enable_atmosphere();
  bool enable_atmosphere() const;
  void set_enable_atmosphere(bool value);

  // optional .ignition.msgs.Atmosphere.Type type = 2 [default = ADIABATIC];
  bool has_type() const;
  void clear_type();
  ::ignition::msgs::Atmosphere_Type type() const;
  void set_type(::ignition::msgs::Atmosphere_Type value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Atmosphere)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  double temperature_;
  double pressure_;
  double mass_density_;
  bool enable_atmosphere_;
  int type_;
  friend struct ::TableStruct_ignition_2fmsgs_2fatmosphere_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Atmosphere

// optional .ignition.msgs.Header header = 1;
inline bool Atmosphere::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& Atmosphere::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Atmosphere.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Atmosphere::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Atmosphere.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Atmosphere::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Atmosphere.header)
  return header_;
}
inline void Atmosphere::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Atmosphere.header)
}

// optional .ignition.msgs.Atmosphere.Type type = 2 [default = ADIABATIC];
inline bool Atmosphere::has_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Atmosphere::clear_type() {
  type_ = 1;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::ignition::msgs::Atmosphere_Type Atmosphere::type() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Atmosphere.type)
  return static_cast< ::ignition::msgs::Atmosphere_Type >(type_);
}
inline void Atmosphere::set_type(::ignition::msgs::Atmosphere_Type value) {
  assert(::ignition::msgs::Atmosphere_Type_IsValid(value));
  _has_bits_[0] |= 0x00000020u;
  type_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Atmosphere.type)
}

// optional double temperature = 3;
inline bool Atmosphere::has_temperature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Atmosphere::clear_temperature() {
  temperature_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Atmosphere::temperature() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Atmosphere.temperature)
  return temperature_;
}
inline void Atmosphere::set_temperature(double value) {
  _has_bits_[0] |= 0x00000002u;
  temperature_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Atmosphere.temperature)
}

// optional double pressure = 4;
inline bool Atmosphere::has_pressure() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Atmosphere::clear_pressure() {
  pressure_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Atmosphere::pressure() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Atmosphere.pressure)
  return pressure_;
}
inline void Atmosphere::set_pressure(double value) {
  _has_bits_[0] |= 0x00000004u;
  pressure_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Atmosphere.pressure)
}

// optional double mass_density = 5;
inline bool Atmosphere::has_mass_density() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Atmosphere::clear_mass_density() {
  mass_density_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Atmosphere::mass_density() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Atmosphere.mass_density)
  return mass_density_;
}
inline void Atmosphere::set_mass_density(double value) {
  _has_bits_[0] |= 0x00000008u;
  mass_density_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Atmosphere.mass_density)
}

// optional bool enable_atmosphere = 6;
inline bool Atmosphere::has_enable_atmosphere() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Atmosphere::clear_enable_atmosphere() {
  enable_atmosphere_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Atmosphere::enable_atmosphere() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Atmosphere.enable_atmosphere)
  return enable_atmosphere_;
}
inline void Atmosphere::set_enable_atmosphere(bool value) {
  _has_bits_[0] |= 0x00000010u;
  enable_atmosphere_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Atmosphere.enable_atmosphere)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Atmosphere> AtmosphereUniquePtr;
typedef std::unique_ptr<const Atmosphere> ConstAtmosphereUniquePtr;
typedef std::shared_ptr<Atmosphere> AtmosphereSharedPtr;
typedef std::shared_ptr<const Atmosphere> ConstAtmosphereSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ignition::msgs::Atmosphere_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ignition::msgs::Atmosphere_Type>() {
  return ::ignition::msgs::Atmosphere_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fatmosphere_2eproto
