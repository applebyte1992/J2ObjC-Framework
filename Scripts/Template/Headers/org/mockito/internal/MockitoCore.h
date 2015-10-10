//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/MockitoCore.java
//

#ifndef _OrgMockitoInternalMockitoCore_H_
#define _OrgMockitoInternalMockitoCore_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilList;
@protocol OrgMockitoInOrder;
@protocol OrgMockitoInternalProgressIOngoingStubbing;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockSettings;
@protocol OrgMockitoMockingDetails;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;
@protocol OrgMockitoStubbingStubber;
@protocol OrgMockitoStubbingVoidMethodStubbable;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalMockitoCore : NSObject

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoInvocationInvocation>)getLastInvocation;

- (IOSObjectArray *)ignoreStubsWithNSObjectArray:(IOSObjectArray *)mocks;

- (id<OrgMockitoInOrder>)inOrderWithNSObjectArray:(IOSObjectArray *)mocks;

- (id)mockWithIOSClass:(IOSClass *)typeToMock
withOrgMockitoMockSettings:(id<OrgMockitoMockSettings>)settings;

- (id<OrgMockitoMockingDetails>)mockingDetailsWithId:(id)toInspect;

- (void)resetWithNSObjectArray:(IOSObjectArray *)mocks;

- (id<OrgMockitoInternalProgressIOngoingStubbing>)stub;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)stubWithId:(id)methodCall;

- (id<OrgMockitoStubbingVoidMethodStubbable>)stubVoidWithId:(id)mock;

- (void)validateMockitoUsage;

- (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (void)verifyNoMoreInteractionsWithNSObjectArray:(IOSObjectArray *)mocks;

- (void)verifyNoMoreInteractionsInOrderWithJavaUtilList:(id<JavaUtilList>)mocks
    withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)inOrderContext;

- (id<OrgMockitoStubbingOngoingStubbing>)whenWithId:(id)methodCall;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMockitoCore)

FOUNDATION_EXPORT void OrgMockitoInternalMockitoCore_init(OrgMockitoInternalMockitoCore *self);

FOUNDATION_EXPORT OrgMockitoInternalMockitoCore *new_OrgMockitoInternalMockitoCore_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMockitoCore)

#endif // _OrgMockitoInternalMockitoCore_H_
