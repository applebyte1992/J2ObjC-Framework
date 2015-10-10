//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/Every.java
//

#ifndef _OrgHamcrestCoreEvery_H_
#define _OrgHamcrestCoreEvery_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/hamcrest/TypeSafeDiagnosingMatcher.h>

@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreEvery : OrgHamcrestTypeSafeDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)everyItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)itemMatcher;

- (jboolean)matchesSafelyWithId:(id<JavaLangIterable>)collection
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreEvery)

FOUNDATION_EXPORT void OrgHamcrestCoreEvery_initWithOrgHamcrestMatcher_(OrgHamcrestCoreEvery *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreEvery *new_OrgHamcrestCoreEvery_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreEvery_everyItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> itemMatcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreEvery)

#endif // _OrgHamcrestCoreEvery_H_
