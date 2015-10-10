//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/Assert.java
//

#ifndef _OrgJunitAssert_H_
#define _OrgJunitAssert_H_

#include <j2objc/J2ObjC_header.h>

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;
@protocol OrgHamcrestMatcher;

@interface OrgJunitAssert : NSObject

#pragma mark Public

+ (void)assertArrayEqualsWithByteArray:(IOSByteArray *)expecteds
                         withByteArray:(IOSByteArray *)actuals;

+ (void)assertArrayEqualsWithCharArray:(IOSCharArray *)expecteds
                         withCharArray:(IOSCharArray *)actuals;

+ (void)assertArrayEqualsWithDoubleArray:(IOSDoubleArray *)expecteds
                         withDoubleArray:(IOSDoubleArray *)actuals
                              withDouble:(jdouble)delta;

+ (void)assertArrayEqualsWithFloatArray:(IOSFloatArray *)expecteds
                         withFloatArray:(IOSFloatArray *)actuals
                              withFloat:(jfloat)delta;

+ (void)assertArrayEqualsWithIntArray:(IOSIntArray *)expecteds
                         withIntArray:(IOSIntArray *)actuals;

+ (void)assertArrayEqualsWithLongArray:(IOSLongArray *)expecteds
                         withLongArray:(IOSLongArray *)actuals;

+ (void)assertArrayEqualsWithNSObjectArray:(IOSObjectArray *)expecteds
                         withNSObjectArray:(IOSObjectArray *)actuals;

+ (void)assertArrayEqualsWithShortArray:(IOSShortArray *)expecteds
                         withShortArray:(IOSShortArray *)actuals;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                        withByteArray:(IOSByteArray *)expecteds
                        withByteArray:(IOSByteArray *)actuals;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                        withCharArray:(IOSCharArray *)expecteds
                        withCharArray:(IOSCharArray *)actuals;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                      withDoubleArray:(IOSDoubleArray *)expecteds
                      withDoubleArray:(IOSDoubleArray *)actuals
                           withDouble:(jdouble)delta;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                       withFloatArray:(IOSFloatArray *)expecteds
                       withFloatArray:(IOSFloatArray *)actuals
                            withFloat:(jfloat)delta;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                         withIntArray:(IOSIntArray *)expecteds
                         withIntArray:(IOSIntArray *)actuals;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                        withLongArray:(IOSLongArray *)expecteds
                        withLongArray:(IOSLongArray *)actuals;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                    withNSObjectArray:(IOSObjectArray *)expecteds
                    withNSObjectArray:(IOSObjectArray *)actuals;

+ (void)assertArrayEqualsWithNSString:(NSString *)message
                       withShortArray:(IOSShortArray *)expecteds
                       withShortArray:(IOSShortArray *)actuals;

+ (void)assertEqualsWithDouble:(jdouble)expected
                    withDouble:(jdouble)actual;

+ (void)assertEqualsWithDouble:(jdouble)expected
                    withDouble:(jdouble)actual
                    withDouble:(jdouble)delta;

+ (void)assertEqualsWithFloat:(jfloat)expected
                    withFloat:(jfloat)actual
                    withFloat:(jfloat)delta;

+ (void)assertEqualsWithLong:(jlong)expected
                    withLong:(jlong)actual;

+ (void)assertEqualsWithId:(id)expected
                    withId:(id)actual;

+ (void)assertEqualsWithNSObjectArray:(IOSObjectArray *)expecteds
                    withNSObjectArray:(IOSObjectArray *)actuals;

+ (void)assertEqualsWithNSString:(NSString *)message
                      withDouble:(jdouble)expected
                      withDouble:(jdouble)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                      withDouble:(jdouble)expected
                      withDouble:(jdouble)actual
                      withDouble:(jdouble)delta;

+ (void)assertEqualsWithNSString:(NSString *)message
                       withFloat:(jfloat)expected
                       withFloat:(jfloat)actual
                       withFloat:(jfloat)delta;

+ (void)assertEqualsWithNSString:(NSString *)message
                        withLong:(jlong)expected
                        withLong:(jlong)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
               withNSObjectArray:(IOSObjectArray *)expecteds
               withNSObjectArray:(IOSObjectArray *)actuals;

+ (void)assertFalseWithBoolean:(jboolean)condition;

+ (void)assertFalseWithNSString:(NSString *)message
                    withBoolean:(jboolean)condition;

+ (void)assertNotEqualsWithDouble:(jdouble)first
                       withDouble:(jdouble)second
                       withDouble:(jdouble)delta;

+ (void)assertNotEqualsWithLong:(jlong)first
                       withLong:(jlong)second;

+ (void)assertNotEqualsWithId:(id)first
                       withId:(id)second;

+ (void)assertNotEqualsWithNSString:(NSString *)message
                         withDouble:(jdouble)first
                         withDouble:(jdouble)second
                         withDouble:(jdouble)delta;

+ (void)assertNotEqualsWithNSString:(NSString *)message
                           withLong:(jlong)first
                           withLong:(jlong)second;

+ (void)assertNotEqualsWithNSString:(NSString *)message
                             withId:(id)first
                             withId:(id)second;

+ (void)assertNotNullWithId:(id)object;

+ (void)assertNotNullWithNSString:(NSString *)message
                           withId:(id)object;

+ (void)assertNotSameWithId:(id)unexpected
                     withId:(id)actual;

+ (void)assertNotSameWithNSString:(NSString *)message
                           withId:(id)unexpected
                           withId:(id)actual;

+ (void)assertNullWithId:(id)object;

+ (void)assertNullWithNSString:(NSString *)message
                        withId:(id)object;

+ (void)assertSameWithId:(id)expected
                  withId:(id)actual;

+ (void)assertSameWithNSString:(NSString *)message
                        withId:(id)expected
                        withId:(id)actual;

+ (void)assertThatWithNSString:(NSString *)reason
                        withId:(id)actual
        withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (void)assertThatWithId:(id)actual
  withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (void)assertTrueWithBoolean:(jboolean)condition;

+ (void)assertTrueWithNSString:(NSString *)message
                   withBoolean:(jboolean)condition;

+ (void)fail;

+ (void)failWithNSString:(NSString *)message;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

+ (NSString *)formatWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitAssert)

FOUNDATION_EXPORT void OrgJunitAssert_init(OrgJunitAssert *self);

FOUNDATION_EXPORT OrgJunitAssert *new_OrgJunitAssert_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitAssert_assertTrueWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void OrgJunitAssert_assertTrueWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void OrgJunitAssert_assertFalseWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void OrgJunitAssert_assertFalseWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void OrgJunitAssert_failWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgJunitAssert_fail();

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotEqualsWithNSString_withId_withId_(NSString *message, id first, id second);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotEqualsWithId_withId_(id first, id second);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotEqualsWithNSString_withLong_withLong_(NSString *message, jlong first, jlong second);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotEqualsWithLong_withLong_(jlong first, jlong second);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotEqualsWithNSString_withDouble_withDouble_withDouble_(NSString *message, jdouble first, jdouble second, jdouble delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotEqualsWithDouble_withDouble_withDouble_(jdouble first, jdouble second, jdouble delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withNSObjectArray_withNSObjectArray_(NSString *message, IOSObjectArray *expecteds, IOSObjectArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSObjectArray_withNSObjectArray_(IOSObjectArray *expecteds, IOSObjectArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withByteArray_withByteArray_(NSString *message, IOSByteArray *expecteds, IOSByteArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithByteArray_withByteArray_(IOSByteArray *expecteds, IOSByteArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withCharArray_withCharArray_(NSString *message, IOSCharArray *expecteds, IOSCharArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithCharArray_withCharArray_(IOSCharArray *expecteds, IOSCharArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withShortArray_withShortArray_(NSString *message, IOSShortArray *expecteds, IOSShortArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithShortArray_withShortArray_(IOSShortArray *expecteds, IOSShortArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withIntArray_withIntArray_(NSString *message, IOSIntArray *expecteds, IOSIntArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithIntArray_withIntArray_(IOSIntArray *expecteds, IOSIntArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withLongArray_withLongArray_(NSString *message, IOSLongArray *expecteds, IOSLongArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithLongArray_withLongArray_(IOSLongArray *expecteds, IOSLongArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withDoubleArray_withDoubleArray_withDouble_(NSString *message, IOSDoubleArray *expecteds, IOSDoubleArray *actuals, jdouble delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithDoubleArray_withDoubleArray_withDouble_(IOSDoubleArray *expecteds, IOSDoubleArray *actuals, jdouble delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithNSString_withFloatArray_withFloatArray_withFloat_(NSString *message, IOSFloatArray *expecteds, IOSFloatArray *actuals, jfloat delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertArrayEqualsWithFloatArray_withFloatArray_withFloat_(IOSFloatArray *expecteds, IOSFloatArray *actuals, jfloat delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSString_withDouble_withDouble_withDouble_(NSString *message, jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSString_withFloat_withFloat_withFloat_(NSString *message, jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithLong_withLong_(jlong expected, jlong actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSString_withLong_withLong_(NSString *message, jlong expected, jlong actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithDouble_withDouble_(jdouble expected, jdouble actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSString_withDouble_withDouble_(NSString *message, jdouble expected, jdouble actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithDouble_withDouble_withDouble_(jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithFloat_withFloat_withFloat_(jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotNullWithId_(id object);

FOUNDATION_EXPORT void OrgJunitAssert_assertNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void OrgJunitAssert_assertNullWithId_(id object);

FOUNDATION_EXPORT void OrgJunitAssert_assertSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotSameWithNSString_withId_withId_(NSString *message, id unexpected, id actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertNotSameWithId_withId_(id unexpected, id actual);

FOUNDATION_EXPORT NSString *OrgJunitAssert_formatWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSString_withNSObjectArray_withNSObjectArray_(NSString *message, IOSObjectArray *expecteds, IOSObjectArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertEqualsWithNSObjectArray_withNSObjectArray_(IOSObjectArray *expecteds, IOSObjectArray *actuals);

FOUNDATION_EXPORT void OrgJunitAssert_assertThatWithId_withOrgHamcrestMatcher_(id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssert_assertThatWithNSString_withId_withOrgHamcrestMatcher_(NSString *reason, id actual, id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitAssert)

#endif // _OrgJunitAssert_H_
