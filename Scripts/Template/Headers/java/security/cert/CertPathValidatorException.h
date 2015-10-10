//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPathValidatorException.java
//

#ifndef _JavaSecurityCertCertPathValidatorException_H_
#define _JavaSecurityCertCertPathValidatorException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/security/GeneralSecurityException.h>

@class JavaLangThrowable;
@class JavaSecurityCertCertPath;

/*!
 @brief The exception that is thrown when a certification path (or certificate chain)
 cannot be validated.
 <p>
 A <code>CertPathValidatorException</code> may optionally include the certification
 path instance that failed the validation and the index of the failed
 certificate.
 */
@interface JavaSecurityCertCertPathValidatorException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>CertPathValidatorException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 message and cause.
 @param msg
 the detail message for this exception.
 @param cause
 the cause why the path could not be validated.
 */
- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 message , cause, certification path and certificate index in the
 certification path.
 @param msg
 the detail message for this exception.
 @param cause
 the cause.
 @param certPath
 the certification path that failed the validation.
 @param index
 the index of the failed certificate.
 @throws IllegalArgumentException
 if <code>certPath</code> is <code>null</code> and index is not <code>-1</code>
 .
 @throws IndexOutOfBoundsException
 if <code>certPath</code> is not <code>null</code> and index is not
 referencing an certificate in the certification path.
 */
- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangThrowable:(JavaLangThrowable *)cause
    withJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)certPath
                         withInt:(jint)index;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 cause.
 @param cause
 the cause why the path could not be validated.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Returns the certification path that failed validation.
 @return the certification path that failed validation, or <code>null</code> if
 none was specified.
 */
- (JavaSecurityCertCertPath *)getCertPath;

/*!
 @brief Returns the index of the failed certificate in the certification path.
 @return the index of the failed certificate in the certification path, or
 <code>-1</code> if none was specified.
 */
- (jint)getIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathValidatorException)

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSString_withJavaLangThrowable_withJavaSecurityCertCertPath_withInt_(JavaSecurityCertCertPathValidatorException *self, NSString *msg, JavaLangThrowable *cause, JavaSecurityCertCertPath *certPath, jint index);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSString_withJavaLangThrowable_withJavaSecurityCertCertPath_withInt_(NSString *msg, JavaLangThrowable *cause, JavaSecurityCertCertPath *certPath, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSString_withJavaLangThrowable_(JavaSecurityCertCertPathValidatorException *self, NSString *msg, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithJavaLangThrowable_(JavaSecurityCertCertPathValidatorException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSString_(JavaSecurityCertCertPathValidatorException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_init(JavaSecurityCertCertPathValidatorException *self);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathValidatorException)

#endif // _JavaSecurityCertCertPathValidatorException_H_
