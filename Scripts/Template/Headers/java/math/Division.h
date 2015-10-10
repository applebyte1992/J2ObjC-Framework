//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/Division.java
//

#ifndef _JavaMathDivision_H_
#define _JavaMathDivision_H_

#include <j2objc/J2ObjC_header.h>

@class IOSIntArray;
@class IOSObjectArray;
@class JavaMathBigInteger;

/*!
 @brief Static library that provides all operations related with division and modular
 arithmetic to <code>BigInteger</code>.
 Some methods are provided in both mutable
 and immutable way. There are several variants provided listed below:
 <ul type="circle">
 <li> <b>Division</b>
 <ul type="circle">
 <li><code>BigInteger</code> division and remainder by <code>BigInteger</code>.</li>
 <li><code>BigInteger</code> division and remainder by <code>int</code>.</li>
 <li><i>gcd</i> between <code>BigInteger</code> numbers.</li>
 </ul>
 </li>
 <li> <b>Modular arithmetic </b>
 <ul type="circle">
 <li>Modular exponentiation between <code>BigInteger</code> numbers.</li>
 <li>Modular inverse of a <code>BigInteger</code> numbers.</li>
 </ul>
 </li>
 </ul>
 */
@interface JavaMathDivision : NSObject

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Divides the array 'a' by the array 'b' and gets the quotient and the
 remainder.
 Implements the Knuth's division algorithm. See D. Knuth, The
 Art of Computer Programming, vol. 2. Steps D1-D8 correspond the steps in
 the algorithm description.
 @param quot the quotient
 @param quotLength the quotient's length
 @param a the dividend
 @param aLength the dividend's length
 @param b the divisor
 @param bLength the divisor's length
 @return the remainder
 */
+ (IOSIntArray *)divideWithIntArray:(IOSIntArray *)quot
                            withInt:(jint)quotLength
                       withIntArray:(IOSIntArray *)a
                            withInt:(jint)aLength
                       withIntArray:(IOSIntArray *)b
                            withInt:(jint)bLength;

/*!
 @brief Computes the quotient and the remainder after a division by an <code>int</code>
 number.
 @return an array of the form <code>[quotient, remainder]</code>.
 */
+ (IOSObjectArray *)divideAndRemainderByIntegerWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                                              withInt:(jint)divisor
                                                              withInt:(jint)divisorSign;

/*!
 @brief Divides an array by an integer value.
 Implements the Knuth's division
 algorithm. See D. Knuth, The Art of Computer Programming, vol. 2.
 @param dest the quotient
 @param src the dividend
 @param srcLength the length of the dividend
 @param divisor the divisor
 @return remainder
 */
+ (jint)divideArrayByIntWithIntArray:(IOSIntArray *)dest
                        withIntArray:(IOSIntArray *)src
                             withInt:(jint)srcLength
                             withInt:(jint)divisor;

/*!
 @brief Divides an unsigned long a by an unsigned int b.
 It is supposed that the
 most significant bit of b is set to 1, i.e. b < 0
 @param a the dividend
 @param b the divisor
 @return the long value containing the unsigned integer remainder in the
 left half and the unsigned integer quotient in the right half
 */
+ (jlong)divideLongByIntWithLong:(jlong)a
                         withInt:(jint)b;

/*!
 @brief Performs modular exponentiation using the Montgomery Reduction.
 It
 requires that all parameters be positive and the modulus be even. Based
 <i>The square and multiply algorithm and the Montgomery Reduction C. K.
 Koc - Montgomery Reduction with Even Modulus</i>. The square and
 multiply algorithm and the Montgomery Reduction.
  "C. K. Koc - Montgomery Reduction with Even Modulus"
 */
+ (JavaMathBigInteger *)evenModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                  withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                  withJavaMathBigInteger:(JavaMathBigInteger *)modulus;

/*!
 @brief Performs the final reduction of the Montgomery algorithm.
 */
+ (JavaMathBigInteger *)finalSubtractionWithIntArray:(IOSIntArray *)res
                              withJavaMathBigInteger:(JavaMathBigInteger *)modulus;

/*!
 @param m a positive modulus
 Return the greatest common divisor of op1 and op2,
 @param op1
 must be greater than zero
 @param op2
 must be greater than zero
 @return <code>GCD(op1, op2)</code>
 */
+ (JavaMathBigInteger *)gcdBinaryWithJavaMathBigInteger:(JavaMathBigInteger *)op1
                                 withJavaMathBigInteger:(JavaMathBigInteger *)op2;

/*!
 @brief Performs the same as <code>gcdBinary(BigInteger,BigInteger)</code>, but
 with numbers of 63 bits, represented in positives values of <code>long</code>
 type.
 @param op1
 a positive number
 @param op2
 a positive number
 @return <code>GCD(op1, op2)</code>
 */
+ (jlong)gcdBinaryWithLong:(jlong)op1
                  withLong:(jlong)op2;

/*!
 @brief Performs <code>x = x mod (2<sup>n</sup>)</code>.
 @param x a positive number, it will store the result.
 @param n a positive exponent of <code>2</code>.
 */
+ (void)inplaceModPow2WithJavaMathBigInteger:(JavaMathBigInteger *)x
                                     withInt:(jint)n;

/*!
 @brief Implements the "Shifting Euclidean modular inverse algorithm".
 "Laszlo Hars - Modular Inverse Algorithms Without Multiplications
 for Cryptographic Applications"
 @param a
 a positive number
 @param m
 a positive modulus
 */
+ (JavaMathBigInteger *)modInverseHarsWithJavaMathBigInteger:(JavaMathBigInteger *)a
                                      withJavaMathBigInteger:(JavaMathBigInteger *)m;

/*!
 @brief Calculates a.modInverse(p) Based on: Savas, E; Koc, C "The Montgomery Modular
 Inverse - Revised"
 */
+ (JavaMathBigInteger *)modInverseMontgomeryWithJavaMathBigInteger:(JavaMathBigInteger *)a
                                            withJavaMathBigInteger:(JavaMathBigInteger *)p;

/*!
 @param x an odd positive number.
 @param n the exponent by which 2 is raised.
 @return <code>x<sup>-1</sup> (mod 2<sup>n</sup>)</code>.
 */
+ (JavaMathBigInteger *)modPow2InverseWithJavaMathBigInteger:(JavaMathBigInteger *)x
                                                     withInt:(jint)n;

/*!
 @brief Implements the Montgomery Product of two integers represented by
 <code>int</code> arrays.
 The arrays are supposed in <i>little
 endian</i> notation.
 @param a The first factor of the product.
 @param b The second factor of the product.
 @param modulus The modulus of the operations. Z<sub>modulus</sub>.
 @param n2 The digit modulus'[0].
  "C. K. Koc - Analyzing and Comparing Montgomery
 Multiplication Algorithms"
 */
+ (JavaMathBigInteger *)monProWithJavaMathBigInteger:(JavaMathBigInteger *)a
                              withJavaMathBigInteger:(JavaMathBigInteger *)b
                              withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                             withInt:(jint)n2;

/*!
 @brief Multiplies an array by int and subtracts it from a subarray of another
 array.
 @param a the array to subtract from
 @param start the start element of the subarray of a
 @param b the array to be multiplied and subtracted
 @param bLen the length of b
 @param c the multiplier of b
 @return the carry element of subtraction
 */
+ (jint)multiplyAndSubtractWithIntArray:(IOSIntArray *)a
                                withInt:(jint)start
                           withIntArray:(IOSIntArray *)b
                                withInt:(jint)bLen
                                withInt:(jint)c;

/*!
 @brief Performs modular exponentiation using the Montgomery Reduction.
 It
 requires that all parameters be positive and the modulus be odd. >
 */
+ (JavaMathBigInteger *)oddModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                 withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                 withJavaMathBigInteger:(JavaMathBigInteger *)modulus;

/*!
 @brief It requires that all parameters be positive.
 @return <code>base<sup>exponent</sup> mod (2<sup>j</sup>)</code>.
 */
+ (JavaMathBigInteger *)pow2ModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                  withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                                 withInt:(jint)j;

/*!
 @brief Divides a <code>BigInteger</code> by a signed <code>int</code> and
 returns the remainder.
 @param dividend the BigInteger to be divided. Must be non-negative.
 @param divisor a signed int
 @return divide % divisor
 */
+ (jint)remainderWithJavaMathBigInteger:(JavaMathBigInteger *)dividend
                                withInt:(jint)divisor;

/*!
 @brief Divides an array by an integer value.
 Implements the Knuth's division
 algorithm. See D. Knuth, The Art of Computer Programming, vol. 2.
 @param src the dividend
 @param srcLength the length of the dividend
 @param divisor the divisor
 @return remainder
 */
+ (jint)remainderArrayByIntWithIntArray:(IOSIntArray *)src
                                withInt:(jint)srcLength
                                withInt:(jint)divisor;

+ (JavaMathBigInteger *)slidingWindowWithJavaMathBigInteger:(JavaMathBigInteger *)x2
                                     withJavaMathBigInteger:(JavaMathBigInteger *)a2
                                     withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                     withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                                    withInt:(jint)n2;

+ (JavaMathBigInteger *)squareAndMultiplyWithJavaMathBigInteger:(JavaMathBigInteger *)x2
                                         withJavaMathBigInteger:(JavaMathBigInteger *)a2
                                         withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                         withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                                        withInt:(jint)n2;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaMathDivision)

FOUNDATION_EXPORT IOSIntArray *JavaMathDivision_divideWithIntArray_withInt_withIntArray_withInt_withIntArray_withInt_(IOSIntArray *quot, jint quotLength, IOSIntArray *a, jint aLength, IOSIntArray *b, jint bLength);

FOUNDATION_EXPORT jint JavaMathDivision_divideArrayByIntWithIntArray_withIntArray_withInt_withInt_(IOSIntArray *dest, IOSIntArray *src, jint srcLength, jint divisor);

FOUNDATION_EXPORT jint JavaMathDivision_remainderArrayByIntWithIntArray_withInt_withInt_(IOSIntArray *src, jint srcLength, jint divisor);

FOUNDATION_EXPORT jint JavaMathDivision_remainderWithJavaMathBigInteger_withInt_(JavaMathBigInteger *dividend, jint divisor);

FOUNDATION_EXPORT jlong JavaMathDivision_divideLongByIntWithLong_withInt_(jlong a, jint b);

FOUNDATION_EXPORT IOSObjectArray *JavaMathDivision_divideAndRemainderByIntegerWithJavaMathBigInteger_withInt_withInt_(JavaMathBigInteger *val, jint divisor, jint divisorSign);

FOUNDATION_EXPORT jint JavaMathDivision_multiplyAndSubtractWithIntArray_withInt_withIntArray_withInt_withInt_(IOSIntArray *a, jint start, IOSIntArray *b, jint bLen, jint c);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_gcdBinaryWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *op1, JavaMathBigInteger *op2);

FOUNDATION_EXPORT jlong JavaMathDivision_gcdBinaryWithLong_withLong_(jlong op1, jlong op2);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_modInverseMontgomeryWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *a, JavaMathBigInteger *p);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_squareAndMultiplyWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *x2, JavaMathBigInteger *a2, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus, jint n2);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_modInverseHarsWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *a, JavaMathBigInteger *m);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_slidingWindowWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *x2, JavaMathBigInteger *a2, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus, jint n2);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_oddModPowWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *base, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_evenModPowWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *base, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_pow2ModPowWithJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *base, JavaMathBigInteger *exponent, jint j);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_monProWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *a, JavaMathBigInteger *b, JavaMathBigInteger *modulus, jint n2);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_finalSubtractionWithIntArray_withJavaMathBigInteger_(IOSIntArray *res, JavaMathBigInteger *modulus);

FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_modPow2InverseWithJavaMathBigInteger_withInt_(JavaMathBigInteger *x, jint n);

FOUNDATION_EXPORT void JavaMathDivision_inplaceModPow2WithJavaMathBigInteger_withInt_(JavaMathBigInteger *x, jint n);

FOUNDATION_EXPORT void JavaMathDivision_init(JavaMathDivision *self);

FOUNDATION_EXPORT JavaMathDivision *new_JavaMathDivision_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaMathDivision)

#endif // _JavaMathDivision_H_
