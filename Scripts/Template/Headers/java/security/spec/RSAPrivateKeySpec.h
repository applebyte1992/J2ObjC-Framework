//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/RSAPrivateKeySpec.java
//

#ifndef _JavaSecuritySpecRSAPrivateKeySpec_H_
#define _JavaSecuritySpecRSAPrivateKeySpec_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/security/spec/KeySpec.h>

@class JavaMathBigInteger;

/*!
 @brief The key specification of a RSA private key.
 <p>
 Defined in the <a
 href="http://www.rsa.com/rsalabs/pubs/PKCS/html/pkcs-1.html">PKCS #1 v2.1</a>
 standard
 */
@interface JavaSecuritySpecRSAPrivateKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new <code>RSAPrivateKeySpec</code> with the specified modulus and
 private exponent.
 @param modulus
 the modulus <code>n</code>.
 @param privateExponent
 the private exponent <code>e</code>
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)modulus
                    withJavaMathBigInteger:(JavaMathBigInteger *)privateExponent;

/*!
 @brief Returns the modulus <code>n</code>.
 @return the modulus <code>n</code>.
 */
- (JavaMathBigInteger *)getModulus;

/*!
 @brief Returns the private exponent <code>e</code>.
 @return the private exponent <code>e</code>.
 */
- (JavaMathBigInteger *)getPrivateExponent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecRSAPrivateKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecRSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecRSAPrivateKeySpec *self, JavaMathBigInteger *modulus, JavaMathBigInteger *privateExponent);

FOUNDATION_EXPORT JavaSecuritySpecRSAPrivateKeySpec *new_JavaSecuritySpecRSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *modulus, JavaMathBigInteger *privateExponent) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAPrivateKeySpec)

#endif // _JavaSecuritySpecRSAPrivateKeySpec_H_
