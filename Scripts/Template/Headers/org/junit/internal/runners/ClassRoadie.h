//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/ClassRoadie.java
//

#ifndef _OrgJunitInternalRunnersClassRoadie_H_
#define _OrgJunitInternalRunnersClassRoadie_H_

#include <j2objc/J2ObjC_header.h>

@class JavaLangThrowable;
@class OrgJunitInternalRunnersTestClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol JavaLangRunnable;

@interface OrgJunitInternalRunnersClassRoadie : NSObject

#pragma mark Public

- (instancetype)initWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier
                         withOrgJunitInternalRunnersTestClass:(OrgJunitInternalRunnersTestClass *)testClass
                                withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                                         withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (void)runProtected;

#pragma mark Protected

- (void)addFailureWithJavaLangThrowable:(JavaLangThrowable *)targetException;

- (void)runUnprotected;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersClassRoadie)

FOUNDATION_EXPORT void OrgJunitInternalRunnersClassRoadie_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitInternalRunnersTestClass_withOrgJunitRunnerDescription_withJavaLangRunnable_(OrgJunitInternalRunnersClassRoadie *self, OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitInternalRunnersTestClass *testClass, OrgJunitRunnerDescription *description_, id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT OrgJunitInternalRunnersClassRoadie *new_OrgJunitInternalRunnersClassRoadie_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitInternalRunnersTestClass_withOrgJunitRunnerDescription_withJavaLangRunnable_(OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitInternalRunnersTestClass *testClass, OrgJunitRunnerDescription *description_, id<JavaLangRunnable> runnable) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersClassRoadie)

#endif // _OrgJunitInternalRunnersClassRoadie_H_
