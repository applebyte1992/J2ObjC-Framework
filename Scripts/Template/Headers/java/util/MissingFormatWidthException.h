//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/MissingFormatWidthException.java
//

#ifndef _JavaUtilMissingFormatWidthException_H_
#define _JavaUtilMissingFormatWidthException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/util/IllegalFormatException.h>

/*!
 @brief A <code>MissingFormatWidthException</code> will be thrown if the format width is
 missing but is required.
 */
@interface JavaUtilMissingFormatWidthException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs a new <code>MissingFormatWidthException</code> with the specified
 format specifier.
 @param s
 the specified format specifier.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Returns the format specifier associated with the exception.
 @return the format specifier associated with the exception.
 */
- (NSString *)getFormatSpecifier;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMissingFormatWidthException)

FOUNDATION_EXPORT void JavaUtilMissingFormatWidthException_initWithNSString_(JavaUtilMissingFormatWidthException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilMissingFormatWidthException *new_JavaUtilMissingFormatWidthException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMissingFormatWidthException)

#endif // _JavaUtilMissingFormatWidthException_H_
