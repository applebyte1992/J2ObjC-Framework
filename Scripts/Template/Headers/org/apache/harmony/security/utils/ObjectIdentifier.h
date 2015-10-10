//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/utils/ObjectIdentifier.java
//

#ifndef _OrgApacheHarmonySecurityUtilsObjectIdentifier_H_
#define _OrgApacheHarmonySecurityUtilsObjectIdentifier_H_

#include <j2objc/J2ObjC_header.h>

@class IOSIntArray;

/*!
 @author Alexander V. Esin, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief Instance of this class represents ObjectIdentifier (OID).
 OID is represented as a sequence of subidentifier.
 Each subidentifier is represented as non negative integer value.
 There are at least 2 subidentifiers in the sequence.
 Valid values for first subidentifier are 0, 1 and 2.
 If the first subidentifier has 0 or 1 value the second
 subidentifier MUST be less then 40.
 */
@interface OrgApacheHarmonySecurityUtilsObjectIdentifier : NSObject

#pragma mark Public

/*!
 @brief Creates ObjectIdentifier(OID) from array of integers.
 @param oid - array of integers
 @return - OID object
 @throws NullPointerException     - if oid is null
 @throws IllegalArgumentException - if oid is invalid
 */
- (instancetype)initWithIntArray:(IOSIntArray *)oid;

/*!
 @brief Creates ObjectIdentifier(OID) from array of integers.
 @param oid - array of integers
 @param name - name of OID
 @param oidGroup - OID's group. Is used to separate different OID's
 @return - OID object
 @throws NullPointerException     - if oid is null
 @throws IllegalArgumentException - if oid is invalid
 */
- (instancetype)initWithIntArray:(IOSIntArray *)oid
                    withNSString:(NSString *)name
                          withId:(id)oidGroup;

/*!
 @brief Compares object with OID for equality.
 @return true if object is ObjectIdentifier and it has the same
 representation as array of integers, otherwise false
 */
- (jboolean)isEqual:(id)o;

/*!
 @brief Gets OID's group.
 @return group
 */
- (id)getGroup;

/*!
 @brief Gets OID's name.
 @return name
 */
- (NSString *)getName;

/*!
 @brief Gets OID.
 @return oid
 */
- (IOSIntArray *)getOid;

/*!
 */
- (NSUInteger)hash;

/*!
 @brief Returns hash code for array of integers
 @param oid - array of integers
 */
+ (jint)hashIntArrayWithIntArray:(IOSIntArray *)array;

/*!
 @brief Add "OID." to the beginning of string representation.
 @return oid as string
 */
- (NSString *)toOIDString;

/*!
 @brief Overrides Object.toString()
 @return oid as string
 */
- (NSString *)description;

/*!
 @brief Validates ObjectIdentifier (OID).
 @param oid - oid as array of integers
 @throws NullPointerException     - if oid is null
 @throws IllegalArgumentException - if oid is invalid
 */
+ (void)validateOidWithIntArray:(IOSIntArray *)oid;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityUtilsObjectIdentifier)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityUtilsObjectIdentifier_initWithIntArray_(OrgApacheHarmonySecurityUtilsObjectIdentifier *self, IOSIntArray *oid);

FOUNDATION_EXPORT OrgApacheHarmonySecurityUtilsObjectIdentifier *new_OrgApacheHarmonySecurityUtilsObjectIdentifier_initWithIntArray_(IOSIntArray *oid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityUtilsObjectIdentifier_initWithIntArray_withNSString_withId_(OrgApacheHarmonySecurityUtilsObjectIdentifier *self, IOSIntArray *oid, NSString *name, id oidGroup);

FOUNDATION_EXPORT OrgApacheHarmonySecurityUtilsObjectIdentifier *new_OrgApacheHarmonySecurityUtilsObjectIdentifier_initWithIntArray_withNSString_withId_(IOSIntArray *oid, NSString *name, id oidGroup) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityUtilsObjectIdentifier_validateOidWithIntArray_(IOSIntArray *oid);

FOUNDATION_EXPORT jint OrgApacheHarmonySecurityUtilsObjectIdentifier_hashIntArrayWithIntArray_(IOSIntArray *array);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityUtilsObjectIdentifier)

#endif // _OrgApacheHarmonySecurityUtilsObjectIdentifier_H_
