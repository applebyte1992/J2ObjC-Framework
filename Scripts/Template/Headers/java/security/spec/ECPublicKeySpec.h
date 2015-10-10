//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECPublicKeySpec.java
//

#ifndef _JavaSecuritySpecECPublicKeySpec_H_
#define _JavaSecuritySpecECPublicKeySpec_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/security/spec/KeySpec.h>

@class JavaSecuritySpecECParameterSpec;
@class JavaSecuritySpecECPoint;

/*!
 @brief The parameters specifying an Elliptic Curve (EC) public key.
 */
@interface JavaSecuritySpecECPublicKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new <code>ECPublicKey</code> with the specified public elliptic
 curve point and parameter specification.
 @param w
 the public elliptic curve point <code>W</code>.
 @param params
 the domain parameter specification.
 @throws IllegalArgumentException
 if the specified point <code>W</code> is at infinity.
 */
- (instancetype)initWithJavaSecuritySpecECPoint:(JavaSecuritySpecECPoint *)w
            withJavaSecuritySpecECParameterSpec:(JavaSecuritySpecECParameterSpec *)params;

/*!
 @brief Returns the domain parameter specification.
 @return the domain parameter specification.
 */
- (JavaSecuritySpecECParameterSpec *)getParams;

/*!
 @brief Returns the public elliptic curve point <code>W</code>.
 @return the public elliptic curve point <code>W</code>.
 */
- (JavaSecuritySpecECPoint *)getW;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECPublicKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPublicKeySpec *self, JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params);

FOUNDATION_EXPORT JavaSecuritySpecECPublicKeySpec *new_JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECPublicKeySpec)

#endif // _JavaSecuritySpecECPublicKeySpec_H_
