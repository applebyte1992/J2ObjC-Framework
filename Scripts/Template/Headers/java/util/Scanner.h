//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Scanner.java
//

#ifndef _JavaUtilScanner_H_
#define _JavaUtilScanner_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Closeable.h>
#include <j2objc/java/util/Iterator.h>

@class JavaIoFile;
@class JavaIoIOException;
@class JavaIoInputStream;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;
@class JavaUtilLocale;
@class JavaUtilRegexPattern;
@protocol JavaLangReadable;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaUtilRegexMatchResult;

/*!
 @brief A parser that parses a text string of primitive types and strings with the
 help of regular expressions.
 This class is not as useful as it might seem.
 It's very inefficient for communicating between machines; you should use JSON,
 protobufs, or even XML for that. Very simple uses might get away with <code>String.split</code>.
 For input from humans, the use of locale-specific regular expressions make it not only
 expensive but also somewhat unpredictable.
 <p>This class supports localized numbers and various
 radixes. The input is broken into tokens by the delimiter pattern, which is
 <code></code> \\pjavaWhitespace}} by default.
 <p>Example:
 @code

  Scanner s = new Scanner("1A true");
  assertEquals(26, s.nextInt(16));
  assertEquals(true, s.nextBoolean());
  
@endcode
 <p>The <code>Scanner</code> class is not thread-safe.
 */
@interface JavaUtilScanner : NSObject < JavaIoCloseable, JavaUtilIterator >

#pragma mark Public

/*!
 @brief Creates a <code>Scanner</code> with the specified <code>File</code> as input.
 The default charset
 is applied when reading the file.
 @param src
 the file to be scanned.
 @throws FileNotFoundException
 if the specified file does not exist.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)src;

/*!
 @brief Creates a <code>Scanner</code> with the specified <code>File</code> as input.
 The specified charset
 is applied when reading the file.
 @param src
 the file to be scanned.
 @param charsetName
 the name of the encoding type of the file.
 @throws FileNotFoundException
 if the specified file does not exist.
 @throws IllegalArgumentException
 if the specified coding does not exist.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)src
                      withNSString:(NSString *)charsetName;

/*!
 @brief Creates a <code>Scanner</code> on the specified <code>InputStream</code>.
 The default charset is
 applied when decoding the input.
 @param src
 the <code>InputStream</code> to be scanned.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)src;

/*!
 @brief Creates a <code>Scanner</code> on the specified <code>InputStream</code>.
 The specified charset is
 applied when decoding the input.
 @param src
 the <code>InputStream</code> to be scanned.
 @param charsetName
 the encoding type of the <code>InputStream</code>.
 @throws IllegalArgumentException
 if the specified character set is not found.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)src
                             withNSString:(NSString *)charsetName;

/*!
 @brief Creates a <code>Scanner</code> with the specified <code>Readable</code> as input.
 @param src
 the <code>Readable</code> to be scanned.
 */
- (instancetype)initWithJavaLangReadable:(id<JavaLangReadable>)src;

/*!
 @brief Creates a <code>Scanner</code> with the specified <code>ReadableByteChannel</code> as
 input.
 The default charset is applied when decoding the input.
 @param src
 the <code>ReadableByteChannel</code> to be scanned.
 */
- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src;

/*!
 @brief Creates a <code>Scanner</code> with the specified <code>ReadableByteChannel</code> as
 input.
 The specified charset is applied when decoding the input.
 @param src
 the <code>ReadableByteChannel</code> to be scanned.
 @param charsetName
 the encoding type of the content.
 @throws IllegalArgumentException
 if the specified character set is not found.
 */
- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src
                                              withNSString:(NSString *)charsetName;

/*!
 @brief Creates a <code>Scanner</code> on the specified string.
 @param src
 the string to be scanned.
 */
- (instancetype)initWithNSString:(NSString *)src;

/*!
 @brief Closes this <code>Scanner</code> and the underlying input if the input implements
 <code>Closeable</code>.
 If the <code>Scanner</code> has been closed, this method will have
 no effect. Any scanning operation called after calling this method will throw
 an <code>IllegalStateException</code>.
 */
- (void)close;

/*!
 @brief Returns the delimiter <code>Pattern</code> in use by this <code>Scanner</code>.
 @return the delimiter <code>Pattern</code> in use by this <code>Scanner</code>.
 */
- (JavaUtilRegexPattern *)delimiter;

/*!
 @brief Tries to find the pattern in the input.
 Delimiters are ignored. If the
 pattern is found before line terminator, the matched string will be
 returned, and the <code>Scanner</code> will advance to the end of the matched string.
 Otherwise, <code>null</code> will be returned and the <code>Scanner</code> will not advance.
 When waiting for input, the <code>Scanner</code> may be blocked. All the
 input may be cached if no line terminator exists in the buffer.
 @param pattern
 the pattern to find in the input.
 @return the matched string or <code>null</code> if the pattern is not found
 before the next line terminator.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 */
- (NSString *)findInLineWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Compiles the pattern string and tries to find a substring matching it in the input data.
 The
 delimiter will be ignored. This is the same as invoking
 <code>findInLine(Pattern.compile(pattern))</code>.
 @param pattern
 a string used to construct a pattern which is in turn used to
 match a substring of the input data.
 @return the matched string or <code>null</code> if the pattern is not found
 before the next line terminator.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 */
- (NSString *)findInLineWithNSString:(NSString *)pattern;

/*!
 @brief Tries to find the pattern in the input between the current position and the specified
 horizon.
 Delimiters are ignored. If the pattern is found, the matched
 string will be returned, and the <code>Scanner</code> will advance to the end of the
 matched string. Otherwise, null will be returned and <code>Scanner</code> will not
 advance. When waiting for input, the <code>Scanner</code> may be blocked.
 <p>
 The <code>Scanner</code>'s search will never go more than <code>horizon</code> code points from current
 position. The position of <code>horizon</code> does have an effect on the result of the
 match. For example, when the input is "123" and current position is at zero,
 <code>findWithinHorizon(Pattern.compile("\\p{Digit}{3}"), 2)</code>
 will return <code>null</code>, while
 <code>findWithinHorizon(Pattern.compile("\\p{Digit}{3}"), 3)</code>
 will return <code>"123"</code>. <code>horizon</code> is treated as a transparent,
 non-anchoring bound. (refer to
 <code>Matcher.useTransparentBounds(boolean)</code> and
 <code>Matcher.useAnchoringBounds(boolean)</code>)
 <p>
 A <code>horizon</code> whose value is zero will be ignored and the whole input will be
 used for search. In this situation, all the input may be cached.
 @param pattern
 the pattern used to scan.
 @param horizon
 the search limit.
 @return the matched string or <code>null</code> if the pattern is not found
 within the specified <code>horizon</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 @throws IllegalArgumentException
 if <code>horizon</code> is less than zero.
 */
- (NSString *)findWithinHorizonWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                                                withInt:(jint)horizon;

/*!
 @brief Tries to find the pattern in the input between the current position and the specified
 <code>horizon</code>.
 Delimiters are ignored. This call is the same as invoking
 <code>findWithinHorizon(Pattern.compile(pattern))</code>.
 @param pattern
 the pattern used to scan.
 @param horizon
 the search limit.
 @return the matched string, or <code>null</code> if the pattern is not found
 within the specified horizon.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 @throws IllegalArgumentException
 if <code>horizon</code> is less than zero.
 */
- (NSString *)findWithinHorizonWithNSString:(NSString *)pattern
                                    withInt:(jint)horizon;

/*!
 @brief Returns whether this <code>Scanner</code> has one or more tokens remaining to parse.
 This method will block if the data is still being read.
 @return <code>true</code> if this <code>Scanner</code> has one or more tokens remaining,
 otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNext;

/*!
 @brief Returns whether this <code>Scanner</code> has one or more tokens remaining to parse
 and the next token matches the given pattern.
 This method will block if the data is
 still being read.
 @param pattern
 the pattern to check for.
 @return <code>true</code> if this <code>Scanner</code> has more tokens and the next token
 matches the pattern, <code>false</code> otherwise.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Returns <code>true</code> if this <code>Scanner</code> has one or more tokens remaining to parse
 and the next token matches a pattern compiled from the given string.
 This method will
 block if the data is still being read. This call is equivalent to
 <code>hasNext(Pattern.compile(pattern))</code>.
 @param pattern
 the string specifying the pattern to scan for
 @return <code>true</code> if the specified pattern matches this <code>Scanner</code>'s
 next token, <code>false</code> otherwise.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextWithNSString:(NSString *)pattern;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>BigDecimal</code>.
 @return <code>true</code> if the next token can be translated into a valid
 <code>BigDecimal</code>, otherwise <code>false.</code>
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextBigDecimal;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>BigInteger</code> in the default radix.
 @return <code>true</code> if the next token can be translated into a valid
 <code>BigInteger</code>, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextBigInteger;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>BigInteger</code> in the specified radix.
 @param radix
 the radix used to translate the token into a
 <code>BigInteger</code>.
 @return <code>true</code> if the next token can be translated into a valid
 <code>BigInteger</code>, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextBigIntegerWithInt:(jint)radix;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>boolean</code> value.
 @return <code>true</code> if the next token can be translated into a valid
 <code>boolean</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextBoolean;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>byte</code> value in the default radix.
 @return <code>true</code> if the next token can be translated into a valid
 <code>byte</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextByte;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>byte</code> value in the specified radix.
 @param radix
 the radix used to translate the token into a <code>byte</code>
 value
 @return <code>true</code> if the next token can be translated into a valid
 <code>byte</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextByteWithInt:(jint)radix;

/*!
 @brief Returns whether the next token translated into a valid <code>double</code>
 value.
 @return <code>true</code> if the next token can be translated into a valid
 <code>double</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextDouble;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>float</code> value.
 @return <code>true</code> if the next token can be translated into a valid
 <code>float</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextFloat;

/*!
 @brief Returns whether the next token can be translated into a valid <code>int</code>
 value in the default radix.
 @return <code>true</code> if the next token can be translated into a valid
 <code>int</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed,
 */
- (jboolean)hasNextInt;

/*!
 @brief Returns whether the next token can be translated into a valid <code>int</code>
 value in the specified radix.
 @param radix
 the radix used to translate the token into an <code>int</code>
 value.
 @return <code>true</code> if the next token in this <code>Scanner</code>'s input can be
 translated into a valid <code>int</code> value, otherwise
 <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextIntWithInt:(jint)radix;

/*!
 @brief Returns true if there is a line terminator in the input.
 This method may block.
 @throws IllegalStateException if this <code>Scanner</code> is closed.
 */
- (jboolean)hasNextLine;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>long</code> value in the default radix.
 @return <code>true</code> if the next token can be translated into a valid
 <code>long</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextLong;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>long</code> value in the specified radix.
 @param radix
 the radix used to translate the token into a <code>long</code>
 value.
 @return <code>true</code> if the next token can be translated into a valid
 <code>long</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextLongWithInt:(jint)radix;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>short</code> value in the default radix.
 @return <code>true</code> if the next token can be translated into a valid
 <code>short</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextShort;

/*!
 @brief Returns whether the next token can be translated into a valid
 <code>short</code> value in the specified radix.
 @param radix
 the radix used to translate the token into a <code>short</code>
 value.
 @return <code>true</code> if the next token can be translated into a valid
 <code>short</code> value, otherwise <code>false</code>.
 @throws IllegalStateException
 if the <code>Scanner</code> has been closed.
 */
- (jboolean)hasNextShortWithInt:(jint)radix;

/*!
 @brief Returns the last <code>IOException</code> that was raised while reading from the underlying
 input, or <code>null</code> if none was thrown.
 */
- (JavaIoIOException *)ioException;

/*!
 @brief Returns the <code>Locale</code> of this <code>Scanner</code>.
 */
- (JavaUtilLocale *)locale;

/*!
 @brief Returns the result of the last matching operation.
 <p>
 The next* and find* methods return the match result in the case of a
 successful match.
 @return the match result of the last successful match operation
 @throws IllegalStateException
 if the match result is not available, of if the last match
 was not successful.
 */
- (id<JavaUtilRegexMatchResult>)match;

/*!
 @brief Returns the next token.
 The token will be both prefixed and suffixed by
 the delimiter that is currently being used (or a string that matches the
 delimiter pattern). This method will block if input is being read.
 @return the next complete token.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 */
- (NSString *)next;

/*!
 @brief Returns the next token if it matches the specified pattern.
 The token
 will be both prefixed and suffixed by the delimiter that is currently
 being used (or a string that matches the delimiter pattern). This method will block
 if input is being read.
 @param pattern
 the specified pattern to scan.
 @return the next token.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token does not match the pattern given.
 */
- (NSString *)nextWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Returns the next token if it matches the specified pattern.
 The token
 will be both prefixed and suffixed by the delimiter that is currently
 being used (or a string that matches the delimiter pattern). This method will block
 if input is being read. Calling this method is equivalent to
 <code>next(Pattern.compile(pattern))</code>.
 @param pattern
 the string specifying the pattern to scan for.
 @return the next token.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token does not match the pattern given.
 */
- (NSString *)nextWithNSString:(NSString *)pattern;

/*!
 @brief Returns the next token as a <code>BigDecimal</code>.
 This method will block if input is
 being read. If the next token can be translated into a <code>BigDecimal</code>
 the following is done: All <code>Locale</code>-specific prefixes, group separators,
 and <code>Locale</code>-specific suffixes are removed. Then non-ASCII digits are
 mapped into ASCII digits via <code>Character.digit(char,int)</code>, and a
 negative sign (-) is added if the <code>Locale</code>-specific negative prefix or
 suffix was present. Finally the resulting string is passed to
 <code>BigDecimal(String)</code>.
 @return the next token as a <code>BigDecimal</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>BigDecimal</code>.
 */
- (JavaMathBigDecimal *)nextBigDecimal;

/*!
 @brief Returns the next token as a <code>BigInteger</code> in the current radix.
 This method may block for more input.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>BigInteger</code>.
 */
- (JavaMathBigInteger *)nextBigInteger;

/*!
 @brief Returns the next token as a <code>BigInteger</code> with the specified radix.
 This method will block if input is being read. If the next token can be translated
 into a <code>BigInteger</code> the following is done: All <code>Locale</code>-specific
 prefixes, group separators, and <code>Locale</code>-specific suffixes are removed.
 Then non-ASCII digits are mapped into ASCII digits via
 <code>Character.digit(char,int)</code>, and a negative sign (-) is added if the
 <code>Locale</code>-specific negative prefix or suffix was present. Finally the
 resulting String is passed to <code>BigInteger.BigInteger(String,int)</code>}
 with the specified radix.
 @param radix
 the radix used to translate the token into a
 <code>BigInteger</code>.
 @return the next token as a <code>BigInteger</code>
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>BigInteger</code>.
 */
- (JavaMathBigInteger *)nextBigIntegerWithInt:(jint)radix;

/*!
 @brief Returns the next token as a <code>boolean</code>.
 This method will block if input is
 being read.
 @return the next token as a <code>boolean</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>boolean</code> value.
 */
- (jboolean)nextBoolean;

/*!
 @brief Returns the next token as a <code>byte</code> in the current radix.
 This method may block for more input.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>byte</code> value.
 */
- (jbyte)nextByte;

/*!
 @brief Returns the next token as a <code>byte</code> with the specified radix.
 Will
 block if input is being read. If the next token can be translated into a
 <code>byte</code> the following is done: All <code>Locale</code>-specific prefixes, group
 separators, and <code>Locale</code>-specific suffixes are removed. Then non-ASCII
 digits are mapped into ASCII digits via
 <code>Character.digit(char,int)</code>, and a negative sign (-) is added if the
 <code>Locale</code>-specific negative prefix or suffix was present. Finally the
 resulting String is passed to <code>Byte.parseByte(String,int)</code>} with
 the specified radix.
 @param radix
 the radix used to translate the token into <code>byte</code> value.
 @return the next token as a <code>byte</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>byte</code> value.
 */
- (jbyte)nextByteWithInt:(jint)radix;

/*!
 @brief Returns the next token as a <code>double</code>.
 This method will block if input is being
 read. If the next token can be translated into a <code>double</code> the
 following is done: All <code>Locale</code>-specific prefixes, group separators, and
 <code>Locale</code>-specific suffixes are removed. Then non-ASCII digits are mapped
 into ASCII digits via <code>Character.digit(char,int)</code>, and a negative
 sign (-) is added if the <code>Locale</code>-specific negative prefix or suffix was
 present. Finally the resulting String is passed to
 <code>Double.parseDouble(String)</code>}. If the token matches the localized
 NaN or infinity strings, it is also passed to
 <code>Double.parseDouble(String)</code>}.
 @return the next token as a <code>double</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>double</code> value.
 */
- (jdouble)nextDouble;

/*!
 @brief Returns the next token as a <code>float</code>.
 This method will block if input is being
 read. If the next token can be translated into a <code>float</code> the
 following is done: All <code>Locale</code>-specific prefixes, group separators, and
 <code>Locale</code>-specific suffixes are removed. Then non-ASCII digits are mapped
 into ASCII digits via <code>Character.digit(char,int)</code>, and a negative
 sign (-) is added if the <code>Locale</code>-specific negative prefix or suffix was
 present. Finally the resulting String is passed to
 <code>Float.parseFloat(String)</code>}.If the token matches the localized NaN
 or infinity strings, it is also passed to
 <code>Float.parseFloat(String)</code>}.
 @return the next token as a <code>float</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>float</code> value.
 */
- (jfloat)nextFloat;

/*!
 @brief Returns the next token as an <code>int</code> in the current radix.
 This method may block for more input.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>int</code> value.
 */
- (jint)nextInt;

/*!
 @brief Returns the next token as an <code>int</code> with the specified radix.
 This method will
 block if input is being read. If the next token can be translated into an
 <code>int</code> the following is done: All <code>Locale</code>-specific prefixes, group
 separators, and <code>Locale</code>-specific suffixes are removed. Then non-ASCII
 digits are mapped into ASCII digits via
 <code>Character.digit(char,int)</code>, and a negative sign (-) is added if the
 <code>Locale</code>-specific negative prefix or suffix was present. Finally the
 resulting String is passed to <code>Integer.parseInt(String,int)</code> with
 the specified radix.
 @param radix
 the radix used to translate the token into an <code>int</code>
 value.
 @return the next token as an <code>int</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>int</code> value.
 */
- (jint)nextIntWithInt:(jint)radix;

/*!
 @brief Returns the skipped input and advances the <code>Scanner</code> to the beginning of
 the next line.
 The returned result will exclude any line terminator. When
 searching, if no line terminator is found, then a large amount of input
 will be cached. If no line at all can be found, a <code>NoSuchElementException</code>
 will be thrown.
 @return the skipped line.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 @throws NoSuchElementException
 if no line can be found, e.g. when input is an empty string.
 */
- (NSString *)nextLine;

/*!
 @brief Returns the next token as a <code>long</code> in the current radix.
 This method may block for more input.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>long</code> value.
 */
- (jlong)nextLong;

/*!
 @brief Returns the next token as a <code>long</code> with the specified radix.
 This method will
 block if input is being read. If the next token can be translated into a
 <code>long</code> the following is done: All <code>Locale</code>-specific prefixes, group
 separators, and <code>Locale</code>-specific suffixes are removed. Then non-ASCII
 digits are mapped into ASCII digits via
 <code>Character.digit(char,int)</code>, and a negative sign (-) is added if the
 <code>Locale</code>-specific negative prefix or suffix was present. Finally the
 resulting String is passed to <code>Long.parseLong(String,int)</code>} with
 the specified radix.
 @param radix
 the radix used to translate the token into a <code>long</code>
 value.
 @return the next token as a <code>long</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>long</code> value.
 */
- (jlong)nextLongWithInt:(jint)radix;

/*!
 @brief Returns the next token as a <code>short</code> in the current radix.
 This method may block for more input.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>short</code> value.
 */
- (jshort)nextShort;

/*!
 @brief Returns the next token as a <code>short</code> with the specified radix.
 This method will
 block if input is being read. If the next token can be translated into a
 <code>short</code> the following is done: All <code>Locale</code>-specific prefixes, group
 separators, and <code>Locale</code>-specific suffixes are removed. Then non-ASCII
 digits are mapped into ASCII digits via
 <code>Character.digit(char,int)</code>, and a negative sign (-) is added if the
 <code>Locale</code>-specific negative prefix or suffix was present. Finally the
 resulting String is passed to <code>Short.parseShort(String,int)</code>}
 with the specified radix.
 @param radix
 the radix used to translate the token into <code>short</code>
 value.
 @return the next token as a <code>short</code>.
 @throws IllegalStateException
 if this <code>Scanner</code> has been closed.
 @throws NoSuchElementException
 if input has been exhausted.
 @throws InputMismatchException
 if the next token can not be translated into a valid
 <code>short</code> value.
 */
- (jshort)nextShortWithInt:(jint)radix;

/*!
 @brief Return the radix of this <code>Scanner</code>.
 @return the radix of this <code>Scanner</code>
 */
- (jint)radix;

/*!
 @brief Remove is not a supported operation on <code>Scanner</code>.
 @throws UnsupportedOperationException
 if this method is invoked.
 */
- (void)remove;

/*!
 @brief Resets this scanner's delimiter, locale, and radix.
 @return this scanner
 @since 1.6
 */
- (JavaUtilScanner *)reset;

/*!
 @brief Tries to use specified pattern to match input starting from the current position.
 The delimiter will be ignored. If a match is found, the matched input will be
 skipped. If an anchored match of the specified pattern succeeds, the corresponding input
 will also be skipped. Otherwise, a <code>NoSuchElementException</code> will be thrown.
 Patterns that can match a lot of input may cause the <code>Scanner</code> to read
 in a large amount of input.
 @param pattern
 used to skip over input.
 @return the <code>Scanner</code> itself.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 @throws NoSuchElementException
 if the specified pattern match fails.
 */
- (JavaUtilScanner *)skipWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Tries to use the specified string to construct a pattern and then uses
 the constructed pattern to match input starting from the current position.
 The
 delimiter will be ignored. This call is the same as invoke
 <code>skip(Pattern.compile(pattern))</code>.
 @param pattern
 the string used to construct a pattern which in turn is used to
 match input.
 @return the <code>Scanner</code> itself.
 @throws IllegalStateException
 if the <code>Scanner</code> is closed.
 */
- (JavaUtilScanner *)skipWithNSString:(NSString *)pattern;

/*!
 @brief Returns a string representation of this <code>Scanner</code>.
 The information
 returned may be helpful for debugging. The format of the string is unspecified.
 @return a string representation of this <code>Scanner</code>.
 */
- (NSString *)description;

/*!
 @brief Sets the delimiting pattern of this <code>Scanner</code>.
 @param pattern
 the delimiting pattern to use.
 @return this <code>Scanner</code>.
 */
- (JavaUtilScanner *)useDelimiterWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief Sets the delimiting pattern of this <code>Scanner</code> with a pattern compiled from
 the supplied string value.
 @param pattern
 a string from which a <code>Pattern</code> can be compiled.
 @return this <code>Scanner</code>.
 */
- (JavaUtilScanner *)useDelimiterWithNSString:(NSString *)pattern;

/*!
 @brief Sets the <code>Locale</code> of this <code>Scanner</code> to a specified <code>Locale</code>.
 @param l
 the specified <code>Locale</code> to use.
 @return this <code>Scanner</code>.
 */
- (JavaUtilScanner *)useLocaleWithJavaUtilLocale:(JavaUtilLocale *)l;

/*!
 @brief Sets the radix of this <code>Scanner</code> to the specified radix.
 @param radix
 the specified radix to use.
 @return this <code>Scanner</code>.
 */
- (JavaUtilScanner *)useRadixWithInt:(jint)radix;

@end

J2OBJC_STATIC_INIT(JavaUtilScanner)

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoFile_(JavaUtilScanner *self, JavaIoFile *src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoFile_(JavaIoFile *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoFile_withNSString_(JavaUtilScanner *self, JavaIoFile *src, NSString *charsetName);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoFile_withNSString_(JavaIoFile *src, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithNSString_(JavaUtilScanner *self, NSString *src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithNSString_(NSString *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoInputStream_(JavaUtilScanner *self, JavaIoInputStream *src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoInputStream_(JavaIoInputStream *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoInputStream_withNSString_(JavaUtilScanner *self, JavaIoInputStream *src, NSString *charsetName);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *src, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaLangReadable_(JavaUtilScanner *self, id<JavaLangReadable> src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaLangReadable_(id<JavaLangReadable> src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_(JavaUtilScanner *self, id<JavaNioChannelsReadableByteChannel> src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_(id<JavaNioChannelsReadableByteChannel> src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_withNSString_(JavaUtilScanner *self, id<JavaNioChannelsReadableByteChannel> src, NSString *charsetName);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_withNSString_(id<JavaNioChannelsReadableByteChannel> src, NSString *charsetName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilScanner)

#endif // _JavaUtilScanner_H_
