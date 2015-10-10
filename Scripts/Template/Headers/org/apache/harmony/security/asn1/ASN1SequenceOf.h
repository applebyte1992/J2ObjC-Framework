//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1SequenceOf.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1SequenceOf_H_
#define _OrgApacheHarmonySecurityAsn1ASN1SequenceOf_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/apache/harmony/security/asn1/ASN1ValueCollection.h>

@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class represents ASN.1 Sequence OF type.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1SequenceOf : OrgApacheHarmonySecurityAsn1ASN1ValueCollection

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)type;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1SequenceOf)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1SequenceOf_initWithOrgApacheHarmonySecurityAsn1ASN1Type_(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *self, OrgApacheHarmonySecurityAsn1ASN1Type *type);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1SequenceOf *new_OrgApacheHarmonySecurityAsn1ASN1SequenceOf_initWithOrgApacheHarmonySecurityAsn1ASN1Type_(OrgApacheHarmonySecurityAsn1ASN1Type *type) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1SequenceOf)

#endif // _OrgApacheHarmonySecurityAsn1ASN1SequenceOf_H_
