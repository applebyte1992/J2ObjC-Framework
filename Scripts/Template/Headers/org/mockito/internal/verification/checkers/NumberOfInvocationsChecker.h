//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NumberOfInvocationsChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_H_
#define _OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_H_

#include <j2objc/J2ObjC_header.h>

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter
   withOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_init(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_initWithOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationsFinder_(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *self, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationsFinder *finder);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_initWithOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationsFinder_(OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationsFinder *finder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker)

#endif // _OrgMockitoInternalVerificationCheckersNumberOfInvocationsChecker_H_
