//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllegalFormatException.java
//

#ifndef _JavaUtilIllegalFormatException_H_
#define _JavaUtilIllegalFormatException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/lang/IllegalArgumentException.h>

/*!
 @brief An <code>IllegalFormatException</code> is thrown when a format string that
 contains either an illegal syntax or format specifier is transferred as a
 parameter.
 Only subclasses inheriting explicitly from this exception are
 allowed to be instantiated.
 */
@interface JavaUtilIllegalFormatException : JavaLangIllegalArgumentException < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatException_init(JavaUtilIllegalFormatException *self);

FOUNDATION_EXPORT JavaUtilIllegalFormatException *new_JavaUtilIllegalFormatException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatException)

#endif // _JavaUtilIllegalFormatException_H_
