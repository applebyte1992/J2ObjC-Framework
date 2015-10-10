//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingSortedSet.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectForwardingSortedSet_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingSortedSet_RESTRICT
#define ComGoogleCommonCollectForwardingSortedSet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingSortedSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingSortedSet_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingSortedSet_) && (ComGoogleCommonCollectForwardingSortedSet_INCLUDE_ALL || ComGoogleCommonCollectForwardingSortedSet_INCLUDE)
#define _ComGoogleCommonCollectForwardingSortedSet_

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include <j2objc/com/google/common/collect/ForwardingSet.h>

#define JavaUtilSortedSet_RESTRICT 1
#define JavaUtilSortedSet_INCLUDE 1
#include <j2objc/java/util/SortedSet.h>

@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectForwardingSortedSet : ComGoogleCommonCollectForwardingSet < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilSortedSet>)delegate;

- (jboolean)standardContainsWithId:(id)object;

- (jboolean)standardRemoveWithId:(id)object;

- (id<JavaUtilSortedSet>)standardSubSetWithId:(id)fromElement
                                       withId:(id)toElement;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedSet_init(ComGoogleCommonCollectForwardingSortedSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedSet)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingSortedSet_INCLUDE_ALL")
