//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLContextSpi.java
//

#ifndef _JavaxNetSslSSLContextSpi_H_
#define _JavaxNetSslSSLContextSpi_H_

#include <j2objc/J2ObjC_header.h>

@class IOSObjectArray;
@class JavaSecuritySecureRandom;
@class JavaxNetSslSSLEngine;
@class JavaxNetSslSSLParameters;
@class JavaxNetSslSSLServerSocketFactory;
@class JavaxNetSslSSLSocketFactory;
@protocol JavaxNetSslSSLSessionContext;

/*!
 @brief The <i>Service Provider Interface</i> (SPI) for the <code>SSLContext</code> class.
 */
@interface JavaxNetSslSSLContextSpi : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>SSLContextSpi</code> instance.
 */
- (instancetype)init;

#pragma mark Protected

/*!
 @brief Creates an <code>SSLEngine</code> instance from this context.
 @return an <code>SSLEngine</code> instance from this context.
 @throws UnsupportedOperationException
 if the provider does not support the operation.
 */
- (JavaxNetSslSSLEngine *)engineCreateSSLEngine;

/*!
 @brief Creates an <code>SSLEngine</code> instance from this context with the
 specified hostname and port.
 @param host
 the name of the host
 @param port
 the port
 @return an <code>SSLEngine</code> instance from this context.
 @throws UnsupportedOperationException
 if the provider does not support the operation.
 */
- (JavaxNetSslSSLEngine *)engineCreateSSLEngineWithNSString:(NSString *)host
                                                    withInt:(jint)port;

/*!
 @brief Returns the SSL session context that encapsulates the set of SSL sessions
 that can be used for the client side of the SSL handshake.
 @return the SSL client session context for this context or <code>null</code>
 if the underlying provider does not provide an implementation of
 the <code>SSLSessionContext</code> interface.
 */
- (id<JavaxNetSslSSLSessionContext>)engineGetClientSessionContext;

/*!
 @brief Returns a new SSLParameters instance that includes the default
 SSL handshake parameters values including cipher suites,
 protocols, and client authentication.
 <p>The default implementation returns an SSLParameters with values
 based an SSLSocket created from this instances SocketFactory.
 @since 1.6
 */
- (JavaxNetSslSSLParameters *)engineGetDefaultSSLParameters;

/*!
 @brief Returns the SSL session context that encapsulates the set of SSL sessions
 that can be used for the server side of the SSL handshake.
 @return the SSL server session context for this context or <code>null</code>
 if the underlying provider does not provide an implementation of
 the <code>SSLSessionContext</code> interface.
 */
- (id<JavaxNetSslSSLSessionContext>)engineGetServerSessionContext;

/*!
 @brief Returns a server socket factory for this instance.
 @return a server socket factory for this instance.
 */
- (JavaxNetSslSSLServerSocketFactory *)engineGetServerSocketFactory;

/*!
 @brief Returns a socket factory for this instance.
 @return a socket factory for this instance.
 */
- (JavaxNetSslSSLSocketFactory *)engineGetSocketFactory;

/*!
 @brief Returns a new SSLParameters instance that includes all
 supported cipher suites and protocols.
 <p>The default implementation returns an SSLParameters with values
 based an SSLSocket created from this instances SocketFactory.
 @since 1.6
 */
- (JavaxNetSslSSLParameters *)engineGetSupportedSSLParameters;

/*!
 @brief Initializes this <code>SSLContext</code> instance.
 All of the arguments are
 optional, and the security providers will be searched for the required
 implementations of the needed algorithms.
 @param km
 the key sources or <code>null</code>.
 @param tm
 the trust decision sources or <code>null</code>.
 @param sr
 the randomness source or <code>null.</code>
 @throws KeyManagementException
 if initializing this instance fails.
 */
- (void)engineInitWithJavaxNetSslKeyManagerArray:(IOSObjectArray *)km
                withJavaxNetSslTrustManagerArray:(IOSObjectArray *)tm
                    withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)sr;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLContextSpi)

FOUNDATION_EXPORT void JavaxNetSslSSLContextSpi_init(JavaxNetSslSSLContextSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLContextSpi)

#endif // _JavaxNetSslSSLContextSpi_H_
