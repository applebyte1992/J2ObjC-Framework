//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/ReasonCode.java
//

#ifndef _OrgApacheHarmonySecurityX509ReasonCode_H_
#define _OrgApacheHarmonySecurityX509ReasonCode_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/apache/harmony/security/x509/ExtensionValue.h>

@class IOSByteArray;
@class JavaLangStringBuilder;
@class JavaSecurityCertCRLReasonEnum;
@class OrgApacheHarmonySecurityAsn1ASN1Type;

#define OrgApacheHarmonySecurityX509ReasonCode_UNSPECIFIED 0
#define OrgApacheHarmonySecurityX509ReasonCode_KEY_COMPROMISE 1
#define OrgApacheHarmonySecurityX509ReasonCode_CA_COMPROMISE 2
#define OrgApacheHarmonySecurityX509ReasonCode_AFFILIATION_CHANGED 3
#define OrgApacheHarmonySecurityX509ReasonCode_SUPERSEDED 4
#define OrgApacheHarmonySecurityX509ReasonCode_CESSATION_OF_OPERATION 5
#define OrgApacheHarmonySecurityX509ReasonCode_CERTIFICATE_HOLD 6
#define OrgApacheHarmonySecurityX509ReasonCode_REMOVE_FROM_CRL 8
#define OrgApacheHarmonySecurityX509ReasonCode_PRIVILEGE_WITHDRAWN 9
#define OrgApacheHarmonySecurityX509ReasonCode_AA_COMPROMISE 10

/*!
 @brief CRL Entry's Reason Code Extension (OID = 2.5.29.21).
 @code

  id-ce-cRLReason OBJECT IDENTIFIER ::= { id-ce 21 }
  -- reasonCode ::= { CRLReason }
  CRLReason ::= ENUMERATED {
       unspecified             (0),
       keyCompromise           (1),
       cACompromise            (2),
       affiliationChanged      (3),
       superseded              (4),
       cessationOfOperation    (5),
       certificateHold         (6),
       removeFromCRL           (8),
       privilegeWithdrawn      (9),
       aACompromise           (10)
  }
  
@endcode
 (as specified in RFC 3280 http://www.ietf.org/rfc/rfc3280.txt)
 */
@interface OrgApacheHarmonySecurityX509ReasonCode : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)encoding;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

- (IOSByteArray *)getEncoded;

- (JavaSecurityCertCRLReasonEnum *)getReason;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509ReasonCode)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, UNSPECIFIED, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, KEY_COMPROMISE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, CA_COMPROMISE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, AFFILIATION_CHANGED, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, SUPERSEDED, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, CESSATION_OF_OPERATION, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, CERTIFICATE_HOLD, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, REMOVE_FROM_CRL, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, PRIVILEGE_WITHDRAWN, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, AA_COMPROMISE, jbyte)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Type *OrgApacheHarmonySecurityX509ReasonCode_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509ReasonCode, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509ReasonCode_initWithByteArray_(OrgApacheHarmonySecurityX509ReasonCode *self, IOSByteArray *encoding);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509ReasonCode *new_OrgApacheHarmonySecurityX509ReasonCode_initWithByteArray_(IOSByteArray *encoding) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509ReasonCode)

#endif // _OrgApacheHarmonySecurityX509ReasonCode_H_
