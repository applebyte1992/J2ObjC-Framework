//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/util/Rfc822Token.java
//

#ifndef _AndroidTextUtilRfc822Token_H_
#define _AndroidTextUtilRfc822Token_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief This class stores an RFC 822-like name, address, and comment,
 and provides methods to convert them to quoted strings.
 */
@interface AndroidTextUtilRfc822Token : NSObject

#pragma mark Public

/*!
 @brief Creates a new Rfc822Token with the specified name, address,
 and comment.
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)address
                    withNSString:(NSString *)comment;

- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the address part.
 */
- (NSString *)getAddress;

/*!
 @brief Returns the comment part.
 */
- (NSString *)getComment;

/*!
 @brief Returns the name part.
 */
- (NSString *)getName;

- (NSUInteger)hash;

/*!
 @brief Returns the comment, with internal backslashes and parentheses
 preceded by backslashes.
 The outer parentheses themselves are
 not added by this method.
 */
+ (NSString *)quoteCommentWithNSString:(NSString *)comment;

/*!
 @brief Returns the name, with internal backslashes and quotation marks
 preceded by backslashes.
 The outer quote marks themselves are not
 added by this method.
 */
+ (NSString *)quoteNameWithNSString:(NSString *)name;

/*!
 @brief Returns the name, conservatively quoting it if there are any
 characters that are likely to cause trouble outside of a
 quoted string, or returning it literally if it seems safe.
 */
+ (NSString *)quoteNameIfNecessaryWithNSString:(NSString *)name;

/*!
 @brief Changes the address to the specified address.
 */
- (void)setAddressWithNSString:(NSString *)address;

/*!
 @brief Changes the comment to the specified comment.
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Changes the name to the specified name.
 */
- (void)setNameWithNSString:(NSString *)name;

/*!
 @brief Returns the name (with quoting added if necessary),
 the comment (in parentheses), and the address (in angle brackets).
 This should be suitable for inclusion in an RFC 822 address list.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextUtilRfc822Token)

FOUNDATION_EXPORT void AndroidTextUtilRfc822Token_initWithNSString_withNSString_withNSString_(AndroidTextUtilRfc822Token *self, NSString *name, NSString *address, NSString *comment);

FOUNDATION_EXPORT AndroidTextUtilRfc822Token *new_AndroidTextUtilRfc822Token_initWithNSString_withNSString_withNSString_(NSString *name, NSString *address, NSString *comment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *AndroidTextUtilRfc822Token_quoteNameIfNecessaryWithNSString_(NSString *name);

FOUNDATION_EXPORT NSString *AndroidTextUtilRfc822Token_quoteNameWithNSString_(NSString *name);

FOUNDATION_EXPORT NSString *AndroidTextUtilRfc822Token_quoteCommentWithNSString_(NSString *comment);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextUtilRfc822Token)

#endif // _AndroidTextUtilRfc822Token_H_
