//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Null.java
//

#ifndef _OrgMockitoInternalMatchersNull_H_
#define _OrgMockitoInternalMatchersNull_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/org/mockito/ArgumentMatcher.h>

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersNull : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersNull)

FOUNDATION_EXPORT OrgMockitoInternalMatchersNull *OrgMockitoInternalMatchersNull_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersNull, NULL__, OrgMockitoInternalMatchersNull *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersNull)

#endif // _OrgMockitoInternalMatchersNull_H_
