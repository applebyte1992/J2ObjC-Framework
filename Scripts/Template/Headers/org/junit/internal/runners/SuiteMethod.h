//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/SuiteMethod.java
//

#ifndef _OrgJunitInternalRunnersSuiteMethod_H_
#define _OrgJunitInternalRunnersSuiteMethod_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/junit/internal/runners/JUnit38ClassRunner.h>

@class IOSClass;
@protocol JunitFrameworkTest;

@interface OrgJunitInternalRunnersSuiteMethod : OrgJunitInternalRunnersJUnit38ClassRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

+ (id<JunitFrameworkTest>)testFromSuiteMethodWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersSuiteMethod)

FOUNDATION_EXPORT void OrgJunitInternalRunnersSuiteMethod_initWithIOSClass_(OrgJunitInternalRunnersSuiteMethod *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitInternalRunnersSuiteMethod *new_OrgJunitInternalRunnersSuiteMethod_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<JunitFrameworkTest> OrgJunitInternalRunnersSuiteMethod_testFromSuiteMethodWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersSuiteMethod)

#endif // _OrgJunitInternalRunnersSuiteMethod_H_
