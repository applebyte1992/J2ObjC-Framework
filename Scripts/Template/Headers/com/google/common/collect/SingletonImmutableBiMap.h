//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/SingletonImmutableBiMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectSingletonImmutableBiMap_INCLUDE_ALL")
#if ComGoogleCommonCollectSingletonImmutableBiMap_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableBiMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSingletonImmutableBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectSingletonImmutableBiMap_) && (ComGoogleCommonCollectSingletonImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableBiMap_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableBiMap_

#define ComGoogleCommonCollectImmutableBiMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableBiMap_INCLUDE 1
#include <j2objc/com/google/common/collect/ImmutableBiMap.h>

@class ComGoogleCommonCollectImmutableSet;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectSingletonImmutableBiMap : ComGoogleCommonCollectImmutableBiMap {
 @public
  id singleKey_;
  id singleValue_;
  ComGoogleCommonCollectImmutableBiMap *inverse_;
}

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (instancetype)initWithId:(id)singleKey
                    withId:(id)singleValue;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableBiMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, singleKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, singleValue_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, inverse_, ComGoogleCommonCollectImmutableBiMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(ComGoogleCommonCollectSingletonImmutableBiMap *self, id singleKey, id singleValue);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableBiMap *new_ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(id singleKey, id singleValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableBiMap_initWithJavaUtilMap_Entry_(ComGoogleCommonCollectSingletonImmutableBiMap *self, id<JavaUtilMap_Entry> entry_);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableBiMap *new_ComGoogleCommonCollectSingletonImmutableBiMap_initWithJavaUtilMap_Entry_(id<JavaUtilMap_Entry> entry_) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableBiMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectSingletonImmutableBiMap_INCLUDE_ALL")
