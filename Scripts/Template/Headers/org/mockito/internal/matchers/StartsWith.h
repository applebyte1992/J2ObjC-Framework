//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/StartsWith.java
//

#ifndef _OrgMockitoInternalMatchersStartsWith_H_
#define _OrgMockitoInternalMatchersStartsWith_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/org/mockito/ArgumentMatcher.h>

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersStartsWith : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)prefix;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersStartsWith)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersStartsWith_initWithNSString_(OrgMockitoInternalMatchersStartsWith *self, NSString *prefix);

FOUNDATION_EXPORT OrgMockitoInternalMatchersStartsWith *new_OrgMockitoInternalMatchersStartsWith_initWithNSString_(NSString *prefix) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersStartsWith)

#endif // _OrgMockitoInternalMatchersStartsWith_H_
