//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/MatchersBinder.java
//

#ifndef _OrgMockitoInternalInvocationMatchersBinder_H_
#define _OrgMockitoInternalInvocationMatchersBinder_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol OrgMockitoInternalProgressArgumentMatcherStorage;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalInvocationMatchersBinder : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (OrgMockitoInternalInvocationInvocationMatcher *)bindMatchersWithOrgMockitoInternalProgressArgumentMatcherStorage:(id<OrgMockitoInternalProgressArgumentMatcherStorage>)argumentMatcherStorage
                                                                                 withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationMatchersBinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationMatchersBinder_init(OrgMockitoInternalInvocationMatchersBinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationMatchersBinder *new_OrgMockitoInternalInvocationMatchersBinder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationMatchersBinder)

#endif // _OrgMockitoInternalInvocationMatchersBinder_H_
