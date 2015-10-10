//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLNonTransientException.java
//

#ifndef _JavaSqlSQLNonTransientException_H_
#define _JavaSqlSQLNonTransientException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/sql/SQLException.h>

@class JavaLangThrowable;

@interface JavaSqlSQLNonTransientException : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Creates an SQLNonTransientException object.
 The Reason string is set to
 null, the SQLState string is set to null and the Error Code is set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLNonTransientException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to null and the Error
 Code is set to 0.
 @param reason
 the string to use as the Reason string
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates an SQLNonTransientException object.
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
 @brief Creates an SQLNonTransientException object.
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
 @brief Creates an SQLNonTransientException object.
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
 @brief Creates an SQLNonTransientException object.
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
 @brief Creates an SQLNonTransientException object.
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
 @brief Creates an SQLNonTransientException object.
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

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLNonTransientException)

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_init(JavaSqlSQLNonTransientException *self);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_(JavaSqlSQLNonTransientException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithJavaLangThrowable_(JavaSqlSQLNonTransientException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLNonTransientException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLNonTransientException)

#endif // _JavaSqlSQLNonTransientException_H_
