//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/Nonnull.java
//

#ifndef _JavaxAnnotationNonnull_H_
#define _JavaxAnnotationNonnull_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/annotation/Annotation.h>
#include <j2objc/javax/annotation/meta/TypeQualifierValidator.h>

@class JavaxAnnotationMetaWhenEnum;

@protocol JavaxAnnotationNonnull < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;

@end

@interface JavaxAnnotationNonnull : NSObject < JavaxAnnotationNonnull > {
 @private
  JavaxAnnotationMetaWhenEnum *when_;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when__;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnull)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnull)

@interface JavaxAnnotationNonnull_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype)init;

- (JavaxAnnotationMetaWhenEnum *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationNonnull>)qualifierqualifierArgument
                                                                           withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnull_Checker)

FOUNDATION_EXPORT void JavaxAnnotationNonnull_Checker_init(JavaxAnnotationNonnull_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationNonnull_Checker *new_JavaxAnnotationNonnull_Checker_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnull_Checker)

#endif // _JavaxAnnotationNonnull_H_
