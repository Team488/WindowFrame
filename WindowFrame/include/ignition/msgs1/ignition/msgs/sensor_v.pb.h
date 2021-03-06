// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/sensor_v.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fsensor_5fv_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fsensor_5fv_2eproto

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
#include "ignition/msgs/sensor.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fsensor_5fv_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fsensor_5fv_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fsensor_5fv_2eproto;
namespace ignition {
namespace msgs {
class Sensor_V;
class Sensor_VDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern Sensor_VDefaultTypeInternal _Sensor_V_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Sensor_V* Arena::CreateMaybeMessage<::ignition::msgs::Sensor_V>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Sensor_V :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Sensor_V) */ {
 public:
  Sensor_V();
  virtual ~Sensor_V();

  Sensor_V(const Sensor_V& from);
  Sensor_V(Sensor_V&& from) noexcept
    : Sensor_V() {
    *this = ::std::move(from);
  }

  inline Sensor_V& operator=(const Sensor_V& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sensor_V& operator=(Sensor_V&& from) noexcept {
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
  static const Sensor_V& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sensor_V* internal_default_instance() {
    return reinterpret_cast<const Sensor_V*>(
               &_Sensor_V_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Sensor_V& a, Sensor_V& b) {
    a.Swap(&b);
  }
  inline void Swap(Sensor_V* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Sensor_V* New() const final {
    return CreateMaybeMessage<Sensor_V>(nullptr);
  }

  Sensor_V* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Sensor_V>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Sensor_V& from);
  void MergeFrom(const Sensor_V& from);
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
  void InternalSwap(Sensor_V* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Sensor_V";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fsensor_5fv_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fsensor_5fv_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSensorsFieldNumber = 2,
    kHeaderFieldNumber = 1,
  };
  // repeated .ignition.msgs.Sensor sensors = 2;
  int sensors_size() const;
  void clear_sensors();
  ::ignition::msgs::Sensor* mutable_sensors(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >*
      mutable_sensors();
  const ::ignition::msgs::Sensor& sensors(int index) const;
  ::ignition::msgs::Sensor* add_sensors();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >&
      sensors() const;

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Sensor_V)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor > sensors_;
  ::ignition::msgs::Header* header_;
  friend struct ::TableStruct_ignition_2fmsgs_2fsensor_5fv_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Sensor_V

// optional .ignition.msgs.Header header = 1;
inline bool Sensor_V::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& Sensor_V::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Sensor_V.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Sensor_V::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Sensor_V.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Sensor_V::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Sensor_V.header)
  return header_;
}
inline void Sensor_V::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Sensor_V.header)
}

// repeated .ignition.msgs.Sensor sensors = 2;
inline int Sensor_V::sensors_size() const {
  return sensors_.size();
}
inline ::ignition::msgs::Sensor* Sensor_V::mutable_sensors(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Sensor_V.sensors)
  return sensors_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >*
Sensor_V::mutable_sensors() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Sensor_V.sensors)
  return &sensors_;
}
inline const ::ignition::msgs::Sensor& Sensor_V::sensors(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Sensor_V.sensors)
  return sensors_.Get(index);
}
inline ::ignition::msgs::Sensor* Sensor_V::add_sensors() {
  // @@protoc_insertion_point(field_add:ignition.msgs.Sensor_V.sensors)
  return sensors_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::Sensor >&
Sensor_V::sensors() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Sensor_V.sensors)
  return sensors_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Sensor_V> Sensor_VUniquePtr;
typedef std::unique_ptr<const Sensor_V> ConstSensor_VUniquePtr;
typedef std::shared_ptr<Sensor_V> Sensor_VSharedPtr;
typedef std::shared_ptr<const Sensor_V> ConstSensor_VSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fsensor_5fv_2eproto
