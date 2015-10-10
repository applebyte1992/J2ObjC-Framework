//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Readable.java
//

#ifndef _JavaLangReadable_H_
#define _JavaLangReadable_H_

#include <j2objc/J2ObjC_header.h>

@class JavaNioCharBuffer;

/*!
 @brief Represents a sequence of characters that can be incrementally read (copied)
 into a <code>CharBuffer</code>.
 */
@protocol JavaLangReadable < NSObject, JavaObject >

/*!
 @brief Reads characters into the specified <code>CharBuffer</code>.
 The maximum
 number of characters read is <code>CharBuffer.remaining()</code>.
 @param cb
 the buffer to be filled with characters read.
 @return the number of characters actually read, or -1 if this
 <code>Readable</code> reaches its end
 @throws IOException
 if an I/O error occurs.
 */
- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)cb;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReadable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReadable)

#endif // _JavaLangReadable_H_
