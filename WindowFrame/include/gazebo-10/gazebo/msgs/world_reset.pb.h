// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_reset.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_world_5freset_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_world_5freset_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_world_5freset_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_world_5freset_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_world_5freset_2eproto;
namespace gazebo {
namespace msgs {
class WorldReset;
class WorldResetDefaultTypeInternal;
GZ_MSGS_VISIBLE extern WorldResetDefaultTypeInternal _WorldReset_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::WorldReset* Arena::CreateMaybeMessage<::gazebo::msgs::WorldReset>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE WorldReset :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.WorldReset) */ {
 public:
  WorldReset();
  virtual ~WorldReset();

  WorldReset(const WorldReset& from);
  WorldReset(WorldReset&& from) noexcept
    : WorldReset() {
    *this = ::std::move(from);
  }

  inline WorldReset& operator=(const WorldReset& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorldReset& operator=(WorldReset&& from) noexcept {
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
  static const WorldReset& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorldReset* internal_default_instance() {
    return reinterpret_cast<const WorldReset*>(
               &_WorldReset_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WorldReset& a, WorldReset& b) {
    a.Swap(&b);
  }
  inline void Swap(WorldReset* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorldReset* New() const final {
    return CreateMaybeMessage<WorldReset>(nullptr);
  }

  WorldReset* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorldReset>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WorldReset& from);
  void MergeFrom(const WorldReset& from);
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
  void InternalSwap(WorldReset* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.WorldReset";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_world_5freset_2eproto);
    return ::descriptor_table_world_5freset_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeOnlyFieldNumber = 2,
    kModelOnlyFieldNumber = 3,
    kAllFieldNumber = 1,
  };
  // optional bool time_only = 2 [default = false];
  bool has_time_only() const;
  void clear_time_only();
  bool time_only() const;
  void set_time_only(bool value);

  // optional bool model_only = 3 [default = false];
  bool has_model_only() const;
  void clear_model_only();
  bool model_only() const;
  void set_model_only(bool value);

  // optional bool all = 1 [default = true];
  bool has_all() const;
  void clear_all();
  bool all() const;
  void set_all(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.WorldReset)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool time_only_;
  bool model_only_;
  bool all_;
  friend struct ::TableStruct_world_5freset_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorldReset

// optional bool all = 1 [default = true];
inline bool WorldReset::has_all() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldReset::clear_all() {
  all_ = true;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool WorldReset::all() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WorldReset.all)
  return all_;
}
inline void WorldReset::set_all(bool value) {
  _has_bits_[0] |= 0x00000004u;
  all_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.WorldReset.all)
}

// optional bool time_only = 2 [default = false];
inline bool WorldReset::has_time_only() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldReset::clear_time_only() {
  time_only_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool WorldReset::time_only() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WorldReset.time_only)
  return time_only_;
}
inline void WorldReset::set_time_only(bool value) {
  _has_bits_[0] |= 0x00000001u;
  time_only_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.WorldReset.time_only)
}

// optional bool model_only = 3 [default = false];
inline bool WorldReset::has_model_only() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldReset::clear_model_only() {
  model_only_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool WorldReset::model_only() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WorldReset.model_only)
  return model_only_;
}
inline void WorldReset::set_model_only(bool value) {
  _has_bits_[0] |= 0x00000002u;
  model_only_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.WorldReset.model_only)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::WorldReset> WorldResetPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::WorldReset const> ConstWorldResetPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_world_5freset_2eproto
