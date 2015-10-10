//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLDecoder.java
//

#ifndef _JavaNetURLDecoder_H_
#define _JavaNetURLDecoder_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief This class is used to decode a string which is encoded in the <code>application/x-www-form-urlencoded</code>
  MIME content type.
 */
@interface JavaNetURLDecoder : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Decodes the argument which is assumed to be encoded in the <code>x-www-form-urlencoded</code>
  MIME content type.
 <p>
 '+' will be converted to space, '%' and two following hex digit
 characters are converted to the equivalent byte value. All other
 characters are passed through unmodified. For example "A+B+C %24%25" ->
 "A B C $%".
 @param s
 the encoded string.
 @return the decoded clear-text representation of the given string.
 */
+ (NSString *)decodeWithNSString:(NSString *)s;

/*!
 @brief Decodes the argument which is assumed to be encoded in the <code>x-www-form-urlencoded</code>
  MIME content type, assuming the given <code>charsetName</code>.
 '<p>+' will be converted to space, '%' and two following hex digit
 characters are converted to the equivalent byte value. All other
 characters are passed through unmodified. For example "A+B+C %24%25" ->
 "A B C $%".
 @throws UnsupportedEncodingException if <code>charsetName</code> is not supported.
 */
+ (NSString *)decodeWithNSString:(NSString *)s
                    withNSString:(NSString *)charsetName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLDecoder)

FOUNDATION_EXPORT NSString *JavaNetURLDecoder_decodeWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *JavaNetURLDecoder_decodeWithNSString_withNSString_(NSString *s, NSString *charsetName);

FOUNDATION_EXPORT void JavaNetURLDecoder_init(JavaNetURLDecoder *self);

FOUNDATION_EXPORT JavaNetURLDecoder *new_JavaNetURLDecoder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLDecoder)

#endif // _JavaNetURLDecoder_H_
