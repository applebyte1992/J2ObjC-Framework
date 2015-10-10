//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/EmulatedFieldsForLoading.java
//

#ifndef _JavaIoEmulatedFieldsForLoading_H_
#define _JavaIoEmulatedFieldsForLoading_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/ObjectInputStream.h>

@class JavaIoEmulatedFields;
@class JavaIoObjectStreamClass;

/*!
 @brief An EmulatedFieldsForLoading is an object that represents a set of emulated
 fields for an object being loaded.
 It is a concrete implementation for
 ObjectInputStream.GetField
 */
@interface JavaIoEmulatedFieldsForLoading : JavaIoObjectInputStream_GetField

#pragma mark Public

/*!
 @brief Return a boolean indicating if the field named <code>name</code> has
 been assigned a value explicitly (false) or if it still holds a default
 value for the type (true) because it hasn't been assigned to yet.
 @param name
 A String, the name of the field to test
 @return <code>true</code> if the field holds it default value,
 <code>false</code> otherwise.
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jboolean)defaultedWithNSString:(NSString *)name;

/*!
 @brief Find and return the boolean value of a given field named
 <code>name</code> in the receiver.
 If the field has not been assigned
 any value yet, the default value <code>defaultValue</code> is returned
 instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jboolean)getWithNSString:(NSString *)name
                withBoolean:(jboolean)defaultValue;

/*!
 @brief Find and return the byte value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jbyte)getWithNSString:(NSString *)name
                withByte:(jbyte)defaultValue;

/*!
 @brief Find and return the char value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jchar)getWithNSString:(NSString *)name
                withChar:(jchar)defaultValue;

/*!
 @brief Find and return the double value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jdouble)getWithNSString:(NSString *)name
                withDouble:(jdouble)defaultValue;

/*!
 @brief Find and return the float value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jfloat)getWithNSString:(NSString *)name
                withFloat:(jfloat)defaultValue;

/*!
 @brief Find and return the int value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jint)getWithNSString:(NSString *)name
                withInt:(jint)defaultValue;

/*!
 @brief Find and return the long value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jlong)getWithNSString:(NSString *)name
                withLong:(jlong)defaultValue;

/*!
 @brief Find and return the Object value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (id)getWithNSString:(NSString *)name
               withId:(id)defaultValue;

/*!
 @brief Find and return the short value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 A String, the name of the field to find
 @param defaultValue
 Return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, or the
 default value otherwise
 @throws IOException
 If an IO error occurs
 @throws IllegalArgumentException
 If the corresponding field can not be found.
 */
- (jshort)getWithNSString:(NSString *)name
                withShort:(jshort)defaultValue;

/*!
 @brief Return the class descriptor for which the emulated fields are defined.
 @return ObjectStreamClass The class descriptor for which the emulated
 fields are defined.
 */
- (JavaIoObjectStreamClass *)getObjectStreamClass;

#pragma mark Package-Private

/*!
 @brief Constructs a new instance of EmulatedFieldsForDumping.
 @param streamClass
 an ObjectStreamClass, defining the class for which to emulate
 fields.
 */
- (instancetype)initWithJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)streamClass;

/*!
 @brief Return the actual EmulatedFields instance used by the receiver.
 We have
 the actual work in a separate class so that the code can be shared. The
 receiver has to be of a subclass of GetField.
 @return array of ObjectSlot the receiver represents.
 */
- (JavaIoEmulatedFields *)emulatedFields;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEmulatedFieldsForLoading)

FOUNDATION_EXPORT void JavaIoEmulatedFieldsForLoading_initWithJavaIoObjectStreamClass_(JavaIoEmulatedFieldsForLoading *self, JavaIoObjectStreamClass *streamClass);

FOUNDATION_EXPORT JavaIoEmulatedFieldsForLoading *new_JavaIoEmulatedFieldsForLoading_initWithJavaIoObjectStreamClass_(JavaIoObjectStreamClass *streamClass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEmulatedFieldsForLoading)

#endif // _JavaIoEmulatedFieldsForLoading_H_
