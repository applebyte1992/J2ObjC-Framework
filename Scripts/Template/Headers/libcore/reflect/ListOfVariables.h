//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/reflect/ListOfVariables.java
//

#ifndef _LibcoreReflectListOfVariables_H_
#define _LibcoreReflectListOfVariables_H_

#include <j2objc/J2ObjC_header.h>

@class IOSObjectArray;
@class JavaUtilArrayList;
@protocol JavaLangReflectTypeVariable;

@interface LibcoreReflectListOfVariables : NSObject {
 @public
  JavaUtilArrayList *array_;
}

#pragma mark Package-Private

- (instancetype)init;

- (void)addWithJavaLangReflectTypeVariable:(id<JavaLangReflectTypeVariable>)elem;

- (IOSObjectArray *)getArray;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreReflectListOfVariables)

J2OBJC_FIELD_SETTER(LibcoreReflectListOfVariables, array_, JavaUtilArrayList *)

FOUNDATION_EXPORT void LibcoreReflectListOfVariables_init(LibcoreReflectListOfVariables *self);

FOUNDATION_EXPORT LibcoreReflectListOfVariables *new_LibcoreReflectListOfVariables_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreReflectListOfVariables)

#endif // _LibcoreReflectListOfVariables_H_
