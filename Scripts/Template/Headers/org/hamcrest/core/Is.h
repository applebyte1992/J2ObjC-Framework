//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/Is.java
//

#ifndef _OrgHamcrestCoreIs_H_
#define _OrgHamcrestCoreIs_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/hamcrest/BaseMatcher.h>

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIs : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)isWithIOSClass:(IOSClass *)type;

+ (id<OrgHamcrestMatcher>)isWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)isWithId:(id)value;

+ (id<OrgHamcrestMatcher>)isAWithIOSClass:(IOSClass *)type;

- (jboolean)matchesWithId:(id)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIs)

FOUNDATION_EXPORT void OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(OrgHamcrestCoreIs *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreIs *new_OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithId_(id value);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isAWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIs)

#endif // _OrgHamcrestCoreIs_H_
