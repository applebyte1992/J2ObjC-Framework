//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/Calls.java
//

#ifndef _OrgMockitoInternalVerificationCalls_H_
#define _OrgMockitoInternalVerificationCalls_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/mockito/internal/verification/api/VerificationInOrderMode.h>
#include <j2objc/org/mockito/verification/VerificationMode.h>

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

@interface OrgMockitoInternalVerificationCalls : NSObject < OrgMockitoVerificationVerificationMode, OrgMockitoInternalVerificationApiVerificationInOrderMode > {
 @public
  jint wantedCount_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)wantedNumberOfInvocations;

- (NSString *)description;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCalls)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCalls_initWithInt_(OrgMockitoInternalVerificationCalls *self, jint wantedNumberOfInvocations);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCalls *new_OrgMockitoInternalVerificationCalls_initWithInt_(jint wantedNumberOfInvocations) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCalls)

#endif // _OrgMockitoInternalVerificationCalls_H_
