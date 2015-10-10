//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/DefaultSSLServerSocketFactory.java
//

#ifndef _JavaxNetSslDefaultSSLServerSocketFactory_H_
#define _JavaxNetSslDefaultSSLServerSocketFactory_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/javax/net/ssl/SSLServerSocketFactory.h>

@class IOSObjectArray;
@class JavaNetInetAddress;
@class JavaNetServerSocket;

/*!
 @brief Default inoperative implementation of javax.net.ssl.SSLServerSocketFactory
 */
@interface JavaxNetSslDefaultSSLServerSocketFactory : JavaxNetSslSSLServerSocketFactory

#pragma mark Public

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog
                            withJavaNetInetAddress:(JavaNetInetAddress *)iAddress;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)mes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslDefaultSSLServerSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(JavaxNetSslDefaultSSLServerSocketFactory *self, NSString *mes);

FOUNDATION_EXPORT JavaxNetSslDefaultSSLServerSocketFactory *new_JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(NSString *mes) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslDefaultSSLServerSocketFactory)

#endif // _JavaxNetSslDefaultSSLServerSocketFactory_H_
