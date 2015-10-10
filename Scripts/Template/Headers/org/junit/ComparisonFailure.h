//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/ComparisonFailure.java
//

#ifndef _OrgJunitComparisonFailure_H_
#define _OrgJunitComparisonFailure_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/AssertionError.h>

@interface OrgJunitComparisonFailure : JavaLangAssertionError

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message
                    withNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

- (NSString *)getActual;

- (NSString *)getExpected;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitComparisonFailure)

FOUNDATION_EXPORT void OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(OrgJunitComparisonFailure *self, NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT OrgJunitComparisonFailure *new_OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitComparisonFailure)

#endif // _OrgJunitComparisonFailure_H_
