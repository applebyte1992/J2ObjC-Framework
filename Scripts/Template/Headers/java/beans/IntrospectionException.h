//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/IntrospectionException.java
//

#ifndef _JavaBeansIntrospectionException_H_
#define _JavaBeansIntrospectionException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Exception.h>

@interface JavaBeansIntrospectionException : JavaLangException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansIntrospectionException)

FOUNDATION_EXPORT void JavaBeansIntrospectionException_initWithNSString_(JavaBeansIntrospectionException *self, NSString *message);

FOUNDATION_EXPORT JavaBeansIntrospectionException *new_JavaBeansIntrospectionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansIntrospectionException)

#endif // _JavaBeansIntrospectionException_H_
