//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/GenericArrayType.java
//

#ifndef _JavaLangReflectGenericArrayType_H_
#define _JavaLangReflectGenericArrayType_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/reflect/Type.h>

/*!
 @brief This interface represents an array type with a component type that is either
 a parameterized type or a type variable.
 @since 1.5
 */
@protocol JavaLangReflectGenericArrayType < JavaLangReflectType, NSObject, JavaObject >

/*!
 @brief Returns the component type of this array.
 @return the component type of this array
 @throws TypeNotPresentException
 if the component type points to a missing type
 @throws MalformedParameterizedTypeException
 if the component type points to a type that cannot be
 instantiated for some reason
 */
- (id<JavaLangReflectType>)getGenericComponentType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectGenericArrayType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectGenericArrayType)

#endif // _JavaLangReflectGenericArrayType_H_
