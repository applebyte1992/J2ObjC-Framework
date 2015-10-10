//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractMultimap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractMultimap_) && (ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractMultimap_

#define ComGoogleCommonCollectMultimap_RESTRICT 1
#define ComGoogleCommonCollectMultimap_INCLUDE 1
#include <j2objc/com/google/common/collect/Multimap.h>

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMultimap : NSObject < ComGoogleCommonCollectMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (jboolean)containsEntryWithId:(id)key
                         withId:(id)value;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilCollection>)entries;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<JavaUtilSet>)keySet;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createEntries;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)valueIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_init(ComGoogleCommonCollectAbstractMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMultimap_Values_) && (ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMultimap_Values_INCLUDE)
#define _ComGoogleCommonCollectAbstractMultimap_Values_

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include <j2objc/java/util/AbstractCollection.h>

@class ComGoogleCommonCollectAbstractMultimap;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMultimap_Values : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_Values)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap_Values *self, ComGoogleCommonCollectAbstractMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Values *new_ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_Values)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL")
