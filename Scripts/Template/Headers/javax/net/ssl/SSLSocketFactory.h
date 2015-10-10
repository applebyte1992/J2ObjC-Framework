//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSocketFactory.java
//

#ifndef _JavaxNetSslSSLSocketFactory_H_
#define _JavaxNetSslSSLSocketFactory_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/javax/net/SocketFactory.h>

@class IOSObjectArray;
@class JavaNetSocket;

/*!
 @brief The abstract factory implementation to create <code>SSLSocket</code>s.
 */
@interface JavaxNetSslSSLSocketFactory : JavaxNetSocketFactory

#pragma mark Public

/*!
 @brief Creates a new <code>SSLSocketFactory</code>.
 */
- (instancetype)init;

/*!
 @brief Creates an <code>SSLSocket</code> over the specified socket that is connected
 to the specified host at the specified port.
 @param s
 the socket.
 @param host
 the host.
 @param port
 the port number.
 @param autoClose
 <code>true</code> if socket <code>s</code> should be closed when the
 created socket is closed, <code>false</code> if the socket
 <code>s</code> should be left open.
 @return the creates ssl socket.
 @throws IOException
 if creating the socket fails.
 @throws java.net.UnknownHostException
 if the host is unknown.
 */
- (JavaNetSocket *)createSocketWithJavaNetSocket:(JavaNetSocket *)s
                                    withNSString:(NSString *)host
                                         withInt:(jint)port
                                     withBoolean:(jboolean)autoClose;

/*!
 @brief Returns the default <code>SSLSocketFactory</code> instance.
 The default is
 defined by the security property <code>'ssl.SocketFactory.provider'</code>.
 @return the default ssl socket factory instance.
 */
+ (JavaxNetSocketFactory *)getDefault;

/*!
 @brief Returns the names of the cipher suites that are enabled by default.
 @return the names of the cipher suites that are enabled by default.
 */
- (IOSObjectArray *)getDefaultCipherSuites;

/*!
 @brief Returns the names of the cipher suites that are supported and could be
 enabled for an SSL connection.
 @return the names of the cipher suites that are supported.
 */
- (IOSObjectArray *)getSupportedCipherSuites;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSocketFactory)

FOUNDATION_EXPORT JavaxNetSocketFactory *JavaxNetSslSSLSocketFactory_getDefault();

FOUNDATION_EXPORT void JavaxNetSslSSLSocketFactory_init(JavaxNetSslSSLSocketFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSocketFactory)

#endif // _JavaxNetSslSSLSocketFactory_H_
