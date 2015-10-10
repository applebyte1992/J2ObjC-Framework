//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/InflaterOutputStream.java
//

#ifndef _JavaUtilZipInflaterOutputStream_H_
#define _JavaUtilZipInflaterOutputStream_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/FilterOutputStream.h>

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaUtilZipInflater;

/*!
 @brief An <code>OutputStream</code> filter to decompress data.
 Callers write
 compressed data in the "deflate" format, and uncompressed data is
 written to the underlying stream.
 @since 1.6
 */
@interface JavaUtilZipInflaterOutputStream : JavaIoFilterOutputStream {
 @public
  JavaUtilZipInflater *inf_;
  IOSByteArray *buf_;
}

#pragma mark Public

/*!
 @brief Constructs an <code>InflaterOutputStream</code> with a new <code>Inflater</code> and an
 implementation-defined default internal buffer size.
 <code>out</code> is a destination
 for uncompressed data, and compressed data will be written to this stream.
 @param outArg the destination <code>OutputStream</code>
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Constructs an <code>InflaterOutputStream</code> with the given <code>Inflater</code> and an
 implementation-defined default internal buffer size.
 <code>out</code> is a destination
 for uncompressed data, and compressed data will be written to this stream.
 @param outArg the destination <code>OutputStream</code>
 @param inf the <code>Inflater</code> to be used for decompression
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                   withJavaUtilZipInflater:(JavaUtilZipInflater *)inf;

/*!
 @brief Constructs an <code>InflaterOutputStream</code> with the given <code>Inflater</code> and
 given internal buffer size.
 <code>out</code> is a destination
 for uncompressed data, and compressed data will be written to this stream.
 @param outArg the destination <code>OutputStream</code>
 @param inf the <code>Inflater</code> to be used for decompression
 @param bufferSize the length in bytes of the internal buffer
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                   withJavaUtilZipInflater:(JavaUtilZipInflater *)inf
                                   withInt:(jint)bufferSize;

/*!
 @brief Writes remaining data into the output stream and closes the underlying
 output stream.
 */
- (void)close;

/*!
 @brief Finishes writing current uncompressed data into the InflaterOutputStream
 without closing it.
 @throws IOException if an I/O error occurs, or the stream has been closed
 */
- (void)finish;

- (void)flush;

/*!
 @brief Writes to the decompressing output stream.
 The <code>bytes</code> array should contain
 compressed input. The corresponding uncompressed data will be written to the underlying
 stream.
 @throws IOException if an I/O error occurs, or the stream has been closed
 @throws ZipException if a zip exception occurs.
 @throws NullPointerException if <code>b == null</code>.
 @throws IndexOutOfBoundsException if <code>off < 0 || len < 0 || off + len > b.length</code>
 */
- (void)writeWithByteArray:(IOSByteArray *)bytes
                   withInt:(jint)offset
                   withInt:(jint)byteCount;

/*!
 @brief Writes a byte to the decompressing output stream.
 <code>b</code> should be a byte of
 compressed input. The corresponding uncompressed data will be written to the underlying
 stream.
 @param b the byte
 @throws IOException if an I/O error occurs, or the stream has been closed
 @throws ZipException if a zip exception occurs.
 */
- (void)writeWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipInflaterOutputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipInflaterOutputStream, inf_, JavaUtilZipInflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipInflaterOutputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaUtilZipInflaterOutputStream_initWithJavaIoOutputStream_(JavaUtilZipInflaterOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaUtilZipInflaterOutputStream *new_JavaUtilZipInflaterOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipInflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipInflater_(JavaUtilZipInflaterOutputStream *self, JavaIoOutputStream *outArg, JavaUtilZipInflater *inf);

FOUNDATION_EXPORT JavaUtilZipInflaterOutputStream *new_JavaUtilZipInflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipInflater_(JavaIoOutputStream *outArg, JavaUtilZipInflater *inf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipInflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipInflater_withInt_(JavaUtilZipInflaterOutputStream *self, JavaIoOutputStream *outArg, JavaUtilZipInflater *inf, jint bufferSize);

FOUNDATION_EXPORT JavaUtilZipInflaterOutputStream *new_JavaUtilZipInflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipInflater_withInt_(JavaIoOutputStream *outArg, JavaUtilZipInflater *inf, jint bufferSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipInflaterOutputStream)

#endif // _JavaUtilZipInflaterOutputStream_H_
