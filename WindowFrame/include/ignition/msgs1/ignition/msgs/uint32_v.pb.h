// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/uint32_v.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fuint32_5fv_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fuint32_5fv_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fuint32_5fv_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fuint32_5fv_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fuint32_5fv_2eproto;
namespace ignition {
namespace msgs {
class UInt32_V;
class UInt32_VDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern UInt32_VDefaultTypeInternal _UInt32_V_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::UInt32_V* Arena::CreateMaybeMessage<::ignition::msgs::UInt32_V>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE UInt32_V :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.UInt32_V) */ {
 public:
  UInt32_V();
  virtual ~UInt32_V();

  UInt32_V(const UInt32_V& from);
  UInt32_V(UInt32_V&& from) noexcept
    : UInt32_V() {
    *this = ::std::move(from);
  }

  inline UInt32_V& operator=(const UInt32_V& from) {
    CopyFrom(from);
    return *this;
  }
  inline UInt32_V& operator=(UInt32_V&& from) noexcept {
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
  static const UInt32_V& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UInt32_V* internal_default_instance() {
    return reinterpret_cast<const UInt32_V*>(
               &_UInt32_V_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UInt32_V& a, UInt32_V& b) {
    a.Swap(&b);
  }
  inline void Swap(UInt32_V* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UInt32_V* New() const final {
    return CreateMaybeMessage<UInt32_V>(nullptr);
  }

  UInt32_V* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UInt32_V>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UInt32_V& from);
  void MergeFrom(const UInt32_V& from);
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
  void InternalSwap(UInt32_V* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.UInt32_V";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fuint32_5fv_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fuint32_5fv_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kHeaderFieldNumber = 1,
  };
  // repeated uint32 data = 2;
  int data_size() const;
  void clear_data();
  ::PROTOBUF_NAMESPACE_ID::uint32 data(int index) const;
  void set_data(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_data(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_data();

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // @@protoc_insertion_point(class_scope:ignition.msgs.UInt32_V)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > data_;
  ::ignition::msgs::Header* header_;
  friend struct ::TableStruct_ignition_2fmsgs_2fuint32_5fv_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UInt32_V

// optional .ignition.msgs.Header header = 1;
inline bool UInt32_V::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& UInt32_V::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.UInt32_V.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* UInt32_V::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.UInt32_V.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* UInt32_V::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.UInt32_V.header)
  return header_;
}
inline void UInt32_V::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.UInt32_V.header)
}

// repeated uint32 data = 2;
inline int UInt32_V::data_size() const {
  return data_.size();
}
inline void UInt32_V::clear_data() {
  data_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 UInt32_V::data(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.UInt32_V.data)
  return data_.Get(index);
}
inline void UInt32_V::set_data(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:ignition.msgs.UInt32_V.data)
}
inline void UInt32_V::add_data(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:ignition.msgs.UInt32_V.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
UInt32_V::data() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.UInt32_V.data)
  return data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
UInt32_V::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.UInt32_V.data)
  return &data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<UInt32_V> UInt32_VUniquePtr;
typedef std::unique_ptr<const UInt32_V> ConstUInt32_VUniquePtr;
typedef std::shared_ptr<UInt32_V> UInt32_VSharedPtr;
typedef std::shared_ptr<const UInt32_V> ConstUInt32_VSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fuint32_5fv_2eproto
