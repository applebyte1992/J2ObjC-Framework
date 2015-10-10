//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/TBSCertificate.java
//

#ifndef _OrgApacheHarmonySecurityX509TBSCertificate_H_
#define _OrgApacheHarmonySecurityX509TBSCertificate_H_

#include <j2objc/J2ObjC_header.h>

@class IOSBooleanArray;
@class IOSByteArray;
@class JavaLangStringBuilder;
@class JavaMathBigInteger;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@class OrgApacheHarmonySecurityX501Name;
@class OrgApacheHarmonySecurityX509AlgorithmIdentifier;
@class OrgApacheHarmonySecurityX509Extensions;
@class OrgApacheHarmonySecurityX509SubjectPublicKeyInfo;
@class OrgApacheHarmonySecurityX509Validity;

/*!
 @author Alexander Y. Kleymenov
 @version $Revision$
 */

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with TBSCertificate structure which is the part of X.509 certificate
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

  TBSCertificate  ::=  SEQUENCE  {
       version         [0]  EXPLICIT Version DEFAULT v1,
       serialNumber         CertificateSerialNumber,
       signature            AlgorithmIdentifier,
       issuer               Name,
       validity             Validity,
       subject              Name,
       subjectPublicKeyInfo SubjectPublicKeyInfo,
       issuerUniqueID  [1]  IMPLICIT UniqueIdentifier OPTIONAL,
                            -- If present, version MUST be v2 or v3
       subjectUniqueID [2]  IMPLICIT UniqueIdentifier OPTIONAL,
                            -- If present, version MUST be v2 or v3
       extensions      [3]  EXPLICIT Extensions OPTIONAL
                            -- If present, version MUST be v3
  }
  
@endcode
 */
@interface OrgApacheHarmonySecurityX509TBSCertificate : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)version_
     withJavaMathBigInteger:(JavaMathBigInteger *)serialNumber
withOrgApacheHarmonySecurityX509AlgorithmIdentifier:(OrgApacheHarmonySecurityX509AlgorithmIdentifier *)signature
withOrgApacheHarmonySecurityX501Name:(OrgApacheHarmonySecurityX501Name *)issuer
withOrgApacheHarmonySecurityX509Validity:(OrgApacheHarmonySecurityX509Validity *)validity
withOrgApacheHarmonySecurityX501Name:(OrgApacheHarmonySecurityX501Name *)subject
withOrgApacheHarmonySecurityX509SubjectPublicKeyInfo:(OrgApacheHarmonySecurityX509SubjectPublicKeyInfo *)subjectPublicKeyInfo
           withBooleanArray:(IOSBooleanArray *)issuerUniqueID
           withBooleanArray:(IOSBooleanArray *)subjectUniqueID
withOrgApacheHarmonySecurityX509Extensions:(OrgApacheHarmonySecurityX509Extensions *)extensions;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

/*!
 @brief Returns ASN.1 encoded form of this X.509 TBSCertificate value.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the value of extensions field of the structure.
 */
- (OrgApacheHarmonySecurityX509Extensions *)getExtensions;

/*!
 @brief Returns the value of issuer field of the structure.
 */
- (OrgApacheHarmonySecurityX501Name *)getIssuer;

/*!
 @brief Returns the value of issuerUniqueID field of the structure.
 */
- (IOSBooleanArray *)getIssuerUniqueID;

/*!
 @brief Returns the value of serialNumber field of the structure.
 */
- (JavaMathBigInteger *)getSerialNumber;

/*!
 @brief Returns the value of signature field of the structure.
 */
- (OrgApacheHarmonySecurityX509AlgorithmIdentifier *)getSignature;

/*!
 @brief Returns the value of subject field of the structure.
 */
- (OrgApacheHarmonySecurityX501Name *)getSubject;

/*!
 @brief Returns the value of subjectPublicKeyInfo field of the structure.
 */
- (OrgApacheHarmonySecurityX509SubjectPublicKeyInfo *)getSubjectPublicKeyInfo;

/*!
 @brief Returns the value of subjectUniqueID field of the structure.
 */
- (IOSBooleanArray *)getSubjectUniqueID;

/*!
 @brief Returns the value of validity field of the structure.
 */
- (OrgApacheHarmonySecurityX509Validity *)getValidity;

/*!
 @brief Returns the value of version field of the structure.
 */
- (jint)getVersion;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509TBSCertificate)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Sequence *OrgApacheHarmonySecurityX509TBSCertificate_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509TBSCertificate, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Sequence *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509TBSCertificate_initWithInt_withJavaMathBigInteger_withOrgApacheHarmonySecurityX509AlgorithmIdentifier_withOrgApacheHarmonySecurityX501Name_withOrgApacheHarmonySecurityX509Validity_withOrgApacheHarmonySecurityX501Name_withOrgApacheHarmonySecurityX509SubjectPublicKeyInfo_withBooleanArray_withBooleanArray_withOrgApacheHarmonySecurityX509Extensions_(OrgApacheHarmonySecurityX509TBSCertificate *self, jint version_, JavaMathBigInteger *serialNumber, OrgApacheHarmonySecurityX509AlgorithmIdentifier *signature, OrgApacheHarmonySecurityX501Name *issuer, OrgApacheHarmonySecurityX509Validity *validity, OrgApacheHarmonySecurityX501Name *subject, OrgApacheHarmonySecurityX509SubjectPublicKeyInfo *subjectPublicKeyInfo, IOSBooleanArray *issuerUniqueID, IOSBooleanArray *subjectUniqueID, OrgApacheHarmonySecurityX509Extensions *extensions);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509TBSCertificate *new_OrgApacheHarmonySecurityX509TBSCertificate_initWithInt_withJavaMathBigInteger_withOrgApacheHarmonySecurityX509AlgorithmIdentifier_withOrgApacheHarmonySecurityX501Name_withOrgApacheHarmonySecurityX509Validity_withOrgApacheHarmonySecurityX501Name_withOrgApacheHarmonySecurityX509SubjectPublicKeyInfo_withBooleanArray_withBooleanArray_withOrgApacheHarmonySecurityX509Extensions_(jint version_, JavaMathBigInteger *serialNumber, OrgApacheHarmonySecurityX509AlgorithmIdentifier *signature, OrgApacheHarmonySecurityX501Name *issuer, OrgApacheHarmonySecurityX509Validity *validity, OrgApacheHarmonySecurityX501Name *subject, OrgApacheHarmonySecurityX509SubjectPublicKeyInfo *subjectPublicKeyInfo, IOSBooleanArray *issuerUniqueID, IOSBooleanArray *subjectUniqueID, OrgApacheHarmonySecurityX509Extensions *extensions) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509TBSCertificate)

#endif // _OrgApacheHarmonySecurityX509TBSCertificate_H_
