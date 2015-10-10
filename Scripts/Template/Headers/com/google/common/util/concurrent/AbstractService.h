//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/AbstractService.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonUtilConcurrentAbstractService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAbstractService_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAbstractService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAbstractService_) && (ComGoogleCommonUtilConcurrentAbstractService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractService_

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_INCLUDE 1
#include <j2objc/com/google/common/util/concurrent/Service.h>

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentAbstractService : NSObject < ComGoogleCommonUtilConcurrentService >

#pragma mark Public

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)awaitRunning;

- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)awaitTerminated;

- (void)awaitTerminatedWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (JavaLangThrowable *)failureCause;

- (jboolean)isRunning;

- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)state;

- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

- (void)doStart;

- (void)doStop;

- (void)notifyFailedWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (void)notifyStarted;

- (void)notifyStopped;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractService_init(ComGoogleCommonUtilConcurrentAbstractService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractService)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentAbstractService_INCLUDE_ALL")
