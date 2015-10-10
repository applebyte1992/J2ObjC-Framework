//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/Service.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonUtilConcurrentService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentService_RESTRICT
#define ComGoogleCommonUtilConcurrentService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentService_) && (ComGoogleCommonUtilConcurrentService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentService_

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilConcurrentExecutor;

@protocol ComGoogleCommonUtilConcurrentService < NSObject, JavaObject >

- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

- (jboolean)isRunning;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)state;

- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

- (void)awaitRunning;

- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)awaitTerminated;

- (void)awaitTerminatedWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (JavaLangThrowable *)failureCause;

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentService)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentService)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentService_StateEnum_) && (ComGoogleCommonUtilConcurrentService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentService_StateEnum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentService_StateEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include <j2objc/java/lang/Enum.h>

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentService_State) {
  ComGoogleCommonUtilConcurrentService_State_NEW = 0,
  ComGoogleCommonUtilConcurrentService_State_STARTING = 1,
  ComGoogleCommonUtilConcurrentService_State_RUNNING = 2,
  ComGoogleCommonUtilConcurrentService_State_STOPPING = 3,
  ComGoogleCommonUtilConcurrentService_State_TERMINATED = 4,
  ComGoogleCommonUtilConcurrentService_State_FAILED = 5,
};

@interface ComGoogleCommonUtilConcurrentService_StateEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

- (jboolean)isTerminal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentService_StateEnum_values();

+ (ComGoogleCommonUtilConcurrentService_StateEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentService_StateEnum *ComGoogleCommonUtilConcurrentService_StateEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentService_StateEnum)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentService_StateEnum *ComGoogleCommonUtilConcurrentService_StateEnum_values_[];

#define ComGoogleCommonUtilConcurrentService_StateEnum_NEW ComGoogleCommonUtilConcurrentService_StateEnum_values_[ComGoogleCommonUtilConcurrentService_State_NEW]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentService_StateEnum, NEW)

#define ComGoogleCommonUtilConcurrentService_StateEnum_STARTING ComGoogleCommonUtilConcurrentService_StateEnum_values_[ComGoogleCommonUtilConcurrentService_State_STARTING]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentService_StateEnum, STARTING)

#define ComGoogleCommonUtilConcurrentService_StateEnum_RUNNING ComGoogleCommonUtilConcurrentService_StateEnum_values_[ComGoogleCommonUtilConcurrentService_State_RUNNING]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentService_StateEnum, RUNNING)

#define ComGoogleCommonUtilConcurrentService_StateEnum_STOPPING ComGoogleCommonUtilConcurrentService_StateEnum_values_[ComGoogleCommonUtilConcurrentService_State_STOPPING]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentService_StateEnum, STOPPING)

#define ComGoogleCommonUtilConcurrentService_StateEnum_TERMINATED ComGoogleCommonUtilConcurrentService_StateEnum_values_[ComGoogleCommonUtilConcurrentService_State_TERMINATED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentService_StateEnum, TERMINATED)

#define ComGoogleCommonUtilConcurrentService_StateEnum_FAILED ComGoogleCommonUtilConcurrentService_StateEnum_values_[ComGoogleCommonUtilConcurrentService_State_FAILED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentService_StateEnum, FAILED)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentService_StateEnum)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentService_Listener_) && (ComGoogleCommonUtilConcurrentService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentService_Listener_INCLUDE)
#define _ComGoogleCommonUtilConcurrentService_Listener_

@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentService_Listener : NSObject

#pragma mark Public

- (instancetype)init;

- (void)failedWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from
                                           withJavaLangThrowable:(JavaLangThrowable *)failure;

- (void)running;

- (void)starting;

- (void)stoppingWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from;

- (void)terminatedWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentService_Listener)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentService_Listener_init(ComGoogleCommonUtilConcurrentService_Listener *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentService_Listener)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentService_INCLUDE_ALL")
