//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLSyntaxErrorException.java
//

#ifndef _JavaSqlSQLSyntaxErrorException_H_
#define _JavaSqlSQLSyntaxErrorException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/sql/SQLNonTransientException.h>

@class JavaLangThrowable;

@interface JavaSqlSQLSyntaxErrorException : JavaSqlSQLNonTransientException

#pragma mark Public

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 null, the SQLState string is set to null and the Error Code is set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to null and the Error
 Code is set to 0.
 @param reason
 the string to use as the Reason string
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string and the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string and the Error Code is set to the given error code value.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string , the Error Code is set to the given error code value, and the
 cause Throwable object is set to the given cause Throwable object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string and the cause Throwable object is set to the given cause Throwable
 object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given and the cause Throwable object is set to the given cause
 Throwable object.
 @param reason
 the string to use as the Reason string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the null if cause == null or cause.toString() if cause!=null,and the
 cause Throwable object is set to the given cause Throwable object.
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLSyntaxErrorException)

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_init(JavaSqlSQLSyntaxErrorException *self);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_(JavaSqlSQLSyntaxErrorException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithJavaLangThrowable_(JavaSqlSQLSyntaxErrorException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLSyntaxErrorException)

#endif // _JavaSqlSQLSyntaxErrorException_H_
