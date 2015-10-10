//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runners/BlockJUnit4ClassRunner.java
//

#ifndef _OrgJunitRunnersBlockJUnit4ClassRunner_H_
#define _OrgJunitRunnersBlockJUnit4ClassRunner_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/junit/runners/ParentRunner.h>

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;
@protocol JavaUtilList;

@interface OrgJunitRunnersBlockJUnit4ClassRunner : OrgJunitRunnersParentRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

#pragma mark Protected

- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

- (id<JavaUtilList>)computeTestMethods;

- (id)createTest;

- (OrgJunitRunnerDescription *)describeChildWithId:(OrgJunitRunnersModelFrameworkMethod *)method;

- (id<JavaUtilList>)getChildren;

- (id<JavaUtilList>)getTestRulesWithId:(id)target;

- (OrgJunitRunnersModelStatement *)methodBlockWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;

- (OrgJunitRunnersModelStatement *)methodInvokerWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                 withId:(id)test;

- (OrgJunitRunnersModelStatement *)possiblyExpectingExceptionsWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                               withId:(id)test
                                                                    withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)next;

- (id<JavaUtilList>)rulesWithId:(id)target;

- (void)runChildWithId:(OrgJunitRunnersModelFrameworkMethod *)method
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (NSString *)testNameWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;

- (void)validateConstructorWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateFieldsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateInstanceMethodsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateNoNonStaticInnerClassWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateOnlyOneConstructorWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateTestMethodsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateZeroArgConstructorWithJavaUtilList:(id<JavaUtilList>)errors;

- (OrgJunitRunnersModelStatement *)withAftersWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                              withId:(id)target
                                                   withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitRunnersModelStatement *)withBeforesWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                               withId:(id)target
                                                    withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitRunnersModelStatement *)withPotentialTimeoutWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                        withId:(id)test
                                                             withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)next;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersBlockJUnit4ClassRunner)

FOUNDATION_EXPORT void OrgJunitRunnersBlockJUnit4ClassRunner_initWithIOSClass_(OrgJunitRunnersBlockJUnit4ClassRunner *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitRunnersBlockJUnit4ClassRunner *new_OrgJunitRunnersBlockJUnit4ClassRunner_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersBlockJUnit4ClassRunner)

#endif // _OrgJunitRunnersBlockJUnit4ClassRunner_H_
