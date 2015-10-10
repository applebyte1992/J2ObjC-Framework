//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/RandomAccessFile.java
//

#ifndef _JavaIoRandomAccessFile_H_
#define _JavaIoRandomAccessFile_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Closeable.h>
#include <j2objc/java/io/DataInput.h>
#include <j2objc/java/io/DataOutput.h>

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNioChannelsFileChannel;

/*!
 @brief Allows reading from and writing to a file in a random-access manner.
 This is
 different from the uni-directional sequential access that a
 <code>FileInputStream</code> or <code>FileOutputStream</code> provides. If the file is
 opened in read/write mode, write operations are available as well. The
 position of the next read or write operation can be moved forwards and
 backwards after every operation.
 */
@interface JavaIoRandomAccessFile : NSObject < JavaIoDataInput, JavaIoDataOutput, JavaIoCloseable >

#pragma mark Public

/*!
 @brief Constructs a new <code>RandomAccessFile</code> based on <code>file</code> and opens
 it according to the access string in <code>mode</code>.
 <p><a id="accessmode"/>
 <code>mode</code> may have one of following values:
 <table border="0">
 <tr>
 <td><code>"r"</code></td>
 <td>The file is opened in read-only mode. An <code>IOException</code> is
 thrown if any of the <code>write</code> methods is called.</td>
 </tr>
 <tr>
 <td><code>"rw"</code></td>
 <td>The file is opened for reading and writing. If the file does not
 exist, it will be created.</td>
 </tr>
 <tr>
 <td><code>"rws"</code></td>
 <td>The file is opened for reading and writing. Every change of the
 file's content or metadata must be written synchronously to the target
 device.</td>
 </tr>
 <tr>
 <td><code>"rwd"</code></td>
 <td>The file is opened for reading and writing. Every change of the
 file's content must be written synchronously to the target device.</td>
 </tr>
 </table>
 @param file
 the file to open.
 @param mode
 the file access <a href="#accessmode">mode</a>, either <code>"r"</code>
 , <code>"rw"</code>, <code>"rws"</code> or <code>"rwd"</code>.
 @throws FileNotFoundException
 if the file cannot be opened or created according to <code>mode</code>
 .
 @throws IllegalArgumentException
 if <code>mode</code> is not <code>"r"</code>, <code>"rw"</code>, <code>"rws"</code>
  or <code>"rwd"</code>.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)mode;

/*!
 @brief Constructs a new <code>RandomAccessFile</code> based on the file named <code>fileName</code>
  and opens it according to the access string in <code>mode</code>.
 The file path may be specified absolutely or relative to the system
 property <code>"user.dir"</code>.
 @param fileName
 the name of the file to open.
 @param mode
 the file access <a href="#accessmode">mode</a>, either <code>"r"</code>
 , <code>"rw"</code>, <code>"rws"</code> or <code>"rwd"</code>.
 @throws FileNotFoundException
 if the file cannot be opened or created according to <code>mode</code>
 .
 @throws IllegalArgumentException
 if <code>mode</code> is not <code>"r"</code>, <code>"rw"</code>, <code>"rws"</code>
  or <code>"rwd"</code>.
 */
- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)mode;

/*!
 @brief Closes this file.
 @throws IOException
 if an error occurs while closing this file.
 */
- (void)close;

/*!
 @brief Gets this file's <code>FileChannel</code> object.
 <p>
 The file channel's <code>position</code> is the same
 as this file's file pointer offset (see <code>getFilePointer()</code>). Any
 changes made to this file's file pointer offset are also visible in the
 file channel's position and vice versa.
 @return this file's file channel instance.
 */
- (JavaNioChannelsFileChannel *)getChannel;

/*!
 @brief Gets this file's <code>FileDescriptor</code>.
 This represents the operating
 system resource for this random access file.
 @return this file's file descriptor object.
 @throws IOException
 if an error occurs while getting the file descriptor of this
 file.
 */
- (JavaIoFileDescriptor *)getFD;

/*!
 @brief Gets the current position within this file.
 All reads and
 writes take place at the current file pointer position.
 @return the current offset in bytes from the beginning of the file.
 @throws IOException
 if an error occurs while getting the file pointer of this
 file.
 */
- (jlong)getFilePointer;

/*!
 @brief Returns the length of this file in bytes.
 @return the file's length in bytes.
 @throws IOException
 if this file is closed or some other I/O error occurs.
 */
- (jlong)length;

/*!
 @brief Reads a single byte from the current position in this file and returns it
 as an integer in the range from 0 to 255.
 Returns -1 if the end of the
 file has been reached. Blocks until one byte has been read, the end of
 the file is detected, or an exception is thrown.
 @return the byte read or -1 if the end of the file has been reached.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)read;

/*!
 @brief Reads bytes from the current position in this file and stores them in the
 byte array <code>buffer</code>.
 The maximum number of bytes read corresponds
 to the size of <code>buffer</code>. Blocks until at least one byte has been
 read, the end of the file is detected, or an exception is thrown.
 Returns the number of bytes actually read or -1 if the end of the file
 has been reached. See also <code>readFully</code>.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Reads up to <code>byteCount</code> bytes from the current position in this file
 and stores them in the byte array <code>buffer</code> starting at <code>byteOffset</code>
 .
 Blocks until at least one byte has been
 read, the end of the file is detected, or an exception is thrown.
 Returns the number of bytes actually read or -1 if the end of the stream has been reached.
 See also <code>readFully</code>.
 @throws IndexOutOfBoundsException
 if <code>byteOffset < 0 || byteCount < 0 || byteOffset + byteCount > buffer.length</code>.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Reads a boolean from the current position in this file.
 Blocks until one
 byte has been read, the end of the file is reached or an exception is
 thrown.
 @return the next boolean value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jboolean)readBoolean;

/*!
 @brief Reads an 8-bit byte from the current position in this file.
 Blocks until
 one byte has been read, the end of the file is reached or an exception is
 thrown.
 @return the next signed 8-bit byte value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jbyte)readByte;

/*!
 @brief Reads a big-endian 16-bit character from the current position in this file.
 Blocks until
 two bytes have been read, the end of the file is reached or an exception is
 thrown.
 @return the next char value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jchar)readChar;

/*!
 @brief Reads a big-endian 64-bit double from the current position in this file.
 Blocks
 until eight bytes have been read, the end of the file is reached or an
 exception is thrown.
 @return the next double value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jdouble)readDouble;

/*!
 @brief Reads a big-endian 32-bit float from the current position in this file.
 Blocks
 until four bytes have been read, the end of the file is reached or an
 exception is thrown.
 @return the next float value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jfloat)readFloat;

/*!
 @brief Equivalent to <code>readFully(dst, 0, dst.length);</code>.
 */
- (void)readFullyWithByteArray:(IOSByteArray *)dst;

/*!
 @brief Reads <code>byteCount</code> bytes from this stream and stores them in the byte
 array <code>dst</code> starting at <code>offset</code>.
 If <code>byteCount</code> is zero, then this
 method returns without reading any bytes. Otherwise, this method blocks until
 <code>byteCount</code> bytes have been read. If insufficient bytes are available,
 <code>EOFException</code> is thrown. If an I/O error occurs, <code>IOException</code> is
 thrown. When an exception is thrown, some bytes may have been consumed from the stream
 and written into the array.
 @param dst
 the byte array into which the data is read.
 @param offset
 the offset in <code>dst</code> at which to store the bytes.
 @param byteCount
 the number of bytes to read.
 @throws EOFException
 if the end of the source stream is reached before enough
 bytes have been read.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>byteCount < 0</code>, or
 <code>offset + byteCount > dst.length</code>.
 @throws IOException
 if a problem occurs while reading from this stream.
 @throws NullPointerException
 if <code>dst</code> is null.
 */
- (void)readFullyWithByteArray:(IOSByteArray *)dst
                       withInt:(jint)offset
                       withInt:(jint)byteCount;

/*!
 @brief Reads a big-endian 32-bit integer from the current position in this file.
 Blocks
 until four bytes have been read, the end of the file is reached or an
 exception is thrown.
 @return the next int value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)readInt;

/*!
 @brief Reads a line of text form the current position in this file.
 A line is
 represented by zero or more characters followed by <code>'\n'</code>, <code>'\r'</code>
 , <code>"\r\n"</code> or the end of file marker. The string does not
 include the line terminating sequence.
 <p>
 Blocks until a line terminating sequence has been read, the end of the
 file is reached or an exception is thrown.
 @return the contents of the line or <code>null</code> if no characters have
 been read before the end of the file has been reached.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (NSString *)readLine;

/*!
 @brief Reads a big-endian 64-bit long from the current position in this file.
 Blocks until
 eight bytes have been read, the end of the file is reached or an
 exception is thrown.
 @return the next long value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jlong)readLong;

/*!
 @brief Reads a big-endian 16-bit short from the current position in this file.
 Blocks until
 two bytes have been read, the end of the file is reached or an exception
 is thrown.
 @return the next short value from this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jshort)readShort;

/*!
 @brief Reads an unsigned 8-bit byte from the current position in this file and
 returns it as an integer.
 Blocks until one byte has been read, the end of
 the file is reached or an exception is thrown.
 @return the next unsigned byte value from this file as an int.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)readUnsignedByte;

/*!
 @brief Reads an unsigned big-endian 16-bit short from the current position in this file and
 returns it as an integer.
 Blocks until two bytes have been read, the end of
 the file is reached or an exception is thrown.
 @return the next unsigned short value from this file as an int.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)readUnsignedShort;

/*!
 @brief Reads a string that is encoded in <code>modified UTF-8</code> from
 this file.
 The number of bytes that must be read for the complete string
 is determined by the first two bytes read from the file. Blocks until all
 required bytes have been read, the end of the file is reached or an
 exception is thrown.
 @return the next string encoded in <code>modified UTF-8</code> from
 this file.
 @throws EOFException
 if the end of this file is detected.
 @throws IOException
 if this file is closed or another I/O error occurs.
 @throws UTFDataFormatException
 if the bytes read cannot be decoded into a character string.
 */
- (NSString *)readUTF;

/*!
 @brief Moves this file's file pointer to a new position, from where following
 <code>read</code>, <code>write</code> or <code>skip</code> operations are done.
 The
 position may be greater than the current length of the file, but the
 file's length will only change if the moving of the pointer is followed
 by a <code>write</code> operation.
 @param offset
 the new file pointer position.
 @throws IOException
 if this file is closed, <code>pos < 0</code> or another I/O error
 occurs.
 */
- (void)seekWithLong:(jlong)offset;

/*!
 @brief Sets the length of this file to <code>newLength</code>.
 If the current file is
 smaller, it is expanded but the contents from the previous end of the
 file to the new end are undefined. The file is truncated if its current
 size is bigger than <code>newLength</code>. If the current file pointer
 position is in the truncated part, it is set to the end of the file.
 @param newLength
 the new file length in bytes.
 @throws IllegalArgumentException
 if <code>newLength < 0</code>.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (void)setLengthWithLong:(jlong)newLength;

/*!
 @brief Skips over <code>count</code> bytes in this file.
 Less than <code>count</code>
 bytes are skipped if the end of the file is reached or an exception is
 thrown during the operation. Nothing is done if <code>count</code> is
 negative.
 @param count
 the number of bytes to skip.
 @return the number of bytes actually skipped.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (jint)skipBytesWithInt:(jint)count;

/*!
 @brief Writes the entire contents of the byte array <code>buffer</code> to this file,
 starting at the current file pointer.
 @param buffer
 the buffer to write.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Writes <code>byteCount</code> bytes from the byte array <code>buffer</code> to this
 file, starting at the current file pointer and using <code>byteOffset</code> as
 the first position within <code>buffer</code> to get bytes.
 @throws IndexOutOfBoundsException
 if <code>byteCount < 0</code>, <code>byteOffset < 0</code> or <code>byteCount +
 byteOffset</code>
  is greater than the size of <code>buffer</code>.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)byteOffset
                   withInt:(jint)byteCount;

/*!
 @brief Writes a byte to this file, starting at the current file pointer.
 Only
 the least significant byte of the integer <code>oneByte</code> is written.
 @param oneByte
 the byte to write to this file.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (void)writeWithInt:(jint)oneByte;

/*!
 @brief Writes a boolean to this file as a single byte (1 for true, 0 for false), starting at the
 current file pointer.
 @param val
 the boolean to write to this file.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (void)writeBooleanWithBoolean:(jboolean)val;

/*!
 @brief Writes an 8-bit byte to this file, starting at the current file pointer.
 Only the least significant byte of the integer <code>val</code> is written.
 @param val
 the byte to write to this file.
 @throws IOException
 if this file is closed or another I/O error occurs.
 */
- (void)writeByteWithInt:(jint)val;

/*!
 @brief Writes the low order 8-bit bytes from a string to this file, starting at
 the current file pointer.
 @param str
 the string containing the bytes to write to this file
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeBytesWithNSString:(NSString *)str;

/*!
 @brief Writes a big-endian 16-bit character to this file, starting at the current file
 pointer.
 Only the two least significant bytes of the integer <code>val</code>
 are written, with the high byte first.
 @param val
 the char to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeCharWithInt:(jint)val;

/*!
 @brief Writes big-endian 16-bit characters from <code>str</code> to this file, starting at the
 current file pointer.
 @param str
 the string to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeCharsWithNSString:(NSString *)str;

/*!
 @brief Writes a big-endian 64-bit double to this file, starting at the current file
 pointer.
 The bytes are those returned by
 <code>Double.doubleToLongBits(double)</code>, meaning a canonical NaN is used.
 @param val
 the double to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeDoubleWithDouble:(jdouble)val;

/*!
 @brief Writes a big-endian 32-bit float to this file, starting at the current file pointer.
 The bytes are those returned by <code>Float.floatToIntBits(float)</code>, meaning a canonical NaN
 is used.
 @param val
 the float to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeFloatWithFloat:(jfloat)val;

/*!
 @brief Writes a big-endian 32-bit integer to this file, starting at the current file
 pointer.
 @param val
 the int to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeIntWithInt:(jint)val;

/*!
 @brief Writes a big-endian 64-bit long to this file, starting at the current file
 pointer.
 @param val
 the long to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeLongWithLong:(jlong)val;

/*!
 @brief Writes a big-endian 16-bit short to this file, starting at the current file
 pointer.
 Only the two least significant bytes of the integer <code>val</code>
 are written.
 @param val
 the short to write to this file.
 @throws IOException
 if an I/O error occurs while writing to this file.
 */
- (void)writeShortWithInt:(jint)val;

/*!
 @brief Writes a string encoded with <code>modified UTF-8</code> to this
 file, starting at the current file pointer.
 @param str
 the string to write in <code>modified UTF-8</code>
 format.
 @throws IOException
 if an I/O error occurs while writing to this file.
 @throws UTFDataFormatException
 if the encoded string is longer than 65535 bytes.
 */
- (void)writeUTFWithNSString:(NSString *)str;

#pragma mark Protected

- (void)dealloc;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoRandomAccessFile)

FOUNDATION_EXPORT void JavaIoRandomAccessFile_initWithJavaIoFile_withNSString_(JavaIoRandomAccessFile *self, JavaIoFile *file, NSString *mode);

FOUNDATION_EXPORT JavaIoRandomAccessFile *new_JavaIoRandomAccessFile_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoRandomAccessFile_initWithNSString_withNSString_(JavaIoRandomAccessFile *self, NSString *fileName, NSString *mode);

FOUNDATION_EXPORT JavaIoRandomAccessFile *new_JavaIoRandomAccessFile_initWithNSString_withNSString_(NSString *fileName, NSString *mode) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoRandomAccessFile)

#endif // _JavaIoRandomAccessFile_H_
