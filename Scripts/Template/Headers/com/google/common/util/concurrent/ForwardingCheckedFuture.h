//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/ForwardingCheckedFuture.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentForwardingCheckedFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingCheckedFuture_RESTRICT
#if ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_INCLUDE
#define ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingCheckedFuture_) && (ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingCheckedFuture_

#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE 1
#include <j2objc/com/google/common/util/concurrent/ForwardingListenableFuture.h>

#define ComGoogleCommonUtilConcurrentCheckedFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE 1
#include <j2objc/com/google/common/util/concurrent/CheckedFuture.h>

@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonUtilConcurrentForwardingCheckedFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture < ComGoogleCommonUtilConcurrentCheckedFuture >

#pragma mark Public

- (instancetype)init;

- (id)checkedGet;

- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

#pragma mark Protected

- (id<ComGoogleCommonUtilConcurrentCheckedFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingCheckedFuture_init(ComGoogleCommonUtilConcurrentForwardingCheckedFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingCheckedFuture)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_) && (ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_

@protocol ComGoogleCommonUtilConcurrentCheckedFuture;

@interface ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture : ComGoogleCommonUtilConcurrentForwardingCheckedFuture

#pragma mark Protected

- (instancetype)initWithComGoogleCommonUtilConcurrentCheckedFuture:(id<ComGoogleCommonUtilConcurrentCheckedFuture>)delegate;

- (id<ComGoogleCommonUtilConcurrentCheckedFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_initWithComGoogleCommonUtilConcurrentCheckedFuture_(ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture *self, id<ComGoogleCommonUtilConcurrentCheckedFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentForwardingCheckedFuture_INCLUDE_ALL")
