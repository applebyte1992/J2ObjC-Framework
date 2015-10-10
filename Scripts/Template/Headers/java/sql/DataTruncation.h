//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/DataTruncation.java
//

#ifndef _JavaSqlDataTruncation_H_
#define _JavaSqlDataTruncation_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/sql/SQLWarning.h>

@class JavaLangThrowable;

/*!
 @brief An exception which is thrown when a JDBC driver unexpectedly truncates a data
 value either when reading (resulting in warning), or when writing data
 (resulting in an error).
 The <code>SQLState</code> error code for truncated data
 is <code>01004</code>.
 */
@interface JavaSqlDataTruncation : JavaSqlSQLWarning < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates the <code>DataTruncation</code> object.
 The reason is set to <code>"Data truncation"</code>
 , the error code is set to the <code>SQLException</code>
  default value, and the other fields are set to the values
 supplied as arguments.
 @param index
 the Index value of the column value or parameter that was
 truncated.
 @param parameter
 <code>true</code> if it was a parameter value that was truncated,
 <code>false</code> otherwise.
 @param read
 <code>true</code> if the truncation occurred on a read operation,
 <code>false</code> otherwise.
 @param dataSize
 the original size of the truncated data.
 @param transferSize
 the size of the data after truncation.
 */
- (instancetype)initWithInt:(jint)index
                withBoolean:(jboolean)parameter
                withBoolean:(jboolean)read
                    withInt:(jint)dataSize
                    withInt:(jint)transferSize;

/*!
 @brief Creates a DataTruncation.
 The Reason is set to "Data truncation", the
 error code is set to the SQLException default value and other fields are
 set to the values supplied on this method.
 @param index
 the Index value of the column value or parameter that was
 truncated
 @param parameter
 true if it was a Parameter value that was truncated, false
 otherwise
 @param read
 true if the truncation occurred on a read operation, false
 otherwise
 @param dataSize
 the original size of the truncated data
 @param transferSize
 the size of the data after truncation
 @param cause
 the root reason for this DataTruncation
 @since 1.6
 */
- (instancetype)initWithInt:(jint)index
                withBoolean:(jboolean)parameter
                withBoolean:(jboolean)read
                    withInt:(jint)dataSize
                    withInt:(jint)transferSize
      withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Gets the number of bytes of data that should have been read/written.
 @return the number of bytes that should have been read or written. The
 value is set to <code>-1</code> if the size is unknown.
 */
- (jint)getDataSize;

/*!
 @brief Gets the index of the column or of the parameter that was truncated.
 @return the index number of the column or of the parameter.
 */
- (jint)getIndex;

/*!
 @brief Gets whether the value truncated was a parameter value or a column value.
 @return <code>true</code> if the value truncated was a parameter value,
 <code>false</code> if it was a column value.
 */
- (jboolean)getParameter;

/*!
 @brief Gets whether the value was truncated on a read operation or a write
 operation
 @return <code>true</code> if the value was truncated on a read operation,
 <code>false</code> otherwise.
 */
- (jboolean)getRead;

/*!
 @brief Gets the number of bytes of data that was actually read or written.
 @return the number of bytes actually read/written. The value may be set
 to <code>-1</code> if the size is unknown.
 */
- (jint)getTransferSize;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDataTruncation)

FOUNDATION_EXPORT void JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_(JavaSqlDataTruncation *self, jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize);

FOUNDATION_EXPORT JavaSqlDataTruncation *new_JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_withJavaLangThrowable_(JavaSqlDataTruncation *self, jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlDataTruncation *new_JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_withJavaLangThrowable_(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDataTruncation)

#endif // _JavaSqlDataTruncation_H_
