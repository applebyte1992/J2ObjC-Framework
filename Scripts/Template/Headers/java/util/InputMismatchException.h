//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/InputMismatchException.java
//

#ifndef _JavaUtilInputMismatchException_H_
#define _JavaUtilInputMismatchException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/util/NoSuchElementException.h>

/*!
 @brief An <code>InputMismatchException</code> is thrown by a scanner to indicate that the
 next token does not match or is out of range for the type specified in the
 pattern.
 */
@interface JavaUtilInputMismatchException : JavaUtilNoSuchElementException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>InputMismatchException</code> with the current stack
 trace filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>InputMismatchException</code> with the stack trace
 filled in and <code>msg</code> as its error message.
 @param msg
 the specified error message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilInputMismatchException)

FOUNDATION_EXPORT void JavaUtilInputMismatchException_init(JavaUtilInputMismatchException *self);

FOUNDATION_EXPORT JavaUtilInputMismatchException *new_JavaUtilInputMismatchException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilInputMismatchException_initWithNSString_(JavaUtilInputMismatchException *self, NSString *msg);

FOUNDATION_EXPORT JavaUtilInputMismatchException *new_JavaUtilInputMismatchException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilInputMismatchException)

#endif // _JavaUtilInputMismatchException_H_
