//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/AlreadyConnectedException.java
//

#ifndef _JavaNioChannelsAlreadyConnectedException_H_
#define _JavaNioChannelsAlreadyConnectedException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/IllegalStateException.h>

/*!
 @brief An <code>AlreadyConnectedException</code> is thrown when an attempt is made to
 connect a SocketChannel that is already connected.
 */
@interface JavaNioChannelsAlreadyConnectedException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an <code>AlreadyConnectedException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsAlreadyConnectedException)

FOUNDATION_EXPORT void JavaNioChannelsAlreadyConnectedException_init(JavaNioChannelsAlreadyConnectedException *self);

FOUNDATION_EXPORT JavaNioChannelsAlreadyConnectedException *new_JavaNioChannelsAlreadyConnectedException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsAlreadyConnectedException)

#endif // _JavaNioChannelsAlreadyConnectedException_H_
