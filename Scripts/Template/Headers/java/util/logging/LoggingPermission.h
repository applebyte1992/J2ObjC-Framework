//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/LoggingPermission.java
//

#ifndef _JavaUtilLoggingLoggingPermission_H_
#define _JavaUtilLoggingLoggingPermission_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/security/BasicPermission.h>
#include <j2objc/java/security/Guard.h>

@class JavaSecurityPermission;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaUtilLoggingLoggingPermission : JavaSecurityBasicPermission < JavaSecurityGuard, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLoggingPermission)

FOUNDATION_EXPORT void JavaUtilLoggingLoggingPermission_initWithNSString_withNSString_(JavaUtilLoggingLoggingPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaUtilLoggingLoggingPermission *new_JavaUtilLoggingLoggingPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLoggingPermission)

#endif // _JavaUtilLoggingLoggingPermission_H_
