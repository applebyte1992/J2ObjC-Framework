//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/RunnerImpl.java
//

#ifndef _OrgMockitoInternalRunnersRunnerImpl_H_
#define _OrgMockitoInternalRunnersRunnerImpl_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/junit/runner/manipulation/Filterable.h>

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

@protocol OrgMockitoInternalRunnersRunnerImpl < OrgJunitRunnerManipulationFilterable, NSObject, JavaObject >

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnerDescription *)getDescription;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersRunnerImpl)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersRunnerImpl)

#endif // _OrgMockitoInternalRunnersRunnerImpl_H_
