//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/TestClass.java
//

#ifndef _OrgJunitInternalRunnersTestClass_H_
#define _OrgJunitInternalRunnersTestClass_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;
@class JavaLangReflectConstructor;
@protocol JavaUtilList;

@interface OrgJunitInternalRunnersTestClass : NSObject

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (id<JavaUtilList>)getAnnotatedMethodsWithIOSClass:(IOSClass *)annotationClass;

- (JavaLangReflectConstructor *)getConstructor;

- (IOSClass *)getJavaClass;

- (NSString *)getName;

- (id<JavaUtilList>)getTestMethods;

#pragma mark Package-Private

- (id<JavaUtilList>)getAfters;

- (id<JavaUtilList>)getBefores;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersTestClass)

FOUNDATION_EXPORT void OrgJunitInternalRunnersTestClass_initWithIOSClass_(OrgJunitInternalRunnersTestClass *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitInternalRunnersTestClass *new_OrgJunitInternalRunnersTestClass_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersTestClass)

#endif // _OrgJunitInternalRunnersTestClass_H_
