//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runners/model/FrameworkMethod.java
//

#ifndef _OrgJunitRunnersModelFrameworkMethod_H_
#define _OrgJunitRunnersModelFrameworkMethod_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/junit/runners/model/FrameworkMember.h>

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaLangReflectType;
@protocol JavaUtilList;

@interface OrgJunitRunnersModelFrameworkMethod : OrgJunitRunnersModelFrameworkMember {
 @public
  JavaLangReflectMethod *fMethod_;
}

#pragma mark Public

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqual:(id)obj;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (IOSObjectArray *)getAnnotations;

- (JavaLangReflectMethod *)getMethod;

- (NSString *)getName;

- (IOSClass *)getReturnType;

- (IOSClass *)getType;

- (NSUInteger)hash;

- (id)invokeExplosivelyWithId:(id)target
            withNSObjectArray:(IOSObjectArray *)params;

- (jboolean)isPublic;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMethod *)other;

- (jboolean)isStatic;

- (jboolean)producesTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (void)validateNoTypeParametersOnArgsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validatePublicVoidWithBoolean:(jboolean)isStatic
                     withJavaUtilList:(id<JavaUtilList>)errors;

- (void)validatePublicVoidNoArgWithBoolean:(jboolean)isStatic
                          withJavaUtilList:(id<JavaUtilList>)errors;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelFrameworkMethod)

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelFrameworkMethod, fMethod_, JavaLangReflectMethod *)

FOUNDATION_EXPORT void OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(OrgJunitRunnersModelFrameworkMethod *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkMethod *new_OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelFrameworkMethod)

#endif // _OrgJunitRunnersModelFrameworkMethod_H_
