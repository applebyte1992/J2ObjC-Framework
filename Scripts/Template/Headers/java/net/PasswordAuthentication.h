//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PasswordAuthentication.java
//

#ifndef _JavaNetPasswordAuthentication_H_
#define _JavaNetPasswordAuthentication_H_

#include <j2objc/J2ObjC_header.h>

@class IOSCharArray;

/*!
 @brief This immutable class is a data structure that encapsulates username and
 password which is used by the <code>Authenticator</code> class.
 */
@interface JavaNetPasswordAuthentication : NSObject

#pragma mark Public

/*!
 @brief Creates an instance of a password authentication with a specified
 username and password.
 @param userName
 the username to store.
 @param password
 the associated password to store.
 */
- (instancetype)initWithNSString:(NSString *)userName
                   withCharArray:(IOSCharArray *)password;

/*!
 @brief Gets a clone of the password stored by this instance.
 The user is
 responsible to finalize the returned array if the password clone is no
 longer needed.
 @return the copied password.
 */
- (IOSCharArray *)getPassword;

/*!
 @brief Gets the username stored by this instance.
 @return the stored username.
 */
- (NSString *)getUserName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPasswordAuthentication)

FOUNDATION_EXPORT void JavaNetPasswordAuthentication_initWithNSString_withCharArray_(JavaNetPasswordAuthentication *self, NSString *userName, IOSCharArray *password);

FOUNDATION_EXPORT JavaNetPasswordAuthentication *new_JavaNetPasswordAuthentication_initWithNSString_withCharArray_(NSString *userName, IOSCharArray *password) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPasswordAuthentication)

#endif // _JavaNetPasswordAuthentication_H_
