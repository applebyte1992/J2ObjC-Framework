//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/base/MockitoAssertionError.java
//

#ifndef _OrgMockitoExceptionsBaseMockitoAssertionError_H_
#define _OrgMockitoExceptionsBaseMockitoAssertionError_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/AssertionError.h>

@class IOSObjectArray;

@interface OrgMockitoExceptionsBaseMockitoAssertionError : JavaLangAssertionError

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (IOSObjectArray *)getUnfilteredStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsBaseMockitoAssertionError)

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *new_OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsBaseMockitoAssertionError)

#endif // _OrgMockitoExceptionsBaseMockitoAssertionError_H_
