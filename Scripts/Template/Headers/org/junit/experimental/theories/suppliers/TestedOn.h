//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/theories/suppliers/TestedOn.java
//

#ifndef _OrgJunitExperimentalTheoriesSuppliersTestedOn_H_
#define _OrgJunitExperimentalTheoriesSuppliersTestedOn_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/annotation/Annotation.h>

@class IOSIntArray;

@protocol OrgJunitExperimentalTheoriesSuppliersTestedOn < JavaLangAnnotationAnnotation >

@property (readonly) IOSIntArray *ints;

@end

@interface OrgJunitExperimentalTheoriesSuppliersTestedOn : NSObject < OrgJunitExperimentalTheoriesSuppliersTestedOn > {
 @private
  IOSIntArray *ints_;
}

- (instancetype)initWithInts:(IOSIntArray *)ints__;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesSuppliersTestedOn)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesSuppliersTestedOn)

#endif // _OrgJunitExperimentalTheoriesSuppliersTestedOn_H_
