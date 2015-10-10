//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/math/LongMath.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonMathLongMath_INCLUDE_ALL")
#if ComGoogleCommonMathLongMath_RESTRICT
#define ComGoogleCommonMathLongMath_INCLUDE_ALL 0
#else
#define ComGoogleCommonMathLongMath_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonMathLongMath_RESTRICT

#if !defined (_ComGoogleCommonMathLongMath_) && (ComGoogleCommonMathLongMath_INCLUDE_ALL || ComGoogleCommonMathLongMath_INCLUDE)
#define _ComGoogleCommonMathLongMath_

@class IOSByteArray;
@class IOSIntArray;
@class IOSLongArray;
@class JavaMathRoundingModeEnum;

#define ComGoogleCommonMathLongMath_MAX_POWER_OF_SQRT2_UNSIGNED -5402926248376769404LL
#define ComGoogleCommonMathLongMath_FLOOR_SQRT_MAX_LONG 3037000499LL

@interface ComGoogleCommonMathLongMath : NSObject

#pragma mark Public

+ (jlong)binomialWithInt:(jint)n
                 withInt:(jint)k;

+ (jlong)checkedAddWithLong:(jlong)a
                   withLong:(jlong)b;

+ (jlong)checkedMultiplyWithLong:(jlong)a
                        withLong:(jlong)b;

+ (jlong)checkedPowWithLong:(jlong)b
                    withInt:(jint)k;

+ (jlong)checkedSubtractWithLong:(jlong)a
                        withLong:(jlong)b;

+ (jlong)divideWithLong:(jlong)p
               withLong:(jlong)q
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jlong)factorialWithInt:(jint)n;

+ (jlong)gcdWithLong:(jlong)a
            withLong:(jlong)b;

+ (jboolean)isPowerOfTwoWithLong:(jlong)x;

+ (jint)log10WithLong:(jlong)x
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jint)log2WithLong:(jlong)x
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jlong)meanWithLong:(jlong)x
             withLong:(jlong)y;

+ (jint)modWithLong:(jlong)x
            withInt:(jint)m;

+ (jlong)modWithLong:(jlong)x
            withLong:(jlong)m;

+ (jlong)powWithLong:(jlong)b
             withInt:(jint)k;

+ (jlong)sqrtWithLong:(jlong)x
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

#pragma mark Package-Private

+ (jboolean)fitsInIntWithLong:(jlong)x;

+ (jint)lessThanBranchFreeWithLong:(jlong)x
                          withLong:(jlong)y;

+ (jint)log10FloorWithLong:(jlong)x;

+ (jlong)multiplyFractionWithLong:(jlong)x
                         withLong:(jlong)numerator
                         withLong:(jlong)denominator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathLongMath)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, MAX_POWER_OF_SQRT2_UNSIGNED, jlong)

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonMathLongMath_maxLog10ForLeadingZeros_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, maxLog10ForLeadingZeros_, IOSByteArray *)

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_powersOf10_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, powersOf10_, IOSLongArray *)

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_halfPowersOf10_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, halfPowersOf10_, IOSLongArray *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, FLOOR_SQRT_MAX_LONG, jlong)

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_factorials_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, factorials_, IOSLongArray *)

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathLongMath_biggestBinomials_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, biggestBinomials_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathLongMath_biggestSimpleBinomials_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathLongMath, biggestSimpleBinomials_, IOSIntArray *)

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_isPowerOfTwoWithLong_(jlong x);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_lessThanBranchFreeWithLong_withLong_(jlong x, jlong y);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log2WithLong_withJavaMathRoundingModeEnum_(jlong x, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log10WithLong_withJavaMathRoundingModeEnum_(jlong x, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log10FloorWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_powWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_sqrtWithLong_withJavaMathRoundingModeEnum_(jlong x, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_divideWithLong_withLong_withJavaMathRoundingModeEnum_(jlong p, jlong q, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_modWithLong_withInt_(jlong x, jint m);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_modWithLong_withLong_(jlong x, jlong m);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_gcdWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedAddWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedSubtractWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedMultiplyWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedPowWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_factorialWithInt_(jint n);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_binomialWithInt_withInt_(jint n, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_multiplyFractionWithLong_withLong_withLong_(jlong x, jlong numerator, jlong denominator);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_fitsInIntWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_meanWithLong_withLong_(jlong x, jlong y);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathLongMath)

#endif

#pragma pop_macro("ComGoogleCommonMathLongMath_INCLUDE_ALL")
