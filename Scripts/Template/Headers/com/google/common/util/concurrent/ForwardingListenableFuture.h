//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/ForwardingListenableFuture.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT
#if ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_INCLUDE
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingListenableFuture_) && (ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListenableFuture_

#define ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE 1
#include <j2objc/com/google/common/util/concurrent/ForwardingFuture.h>

#define ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE 1
#include <j2objc/com/google/common/util/concurrent/ListenableFuture.h>

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentForwardingListenableFuture : ComGoogleCommonUtilConcurrentForwardingFuture < ComGoogleCommonUtilConcurrentListenableFuture >

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)exec;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListenableFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingListenableFuture_init(ComGoogleCommonUtilConcurrentForwardingListenableFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListenableFuture)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_) && (ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture

#pragma mark Protected

- (instancetype)initWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_initWithComGoogleCommonUtilConcurrentListenableFuture_(ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture *self, id<ComGoogleCommonUtilConcurrentListenableFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL")
