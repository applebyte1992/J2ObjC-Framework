//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/fortress/SecurityAccess.java
//

#ifndef _OrgApacheHarmonySecurityFortressSecurityAccess_H_
#define _OrgApacheHarmonySecurityFortressSecurityAccess_H_

#include <j2objc/J2ObjC_header.h>

@class JavaSecurityProvider;
@class JavaSecurityProvider_Service;
@protocol JavaUtilList;

/*!
 @author Boris V. Kuznetsov
 @version $Revision$
 */

/*!
 @brief This interface provides access to package visible api in java.security
 */
@protocol OrgApacheHarmonySecurityFortressSecurityAccess < NSObject, JavaObject >

/*!
 @brief Access to Security.renumProviders()
 */
- (void)renumProviders;

/*!
 @brief Access to Service.getAliases()
 @param s
 */
- (id<JavaUtilList>)getAliasesWithJavaSecurityProvider_Service:(JavaSecurityProvider_Service *)s;

/*!
 @brief Access to Provider.getService(String type)
 @param p
 @param type
 */
- (JavaSecurityProvider_Service *)getServiceWithJavaSecurityProvider:(JavaSecurityProvider *)p
                                                        withNSString:(NSString *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressSecurityAccess)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressSecurityAccess)

#endif // _OrgApacheHarmonySecurityFortressSecurityAccess_H_
