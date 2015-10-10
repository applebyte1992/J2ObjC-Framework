//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractSortedSetMultimap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractSortedSetMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractSortedSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractSortedSetMultimap_) && (ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractSortedSetMultimap_

#define ComGoogleCommonCollectAbstractSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE 1
#include <j2objc/com/google/common/collect/AbstractSetMultimap.h>

#define ComGoogleCommonCollectSortedSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectSortedSetMultimap_INCLUDE 1
#include <j2objc/com/google/common/collect/SortedSetMultimap.h>

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectAbstractSortedSetMultimap : ComGoogleCommonCollectAbstractSetMultimap < ComGoogleCommonCollectSortedSetMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (id<JavaUtilSortedSet>)getWithId:(id)key;

- (id<JavaUtilSortedSet>)removeAllWithId:(id)key;

- (id<JavaUtilSortedSet>)replaceValuesWithId:(id)key
                        withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilSortedSet>)createCollection;

- (id<JavaUtilSortedSet>)createUnmodifiableEmptyCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedSetMultimap_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractSortedSetMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSortedSetMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE_ALL")
