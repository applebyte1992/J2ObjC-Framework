//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/api/VerificationDataInOrderImpl.java
//

#ifndef _OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_H_
#define _OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/mockito/internal/verification/api/VerificationDataInOrder.h>

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationApiVerificationDataInOrderImpl : NSObject < OrgMockitoInternalVerificationApiVerificationDataInOrder >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)inOrder
                                                       withJavaUtilList:(id<JavaUtilList>)allInvocations
                      withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)getAllInvocations;

- (id<OrgMockitoInternalVerificationApiInOrderContext>)getOrderingContext;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_initWithOrgMockitoInternalVerificationApiInOrderContext_withJavaUtilList_withOrgMockitoInternalInvocationInvocationMatcher_(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl *self, id<OrgMockitoInternalVerificationApiInOrderContext> inOrder, id<JavaUtilList> allInvocations, OrgMockitoInternalInvocationInvocationMatcher *wanted);

FOUNDATION_EXPORT OrgMockitoInternalVerificationApiVerificationDataInOrderImpl *new_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_initWithOrgMockitoInternalVerificationApiInOrderContext_withJavaUtilList_withOrgMockitoInternalInvocationInvocationMatcher_(id<OrgMockitoInternalVerificationApiInOrderContext> inOrder, id<JavaUtilList> allInvocations, OrgMockitoInternalInvocationInvocationMatcher *wanted) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl)

#endif // _OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_H_
