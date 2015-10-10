//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/extensions/TestSetup.java
//

#ifndef _JunitExtensionsTestSetup_H_
#define _JunitExtensionsTestSetup_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/junit/extensions/TestDecorator.h>

@class JunitFrameworkTestResult;
@protocol JunitFrameworkTest;

@interface JunitExtensionsTestSetup : JunitExtensionsTestDecorator

#pragma mark Public

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

#pragma mark Protected

- (void)setUp;

- (void)tearDown;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsTestSetup)

FOUNDATION_EXPORT void JunitExtensionsTestSetup_initWithJunitFrameworkTest_(JunitExtensionsTestSetup *self, id<JunitFrameworkTest> test);

FOUNDATION_EXPORT JunitExtensionsTestSetup *new_JunitExtensionsTestSetup_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsTestSetup)

#endif // _JunitExtensionsTestSetup_H_
