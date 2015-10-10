//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/OutOfMemoryError.java
//

#ifndef _JavaLangOutOfMemoryError_H_
#define _JavaLangOutOfMemoryError_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/VirtualMachineError.h>

/*!
 @brief Thrown when a request for memory is made that can not be satisfied using the
 available platform resources.
 Such a request may be made by both the running
 application or by an internal function of the VM.
 */
@interface JavaLangOutOfMemoryError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs a new <code>OutOfMemoryError</code> that includes the current stack
 trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>OutOfMemoryError</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangOutOfMemoryError)

FOUNDATION_EXPORT void JavaLangOutOfMemoryError_init(JavaLangOutOfMemoryError *self);

FOUNDATION_EXPORT JavaLangOutOfMemoryError *new_JavaLangOutOfMemoryError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangOutOfMemoryError_initWithNSString_(JavaLangOutOfMemoryError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangOutOfMemoryError *new_JavaLangOutOfMemoryError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangOutOfMemoryError)

#endif // _JavaLangOutOfMemoryError_H_
