//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableEnumMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableEnumMap_RESTRICT
#define ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableEnumMap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableEnumMap_) && (ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumMap_

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#include <j2objc/com/google/common/collect/ImmutableMap.h>

@class ComGoogleCommonCollectImmutableSet;
@class JavaUtilEnumMap;

@interface ComGoogleCommonCollectImmutableEnumMap : ComGoogleCommonCollectImmutableMap

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (jint)size;

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableMap *)asImmutableWithJavaUtilEnumMap:(JavaUtilEnumMap *)map;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jboolean)isPartialView;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableEnumMap_asImmutableWithJavaUtilEnumMap_(JavaUtilEnumMap *map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL")
