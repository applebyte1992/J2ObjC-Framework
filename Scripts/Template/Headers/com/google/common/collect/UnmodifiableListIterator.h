//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/UnmodifiableListIterator.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL")
#if ComGoogleCommonCollectUnmodifiableListIterator_RESTRICT
#define ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectUnmodifiableListIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectUnmodifiableListIterator_) && (ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL || ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE)
#define _ComGoogleCommonCollectUnmodifiableListIterator_

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include <j2objc/com/google/common/collect/UnmodifiableIterator.h>

#define JavaUtilListIterator_RESTRICT 1
#define JavaUtilListIterator_INCLUDE 1
#include <j2objc/java/util/ListIterator.h>

@interface ComGoogleCommonCollectUnmodifiableListIterator : ComGoogleCommonCollectUnmodifiableIterator < JavaUtilListIterator >

#pragma mark Public

- (void)addWithId:(id)e;

- (void)setWithId:(id)e;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectUnmodifiableListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectUnmodifiableListIterator_init(ComGoogleCommonCollectUnmodifiableListIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUnmodifiableListIterator)

#endif

#pragma pop_macro("ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL")
