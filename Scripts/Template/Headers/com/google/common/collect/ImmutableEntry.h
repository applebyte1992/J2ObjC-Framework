//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableEntry.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableEntry_RESTRICT
#define ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableEntry_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableEntry_) && (ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL || ComGoogleCommonCollectImmutableEntry_INCLUDE)
#define _ComGoogleCommonCollectImmutableEntry_

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include <j2objc/com/google/common/collect/AbstractMapEntry.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@interface ComGoogleCommonCollectImmutableEntry : ComGoogleCommonCollectAbstractMapEntry < JavaIoSerializable > {
 @public
  id key_;
  id value_;
}

#pragma mark Public

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

#pragma mark Package-Private

- (instancetype)initWithId:(id)key
                    withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEntry)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableEntry, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableEntry, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableEntry_initWithId_withId_(ComGoogleCommonCollectImmutableEntry *self, id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableEntry *new_ComGoogleCommonCollectImmutableEntry_initWithId_withId_(id key, id value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEntry)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL")
