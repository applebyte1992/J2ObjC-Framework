//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/EmptyImmutableBiMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL")
#if ComGoogleCommonCollectEmptyImmutableBiMap_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectEmptyImmutableBiMap_) && (ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableBiMap_

#define ComGoogleCommonCollectImmutableBiMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableBiMap_INCLUDE 1
#include <j2objc/com/google/common/collect/ImmutableBiMap.h>

@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap;

@interface ComGoogleCommonCollectEmptyImmutableBiMap : ComGoogleCommonCollectImmutableBiMap

#pragma mark Public

- (ComGoogleCommonCollectImmutableSetMultimap *)asMultimap;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jint)size;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;

- (id)readResolve;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableBiMap *ComGoogleCommonCollectEmptyImmutableBiMap_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyImmutableBiMap, INSTANCE_, ComGoogleCommonCollectEmptyImmutableBiMap *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableBiMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectEmptyImmutableBiMap_INCLUDE_ALL")
