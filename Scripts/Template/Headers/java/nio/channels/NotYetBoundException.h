//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/NotYetBoundException.java
//

#ifndef _JavaNioChannelsNotYetBoundException_H_
#define _JavaNioChannelsNotYetBoundException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/IllegalStateException.h>

/*!
 @brief A <code>NotYetBoundException</code> is thrown if the server socket channel is not
 bound before an I/O operation is made.
 */
@interface JavaNioChannelsNotYetBoundException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>NotYetBoundException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNotYetBoundException)

FOUNDATION_EXPORT void JavaNioChannelsNotYetBoundException_init(JavaNioChannelsNotYetBoundException *self);

FOUNDATION_EXPORT JavaNioChannelsNotYetBoundException *new_JavaNioChannelsNotYetBoundException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNotYetBoundException)

#endif // _JavaNioChannelsNotYetBoundException_H_
