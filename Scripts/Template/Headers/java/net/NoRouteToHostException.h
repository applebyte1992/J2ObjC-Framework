//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/NoRouteToHostException.java
//

#ifndef _JavaNetNoRouteToHostException_H_
#define _JavaNetNoRouteToHostException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/net/SocketException.h>

@class JavaLangThrowable;

/*!
 @brief The <code>NoRouteToHostException</code> will be thrown while attempting to connect
 to a remote host but the host cannot be reached for instance because of a
 badly configured router or a blocking firewall.
 <p>Most applications <strong>should not</strong> catch this exception; it is
 more robust to catch the superclass <code>SocketException</code>.
 */
@interface JavaNetNoRouteToHostException : JavaNetSocketException

#pragma mark Public

/*!
 @brief Constructs a new instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new instance with given detail message and cause.
  internal use only
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetNoRouteToHostException)

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_init(JavaNetNoRouteToHostException *self);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_initWithNSString_(JavaNetNoRouteToHostException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_initWithNSString_withJavaLangThrowable_(JavaNetNoRouteToHostException *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetNoRouteToHostException)

#endif // _JavaNetNoRouteToHostException_H_
