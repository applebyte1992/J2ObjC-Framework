//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractRangeSet.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectAbstractRangeSet_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractRangeSet_RESTRICT
#define ComGoogleCommonCollectAbstractRangeSet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractRangeSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractRangeSet_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractRangeSet_) && (ComGoogleCommonCollectAbstractRangeSet_INCLUDE_ALL || ComGoogleCommonCollectAbstractRangeSet_INCLUDE)
#define _ComGoogleCommonCollectAbstractRangeSet_

#define ComGoogleCommonCollectRangeSet_RESTRICT 1
#define ComGoogleCommonCollectRangeSet_INCLUDE 1
#include <j2objc/com/google/common/collect/RangeSet.h>

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;

@interface ComGoogleCommonCollectAbstractRangeSet : NSObject < ComGoogleCommonCollectRangeSet >

#pragma mark Public

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (void)clear;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

- (jboolean)enclosesAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractRangeSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractRangeSet_init(ComGoogleCommonCollectAbstractRangeSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractRangeSet)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractRangeSet_INCLUDE_ALL")
