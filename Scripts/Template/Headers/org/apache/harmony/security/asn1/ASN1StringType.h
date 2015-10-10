//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1StringType.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1StringType_H_
#define _OrgApacheHarmonySecurityAsn1ASN1StringType_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/apache/harmony/security/asn1/ASN1Type.h>

@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class is the super class for all string ASN.1 types
 */
@interface OrgApacheHarmonySecurityAsn1ASN1StringType : OrgApacheHarmonySecurityAsn1ASN1Type

#pragma mark Public

- (instancetype)initWithInt:(jint)tagNumber;

/*!
 @brief Tests provided identifier.
 @param identifier identifier to be verified
 @return true if identifier correspond to primitive or constructed
 identifier of this ASN.1 string type, otherwise false
 */
- (jboolean)checkTagWithInt:(jint)identifier;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Extracts String object from BER input stream.
 */
- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1StringType)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_BMPSTRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, BMPSTRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_IA5STRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, IA5STRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_GENERALSTRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, GENERALSTRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_PRINTABLESTRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, PRINTABLESTRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_TELETEXSTRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, TELETEXSTRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_UNIVERSALSTRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, UNIVERSALSTRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1StringType *OrgApacheHarmonySecurityAsn1ASN1StringType_UTF8STRING_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1StringType, UTF8STRING_, OrgApacheHarmonySecurityAsn1ASN1StringType *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1StringType_initWithInt_(OrgApacheHarmonySecurityAsn1ASN1StringType *self, jint tagNumber);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1StringType)

#endif // _OrgApacheHarmonySecurityAsn1ASN1StringType_H_
