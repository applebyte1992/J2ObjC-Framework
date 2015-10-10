//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StringReader.java
//

#ifndef _JavaIoStringReader_H_
#define _JavaIoStringReader_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Reader.h>

@class IOSCharArray;

/*!
 @brief A specialized <code>Reader</code> that reads characters from a <code>String</code> in
 a sequential manner.
 */
@interface JavaIoStringReader : JavaIoReader

#pragma mark Public

/*!
 @brief Construct a new <code>StringReader</code> with <code>str</code> as source.
 The size
 of the reader is set to the <code>length()</code> of the string and the Object
 to synchronize access through is set to <code>str</code>.
 @param str
 the source string for this reader.
 */
- (instancetype)initWithNSString:(NSString *)str;

/*!
 @brief Closes this reader.
 Once it is closed, read operations on this reader
 will throw an <code>IOException</code>. Only the first invocation of this
 method has any effect.
 */
- (void)close;

/*!
 @brief Sets a mark position in this reader.
 The parameter <code>readLimit</code> is
 ignored for this class. Calling <code>reset()</code> will reposition the
 reader back to the marked position.
 @param readLimit
 ignored for <code>StringReader</code> instances.
 @throws IllegalArgumentException
 if <code>readLimit < 0</code>.
 @throws IOException
 if this reader is closed.
 */
- (void)markWithInt:(jint)readLimit;

/*!
 @brief Indicates whether this reader supports the <code>mark()</code> and <code>reset()</code>
  methods.
 This implementation returns <code>true</code>.
 @return always <code>true</code>.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single character from the source string and returns it as an
 integer with the two higher-order bytes set to 0.
 Returns -1 if the end
 of the source string has been reached.
 @return the character read or -1 if the end of the source string has been
 reached.
 @throws IOException
 if this reader is closed.
 */
- (jint)read;

/*!
 @brief Reads up to <code>count</code> characters from the source string and stores
 them at <code>offset</code> in the character array <code>buffer</code>.
 Returns the
 number of characters actually read or -1 if the end of the source string
 has been reached.
 @throws IndexOutOfBoundsException
 if <code>offset < 0 || count < 0 || offset + count > buffer.length</code>.
 @throws IOException
 if this reader is closed.
 */
- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Indicates whether this reader is ready to be read without blocking.
 This
 implementation always returns <code>true</code>.
 @return always <code>true</code>.
 @throws IOException
 if this reader is closed.
 */
- (jboolean)ready;

/*!
 @brief Resets this reader's position to the last <code>mark()</code> location.
 Invocations of <code>read()</code> and <code>skip()</code> will occur from this new
 location. If this reader has not been marked, it is reset to the
 beginning of the source string.
 @throws IOException
 if this reader is closed.
 */
- (void)reset;

/*!
 @brief Moves <code>charCount</code> characters in the source string.
 Unlike the <code>overridden method</code>
 , this method may skip negative skip
 distances: this rewinds the input so that characters may be read again.
 When the end of the source string has been reached, the input cannot be
 rewound.
 @param charCount
 the maximum number of characters to skip. Positive values skip
 forward; negative values skip backward.
 @return the number of characters actually skipped. This is bounded below
 by the number of characters already read and above by the
 number of characters remaining:<br> <code>-(num chars already
 read) <= distance skipped <= num chars remaining</code>
 .
 @throws IOException
 if this reader is closed.
 */
- (jlong)skipWithLong:(jlong)charCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStringReader)

FOUNDATION_EXPORT void JavaIoStringReader_initWithNSString_(JavaIoStringReader *self, NSString *str);

FOUNDATION_EXPORT JavaIoStringReader *new_JavaIoStringReader_initWithNSString_(NSString *str) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStringReader)

#endif // _JavaIoStringReader_H_
