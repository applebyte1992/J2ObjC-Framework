//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ByteArrayOutputStream.java
//

#ifndef _JavaIoByteArrayOutputStream_H_
#define _JavaIoByteArrayOutputStream_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/OutputStream.h>

@class IOSByteArray;

/*!
 @brief A specialized <code>OutputStream</code> for class for writing content to an
 (internal) byte array.
 As bytes are written to this stream, the byte array
 may be expanded to hold more bytes. When the writing is considered to be
 finished, a copy of the byte array can be requested from the class.
 */
@interface JavaIoByteArrayOutputStream : JavaIoOutputStream {
 @public
  /*!
   @brief The byte array containing the bytes written.
   */
  IOSByteArray *buf_;
  /*!
   @brief The number of bytes written.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Constructs a new ByteArrayOutputStream with a default size of 32 bytes.
 If more than 32 bytes are written to this instance, the underlying byte
 array will expand.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ByteArrayOutputStream</code> with a default size of
 <code>size</code> bytes.
 If more than <code>size</code> bytes are written to this
 instance, the underlying byte array will expand.
 @param size
 initial size for the underlying byte array, must be
 non-negative.
 @throws IllegalArgumentException
 if <code>size</code> < 0.
 */
- (instancetype)initWithInt:(jint)size;

/*!
 @brief Closes this stream.
 This releases system resources used for this stream.
 @throws IOException
 if an error occurs while attempting to close this stream.
 */
- (void)close;

/*!
 @brief Resets this stream to the beginning of the underlying byte array.
 All
 subsequent writes will overwrite any bytes previously stored in this
 stream.
 */
- (void)reset;

/*!
 @brief Returns the total number of bytes written to this stream so far.
 @return the number of bytes written to this stream.
 */
- (jint)size;

/*!
 @brief Returns the contents of this ByteArrayOutputStream as a byte array.
 Any
 changes made to the receiver after returning will not be reflected in the
 byte array returned to the caller.
 @return this stream's current contents as a byte array.
 */
- (IOSByteArray *)toByteArray;

/*!
 @brief Returns the contents of this ByteArrayOutputStream as a string.
 Any
 changes made to the receiver after returning will not be reflected in the
 string returned to the caller.
 @return this stream's current contents as a string.
 */
- (NSString *)description;

/*!
 @brief Returns the contents of this ByteArrayOutputStream as a string.
 Each byte
 <code>b</code> in this stream is converted to a character <code>c</code> using the
 following function:
 <code>c == (char)(((hibyte & 0xff) << 8) | (b & 0xff))</code>. This method is
 deprecated and either <code>toString()</code> or <code>toString(String)</code>
 should be used.
 @param hibyte
 the high byte of each resulting Unicode character.
 @return this stream's current contents as a string with the high byte set
 to <code>hibyte</code>.
 */
- (NSString *)toStringWithInt:(jint)hibyte;

/*!
 @brief Returns the contents of this ByteArrayOutputStream as a string converted
 according to the encoding declared in <code>charsetName</code>.
 @param charsetName
 a string representing the encoding to use when translating
 this stream to a string.
 @return this stream's current contents as an encoded string.
 @throws UnsupportedEncodingException
 if the provided encoding is not supported.
 */
- (NSString *)toStringWithNSString:(NSString *)charsetName;

/*!
 @brief Writes <code>count</code> bytes from the byte array <code>buffer</code> starting at
 offset <code>index</code> to this stream.
 @param buffer
 the buffer to be written.
 @param offset
 the initial position in <code>buffer</code> to retrieve bytes.
 @param len
 the number of bytes of <code>buffer</code> to write.
 @throws NullPointerException
 if <code>buffer</code> is <code>null</code>.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>len < 0</code>, or if
 <code>offset + len</code> is greater than the length of
 <code>buffer</code>.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)len;

/*!
 @brief Writes the specified byte <code>oneByte</code> to the OutputStream.
 Only the
 low order byte of <code>oneByte</code> is written.
 @param oneByte
 the byte to be written.
 */
- (void)writeWithInt:(jint)oneByte;

/*!
 @brief Takes the contents of this stream and writes it to the output stream
 <code>out</code>.
 @param outArg
 an OutputStream on which to write the contents of this stream.
 @throws IOException
 if an error occurs while writing to <code>out</code>.
 */
- (void)writeToWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoByteArrayOutputStream)

J2OBJC_FIELD_SETTER(JavaIoByteArrayOutputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoByteArrayOutputStream_init(JavaIoByteArrayOutputStream *self);

FOUNDATION_EXPORT JavaIoByteArrayOutputStream *new_JavaIoByteArrayOutputStream_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoByteArrayOutputStream_initWithInt_(JavaIoByteArrayOutputStream *self, jint size);

FOUNDATION_EXPORT JavaIoByteArrayOutputStream *new_JavaIoByteArrayOutputStream_initWithInt_(jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoByteArrayOutputStream)

#endif // _JavaIoByteArrayOutputStream_H_
