//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ClosedByInterruptException.java
//

#ifndef _JavaNioChannelsClosedByInterruptException_H_
#define _JavaNioChannelsClosedByInterruptException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/nio/channels/AsynchronousCloseException.h>

/*!
 @brief A <code>ClosedByInterruptException</code> is thrown when a thread is interrupted
 in a blocking I/O operation.
 <p>
 When the thread is interrupted by a call to <code>interrupt()</code>, it closes
 the channel, sets the interrupt status of the thread to <code>true</code> and
 throws a <code>ClosedByInterruptException</code>.
 */
@interface JavaNioChannelsClosedByInterruptException : JavaNioChannelsAsynchronousCloseException

#pragma mark Public

/*!
 @brief Constructs a <code>ClosedByInterruptException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsClosedByInterruptException)

FOUNDATION_EXPORT void JavaNioChannelsClosedByInterruptException_init(JavaNioChannelsClosedByInterruptException *self);

FOUNDATION_EXPORT JavaNioChannelsClosedByInterruptException *new_JavaNioChannelsClosedByInterruptException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsClosedByInterruptException)

#endif // _JavaNioChannelsClosedByInterruptException_H_
