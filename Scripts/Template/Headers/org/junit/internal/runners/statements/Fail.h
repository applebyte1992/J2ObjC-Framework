//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/statements/Fail.java
//

#ifndef _OrgJunitInternalRunnersStatementsFail_H_
#define _OrgJunitInternalRunnersStatementsFail_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/junit/runners/model/Statement.h>

@class JavaLangThrowable;

@interface OrgJunitInternalRunnersStatementsFail : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)e;

- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsFail)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsFail_initWithJavaLangThrowable_(OrgJunitInternalRunnersStatementsFail *self, JavaLangThrowable *e);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFail *new_OrgJunitInternalRunnersStatementsFail_initWithJavaLangThrowable_(JavaLangThrowable *e) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsFail)

#endif // _OrgJunitInternalRunnersStatementsFail_H_
