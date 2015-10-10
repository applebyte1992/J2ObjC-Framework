//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/Multisets.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectMultisets_INCLUDE_ALL")
#if ComGoogleCommonCollectMultisets_RESTRICT
#define ComGoogleCommonCollectMultisets_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectMultisets_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMultisets_RESTRICT
#if ComGoogleCommonCollectMultisets_ImmutableEntry_INCLUDE
#define ComGoogleCommonCollectMultisets_AbstractEntry_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectMultisets_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_INCLUDE)
#define _ComGoogleCommonCollectMultisets_

@class ComGoogleCommonCollectImmutableMultiset;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectMultisets : NSObject

#pragma mark Public

+ (jboolean)containsOccurrencesWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)superMultiset
                               withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)subMultiset;

+ (ComGoogleCommonCollectImmutableMultiset *)copyHighestCountFirstWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectMultiset>)differenceWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset1
                                                withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset2;

+ (id<ComGoogleCommonCollectMultiset>)filterWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)unfiltered
                                              withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<ComGoogleCommonCollectMultiset_Entry>)immutableEntryWithId:(id)e
                                                         withInt:(jint)n;

+ (id<ComGoogleCommonCollectMultiset>)intersectionWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset1
                                                  withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset2;

+ (jboolean)removeOccurrencesWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multisetToModify
                                           withJavaLangIterable:(id<JavaLangIterable>)occurrencesToRemove;

+ (jboolean)retainOccurrencesWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multisetToModify
                             withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multisetToRetain;

+ (id<ComGoogleCommonCollectMultiset>)sumWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset1
                                         withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset2;

+ (id<ComGoogleCommonCollectMultiset>)union__WithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset1
                                             withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset2;

+ (id<ComGoogleCommonCollectMultiset>)unmodifiableMultisetWithComGoogleCommonCollectImmutableMultiset:(ComGoogleCommonCollectImmutableMultiset *)multiset;

+ (id<ComGoogleCommonCollectMultiset>)unmodifiableMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset;

+ (id<ComGoogleCommonCollectSortedMultiset>)unmodifiableSortedMultisetWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)sortedMultiset;

#pragma mark Package-Private

+ (jboolean)addAllImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)self_
                                  withJavaUtilCollection:(id<JavaUtilCollection>)elements;

+ (id<ComGoogleCommonCollectMultiset>)castWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (jboolean)equalsImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset
                                                  withId:(id)object;

+ (jint)inferDistinctElementsWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (id<JavaUtilIterator>)iteratorImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset;

+ (jboolean)removeAllImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)self_
                                     withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

+ (jboolean)retainAllImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)self_
                                     withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

+ (jint)setCountImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)self_
                                                withId:(id)element
                                               withInt:(jint)count;

+ (jboolean)setCountImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)self_
                                                    withId:(id)element
                                                   withInt:(jint)oldCount
                                                   withInt:(jint)newCount;

+ (jint)sizeImplWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMultisets)

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_unmodifiableMultisetWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_unmodifiableMultisetWithComGoogleCommonCollectImmutableMultiset_(ComGoogleCommonCollectImmutableMultiset *multiset);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSortedMultiset> ComGoogleCommonCollectMultisets_unmodifiableSortedMultisetWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> sortedMultiset);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset_Entry> ComGoogleCommonCollectMultisets_immutableEntryWithId_withInt_(id e, jint n);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_filterWithComGoogleCommonCollectMultiset_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultiset> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jint ComGoogleCommonCollectMultisets_inferDistinctElementsWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_union__WithComGoogleCommonCollectMultiset_withComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset1, id<ComGoogleCommonCollectMultiset> multiset2);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_intersectionWithComGoogleCommonCollectMultiset_withComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset1, id<ComGoogleCommonCollectMultiset> multiset2);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_sumWithComGoogleCommonCollectMultiset_withComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset1, id<ComGoogleCommonCollectMultiset> multiset2);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_differenceWithComGoogleCommonCollectMultiset_withComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset1, id<ComGoogleCommonCollectMultiset> multiset2);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_containsOccurrencesWithComGoogleCommonCollectMultiset_withComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> superMultiset, id<ComGoogleCommonCollectMultiset> subMultiset);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_retainOccurrencesWithComGoogleCommonCollectMultiset_withComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multisetToModify, id<ComGoogleCommonCollectMultiset> multisetToRetain);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_removeOccurrencesWithComGoogleCommonCollectMultiset_withJavaLangIterable_(id<ComGoogleCommonCollectMultiset> multisetToModify, id<JavaLangIterable> occurrencesToRemove);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_equalsImplWithComGoogleCommonCollectMultiset_withId_(id<ComGoogleCommonCollectMultiset> multiset, id object);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_addAllImplWithComGoogleCommonCollectMultiset_withJavaUtilCollection_(id<ComGoogleCommonCollectMultiset> self_, id<JavaUtilCollection> elements);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_removeAllImplWithComGoogleCommonCollectMultiset_withJavaUtilCollection_(id<ComGoogleCommonCollectMultiset> self_, id<JavaUtilCollection> elementsToRemove);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_retainAllImplWithComGoogleCommonCollectMultiset_withJavaUtilCollection_(id<ComGoogleCommonCollectMultiset> self_, id<JavaUtilCollection> elementsToRetain);

FOUNDATION_EXPORT jint ComGoogleCommonCollectMultisets_setCountImplWithComGoogleCommonCollectMultiset_withId_withInt_(id<ComGoogleCommonCollectMultiset> self_, id element, jint count);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultisets_setCountImplWithComGoogleCommonCollectMultiset_withId_withInt_withInt_(id<ComGoogleCommonCollectMultiset> self_, id element, jint oldCount, jint newCount);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectMultisets_iteratorImplWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset);

FOUNDATION_EXPORT jint ComGoogleCommonCollectMultisets_sizeImplWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectMultisets_castWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectMultisets_copyHighestCountFirstWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets)

#endif

#if !defined (_ComGoogleCommonCollectMultisets_UnmodifiableMultiset_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_UnmodifiableMultiset_INCLUDE)
#define _ComGoogleCommonCollectMultisets_UnmodifiableMultiset_

#define ComGoogleCommonCollectForwardingMultiset_RESTRICT 1
#define ComGoogleCommonCollectForwardingMultiset_INCLUDE 1
#include <j2objc/com/google/common/collect/ForwardingMultiset.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMultisets_UnmodifiableMultiset : ComGoogleCommonCollectForwardingMultiset < JavaIoSerializable > {
 @public
  id<ComGoogleCommonCollectMultiset> delegate_;
  id<JavaUtilSet> elementSet_;
  id<JavaUtilSet> entrySet_;
}

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jint)addWithId:(id)element
          withInt:(jint)occurences;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToAdd;

- (void)clear;

- (id<JavaUtilSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)element;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

#pragma mark Protected

- (id<ComGoogleCommonCollectMultiset>)delegate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)delegate;

- (id<JavaUtilSet>)createElementSet;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultisets_UnmodifiableMultiset)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMultisets_UnmodifiableMultiset, delegate_, id<ComGoogleCommonCollectMultiset>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMultisets_UnmodifiableMultiset, elementSet_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMultisets_UnmodifiableMultiset, entrySet_, id<JavaUtilSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultisets_UnmodifiableMultiset_initWithComGoogleCommonCollectMultiset_(ComGoogleCommonCollectMultisets_UnmodifiableMultiset *self, id<ComGoogleCommonCollectMultiset> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectMultisets_UnmodifiableMultiset *new_ComGoogleCommonCollectMultisets_UnmodifiableMultiset_initWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> delegate) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets_UnmodifiableMultiset)

#endif

#if !defined (_ComGoogleCommonCollectMultisets_AbstractEntry_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_AbstractEntry_INCLUDE)
#define _ComGoogleCommonCollectMultisets_AbstractEntry_

#define ComGoogleCommonCollectMultiset_RESTRICT 1
#define ComGoogleCommonCollectMultiset_Entry_INCLUDE 1
#include <j2objc/com/google/common/collect/Multiset.h>

@interface ComGoogleCommonCollectMultisets_AbstractEntry : NSObject < ComGoogleCommonCollectMultiset_Entry >

#pragma mark Public

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultisets_AbstractEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultisets_AbstractEntry_init(ComGoogleCommonCollectMultisets_AbstractEntry *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets_AbstractEntry)

#endif

#if !defined (_ComGoogleCommonCollectMultisets_ImmutableEntry_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_ImmutableEntry_INCLUDE)
#define _ComGoogleCommonCollectMultisets_ImmutableEntry_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@interface ComGoogleCommonCollectMultisets_ImmutableEntry : ComGoogleCommonCollectMultisets_AbstractEntry < JavaIoSerializable > {
 @public
  id element_;
  jint count_;
}

#pragma mark Public

- (jint)getCount;

- (id)getElement;

#pragma mark Package-Private

- (instancetype)initWithId:(id)element
                   withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultisets_ImmutableEntry)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMultisets_ImmutableEntry, element_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultisets_ImmutableEntry_initWithId_withInt_(ComGoogleCommonCollectMultisets_ImmutableEntry *self, id element, jint count);

FOUNDATION_EXPORT ComGoogleCommonCollectMultisets_ImmutableEntry *new_ComGoogleCommonCollectMultisets_ImmutableEntry_initWithId_withInt_(id element, jint count) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets_ImmutableEntry)

#endif

#if !defined (_ComGoogleCommonCollectMultisets_ElementSet_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_ElementSet_INCLUDE)
#define _ComGoogleCommonCollectMultisets_ElementSet_

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_ImprovedAbstractSet_INCLUDE 1
#include <j2objc/com/google/common/collect/Sets.h>

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectMultisets_ElementSet : ComGoogleCommonCollectSets_ImprovedAbstractSet

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jint)size;

#pragma mark Package-Private

- (instancetype)init;

- (id<ComGoogleCommonCollectMultiset>)multiset;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultisets_ElementSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultisets_ElementSet_init(ComGoogleCommonCollectMultisets_ElementSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets_ElementSet)

#endif

#if !defined (_ComGoogleCommonCollectMultisets_EntrySet_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectMultisets_EntrySet_

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_ImprovedAbstractSet_INCLUDE 1
#include <j2objc/com/google/common/collect/Sets.h>

@protocol ComGoogleCommonCollectMultiset;

@interface ComGoogleCommonCollectMultisets_EntrySet : ComGoogleCommonCollectSets_ImprovedAbstractSet

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)object;

#pragma mark Package-Private

- (instancetype)init;

- (id<ComGoogleCommonCollectMultiset>)multiset;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultisets_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultisets_EntrySet_init(ComGoogleCommonCollectMultisets_EntrySet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets_EntrySet)

#endif

#if !defined (_ComGoogleCommonCollectMultisets_MultisetIteratorImpl_) && (ComGoogleCommonCollectMultisets_INCLUDE_ALL || ComGoogleCommonCollectMultisets_MultisetIteratorImpl_INCLUDE)
#define _ComGoogleCommonCollectMultisets_MultisetIteratorImpl_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include <j2objc/java/util/Iterator.h>

@protocol ComGoogleCommonCollectMultiset;

@interface ComGoogleCommonCollectMultisets_MultisetIteratorImpl : NSObject < JavaUtilIterator >

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset
                                  withJavaUtilIterator:(id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultisets_MultisetIteratorImpl)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultisets_MultisetIteratorImpl_initWithComGoogleCommonCollectMultiset_withJavaUtilIterator_(ComGoogleCommonCollectMultisets_MultisetIteratorImpl *self, id<ComGoogleCommonCollectMultiset> multiset, id<JavaUtilIterator> entryIterator);

FOUNDATION_EXPORT ComGoogleCommonCollectMultisets_MultisetIteratorImpl *new_ComGoogleCommonCollectMultisets_MultisetIteratorImpl_initWithComGoogleCommonCollectMultiset_withJavaUtilIterator_(id<ComGoogleCommonCollectMultiset> multiset, id<JavaUtilIterator> entryIterator) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultisets_MultisetIteratorImpl)

#endif

#pragma pop_macro("ComGoogleCommonCollectMultisets_INCLUDE_ALL")
