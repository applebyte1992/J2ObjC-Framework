//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/CoderMalfunctionError.java
//

#ifndef _JavaNioCharsetCoderMalfunctionError_H_
#define _JavaNioCharsetCoderMalfunctionError_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Error.h>

@class JavaLangException;

/*!
 @brief A <code>CoderMalfunctionError</code> is thrown when the encoder/decoder is
 malfunctioning.
 */
@interface JavaNioCharsetCoderMalfunctionError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new <code>CoderMalfunctionError</code>.
 @param ex
 the original exception thrown by the encoder/decoder.
 */
- (instancetype)initWithJavaLangException:(JavaLangException *)ex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetCoderMalfunctionError)

FOUNDATION_EXPORT void JavaNioCharsetCoderMalfunctionError_initWithJavaLangException_(JavaNioCharsetCoderMalfunctionError *self, JavaLangException *ex);

FOUNDATION_EXPORT JavaNioCharsetCoderMalfunctionError *new_JavaNioCharsetCoderMalfunctionError_initWithJavaLangException_(JavaLangException *ex) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCoderMalfunctionError)

#endif // _JavaNioCharsetCoderMalfunctionError_H_
