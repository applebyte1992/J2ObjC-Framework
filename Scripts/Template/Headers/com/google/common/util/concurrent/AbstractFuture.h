//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/AbstractFuture.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAbstractFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractFuture_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAbstractFuture_) && (ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractFuture_

#define ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE 1
#include <j2objc/com/google/common/util/concurrent/ListenableFuture.h>

@class JavaLangThrowable;
@class JavaUtilConcurrentCancellationException;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentAbstractFuture : NSObject < ComGoogleCommonUtilConcurrentListenableFuture >

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)exec;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)isCancelled;

- (jboolean)isDone;

#pragma mark Protected

- (instancetype)init;

- (void)interruptTask;

- (jboolean)setWithId:(id)value;

- (jboolean)setExceptionWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (jboolean)wasInterrupted;

#pragma mark Package-Private

+ (JavaUtilConcurrentCancellationException *)cancellationExceptionWithCauseWithNSString:(NSString *)message
                                                                  withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractFuture_init(ComGoogleCommonUtilConcurrentAbstractFuture *self);

FOUNDATION_EXPORT JavaUtilConcurrentCancellationException *ComGoogleCommonUtilConcurrentAbstractFuture_cancellationExceptionWithCauseWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractFuture)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentAbstractFuture_Sync_) && (ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractFuture_Sync_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractFuture_Sync_

#define JavaUtilConcurrentLocksAbstractQueuedSynchronizer_RESTRICT 1
#define JavaUtilConcurrentLocksAbstractQueuedSynchronizer_INCLUDE 1
#include <j2objc/java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

@class JavaLangThrowable;

#define ComGoogleCommonUtilConcurrentAbstractFuture_Sync_RUNNING 0
#define ComGoogleCommonUtilConcurrentAbstractFuture_Sync_COMPLETING 1
#define ComGoogleCommonUtilConcurrentAbstractFuture_Sync_COMPLETED 2
#define ComGoogleCommonUtilConcurrentAbstractFuture_Sync_CANCELLED 4
#define ComGoogleCommonUtilConcurrentAbstractFuture_Sync_INTERRUPTED 8

@interface ComGoogleCommonUtilConcurrentAbstractFuture_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer

#pragma mark Protected

- (jint)tryAcquireSharedWithInt:(jint)ignored;

- (jboolean)tryReleaseSharedWithInt:(jint)finalState;

#pragma mark Package-Private

- (instancetype)init;

- (jboolean)cancelWithBoolean:(jboolean)interrupt;

- (id)get;

- (id)getWithLong:(jlong)nanos;

- (jboolean)isCancelled;

- (jboolean)isDone;

- (jboolean)setWithId:(id)v;

- (jboolean)setExceptionWithJavaLangThrowable:(JavaLangThrowable *)t;

- (jboolean)wasInterrupted;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractFuture_Sync)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractFuture_Sync, RUNNING, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractFuture_Sync, COMPLETING, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractFuture_Sync, COMPLETED, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractFuture_Sync, CANCELLED, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractFuture_Sync, INTERRUPTED, jint)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractFuture_Sync_init(ComGoogleCommonUtilConcurrentAbstractFuture_Sync *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAbstractFuture_Sync *new_ComGoogleCommonUtilConcurrentAbstractFuture_Sync_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractFuture_Sync)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE_ALL")
