//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/textui/TestRunner.java
//

#ifndef _JunitTextuiTestRunner_H_
#define _JunitTextuiTestRunner_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/junit/runner/BaseTestRunner.h>

@class IOSClass;
@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaLangThrowable;
@class JunitFrameworkTestResult;
@class JunitTextuiResultPrinter;
@protocol JunitFrameworkTest;

#define JunitTextuiTestRunner_SUCCESS_EXIT 0
#define JunitTextuiTestRunner_FAILURE_EXIT 1
#define JunitTextuiTestRunner_EXCEPTION_EXIT 2

@interface JunitTextuiTestRunner : JunitRunnerBaseTestRunner

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)writer;

- (instancetype)initWithJunitTextuiResultPrinter:(JunitTextuiResultPrinter *)printer;

- (JunitFrameworkTestResult *)doRunWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (JunitFrameworkTestResult *)doRunWithJunitFrameworkTest:(id<JunitFrameworkTest>)suite
                                              withBoolean:(jboolean)wait;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

+ (void)runWithIOSClass:(IOSClass *)testClass;

+ (JunitFrameworkTestResult *)runWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

+ (void)runAndWaitWithJunitFrameworkTest:(id<JunitFrameworkTest>)suite;

- (void)setPrinterWithJunitTextuiResultPrinter:(JunitTextuiResultPrinter *)printer;

- (JunitFrameworkTestResult *)startWithNSStringArray:(IOSObjectArray *)args;

- (void)testEndedWithNSString:(NSString *)testName;

- (void)testFailedWithInt:(jint)status
   withJunitFrameworkTest:(id<JunitFrameworkTest>)test
    withJavaLangThrowable:(JavaLangThrowable *)t;

- (void)testStartedWithNSString:(NSString *)testName;

#pragma mark Protected

- (JunitFrameworkTestResult *)createTestResult;

- (void)pauseWithBoolean:(jboolean)wait;

- (void)runFailedWithNSString:(NSString *)message;

- (JunitFrameworkTestResult *)runSingleMethodWithNSString:(NSString *)testCase
                                             withNSString:(NSString *)method
                                              withBoolean:(jboolean)wait;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitTextuiTestRunner)

J2OBJC_STATIC_FIELD_GETTER(JunitTextuiTestRunner, SUCCESS_EXIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JunitTextuiTestRunner, FAILURE_EXIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JunitTextuiTestRunner, EXCEPTION_EXIT, jint)

FOUNDATION_EXPORT void JunitTextuiTestRunner_init(JunitTextuiTestRunner *self);

FOUNDATION_EXPORT JunitTextuiTestRunner *new_JunitTextuiTestRunner_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JunitTextuiTestRunner_initWithJavaIoPrintStream_(JunitTextuiTestRunner *self, JavaIoPrintStream *writer);

FOUNDATION_EXPORT JunitTextuiTestRunner *new_JunitTextuiTestRunner_initWithJavaIoPrintStream_(JavaIoPrintStream *writer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JunitTextuiTestRunner_initWithJunitTextuiResultPrinter_(JunitTextuiTestRunner *self, JunitTextuiResultPrinter *printer);

FOUNDATION_EXPORT JunitTextuiTestRunner *new_JunitTextuiTestRunner_initWithJunitTextuiResultPrinter_(JunitTextuiResultPrinter *printer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JunitTextuiTestRunner_runWithIOSClass_(IOSClass *testClass);

FOUNDATION_EXPORT JunitFrameworkTestResult *JunitTextuiTestRunner_runWithJunitFrameworkTest_(id<JunitFrameworkTest> test);

FOUNDATION_EXPORT void JunitTextuiTestRunner_runAndWaitWithJunitFrameworkTest_(id<JunitFrameworkTest> suite);

FOUNDATION_EXPORT void JunitTextuiTestRunner_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(JunitTextuiTestRunner)

#endif // _JunitTextuiTestRunner_H_
