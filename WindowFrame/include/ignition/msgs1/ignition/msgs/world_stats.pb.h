// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/world_stats.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fworld_5fstats_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fworld_5fstats_2eproto

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
#include "ignition/msgs/log_playback_stats.pb.h"
#include "ignition/msgs/time.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fworld_5fstats_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fworld_5fstats_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fworld_5fstats_2eproto;
namespace ignition {
namespace msgs {
class WorldStatistics;
class WorldStatisticsDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern WorldStatisticsDefaultTypeInternal _WorldStatistics_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::WorldStatistics* Arena::CreateMaybeMessage<::ignition::msgs::WorldStatistics>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE WorldStatistics :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.WorldStatistics) */ {
 public:
  WorldStatistics();
  virtual ~WorldStatistics();

  WorldStatistics(const WorldStatistics& from);
  WorldStatistics(WorldStatistics&& from) noexcept
    : WorldStatistics() {
    *this = ::std::move(from);
  }

  inline WorldStatistics& operator=(const WorldStatistics& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorldStatistics& operator=(WorldStatistics&& from) noexcept {
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
  static const WorldStatistics& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorldStatistics* internal_default_instance() {
    return reinterpret_cast<const WorldStatistics*>(
               &_WorldStatistics_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WorldStatistics& a, WorldStatistics& b) {
    a.Swap(&b);
  }
  inline void Swap(WorldStatistics* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorldStatistics* New() const final {
    return CreateMaybeMessage<WorldStatistics>(nullptr);
  }

  WorldStatistics* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorldStatistics>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WorldStatistics& from);
  void MergeFrom(const WorldStatistics& from);
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
  void InternalSwap(WorldStatistics* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.WorldStatistics";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fworld_5fstats_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fworld_5fstats_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kSimTimeFieldNumber = 2,
    kPauseTimeFieldNumber = 3,
    kRealTimeFieldNumber = 4,
    kLogPlaybackStatsFieldNumber = 8,
    kIterationsFieldNumber = 6,
    kPausedFieldNumber = 5,
    kModelCountFieldNumber = 7,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Time sim_time = 2;
  bool has_sim_time() const;
  void clear_sim_time();
  const ::ignition::msgs::Time& sim_time() const;
  ::ignition::msgs::Time* release_sim_time();
  ::ignition::msgs::Time* mutable_sim_time();
  void set_allocated_sim_time(::ignition::msgs::Time* sim_time);

  // optional .ignition.msgs.Time pause_time = 3;
  bool has_pause_time() const;
  void clear_pause_time();
  const ::ignition::msgs::Time& pause_time() const;
  ::ignition::msgs::Time* release_pause_time();
  ::ignition::msgs::Time* mutable_pause_time();
  void set_allocated_pause_time(::ignition::msgs::Time* pause_time);

  // optional .ignition.msgs.Time real_time = 4;
  bool has_real_time() const;
  void clear_real_time();
  const ::ignition::msgs::Time& real_time() const;
  ::ignition::msgs::Time* release_real_time();
  ::ignition::msgs::Time* mutable_real_time();
  void set_allocated_real_time(::ignition::msgs::Time* real_time);

  // optional .ignition.msgs.LogPlaybackStatistics log_playback_stats = 8;
  bool has_log_playback_stats() const;
  void clear_log_playback_stats();
  const ::ignition::msgs::LogPlaybackStatistics& log_playback_stats() const;
  ::ignition::msgs::LogPlaybackStatistics* release_log_playback_stats();
  ::ignition::msgs::LogPlaybackStatistics* mutable_log_playback_stats();
  void set_allocated_log_playback_stats(::ignition::msgs::LogPlaybackStatistics* log_playback_stats);

  // optional uint64 iterations = 6;
  bool has_iterations() const;
  void clear_iterations();
  ::PROTOBUF_NAMESPACE_ID::uint64 iterations() const;
  void set_iterations(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional bool paused = 5;
  bool has_paused() const;
  void clear_paused();
  bool paused() const;
  void set_paused(bool value);

  // optional int32 model_count = 7;
  bool has_model_count() const;
  void clear_model_count();
  ::PROTOBUF_NAMESPACE_ID::int32 model_count() const;
  void set_model_count(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.WorldStatistics)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Time* sim_time_;
  ::ignition::msgs::Time* pause_time_;
  ::ignition::msgs::Time* real_time_;
  ::ignition::msgs::LogPlaybackStatistics* log_playback_stats_;
  ::PROTOBUF_NAMESPACE_ID::uint64 iterations_;
  bool paused_;
  ::PROTOBUF_NAMESPACE_ID::int32 model_count_;
  friend struct ::TableStruct_ignition_2fmsgs_2fworld_5fstats_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorldStatistics

// optional .ignition.msgs.Header header = 1;
inline bool WorldStatistics::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& WorldStatistics::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* WorldStatistics::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldStatistics.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* WorldStatistics::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldStatistics.header)
  return header_;
}
inline void WorldStatistics::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldStatistics.header)
}

// optional .ignition.msgs.Time sim_time = 2;
inline bool WorldStatistics::has_sim_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Time& WorldStatistics::sim_time() const {
  const ::ignition::msgs::Time* p = sim_time_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.sim_time)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Time*>(
      &::ignition::msgs::_Time_default_instance_);
}
inline ::ignition::msgs::Time* WorldStatistics::release_sim_time() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldStatistics.sim_time)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Time* temp = sim_time_;
  sim_time_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Time* WorldStatistics::mutable_sim_time() {
  _has_bits_[0] |= 0x00000002u;
  if (sim_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Time>(GetArenaNoVirtual());
    sim_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldStatistics.sim_time)
  return sim_time_;
}
inline void WorldStatistics::set_allocated_sim_time(::ignition::msgs::Time* sim_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sim_time_);
  }
  if (sim_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      sim_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sim_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  sim_time_ = sim_time;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldStatistics.sim_time)
}

// optional .ignition.msgs.Time pause_time = 3;
inline bool WorldStatistics::has_pause_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Time& WorldStatistics::pause_time() const {
  const ::ignition::msgs::Time* p = pause_time_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.pause_time)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Time*>(
      &::ignition::msgs::_Time_default_instance_);
}
inline ::ignition::msgs::Time* WorldStatistics::release_pause_time() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldStatistics.pause_time)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Time* temp = pause_time_;
  pause_time_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Time* WorldStatistics::mutable_pause_time() {
  _has_bits_[0] |= 0x00000004u;
  if (pause_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Time>(GetArenaNoVirtual());
    pause_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldStatistics.pause_time)
  return pause_time_;
}
inline void WorldStatistics::set_allocated_pause_time(::ignition::msgs::Time* pause_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pause_time_);
  }
  if (pause_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pause_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pause_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  pause_time_ = pause_time;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldStatistics.pause_time)
}

// optional .ignition.msgs.Time real_time = 4;
inline bool WorldStatistics::has_real_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::Time& WorldStatistics::real_time() const {
  const ::ignition::msgs::Time* p = real_time_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.real_time)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Time*>(
      &::ignition::msgs::_Time_default_instance_);
}
inline ::ignition::msgs::Time* WorldStatistics::release_real_time() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldStatistics.real_time)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::Time* temp = real_time_;
  real_time_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Time* WorldStatistics::mutable_real_time() {
  _has_bits_[0] |= 0x00000008u;
  if (real_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Time>(GetArenaNoVirtual());
    real_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldStatistics.real_time)
  return real_time_;
}
inline void WorldStatistics::set_allocated_real_time(::ignition::msgs::Time* real_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(real_time_);
  }
  if (real_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      real_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, real_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  real_time_ = real_time;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldStatistics.real_time)
}

// optional bool paused = 5;
inline bool WorldStatistics::has_paused() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void WorldStatistics::clear_paused() {
  paused_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool WorldStatistics::paused() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.paused)
  return paused_;
}
inline void WorldStatistics::set_paused(bool value) {
  _has_bits_[0] |= 0x00000040u;
  paused_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldStatistics.paused)
}

// optional uint64 iterations = 6;
inline bool WorldStatistics::has_iterations() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void WorldStatistics::clear_iterations() {
  iterations_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorldStatistics::iterations() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.iterations)
  return iterations_;
}
inline void WorldStatistics::set_iterations(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000020u;
  iterations_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldStatistics.iterations)
}

// optional int32 model_count = 7;
inline bool WorldStatistics::has_model_count() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void WorldStatistics::clear_model_count() {
  model_count_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WorldStatistics::model_count() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.model_count)
  return model_count_;
}
inline void WorldStatistics::set_model_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000080u;
  model_count_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.WorldStatistics.model_count)
}

// optional .ignition.msgs.LogPlaybackStatistics log_playback_stats = 8;
inline bool WorldStatistics::has_log_playback_stats() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline const ::ignition::msgs::LogPlaybackStatistics& WorldStatistics::log_playback_stats() const {
  const ::ignition::msgs::LogPlaybackStatistics* p = log_playback_stats_;
  // @@protoc_insertion_point(field_get:ignition.msgs.WorldStatistics.log_playback_stats)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::LogPlaybackStatistics*>(
      &::ignition::msgs::_LogPlaybackStatistics_default_instance_);
}
inline ::ignition::msgs::LogPlaybackStatistics* WorldStatistics::release_log_playback_stats() {
  // @@protoc_insertion_point(field_release:ignition.msgs.WorldStatistics.log_playback_stats)
  _has_bits_[0] &= ~0x00000010u;
  ::ignition::msgs::LogPlaybackStatistics* temp = log_playback_stats_;
  log_playback_stats_ = nullptr;
  return temp;
}
inline ::ignition::msgs::LogPlaybackStatistics* WorldStatistics::mutable_log_playback_stats() {
  _has_bits_[0] |= 0x00000010u;
  if (log_playback_stats_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::LogPlaybackStatistics>(GetArenaNoVirtual());
    log_playback_stats_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.WorldStatistics.log_playback_stats)
  return log_playback_stats_;
}
inline void WorldStatistics::set_allocated_log_playback_stats(::ignition::msgs::LogPlaybackStatistics* log_playback_stats) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(log_playback_stats_);
  }
  if (log_playback_stats) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      log_playback_stats = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, log_playback_stats, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  log_playback_stats_ = log_playback_stats;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.WorldStatistics.log_playback_stats)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<WorldStatistics> WorldStatisticsUniquePtr;
typedef std::unique_ptr<const WorldStatistics> ConstWorldStatisticsUniquePtr;
typedef std::shared_ptr<WorldStatistics> WorldStatisticsSharedPtr;
typedef std::shared_ptr<const WorldStatistics> ConstWorldStatisticsSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fworld_5fstats_2eproto
