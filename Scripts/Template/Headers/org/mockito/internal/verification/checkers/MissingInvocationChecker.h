//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/MissingInvocationChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersMissingInvocationChecker_H_
#define _OrgMockitoInternalVerificationCheckersMissingInvocationChecker_H_

#include <j2objc/J2ObjC_header.h>

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationCheckersMissingInvocationChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersMissingInvocationChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationChecker_init(OrgMockitoInternalVerificationCheckersMissingInvocationChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationChecker *new_OrgMockitoInternalVerificationCheckersMissingInvocationChecker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalVerificationCheckersMissingInvocationChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationChecker *new_OrgMockitoInternalVerificationCheckersMissingInvocationChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersMissingInvocationChecker)

#endif // _OrgMockitoInternalVerificationCheckersMissingInvocationChecker_H_
