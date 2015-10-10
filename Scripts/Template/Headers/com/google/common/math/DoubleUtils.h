//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/math/DoubleUtils.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonMathDoubleUtils_INCLUDE_ALL")
#if ComGoogleCommonMathDoubleUtils_RESTRICT
#define ComGoogleCommonMathDoubleUtils_INCLUDE_ALL 0
#else
#define ComGoogleCommonMathDoubleUtils_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonMathDoubleUtils_RESTRICT

#if !defined (_ComGoogleCommonMathDoubleUtils_) && (ComGoogleCommonMathDoubleUtils_INCLUDE_ALL || ComGoogleCommonMathDoubleUtils_INCLUDE)
#define _ComGoogleCommonMathDoubleUtils_

@class JavaMathBigInteger;

#define ComGoogleCommonMathDoubleUtils_SIGNIFICAND_MASK 4503599627370495LL
#define ComGoogleCommonMathDoubleUtils_EXPONENT_MASK 9218868437227405312LL
#define ComGoogleCommonMathDoubleUtils_SIGN_MASK ((jlong) 0x8000000000000000LL)
#define ComGoogleCommonMathDoubleUtils_SIGNIFICAND_BITS 52
#define ComGoogleCommonMathDoubleUtils_EXPONENT_BIAS 1023
#define ComGoogleCommonMathDoubleUtils_IMPLICIT_BIT 4503599627370496LL

@interface ComGoogleCommonMathDoubleUtils : NSObject

#pragma mark Package-Private

+ (jdouble)bigToDoubleWithJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jdouble)ensureNonNegativeWithDouble:(jdouble)value;

+ (jlong)getSignificandWithDouble:(jdouble)d;

+ (jboolean)isFiniteWithDouble:(jdouble)d;

+ (jboolean)isNormalWithDouble:(jdouble)d;

+ (jdouble)nextDownWithDouble:(jdouble)d;

+ (jdouble)scaleNormalizeWithDouble:(jdouble)x;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathDoubleUtils)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleUtils, SIGNIFICAND_MASK, jlong)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleUtils, EXPONENT_MASK, jlong)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleUtils, SIGN_MASK, jlong)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleUtils, SIGNIFICAND_BITS, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleUtils, EXPONENT_BIAS, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleUtils, IMPLICIT_BIT, jlong)

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_nextDownWithDouble_(jdouble d);

FOUNDATION_EXPORT jlong ComGoogleCommonMathDoubleUtils_getSignificandWithDouble_(jdouble d);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleUtils_isFiniteWithDouble_(jdouble d);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleUtils_isNormalWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_scaleNormalizeWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_bigToDoubleWithJavaMathBigInteger_(JavaMathBigInteger *x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_ensureNonNegativeWithDouble_(jdouble value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathDoubleUtils)

#endif

#pragma pop_macro("ComGoogleCommonMathDoubleUtils_INCLUDE_ALL")
