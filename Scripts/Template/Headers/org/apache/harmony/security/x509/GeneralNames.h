//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/GeneralNames.java
//

#ifndef _OrgApacheHarmonySecurityX509GeneralNames_H_
#define _OrgApacheHarmonySecurityX509GeneralNames_H_

#include <j2objc/J2ObjC_header.h>

@class IOSByteArray;
@class JavaLangStringBuilder;
@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityX509GeneralName;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

/*!
 @author Alexander Y. Kleymenov
 @version $Revision$
 */

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with the GeneralNames structure which is a part of X.509 certificate
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

   GeneralNames ::= SEQUENCE SIZE (1..MAX) OF GeneralName
  
@endcode
 */
@interface OrgApacheHarmonySecurityX509GeneralNames : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)generalNames;

- (void)addNameWithOrgApacheHarmonySecurityX509GeneralName:(OrgApacheHarmonySecurityX509GeneralName *)name;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

/*!
 @brief Returns ASN.1 encoded form of this X.509 GeneralNames value.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the list of values.
 */
- (id<JavaUtilList>)getNames;

/*!
 @brief Returns the collection of pairs: (Integer (tag), Object (name value))
 */
- (id<JavaUtilCollection>)getPairsList;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509GeneralNames)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Type *OrgApacheHarmonySecurityX509GeneralNames_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralNames, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralNames_init(OrgApacheHarmonySecurityX509GeneralNames *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralNames *new_OrgApacheHarmonySecurityX509GeneralNames_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralNames_initWithJavaUtilList_(OrgApacheHarmonySecurityX509GeneralNames *self, id<JavaUtilList> generalNames);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralNames *new_OrgApacheHarmonySecurityX509GeneralNames_initWithJavaUtilList_(id<JavaUtilList> generalNames) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509GeneralNames)

#endif // _OrgApacheHarmonySecurityX509GeneralNames_H_
