//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/Assume.java
//

#ifndef _OrgJunitAssume_H_
#define _OrgJunitAssume_H_

#include <j2objc/J2ObjC_header.h>

@class IOSObjectArray;
@class JavaLangThrowable;
@protocol OrgHamcrestMatcher;

@interface OrgJunitAssume : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)assumeFalseWithBoolean:(jboolean)b;

+ (void)assumeFalseWithNSString:(NSString *)message
                    withBoolean:(jboolean)b;

+ (void)assumeNoExceptionWithNSString:(NSString *)message
                withJavaLangThrowable:(JavaLangThrowable *)t;

+ (void)assumeNoExceptionWithJavaLangThrowable:(JavaLangThrowable *)t;

+ (void)assumeNotNullWithNSObjectArray:(IOSObjectArray *)objects;

+ (void)assumeThatWithNSString:(NSString *)message
                        withId:(id)actual
        withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (void)assumeThatWithId:(id)actual
  withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (void)assumeTrueWithBoolean:(jboolean)b;

+ (void)assumeTrueWithNSString:(NSString *)message
                   withBoolean:(jboolean)b;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitAssume)

FOUNDATION_EXPORT void OrgJunitAssume_assumeTrueWithBoolean_(jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeFalseWithBoolean_(jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeTrueWithNSString_withBoolean_(NSString *message, jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeFalseWithNSString_withBoolean_(NSString *message, jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeNotNullWithNSObjectArray_(IOSObjectArray *objects);

FOUNDATION_EXPORT void OrgJunitAssume_assumeThatWithId_withOrgHamcrestMatcher_(id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssume_assumeThatWithNSString_withId_withOrgHamcrestMatcher_(NSString *message, id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssume_assumeNoExceptionWithJavaLangThrowable_(JavaLangThrowable *t);

FOUNDATION_EXPORT void OrgJunitAssume_assumeNoExceptionWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *t);

FOUNDATION_EXPORT void OrgJunitAssume_init(OrgJunitAssume *self);

FOUNDATION_EXPORT OrgJunitAssume *new_OrgJunitAssume_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitAssume)

#endif // _OrgJunitAssume_H_
