//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/VerboseMockInvocationLogger.java
//

#ifndef _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_
#define _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/mockito/listeners/InvocationListener.h>

@class JavaIoPrintStream;
@protocol OrgMockitoListenersMethodInvocationReport;

@interface OrgMockitoInternalDebuggingVerboseMockInvocationLogger : NSObject < OrgMockitoListenersInvocationListener > {
 @public
  JavaIoPrintStream *printStream_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)printStream;

- (void)reportInvocationWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingVerboseMockInvocationLogger)

J2OBJC_FIELD_SETTER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger, printStream_, JavaIoPrintStream *)

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingVerboseMockInvocationLogger_init(OrgMockitoInternalDebuggingVerboseMockInvocationLogger *self);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingVerboseMockInvocationLogger *new_OrgMockitoInternalDebuggingVerboseMockInvocationLogger_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingVerboseMockInvocationLogger_initWithJavaIoPrintStream_(OrgMockitoInternalDebuggingVerboseMockInvocationLogger *self, JavaIoPrintStream *printStream);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingVerboseMockInvocationLogger *new_OrgMockitoInternalDebuggingVerboseMockInvocationLogger_initWithJavaIoPrintStream_(JavaIoPrintStream *printStream) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger)

#endif // _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_
