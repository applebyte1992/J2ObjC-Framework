//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/eventbus/SubscriberExceptionContext.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonEventbusSubscriberExceptionContext_INCLUDE_ALL")
#if ComGoogleCommonEventbusSubscriberExceptionContext_RESTRICT
#define ComGoogleCommonEventbusSubscriberExceptionContext_INCLUDE_ALL 0
#else
#define ComGoogleCommonEventbusSubscriberExceptionContext_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusSubscriberExceptionContext_RESTRICT

#if !defined (_ComGoogleCommonEventbusSubscriberExceptionContext_) && (ComGoogleCommonEventbusSubscriberExceptionContext_INCLUDE_ALL || ComGoogleCommonEventbusSubscriberExceptionContext_INCLUDE)
#define _ComGoogleCommonEventbusSubscriberExceptionContext_

@class ComGoogleCommonEventbusEventBus;
@class JavaLangReflectMethod;

@interface ComGoogleCommonEventbusSubscriberExceptionContext : NSObject

#pragma mark Public

- (id)getEvent;

- (ComGoogleCommonEventbusEventBus *)getEventBus;

- (id)getSubscriber;

- (JavaLangReflectMethod *)getSubscriberMethod;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonEventbusEventBus:(ComGoogleCommonEventbusEventBus *)eventBus
                                                 withId:(id)event
                                                 withId:(id)subscriber
                              withJavaLangReflectMethod:(JavaLangReflectMethod *)subscriberMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusSubscriberExceptionContext)

FOUNDATION_EXPORT void ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusSubscriberExceptionContext *self, ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod);

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberExceptionContext *new_ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberExceptionContext)

#endif

#pragma pop_macro("ComGoogleCommonEventbusSubscriberExceptionContext_INCLUDE_ALL")
