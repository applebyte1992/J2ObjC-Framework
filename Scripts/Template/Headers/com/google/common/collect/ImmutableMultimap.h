//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableMultimap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableMultimap_RESTRICT
#define ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableMultimap_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_

#define ComGoogleCommonCollectAbstractMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE 1
#include <j2objc/com/google/common/collect/AbstractMultimap.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultimap_Builder;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableMultimap : ComGoogleCommonCollectAbstractMultimap < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMap *map_;
  jint size_;
}

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMap;

+ (ComGoogleCommonCollectImmutableMultimap_Builder *)builder;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectImmutableMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableCollection *)entries;

- (ComGoogleCommonCollectImmutableCollection *)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableMultimap *)inverse;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableSet *)keySet;

+ (ComGoogleCommonCollectImmutableMultimap *)of;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2
                                               withId:(id)k3
                                               withId:(id)v3;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2
                                               withId:(id)k3
                                               withId:(id)v3
                                               withId:(id)k4
                                               withId:(id)v4;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2
                                               withId:(id)k3
                                               withId:(id)v3
                                               withId:(id)k4
                                               withId:(id)v4
                                               withId:(id)k5
                                               withId:(id)v5;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (ComGoogleCommonCollectImmutableCollection *)removeAllWithId:(id)key;

- (ComGoogleCommonCollectImmutableCollection *)replaceValuesWithId:(id)key
                                              withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                   withInt:(jint)size;

- (id<JavaUtilMap>)createAsMap;

- (ComGoogleCommonCollectImmutableCollection *)createEntries;

- (ComGoogleCommonCollectImmutableMultiset *)createKeys;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (ComGoogleCommonCollectUnmodifiableIterator *)entryIterator;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectUnmodifiableIterator *)valueIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultimap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap, map_, ComGoogleCommonCollectImmutableMap *)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap_Builder *ComGoogleCommonCollectImmutableMultimap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableMultimap *self, ComGoogleCommonCollectImmutableMap *map, jint size);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultimap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Builder_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Builder_

@class ComGoogleCommonCollectImmutableMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableMultimap_Builder : NSObject {
 @public
  id<ComGoogleCommonCollectMultimap> builderMultimap_;
  id<JavaUtilComparator> keyComparator_;
  id<JavaUtilComparator> valueComparator_;
}

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMultimap *)build;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putWithId:(id)key
                                                        withId:(id)value;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putAllWithId:(id)key
                                             withJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putAllWithId:(id)key
                                                withNSObjectArray:(IOSObjectArray *)values;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultimap_Builder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_Builder, builderMultimap_, id<ComGoogleCommonCollectMultimap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_Builder, keyComparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_Builder, valueComparator_, id<JavaUtilComparator>)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultimap_Builder_init(ComGoogleCommonCollectImmutableMultimap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap_Builder *new_ComGoogleCommonCollectImmutableMultimap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultimap_Builder)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_

@class ComGoogleCommonCollectSerialization_FieldSetter;

@interface ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder : NSObject

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder)

FOUNDATION_EXPORT ComGoogleCommonCollectSerialization_FieldSetter *ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_MAP_FIELD_SETTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder, MAP_FIELD_SETTER_, ComGoogleCommonCollectSerialization_FieldSetter *)

FOUNDATION_EXPORT ComGoogleCommonCollectSerialization_FieldSetter *ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_SIZE_FIELD_SETTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder, SIZE_FIELD_SETTER_, ComGoogleCommonCollectSerialization_FieldSetter *)

FOUNDATION_EXPORT ComGoogleCommonCollectSerialization_FieldSetter *ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_EMPTY_SET_FIELD_SETTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder, EMPTY_SET_FIELD_SETTER_, ComGoogleCommonCollectSerialization_FieldSetter *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_init(ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder *new_ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultimap_FieldSettersHolder)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Keys_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Keys_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Keys_

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_INCLUDE 1
#include <j2objc/com/google/common/collect/ImmutableMultiset.h>

@class ComGoogleCommonCollectImmutableMultimap;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectImmutableMultimap_Keys : ComGoogleCommonCollectImmutableMultiset

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jint)countWithId:(id)element;

- (id<JavaUtilSet>)elementSet;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMultimap:(ComGoogleCommonCollectImmutableMultimap *)outer$;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultimap_Keys)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultimap_Keys_initWithComGoogleCommonCollectImmutableMultimap_(ComGoogleCommonCollectImmutableMultimap_Keys *self, ComGoogleCommonCollectImmutableMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap_Keys *new_ComGoogleCommonCollectImmutableMultimap_Keys_initWithComGoogleCommonCollectImmutableMultimap_(ComGoogleCommonCollectImmutableMultimap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultimap_Keys)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL")
