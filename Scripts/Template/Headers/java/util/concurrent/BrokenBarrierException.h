//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/BrokenBarrierException.java
//

#ifndef _JavaUtilConcurrentBrokenBarrierException_H_
#define _JavaUtilConcurrentBrokenBarrierException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Exception.h>

/*!
 @brief Exception thrown when a thread tries to wait upon a barrier that is
 in a broken state, or which enters the broken state while the thread
 is waiting.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentBrokenBarrierException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a <code>BrokenBarrierException</code> with no specified detail
 message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>BrokenBarrierException</code> with the specified
 detail message.
 @param message the detail message
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentBrokenBarrierException)

FOUNDATION_EXPORT void JavaUtilConcurrentBrokenBarrierException_init(JavaUtilConcurrentBrokenBarrierException *self);

FOUNDATION_EXPORT JavaUtilConcurrentBrokenBarrierException *new_JavaUtilConcurrentBrokenBarrierException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentBrokenBarrierException_initWithNSString_(JavaUtilConcurrentBrokenBarrierException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentBrokenBarrierException *new_JavaUtilConcurrentBrokenBarrierException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentBrokenBarrierException)

#endif // _JavaUtilConcurrentBrokenBarrierException_H_
