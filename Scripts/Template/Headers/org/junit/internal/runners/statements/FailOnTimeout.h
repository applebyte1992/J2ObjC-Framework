//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/statements/FailOnTimeout.java
//

#ifndef _OrgJunitInternalRunnersStatementsFailOnTimeout_H_
#define _OrgJunitInternalRunnersStatementsFailOnTimeout_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/junit/runners/model/Statement.h>

@interface OrgJunitInternalRunnersStatementsFailOnTimeout : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)originalStatement
                                             withLong:(jlong)timeout;

- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsFailOnTimeout)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitInternalRunnersStatementsFailOnTimeout *self, OrgJunitRunnersModelStatement *originalStatement, jlong timeout);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFailOnTimeout *new_OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitRunnersModelStatement *originalStatement, jlong timeout) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsFailOnTimeout)

#endif // _OrgJunitInternalRunnersStatementsFailOnTimeout_H_
