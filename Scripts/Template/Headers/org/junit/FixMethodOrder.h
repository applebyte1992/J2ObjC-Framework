//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/FixMethodOrder.java
//

#ifndef _OrgJunitFixMethodOrder_H_
#define _OrgJunitFixMethodOrder_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/annotation/Annotation.h>

@class OrgJunitRunnersMethodSortersEnum;

@protocol OrgJunitFixMethodOrder < JavaLangAnnotationAnnotation >

@property (readonly) OrgJunitRunnersMethodSortersEnum *value;

@end

@interface OrgJunitFixMethodOrder : NSObject < OrgJunitFixMethodOrder > {
 @private
  OrgJunitRunnersMethodSortersEnum *value_;
}

- (instancetype)initWithValue:(OrgJunitRunnersMethodSortersEnum *)value__;

+ (OrgJunitRunnersMethodSortersEnum *)valueDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitFixMethodOrder)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitFixMethodOrder)

#endif // _OrgJunitFixMethodOrder_H_
