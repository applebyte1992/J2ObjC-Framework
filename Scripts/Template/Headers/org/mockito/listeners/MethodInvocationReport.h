//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/listeners/MethodInvocationReport.java
//

#ifndef _OrgMockitoListenersMethodInvocationReport_H_
#define _OrgMockitoListenersMethodInvocationReport_H_

#include <j2objc/J2ObjC_header.h>

@class JavaLangThrowable;
@protocol OrgMockitoInvocationDescribedInvocation;

@protocol OrgMockitoListenersMethodInvocationReport < NSObject, JavaObject >

- (id<OrgMockitoInvocationDescribedInvocation>)getInvocation;

- (id)getReturnedValue;

- (JavaLangThrowable *)getThrowable;

- (jboolean)threwException;

- (NSString *)getLocationOfStubbing;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoListenersMethodInvocationReport)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoListenersMethodInvocationReport)

#endif // _OrgMockitoListenersMethodInvocationReport_H_
