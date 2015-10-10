//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/categories/Categories.java
//

#ifndef _OrgJunitExperimentalCategoriesCategories_H_
#define _OrgJunitExperimentalCategoriesCategories_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/annotation/Annotation.h>
#include <j2objc/org/junit/runner/manipulation/Filter.h>
#include <j2objc/org/junit/runners/Suite.h>

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelRunnerBuilder;

@interface OrgJunitExperimentalCategoriesCategories : OrgJunitRunnersSuite

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass
withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories)

FOUNDATION_EXPORT void OrgJunitExperimentalCategoriesCategories_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(OrgJunitExperimentalCategoriesCategories *self, IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder);

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories *new_OrgJunitExperimentalCategoriesCategories_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories)

@protocol OrgJunitExperimentalCategoriesCategories_IncludeCategory < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *value;

@end

@interface OrgJunitExperimentalCategoriesCategories_IncludeCategory : NSObject < OrgJunitExperimentalCategoriesCategories_IncludeCategory > {
 @private
  IOSClass *value_;
}

- (instancetype)initWithValue:(IOSClass *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories_IncludeCategory)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories_IncludeCategory)

@protocol OrgJunitExperimentalCategoriesCategories_ExcludeCategory < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *value;

@end

@interface OrgJunitExperimentalCategoriesCategories_ExcludeCategory : NSObject < OrgJunitExperimentalCategoriesCategories_ExcludeCategory > {
 @private
  IOSClass *value_;
}

- (instancetype)initWithValue:(IOSClass *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories_ExcludeCategory)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories_ExcludeCategory)

@interface OrgJunitExperimentalCategoriesCategories_CategoryFilter : OrgJunitRunnerManipulationFilter

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)includedCategory
                    withIOSClass:(IOSClass *)excludedCategory;

- (NSString *)describe;

+ (OrgJunitExperimentalCategoriesCategories_CategoryFilter *)includeWithIOSClass:(IOSClass *)categoryType;

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategories_CategoryFilter)

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories_CategoryFilter *OrgJunitExperimentalCategoriesCategories_CategoryFilter_includeWithIOSClass_(IOSClass *categoryType);

FOUNDATION_EXPORT void OrgJunitExperimentalCategoriesCategories_CategoryFilter_initWithIOSClass_withIOSClass_(OrgJunitExperimentalCategoriesCategories_CategoryFilter *self, IOSClass *includedCategory, IOSClass *excludedCategory);

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesCategories_CategoryFilter *new_OrgJunitExperimentalCategoriesCategories_CategoryFilter_initWithIOSClass_withIOSClass_(IOSClass *includedCategory, IOSClass *excludedCategory) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategories_CategoryFilter)

#endif // _OrgJunitExperimentalCategoriesCategories_H_
